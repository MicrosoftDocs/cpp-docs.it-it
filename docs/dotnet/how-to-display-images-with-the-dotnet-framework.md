---
title: 'Procedura: visualizzare immagini con .NET Framework | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- GDI+ [C++], displaying images
- graphics [C++], displaying images
ms.assetid: c0eddfa1-4bd6-4af5-a533-1fa84b360325
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7c12d6a67f6fbe73802d3b876621a2ea606af553
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="how-to-display-images-with-the-net-framework"></a>Procedura: visualizzare immagini con .NET Framework
Esempio di codice seguente modifica il gestore dell'evento OnPaint per recuperare un puntatore per il <xref:System.Drawing.Graphics> oggetto per il form principale. Il <xref:System.Windows.Forms.Form.OnPaint%2A> funzione deve essere un'applicazione Windows Form, molto probabilmente creata con una creazione guidata applicazione Visual Studio.  
  
 L'immagine è rappresentato dalla <xref:System.Drawing.Image> classe. I dati dell'immagine viene caricati da un file con estensione jpg tramite il <xref:System.Drawing.Image.FromFile%2A?displayProperty=fullName> metodo. Prima viene disegnata l'immagine al form, il form viene ridimensionato per l'immagine. Il disegno dell'immagine viene eseguito con il <xref:System.Drawing.Graphics.DrawImage%2A?displayProperty=fullName> metodo.  
  
 Il <xref:System.Drawing.Graphics> e <xref:System.Drawing.Image> classi sono entrambi inclusi il <xref:System.Drawing?displayProperty=fullName> dello spazio dei nomi.  
  
> [!NOTE]
>  GDI+ è incluso in Windows XP ed è disponibile come pacchetto ridistribuibile per Windows NT 4.0 SP 6, Windows 2000, Windows 98 e Windows Me. Per scaricare l'ultimo file ridistribuibile, vedere [http://go.microsoft.com/fwlink/p/?linkid=11232](http://go.microsoft.com/fwlink/p/?linkid=11232).   
  
## <a name="example"></a>Esempio  
  
```  
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
  
## <a name="see-also"></a>Vedere anche  
 <xref:System.Drawing?displayProperty=fullName>   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)