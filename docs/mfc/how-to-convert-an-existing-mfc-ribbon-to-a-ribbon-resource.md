---
title: 'How to: Convert an Existing MFC Ribbon to a Ribbon Resource | Microsoft Docs'
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
- ribbon resource, converting from an MFC ribbon
- MFC ribbon, converting to a ribbon resource
ms.assetid: 324b7ff6-58f9-4691-96a9-9836a79d0fb6
caps.latest.revision: 8
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
ms.openlocfilehash: 30ed9bd9483e00dc4845b4e318a66bfb21f4531f
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="how-to-convert-an-existing-mfc-ribbon-to-a-ribbon-resource"></a>How to: Convert an Existing MFC Ribbon to a Ribbon Resource
Ribbon resources are easier to visualize, modify, and maintain than manually coded ribbons. This topic describes how to convert a manually coded ribbon in an MFC Project into a ribbon resource.  
  
 You must have an existing MFC project that has code that uses the MFC ribbon classes, for example, [CMFCRibbonBar Class](../mfc/reference/cmfcribbonbar-class.md).  
  
### <a name="to-convert-an-mfc-ribbon-to-a-ribbon-resource"></a>To convert an MFC ribbon to a ribbon resource  
  
1.  In Visual Studio, in an existing MFC project, open the source file where the CMFCRibbonBar object is initialized. Typically, the file is mainfrm.cpp. Add the following code after the initialization code for the ribbon.  
  
 ```  
    m_wndRibbonBar.SaveToXMLFile("RibbonOutput.xml");

 ```  
  
     Save and close the file.  
  
2.  Build and run the MFC application, and then in Notepad, open RibbonOutput.txt and copy its contents.  
  
3.  In Visual Studio, on the **Project** menu, click **Add Resource**. In the **Add Resource** dialog box, select **Ribbon** and then click **New**.  
  
     Visual Studio creates a ribbon resource and opens it in design view. The ribbon resource ID is IDR_RIBBON1, which is displayed in **Resource View**. The ribbon is defined in the ribbon1.mfcribbon-ms XML file.  
  
4.  In Visual Studio, open ribbon1.mfcribbon-ms, delete its contents, and then paste the contents of RibbonOutput.txt, which you copied earlier. Save and close ribbon1.mfcribbon-ms.  
  
5.  Again open the source file where the CMFCRibbonBar object is initialized (typically, mainfrm.cpp) and comment out the existing ribbon code. Add the following code after the code that you commented out.  
  
 ```  
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);

 ```  
  
6.  Build the project and run the program.  
  
## <a name="see-also"></a>See Also  
 [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md)


