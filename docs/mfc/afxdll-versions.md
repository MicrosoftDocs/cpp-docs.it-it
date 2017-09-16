---
title: AFXDLL Versions | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- afxdll
dev_langs:
- C++
helpviewer_keywords:
- MFC DLLs [MFC], dynamic linking to library
- AFXDLL library
- application wizards [MFC], default uses AFXDLL
- MFC libraries [MFC], dynamic linking
- MFC, AFXDLL version
- DLL version of MFC [MFC]
ms.assetid: c078ae8f-85a9-43cb-9ded-c09ca2c45723
caps.latest.revision: 9
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
ms.openlocfilehash: 43d53b604fa6153642044c3660a0393d1c047c07
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="afxdll-versions"></a>AFXDLL Versions
Instead of building your application by statically linking to the MFC object-code libraries, you can build your application to use one of the AFXDLL libraries, which contain MFC in a DLL that multiple running applications can share. For a table of AFXDLL names, see [DLLs: Naming Conventions](../build/naming-conventions-for-mfc-dlls.md).  
  
> [!NOTE]
>  By default, the MFC Application Wizard creates an AFXDLL project. To use static linking of MFC code instead, set the **Use MFC in a static library** option in the MFC Application Wizard. Static linking is not available in the Standard Edition of Visual C++.  
  
## <a name="see-also"></a>See Also  
 [MFC Library Versions](../mfc/mfc-library-versions.md)


