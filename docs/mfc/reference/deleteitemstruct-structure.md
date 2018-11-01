---
title: Struttura DELETEITEMSTRUCT
ms.date: 11/04/2016
f1_keywords:
- DELETEITEMSTRUCT
helpviewer_keywords:
- DELETEITEMSTRUCT structure [MFC]
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
ms.openlocfilehash: dd1f48fd584016dab740bc8a6bd05ff3b756e41b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486880"
---
# <a name="deleteitemstruct-structure"></a>Struttura DELETEITEMSTRUCT

Il `DELETEITEMSTRUCT` struttura descrive un proprietario della casella combinata o casella di riepilogo elemento eliminato.

## <a name="syntax"></a>Sintassi

```
typedef struct tagDELETEITEMSTRUCT { /* ditms */
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    HWND hwndItem;
    UINT itemData;
} DELETEITEMSTRUCT;
```

#### <a name="parameters"></a>Parametri

*CtlType*<br/>
Specifica ODT_LISTBOX (una casella di riepilogo proprietario) o ODT_COMBOBOX (una casella combinata proprietario).

*CtlID*<br/>
Specifica l'identificatore della casella di riepilogo o casella combinata.

*ID dell'elemento*<br/>
Specifica l'indice dell'elemento nella casella di riepilogo o casella combinata viene rimosso.

*hwndItem*<br/>
Identifica il controllo.

*itemData*<br/>
Specifica i dati definiti dall'applicazione per l'elemento. Questo valore viene passato al controllo il *lParam* parametro del messaggio, che aggiunge l'elemento alla casella di riepilogo o casella combinata.

## <a name="remarks"></a>Note

Quando un elemento viene rimosso dalla casella di riepilogo o casella combinata o quando la casella di riepilogo o casella combinata viene eliminato definitivamente, Windows invia il messaggio WM_DELETEITEM al proprietario per ogni elemento eliminato. Il *lParam* parametro del messaggio contiene un puntatore alla struttura.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)

