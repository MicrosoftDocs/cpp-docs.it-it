---
title: Types of Image Lists | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- lists [MFC], image
- image lists [MFC], types of
- CImageList class [MFC], types
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 5c04ab083e66a698623c3d143c927a6216148a9e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="types-of-image-lists"></a>Types of Image Lists
There are two types of image lists ([CImageList](../mfc/reference/cimagelist-class.md)): nonmasked and masked. A "nonmasked image list" consists of a color bitmap that contains one or more images. A "masked image list" consists of two bitmaps of equal size. The first is a color bitmap that contains the images, and the second is a monochrome bitmap that contains a series of masks — one for each image in the first bitmap.  
  
 One of the overloads of the **Create** member function takes a flag to indicate whether or not the image list is masked. (The other overloads create masked image lists.)  
  
 When a nonmasked image is drawn, it is simply copied into the target device context; that is, it is drawn over the existing background color of the device context. When a masked image is drawn, the bits of the image are combined with the bits of the mask, typically producing transparent areas in the bitmap where the background color of the target device context shows through. You can specify several drawing styles when drawing a masked image. For example, you can specify that the image be dithered to indicate a selected object.  
  
## <a name="see-also"></a>See Also  
 [Using CImageList](../mfc/using-cimagelist.md)   
 [Controls](../mfc/controls-mfc.md)


