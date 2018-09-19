---
title: RECT Structure1 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- LPRECT
- RECT
dev_langs:
- C++
helpviewer_keywords:
- RECT structure [MFC]
- LPRECT structure [MFC]
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2e71459a1c22b9295c5c88ce29da9e494660fa26
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46046303"
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
`left`<br/>
Specifica la coordinata x dell'angolo superiore sinistro di un rettangolo.  
  
`top`<br/>
Specifica la coordinata y dell'angolo superiore sinistro di un rettangolo.  
  
`right`<br/>
Specifica la coordinata x dell'angolo inferiore destro di un rettangolo.  
  
`bottom`<br/>
Specifica la coordinata y dell'angolo inferiore destro di un rettangolo.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#38](../../mfc/codesnippet/cpp/rect-structure1_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WINDEF. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CRect](../../atl-mfc-shared/reference/crect-class.md)
