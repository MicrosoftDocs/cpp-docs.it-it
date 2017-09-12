---
title: Testing Properties and Events with Test Container | Microsoft Docs
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
- testing, test containers
- tstcon32.exe
- debugging ActiveX controls
- test container
- ActiveX Control Test Container
- ActiveX controls [MFC], testing
- properties [MFC], testing
ms.assetid: 626867cf-fe53-4c30-8973-55bb93ef3917
caps.latest.revision: 13
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
ms.openlocfilehash: b3edf6c89e6d960ad2aad3058364755b53be07db
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="testing-properties-and-events-with-test-container"></a>Testing Properties and Events with Test Container
The Test Container application, shipped in Visual C++, is an ActiveX control container for testing and debugging ActiveX controls. Test Container allows the control developer to test the control's functionality by changing its properties, invoking its methods, and firing its events. Test Container can display logs of data-binding notifications and also provides facilities for testing an ActiveX control's persistence functionality: you can save properties to a stream or to substorage, reload them, and examine the stored stream data. This section describes how to use the basic features of Test Container. For additional information, select the **Help** menu while running Test Container.  
  
### <a name="to-access-the-activex-control-test-container"></a>To access the ActiveX Control Test Container  
  
1.  Build the [TSTCON Sample: ActiveX Control Test Container](../visual-cpp-samples.md).  
  
### <a name="to-test-your-activex-control"></a>To test your ActiveX control  
  
1.  On the **Edit** menu of Test Container, click **Insert New Control**.  
  
2.  In the **Insert Control** box, select the desired control and click **OK**. The control will appear in the control container.  
  
    > [!NOTE]
    >  If your control is not listed in the **Insert Control** dialog box, make sure you have registered it with the **Register Controls** command from the **File** menu of Test Container.  
  
 At this point you can test your control's properties or events.  
  
#### <a name="to-test-properties"></a>To test properties  
  
1.  On the **Control** menu, click **Invoke Methods**.  
  
2.  In the **Method Name** drop-down list, select the PropPut method for the property you want to test.  
  
3.  Modify the **Parameter Value** or **Parameter Type** and click on the **Set Value** button.  
  
4.  Click **Invoke** to apply the new value to the object.  
  
     The property now contains the new value.  
  
#### <a name="to-test-events-and-specify-the-destination-of-event-information"></a>To test events and specify the destination of event information.  
  
1.  On the **Options** menu, click **Logging**.  
  
2.  Specify the destination of event information.  
  
## <a name="see-also"></a>See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [How to: Debug an ActiveX Control](/visualstudio/debugger/how-to-debug-an-activex-control)


