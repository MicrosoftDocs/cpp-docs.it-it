---
title: RECT Structure1 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- LPRECT
- RECT
dev_langs:
- C++
helpviewer_keywords:
- RECT structure
- LPRECT structure
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
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
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: bc91b22f291f23ed396a054b0c929410718286a3
ms.lasthandoff: 02/24/2017

---
# <a name="rect-structure1"></a>RECT Structure1
La struttura `RECT` definisce le coordinate degli angoli in alto a sinistra e in basso a destra di un rettangolo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagRECT {  
    LONG left;  
    LONG top;  
    LONG right;  
    LONG bottom;  
} RECT;  
```  
  
## <a name="members"></a>Membri  
 `left`  
 Specifica la coordinata x dell'angolo superiore sinistro di un rettangolo.  
  
 `top`  
 Specifica la coordinata y dell'angolo superiore sinistro di un rettangolo.  
  
 `right`  
 Specifica la coordinata x dell'angolo inferiore destro di un rettangolo.  
  
 `bottom`  
 Specifica la coordinata y dell'angolo inferiore destro di un rettangolo.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#38;](../../mfc/codesnippet/cpp/rect-structure1_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WINDEF. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRect (classe)](../../atl-mfc-shared/reference/crect-class.md)

