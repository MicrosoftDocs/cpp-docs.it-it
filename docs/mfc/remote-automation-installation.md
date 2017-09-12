---
title: Remote Automation Installation | Microsoft Docs
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
- Remote Automation [MFC], installation
- installing Remote Automation [MFC]
ms.assetid: 9a02c9f6-dfc6-4489-b240-a1afe25fa0c5
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
ms.openlocfilehash: 146a571ddd3b612aa7f7b3cb9489bb2764463967
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="remote-automation-installation"></a>Remote Automation Installation
Remote Automation has relatively few components:  
  
-   The Remote Automation client proxy, AUTPRX32.DLL.  
  
-   The Remote Automation server-side component, the Automation Manager, AUTMGR32.EXE.  
  
-   The RAC Manager, RACMGR32.EXE, with its matching RACREG32.DLL.  
  
 Of these, RAC Manager is written in Visual Basic and therefore needs the Visual Basic run-time support. These and the other Remote Automation files are installed by Setup when you install Visual C++ Enterprise Edition.  
  
 If you copy the Remote Automation components to a computer on which Visual C++ version Enterprise Edition is not installed, ensure that REGSRV32.EXE is on the computer's path, and register RACREG32.DLL using the following command line:  
  
 REGSRVR32 RACREG32.DLL  
  
> [!NOTE]
>  Versions of RAC Manager before Visual C++ 5.0 required GUAGE32.OCX and TABCTL32.OCX. Neither of these is required for the version of RAC Manager that ships with Visual C++ Enterprise Edition, version 5.0 or later.  
  
## <a name="in-this-section"></a>In This Section  
 [The Automation Manager](../mfc/automation-manager-mfc.md)  
  
 [The Remote Automation Connection Manager](../mfc/remote-automation-connection-manager.md)  
  
 [Remote Automation User Components](../mfc/remote-automation-user-components.md)  
  
## <a name="see-also"></a>See Also  
 [Remote Automation](../mfc/remote-automation.md)


