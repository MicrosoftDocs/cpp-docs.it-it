---
title: Struttura RECT | Microsoft Docs
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
ms.openlocfilehash: eae2b248f4aa4586bf6453dcc37b521387327d25
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49334569"
---
# <a name="rect-structure"></a>Struttura RECT

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

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CRect](../../atl-mfc-shared/reference/crect-class.md)
