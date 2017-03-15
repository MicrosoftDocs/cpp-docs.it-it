---
title: "Procedura: visualizzare immagini con .NET Framework | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GDI+ [C++], visualizzazione di immagini"
  - "grafica [C++], visualizzazione di immagini"
ms.assetid: c0eddfa1-4bd6-4af5-a533-1fa84b360325
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: visualizzare immagini con .NET Framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene modificato il gestore eventi OnPaint in modo da recuperare un puntatore all'oggetto <xref:System.Drawing.Graphics> per il form principale.  La funzione <xref:System.Windows.Forms.Form.OnPaint%2A> è appositamente progettata per l'utilizzo con un'applicazione Windows Form, molto probabilmente creata con una procedura guidata di Visual Studio.  
  
 L'immagine è rappresentata dalla classe <xref:System.Drawing.Image>.  I dati dell'immagine vengono caricati da un file jpg utilizzando il metodo <xref:System.Drawing.Image.FromFile%2A?displayProperty=fullName>.  Prima che l'immagine venga disegnata sul form, quest'ultimo viene ridimensionato in modo da contenere l'immagine.  Per disegnare l'immagine viene utilizzato il metodo <xref:System.Drawing.Graphics.DrawImage%2A?displayProperty=fullName>.  
  
 Le classi <xref:System.Drawing.Graphics> e <xref:System.Drawing.Image> sono entrambe definite nello spazio dei nomi <xref:System.Drawing?displayProperty=fullName>.  
  
> [!NOTE]
>  GDI\+ è incluso con Windows XP ed è disponibile come pacchetto ridistribuibile per Windows NT 4.0 SP 6, Windows 2000, Windows 98 e Windows Me.  Per scaricare la versione più recente del pacchetto ridistribuibile, vedere [http:\/\/go.microsoft.com\/fwlink\/?linkid\=11232](http://go.microsoft.com/fwlink/?linkid=11232).  Per ulteriori informazioni, vedere la documentazione SDK relativa a [GDI\+](_gdiplus_GDI_start_cpp).  
  
## Esempio  
  
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
  
## Vedere anche  
 <xref:System.Drawing?displayProperty=fullName>   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)