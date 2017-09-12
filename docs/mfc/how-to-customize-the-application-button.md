---
title: 'How to: Customize the Application Button | Microsoft Docs'
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
- application button [MFC], customizing
ms.assetid: ebb11180-ab20-43df-a234-801feca9eb38
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
ms.openlocfilehash: 28a3c05e9df5e3bb62e5019e3664a939a34e8b29
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="how-to-customize-the-application-button"></a>How to: Customize the Application Button
When you click the Application button, a menu of commands is displayed. Typically, the menu contains file-related commands such as **Open**, **Save**, **Print**, and **Exit**.  
  
 ![MFC Ribbon Application Button](../mfc/media/application_button.png "application_button")  
  
 To customize the Application button, open it in the **Properties** window, modify its properties, and then preview the ribbon control.  
  
### <a name="to-open-the-application-button-in-the-properties-window"></a>To open the Application button in the Properties window  
  
1.  In Visual Studio, on the **View** menu, click **Resource View**.  
  
2.  In **Resource View**, double-click the ribbon resource to display it on the design surface.  
  
3.  On design surface, right-click the Application button menu and then click **Properties**.  
  
## <a name="application-button-properties"></a>Application Button Properties  
 The following table defines the properties of the Application button.  
  
|Property|Definition|  
|--------------|----------------|  
|**Buttons**|Contains the collection of up to three buttons that appear in the bottom-right corner of the Application menu.|  
|**Caption**|Specifies the text of the control. Unlike other ribbon elements, the Application button does not display caption text. Instead, the text is used for accessibility.|  
|**HDPI Image**|Specifies the identifier of the high dots per inch (HDPI) Application button icon. When the application runs on a high DPI monitor, **HDPI Image** is used instead of **Image**.|  
|**HDPI Large Images**|Specifies the identifier of the high DPI large images. When the application runs on a high DPI monitor, **HDPI Large Images** is used instead of **Large Images**.|  
|**HDPI Small Images**|Specifies the identifier of the high DPI small images. When the application runs on a high DPI monitor, **HDPI Small Images** is used instead of **Small Images**.|  
|**ID**|Specifies the identifier of the control.|  
|**Image**|Specifies the identifier of the Application button icon. The icon is a 32-bit 26x26 bitmap that has alpha transparency. The transparent portions of the icon are highlighted when the Application button is clicked or hovered over.|  
|**Keys**|Specifies the string that is displayed when key-tip navigation is enabled. Key-tip navigation is enabled when you press ALT.|  
|**Large Images**|Specifies the identifier of the image that contains a series of 32x32 icons. The icons are used by the buttons in the Main Items collection.|  
|**Main Items**|Contains a collection of menu items that appear on the Application menu.|  
|**MRU Caption**|Specifies the text displayed on the Recent List panel.|  
|**Small Images**|Specifies the identifier of the image that contains a series of 16x16 icons. The icons are used by the buttons in the Buttons collection.|  
|**Use**|Enables or disables the Recent List panel. The Recent List panel appears on the Application menu.|  
|**Width**|Specifies the width in pixels of the Recent List panel.|  
  
 The Application menu does not appear on the design surface. To view it, you must either preview the ribbon or run the application.  
  
#### <a name="to-preview-the-ribbon-control"></a>To preview the ribbon control  
  
-   On the **Ribbon Editor Toolbar**, click **Test Ribbon**.  
  
## <a name="see-also"></a>See Also  
 [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md)


