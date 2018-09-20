---
title: Operazioni di grafica (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fd3c988f28e8de864fd22790ad60b49f1b6340b3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438561"
---
# <a name="graphics-operations-ccli"></a>Operazioni di grafica (C++/CLI)

Illustra la modifica delle immagini tramite SDK Windows.

Gli argomenti seguenti illustrano l'uso del <xref:System.Drawing.Image?displayProperty=fullName> classe per eseguire una manipolazione delle immagini.

## <a name="display"></a> Visualizzare immagini con .NET Framework

Esempio di codice seguente consente di modificare il gestore di eventi OnPaint per recuperare un puntatore al <xref:System.Drawing.Graphics> oggetto per il form principale. Il <xref:System.Windows.Forms.Form.OnPaint%2A> funzione è progettata per un'applicazione Windows Forms, molto probabilmente creata con una procedura guidata dell'applicazione di Visual Studio.

L'immagine è rappresentato dal <xref:System.Drawing.Image> classe. I dati dell'immagine viene caricati da un file con estensione jpg usando il <xref:System.Drawing.Image.FromFile%2A?displayProperty=fullName> (metodo). Prima che l'immagine viene disegnata nel form, il form viene ridimensionato per l'immagine. Il disegno dell'immagine viene eseguito con il <xref:System.Drawing.Graphics.DrawImage%2A?displayProperty=fullName> (metodo).

Il <xref:System.Drawing.Graphics> e <xref:System.Drawing.Image> classi sono entrambe nel <xref:System.Drawing?displayProperty=fullName> dello spazio dei nomi.

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

## <a name="draw"></a> Disegnare forme con .NET Framework

Il codice seguente viene illustrato come utilizzare il <xref:System.Drawing.Graphics> classe per modificare il <xref:System.Windows.Forms.Form.OnPaint%2A> gestore eventi per recuperare un puntatore al <xref:System.Drawing.Graphics> oggetto per il form principale. Puntatore ' this ' viene quindi utilizzato per impostare il colore di sfondo del form e disegnare una linea e un arco usando la <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName> e <xref:System.Drawing.Graphics.DrawArc%2A> metodi.

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

## <a name="rotate"></a> Ruotare immagini con .NET Framework

Esempio di codice seguente viene illustrato l'utilizzo del <xref:System.Drawing.Image?displayProperty=fullName> classe per caricare un'immagine dal disco, ruota di 90 gradi e salvarlo come nuovo file con estensione jpg.

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

## <a name="convert"></a> Convertire formati di File di immagine con .NET Framework

L'esempio di codice seguente illustra il <xref:System.Drawing.Image?displayProperty=fullName> classi e <xref:System.Drawing.Imaging.ImageFormat?displayProperty=fullName> enumerazione utilizzata per convertire e salvare i file di immagine. Il codice seguente carica un'immagine da un file con estensione jpg e verrà quindi salvato in formati di file con estensione gif e bmp.

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

[Introduzione alla programmazione grafica](/dotnet/framework/winforms/advanced/getting-started-with-graphics-programming)

[Informazioni sul codice gestito GDI+](/dotnet/framework/winforms/advanced/about-gdi-managed-code)

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

<xref:System.Drawing>
