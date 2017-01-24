---
title: "Procedura: ruotare immagini con .NET Framework | Microsoft Docs"
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
  - "GDI+ [C++], rotazione di immagini"
  - "grafica [C++], rotazione di immagini"
ms.assetid: e32104d5-87d0-47a9-a22f-9bc835b7e8d7
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: ruotare immagini con .NET Framework
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare la classe <xref:System.Drawing.Image?displayProperty=fullName> per caricare un'immagine da disco, ruotarla di 90 gradi e salvarla come nuovo file jpg.  
  
> [!NOTE]
>  GDI\+ è incluso con Windows XP ed è disponibile come pacchetto ridistribuibile per Windows NT 4.0 SP 6, Windows 2000, Windows 98 e Windows Millennium Edition.  Per scaricare la versione più recente del pacchetto ridistribuibile, vedere [http:\/\/go.microsoft.com\/fwlink\/?linkid\=11232](http://go.microsoft.com/fwlink/?linkid=11232).  Per ulteriori informazioni, vedere [GDI\+](_gdiplus_GDI_start_cpp).  
  
## Esempio  
  
```  
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
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)