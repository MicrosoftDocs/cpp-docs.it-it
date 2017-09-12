---
title: 'How to: Add Ribbon Controls and Event Handlers | Microsoft Docs'
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
- event handlers [MFC], adding
- ribbon controls [MFC], adding
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
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
ms.openlocfilehash: 99bd07de331cb9281bffeb39eb78123377fe31b6
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="how-to-add-ribbon-controls-and-event-handlers"></a>How to: Add Ribbon Controls and Event Handlers
Ribbon controls are elements, such as buttons and combo boxes, that you add to panels. Panels are areas of the ribbon bar that display a group of related controls.  
  
 In this topic, you will open the Ribbon Designer, add a button, and then link an event that displays "Hello World".  
  
### <a name="to-open-the-ribbon-designer"></a>To open the Ribbon Designer  
  
1.  In Visual Studio, on the **View** menu, click **Resource View**.  
  
2.  In **Resource View**, double-click the ribbon resource to display it on the design surface.  
  
### <a name="to-add-a-button-and-an-event-handler"></a>To add a Button and an Event Handler  
  
1.  From the **Toolbar**, click **Button** and drag it on to a panel in the design surface.  
  
2.  Right-click the button, and click **Add Event Handler**.  
  
3.  In the **Event Handler Wizard**, confirm the default settings and click **Add and Edit**. For more information, see [Event Handler Wizard](../ide/event-handler-wizard.md).  
  
4.  In the code editor, add the following code into the handler function:  
  
 ```  
    MessageBox((LPCTSTR)L"Hello World");

 ```  
  
## <a name="see-also"></a>See Also  
 [RibbonGadgets Sample: Ribbon Gadgets Application](../visual-cpp-samples.md)   
 [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md)


