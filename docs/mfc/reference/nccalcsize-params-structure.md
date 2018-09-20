---
title: Struttura NCCALCSIZE_PARAMS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- NCCALCSIZE_PARAMS
dev_langs:
- C++
helpviewer_keywords:
- NCCALCSIZE_PARAMS structure [MFC]
ms.assetid: 3424cd9f-806a-4089-82fb-414187589edf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6290c7600584f3225fee6cf9ed6a0f94373584c8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413705"
---
# <a name="nccalcsizeparams-structure"></a>Struttura NCCALCSIZE_PARAMS

Il `NCCALCSIZE_PARAMS` struttura contiene informazioni che un'applicazione può utilizzare durante l'elaborazione del messaggio WM_NCCALCSIZE per calcolare le dimensioni, posizione e contenuto valido dell'area client di una finestra.

## <a name="syntax"></a>Sintassi

```
typedef struct tagNCCALCSIZE_PARAMS {
    RECT rgrc[3];
    PWINDOWPOS lppos;
} NCCALCSIZE_PARAMS;
```

#### <a name="parameters"></a>Parametri

*rgrc*<br/>
Specifica una matrice di rettangoli. Il primo contiene le nuove coordinate di una finestra che è stata spostata o ridimensionata. Il secondo contiene le coordinate della finestra prima che è stata spostata o ridimensionata. Il terzo contiene le coordinate dell'area client di una finestra prima che è stata spostata o ridimensionata. Se la finestra è una finestra figlio, le coordinate sono relative all'area client della finestra padre. Se la finestra è una finestra di primo livello, le coordinate sono relative allo schermo.

*lppos*<br/>
Punta a un [WINDOWPOS](../../mfc/reference/windowpos-structure1.md) struttura che contiene i valori di dimensioni e la posizione specificati nell'operazione che ha causato la finestra essere spostato o ridimensionato.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)

