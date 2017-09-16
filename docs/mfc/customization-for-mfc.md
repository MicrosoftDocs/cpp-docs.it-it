---
title: Customization for MFC | Microsoft Docs
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
- customizations, MFC Extensions
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
caps.latest.revision: 21
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
ms.openlocfilehash: d0ef91cd5d7626850cd38de1308c1a3473128d4d
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="customization-for-mfc"></a>Customization for MFC
This topic provides tips for customizing an MFC application.  
  
## <a name="general-customizations"></a>General Customizations  
 You can save and load the state of your application to the registry. When you enable this option, your application will load its initial state from the registry. If you change the initial docking layout for your application, you will have to clear the registry data for your application. Otherwise, the data in the registry will override any changes that you made to the initial layout.  
  
## <a name="class-specific-customizations"></a>Class-Specific Customizations  
 Additional customization tips can be found in the following topics:  
  
-   [CBasePane Class](../mfc/reference/cbasepane-class.md)  
  
-   [CDockablePane Class](../mfc/reference/cdockablepane-class.md)  
  
-   [CDockingManager Class](../mfc/reference/cdockingmanager-class.md)  
  
-   [CMFCBaseTabCtrl Class](../mfc/reference/cmfcbasetabctrl-class.md)  
  
## <a name="additional-customization-tips"></a>Additional Customization Tips  
 [Keyboard and Mouse Customization](../mfc/keyboard-and-mouse-customization.md)  
  
 [User-defined Tools](../mfc/user-defined-tools.md)  
  
## <a name="see-also"></a>See Also  
 [MFC Desktop Applications](../mfc/mfc-desktop-applications.md)   
 [Security Implications of Customization](../mfc/security-implications-of-customization.md)


