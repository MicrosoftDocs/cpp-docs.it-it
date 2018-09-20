---
title: PUNTO Structure1 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- POINT
- LPPOINT
dev_langs:
- C++
helpviewer_keywords:
- LPPOINT structure [MFC]
- POINT structure [MFC]
ms.assetid: 965736d8-4e53-41b6-9b8b-6961992dd21f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 82955bb42ae68cb7f07fb89be94a7fcf424ee81c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416097"
---
# <a name="point-structure1"></a>PUNTO Structure1

Il `POINT` struttura definisce x*-* e y di un punto.

## <a name="syntax"></a>Sintassi

```
typedef struct tagPOINT {
    LONG x;
    LONG y;
} POINT;
```

#### <a name="parameters"></a>Parametri

*x*<br/>
Specifica la coordinata x di un punto.

*y*<br/>
Specifica la coordinata y di un punto.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#37](../../mfc/codesnippet/cpp/point-structure1_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** WINDEF. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)
