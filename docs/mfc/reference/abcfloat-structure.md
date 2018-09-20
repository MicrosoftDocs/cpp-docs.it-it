---
title: Struttura ABCFLOAT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- ABCFLOAT
dev_langs:
- C++
helpviewer_keywords:
- ABCFLOAT structure [MFC]
ms.assetid: 338e7e15-9d2c-42d0-aa80-273acfde5cc5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a9bbece0773c14a4a8b545bc56209bf682e22c0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46375414"
---
# <a name="abcfloat-structure"></a>Struttura ABCFLOAT

Il `ABCFLOAT` struttura contiene la larghezza delle colonne A, B e C di un carattere di tipo di carattere.

## <a name="syntax"></a>Sintassi

```
typedef struct _ABCFLOAT { /* abcf */
    FLOAT abcfA;
    FLOAT abcfB;
    FLOAT abcfC;
} ABCFLOAT;
```

#### <a name="parameters"></a>Parametri

*abcfA*<br/>
Specifica la spaziatura A del carattere. La spaziatura A rappresenta la distanza da aggiungere alla posizione corrente prima di creare il glifo di caratteri.

*abcfB*<br/>
Specifica la spaziatura B del carattere. La spaziatura di B corrisponde alla larghezza della porzione disegnata del glifo di caratteri.

*abcfC*<br/>
Specifica la spaziatura C del carattere. La spaziatura C rappresenta la distanza da aggiungere alla posizione corrente per fornire spazio vuoto a destra del glifo di caratteri.

## <a name="remarks"></a>Note

La larghezza delle colonne A, B e C è misurati lungo la linea di base del tipo di carattere. L'incremento di carattere (larghezza totale) di un carattere è la somma degli spazi A, B e C. Gli spazi A e C possono essere negativi ad indicare rientranze o sporgenze.

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)

