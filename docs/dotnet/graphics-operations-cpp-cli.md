---
description: 'Altre informazioni su: operazioni di grafica (C++/CLI)'
title: Operazioni di grafica (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- GDI+ [C++]
- .NET Framework [C++], graphics
- images [C++], .NET Framework and
- GDI+ [C++], about graphics operations
- graphics [C++], .NET Framework and
- GDI+ [C++], displaying images
- graphics [C++], displaying images
- GDI+, drawing shapes
- drawing, shapes
- shapes
- shapes, drawing
- GDI+ [C++], rotating images
- graphics [C++], rotating images
- GDI+ [C++], converting image file formats
- graphics [C++], converting image file formats
ms.assetid: bba27228-b9b3-4c9c-b31c-a04b76702a95
ms.openlocfilehash: 84dbc75aa306219b8733848ece5c594ca40a0489
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223542"
---
# <a name="graphics-operations-ccli"></a>Operazioni di grafica (C++/CLI)

Viene illustrata la manipolazione delle immagini tramite il Windows SDK.

Negli argomenti seguenti viene illustrato l'utilizzo della <xref:System.Drawing.Image?displayProperty=fullName> classe per eseguire la manipolazione delle immagini.

## <a name="display-images-with-the-net-framework"></a><a name="display"></a> Visualizzare immagini con la .NET Framework

Nell'esempio di codice seguente viene modificato il gestore eventi OnPaint per recuperare un puntatore all' <xref:System.Drawing.Graphics> oggetto per il form principale. La <xref:System.Windows.Forms.Form.OnPaint%2A> funzione è destinata a una Windows Forms Application, probabilmente creata con una procedura guidata per le applicazioni di Visual Studio.

L'immagine è rappresentata dalla <xref:System.Drawing.Image> classe. I dati dell'immagine vengono caricati da un file con estensione jpg usando il <xref:System.Drawing.Image.FromFile%2A?displayProperty=fullName> metodo. Prima che l'immagine venga disegnata nel form, il form viene ridimensionato per adattarlo all'immagine. Il disegno dell'immagine viene eseguito con il <xref:System.Drawing.Graphics.DrawImage%2A?displayProperty=fullName> metodo.

Le <xref:System.Drawing.Graphics> <xref:System.Drawing.Image> classi e sono entrambe incluse nello <xref:System.Drawing?displayProperty=fullName> spazio dei nomi.

### <a name="example"></a>Esempio

```cpp
#using <system.drawing.dll>

using namespace System;
using namespace System::Drawing;

protected:
virtual Void Form1::OnPaint(PaintEventArgs^ pe) override
{
    Graphics^ g = pe->Graphics;
    Image^ image = Image::FromFile("SampleImage.jpg");
    Form::ClientSize = image->Size;
    g->DrawImage( image, 0, 0, image->Size.Width, image->Size.Height );
}
```

## <a name="draw-shapes-with-the-net-framework"></a><a name="draw"></a> Creare forme con la .NET Framework

Nell'esempio di codice seguente viene usata la <xref:System.Drawing.Graphics> classe per modificare il <xref:System.Windows.Forms.Form.OnPaint%2A> gestore eventi per recuperare un puntatore all' <xref:System.Drawing.Graphics> oggetto per il form principale. Questo puntatore viene quindi utilizzato per impostare il colore di sfondo del form e per creare una linea e un arco utilizzando <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName> i <xref:System.Drawing.Graphics.DrawArc%2A> metodi e.

### <a name="example"></a>Esempio

```cpp
#using <system.drawing.dll>
using namespace System;
using namespace System::Drawing;
// ...
protected:
virtual Void Form1::OnPaint(PaintEventArgs^ pe ) override
{
   Graphics^ g = pe->Graphics;
   g->Clear(Color::AntiqueWhite);

   Rectangle rect = Form::ClientRectangle;
   Rectangle smallRect;
   smallRect.X = rect.X + rect.Width / 4;
   smallRect.Y = rect.Y + rect.Height / 4;
   smallRect.Width = rect.Width / 2;
   smallRect.Height = rect.Height / 2;

   Pen^ redPen = gcnew Pen(Color::Red);
   redPen->Width = 4;
   g->DrawLine(redPen, 0, 0, rect.Width, rect.Height);

   Pen^ bluePen = gcnew Pen(Color::Blue);
   bluePen->Width = 10;
   g->DrawArc( bluePen, smallRect, 90, 270 );
}
```

## <a name="rotate-images-with-the-net-framework"></a><a name="rotate"></a> Ruotare le immagini con la .NET Framework

Nell'esempio di codice seguente viene illustrato l'utilizzo della <xref:System.Drawing.Image?displayProperty=fullName> classe per caricare un'immagine dal disco, ruotarla 90 gradi e salvarla come nuovo file con estensione jpg.

### <a name="example"></a>Esempio

```cpp
#using <system.drawing.dll>

using namespace System;
using namespace System::Drawing;

int main()
{
   Image^ image = Image::FromFile("SampleImage.jpg");
   image->RotateFlip( RotateFlipType::Rotate90FlipNone );
   image->Save("SampleImage_rotated.jpg");
   return 0;
}
```

## <a name="convert-image-file-formats-with-the-net-framework"></a><a name="convert"></a> Convertire i formati di file di immagine con la .NET Framework

Nell'esempio di codice riportato di seguito vengono illustrate la <xref:System.Drawing.Image?displayProperty=fullName> classe e l' <xref:System.Drawing.Imaging.ImageFormat?displayProperty=fullName> enumerazione utilizzata per convertire e salvare i file di immagine. Il codice seguente carica un'immagine da un file con estensione jpg e la Salva nei formati di file con estensione gif e BMP.

### <a name="example"></a>Esempio

```cpp
#using <system.drawing.dll>

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

int main()
{
   Image^ image = Image::FromFile("SampleImage.jpg");
   image->Save("SampleImage.png", ImageFormat::Png);
   image->Save("SampleImage.bmp", ImageFormat::Bmp);

   return 0;
}
```

## <a name="related-sections"></a>Sezioni correlate

[Guida introduttiva alla programmazione grafica](/dotnet/framework/winforms/advanced/getting-started-with-graphics-programming)

[Informazioni sul codice gestito GDI+](/dotnet/framework/winforms/advanced/about-gdi-managed-code)

## <a name="see-also"></a>Vedi anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

<xref:System.Drawing>
