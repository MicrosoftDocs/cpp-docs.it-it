---
title: 'MFC ActiveX Controls: Creating an Automation Server | Microsoft Docs'
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
- Automation servers [MFC], MFC ActiveX controls
- ActiveX controls [MFC], Automation server
- MFC ActiveX controls [MFC], Automation server
ms.assetid: e0c24ed2-d61c-49ad-a4fa-4e1098d1d39b
caps.latest.revision: 11
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
ms.openlocfilehash: 725d452e56a0729b76eed7889018cc21149596f8
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="mfc-activex-controls-creating-an-automation-server"></a>MFC ActiveX Controls: Creating an Automation Server
You can develop an MFC ActiveX control as an Automation server for the purpose of programmatically embedding that control in another application and calling methods in the control from the application. Such a control would still be available to be hosted in an ActiveX control container.  
  
### <a name="to-create-a-control-as-an-automation-server"></a>To create a control as an Automation server  
  
1.  [Create](../mfc/reference/mfc-activex-control-wizard.md) the control.  
  
2.  [Add methods](../mfc/mfc-activex-controls-methods.md).  
  
3.  Override [IsInvokeAllowed](../mfc/reference/colecontrol-class.md#isinvokeallowed). For more information, see Knowledge Base article Q146120.  
  
4.  Build the control.  
  
### <a name="to-programmatically-access-the-methods-in-an-automation-server"></a>To programmatically access the methods in an Automation server  
  
1.  Create an application, for example, an [MFC exe](../mfc/reference/mfc-application-wizard.md).  
  
2.  At the beginning of the `InitInstance` function, add the following line:  
  
     [!code-cpp[NVC_MFC_AxCont#17](../mfc/codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_1.cpp)]  
  
3.  In Class View, right-click the project node and select **Add class from typelib** to import the type library.  
  
     This will add files with the file name extensions .h and .cpp to the project.  
  
4.  In the header file of the class where you will call one or more methods in the ActiveX control, add the following line: `#include filename.h`, where file name is the name of the header file that was created when you imported the type library.  
  
5.  In the function where a call will be made to a method in the ActiveX control, add code that creates an object of the control's wrapper class and create the ActiveX object. For example, the following MFC code instantiates a `CCirc` control, gets the Caption property, and displays the result when the OK button is clicked in a dialog box:  
  
     [!code-cpp[NVC_MFC_AxCont#18](../mfc/codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_2.cpp)]  
  
 If you add methods to the ActiveX control after you use it in an application, you can begin using the latest version of the control in the application by deleting the files that were created when you imported the type library. Then import the type library again.  
  
## <a name="see-also"></a>See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)


