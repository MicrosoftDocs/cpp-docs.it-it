---
title: 'Procedura: convertire formati di File di immagine con .NET Framework | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- GDI+ [C++], converting image file formats
- graphics [C++], converting image file formats
ms.assetid: 5d5384b0-b9b7-4262-b9ad-c4cb95f75ee4
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: dc2b84063c509cd870b5d02fa0a209b511d8a0f3
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="how-to-convert-image-file-formats-with-the-net-framework"></a>Procedura: convertire formati di file immagine con .NET Framework
L'esempio di codice seguente illustra il <xref:System.Drawing.Image?displayProperty=fullName> classe e <xref:System.Drawing.Imaging.ImageFormat?displayProperty=fullName> enumerazione utilizzata per convertire e salvare i file di immagine. Il codice seguente carica un'immagine da un file con estensione jpg e infine la salva in formato di file con estensione gif e bmp.  
  
> [!NOTE]
>  GDI+ è incluso in Windows XP, Windows Server 2003 e Windows Vista ed è disponibile come pacchetto ridistribuibile per Windows 2000. Per scaricare l'ultimo file ridistribuibile, vedere [http://go.microsoft.com/fwlink/p/?linkid=11232](http://go.microsoft.com/fwlink/p/?linkid=11232).   
  
## <a name="example"></a>Esempio  
  
```  
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
  
## <a name="see-also"></a>Vedere anche  
 <xref:System.Drawing>   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)