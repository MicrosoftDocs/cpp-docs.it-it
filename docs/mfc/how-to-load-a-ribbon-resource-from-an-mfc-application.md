---
title: 'How to: Load a Ribbon Resource from an MFC Application | Microsoft Docs'
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
- ribbon resource [MFC], loading
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
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
ms.openlocfilehash: e45f63ccf2af52a6e41b3f46e4a04b43101e99b6
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="how-to-load-a-ribbon-resource-from-an-mfc-application"></a>How to: Load a Ribbon Resource from an MFC Application
To use the ribbon resource in your application, modify the application to load the ribbon resource.  
  
### <a name="to-load-a-ribbon-resource"></a>To load a ribbon resource  
  
1.  Declare the `Ribbon Control` object in the `CMainFrame` class.  
  
 ```  
    CMFCRibbonBar m_wndRibbonBar;   
 ```  
  
2.  In `CMainFrame::OnCreate`, create and initialize the Ribbon Control.  
  
 ```  
    if (!m_wndRibbonBar.Create (this))  
 {  
    return -1;  
 }  
 
    if (!m_wndRibbonBar.LoadFromResource(IDR_RIBBON))  
 {  
    return -1;  
 }  
 ```  
  
## <a name="see-also"></a>See Also  
 [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md)


