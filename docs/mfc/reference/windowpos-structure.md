---
title: Struttura WINDOWPOS
ms.date: 11/04/2016
f1_keywords:
- WINDOWPOS
helpviewer_keywords:
- WINDOWPOS structure [MFC]
ms.assetid: a4ea7cd9-c4c2-4480-9c55-cbbff72195e1
ms.openlocfilehash: 16d9122a4141d2516118304fcdb4dd1b8fc14421
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50439429"
---
# <a name="windowpos-structure"></a>Struttura WINDOWPOS

Il `WINDOWPOS` struttura contiene informazioni sulle dimensioni e posizione di una finestra.

## <a name="syntax"></a>Sintassi

```
typedef struct tagWINDOWPOS { /* wp */
    HWND hwnd;
    HWND hwndInsertAfter;
    int x;
    int y;
    int cx;
    int cy;
    UINT flags;
} WINDOWPOS;
```

#### <a name="parameters"></a>Parametri

*HWND*<br/>
Identifica la finestra.

*hwndInsertAfter*<br/>
Identifica la finestra sotto la quale viene inserita in questa finestra.

*x*<br/>
Specifica la posizione del bordo sinistro della finestra.

*y*<br/>
Specifica la posizione del bordo destro della finestra.

*CX*<br/>
Specifica la larghezza della finestra, in pixel.

*CY*<br/>
Specifica l'altezza della finestra, in pixel.

*flags*<br/>
Specifica le opzioni di posizionamento di finestra. Questo membro può essere uno dei valori seguenti:

- SWP_DRAWFRAME Disegna un frame (definito nella descrizione della classe per la finestra) attorno alla finestra. La finestra riceve un messaggio WM_NCCALCSIZE.

- SWP_FRAMECHANGED invia un WM_NCCALCSIZE messaggio alla finestra, anche se le dimensioni della finestra non viene modificata. Se questo flag viene omesso, viene inviato WM_NCCALCSIZE solo quando le dimensioni della finestra viene modificata.

- SWP_HIDEWINDOW nasconde la finestra.

- SWP_NOACTIVATE non attiva la finestra.

- SWP_NOCOPYBITS ignora l'intero contenuto dell'area client. Se questo flag non è specificato, il contenuto valido dell'area client venga salvato e copiato nuovamente dell'area client dopo che la finestra viene ridimensionata o riposizionata.

- Posizione corrente mantiene SWP_NOMOVE (ignora le `x` e `y` membri).

- SWP_NOOWNERZORDER non modifica la posizione della finestra del proprietario nell'ordine Z.

- Dimensioni correnti SWP_NOSIZE mantiene (ignora le `cx` e `cy` membri).

- SWP_NOREDRAW non vengono aggiornate le modifiche.

- SWP_NOREPOSITION stesso come SWP_NOOWNERZORDER.

- SWP_NOSENDCHANGING impedisce alla finestra di ricezione del messaggio WM_WINDOWPOSCHANGING.

- Consente di mantenere SWP_NOZORDER ordinamento corrente (ignora il `hwndInsertAfter` membro).

- SWP_SHOWWINDOW Visualizza la finestra.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging)

