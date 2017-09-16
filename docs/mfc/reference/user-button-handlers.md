---
title: User Button Handlers | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ON_BN_HILITE
- ON_BN_DOUBLECLICKED
- ON_BN_CLICKED
- ON_BN_PAINT
- ON_BN_DISABLE
- ON_BN_UNHILITE
dev_langs:
- C++
helpviewer_keywords:
- ON_BN_PAINT
- user buttons [MFC]
- ON_BN_DOUBLECLICKED [MFC]
- ON_BN_DISABLE [MFC]
- ON_BN_UNHILITE [MFC]
- ON_BN_HILITE [MFC]
- ON_BN_CLICKED [MFC]
ms.assetid: 410ea968-478f-4806-b7b8-5d7c8dc2bf42
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
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: b4278d5ddc677494efe07bacbcf4b52a552daf81
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="user-button-handlers"></a>User Button Handlers
The following map entries correspond to the function prototypes.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_BN_CLICKED( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_DISABLE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_DOUBLECLICKED( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_HILITE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_PAINT( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_UNHILITE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
  
## <a name="see-also"></a>See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)


