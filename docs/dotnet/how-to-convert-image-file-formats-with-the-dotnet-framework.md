---
title: 'Procedura: convertire formati di File di immagine con .NET Framework | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- GDI+ [C++], converting image file formats
- graphics [C++], converting image file formats
ms.assetid: 5d5384b0-b9b7-4262-b9ad-c4cb95f75ee4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 98d55c7ee4ca967a0b52bd87b22e5c316eb1e274
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33130058"
---
# <a name="how-to-convert-image-file-formats-with-the-net-framework"></a>Procedura: convertire formati di file immagine con .NET Framework
L'esempio di codice seguente illustra il <xref:System.Drawing.Image?displayProperty=fullName> classe e <xref:System.Drawing.Imaging.ImageFormat?displayProperty=fullName> enumerazione utilizzata per convertire e salvare i file di immagine. Il codice seguente carica un'immagine da un file con estensione jpg e infine la salva in formato di file con estensione gif e bmp.  
  
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