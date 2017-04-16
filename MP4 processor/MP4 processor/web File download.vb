
Imports System.Net

Module Module1

    Sub Main()
        Dim wc As New WebClient()

        'Read file into string - OK for this exercise but would handle differently for real life where file size may be much bigger.

        Dim client As WebClient = New WebClient()
        Dim reply As String = client.DownloadString("http://demo.castlabs.com/tmp/text0.mp4")

        ' Write output into local file for visibility while debugging
        Dim FILE_NAME As String = "D:\My Documents\Cast Labs\test2.txt"

        If System.IO.File.Exists(FILE_NAME) = True Then

            Dim objWriter As New System.IO.StreamWriter(FILE_NAME)

            objWriter.Write(reply)
            objWriter.Close()
            Console.WriteLine("Text written to file")
            'Console.ReadKey()
        Else

            Console.WriteLine("File Does Not Exist")
            Console.ReadKey()
        End If



        'Scan file for information *************************************************



        'Get size of moof box - anomalie size field not as expected report but don't act on

        Dim boxSize, moofsize, offset, i As Integer
        Dim Report As String
        Dim mp4Array() As Char = reply.ToCharArray

        offset = 0 'define position of first byte to process

        For i = 0 To 20
            Console.WriteLine(AscW(mp4Array(i)))
        Next


        'Crude conversion of byte to number using position to determine exponent.
        'Need to change to loop structure but time running out.
        boxSize = (AscW(mp4Array(offset)) * 256 ^ 3) + (AscW(mp4Array(offset + 1)) * 256 ^ 2) + (AscW(mp4Array(offset + 2)) * 256) + (AscW(mp4Array(offset + 3)))

        moofSize = boxSize   'Save size of moof box to detect end when number of boxes in moof not known

        Report = "Found box of type " + Mid(reply, offset + 5, 4) + " and size " & boxSize
        Console.WriteLine(Report)

        'move to first box inside moof

        offset = offset + 8

        boxSize = (AscW(mp4Array(offset)) * 256 ^ 3) + (AscW(mp4Array(offset + 1)) * 256 ^ 2) + (AscW(mp4Array(offset + 2)) * 256) + (AscW(mp4Array(offset + 3)))

        Report = "Found box of type " + Mid(reply, offset + 5, 4) + " and size " & boxSize
        'Console.WriteLine(boxSize)
        Console.WriteLine(Report)

        offset = offset + boxSize

        boxSize = (AscW(mp4Array(offset)) * 256 ^ 3) + (AscW(mp4Array(offset + 1)) * 256 ^ 2) + (AscW(mp4Array(offset + 2)) * 256) + (AscW(mp4Array(offset + 3)))

        Report = "Found box of type " + Mid(reply, offset + 5, 4) + " and size " & boxSize
        'Console.WriteLine(boxSize)
        Console.WriteLine(Report)
        Console.ReadKey()




    End Sub

   

End Module
