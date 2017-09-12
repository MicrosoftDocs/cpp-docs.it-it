---
title: Using an Unclipped Device Context | Microsoft Docs
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
- MFC ActiveX controls [MFC], unclipped device context
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
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
ms.openlocfilehash: eb4e5f4a40aa1885add7fdb68d1f8123563ef12e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="using-an-unclipped-device-context"></a>Using an Unclipped Device Context
If you are absolutely certain that your control does not paint outside its client rectangle, you can realize a small but detectable speed gain by disabling the call to `IntersectClipRect` that is made by `COleControl`. To do this, remove the **clipPaintDC** flag from the set of flags returned by [COleControl::GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). For example:  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/using-an-unclipped-device-context_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#14](../mfc/codesnippet/cpp/using-an-unclipped-device-context_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/using-an-unclipped-device-context_3.cpp)]  
  
 The code to remove this flag is automatically generated if you select the **Unclipped Device Context** option on the [Control Settings](../mfc/reference/control-settings-mfc-activex-control-wizard.md) page, when creating your control with the MFC ActiveX Control Wizard.  
  
 If you are using windowless activation, this optimization has no effect.  
  
## <a name="see-also"></a>See Also  
 [MFC ActiveX Controls: Optimization](../mfc/mfc-activex-controls-optimization.md)


