---
title: Struttura MEASUREITEMSTRUCT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- MEASUREITEMSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- MEASUREITEMSTRUCT structure [MFC]
ms.assetid: d141ace4-47cb-46b5-a81c-ad2c5e5a8501
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: db24d772e2f007b3350443ae6bc84f97cac34e76
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46397767"
---
# <a name="measureitemstruct-structure"></a>Struttura MEASUREITEMSTRUCT

Il `MEASUREITEMSTRUCT` struttura informa Windows delle dimensioni di un elemento di controllo o del menu creato dal proprietario.

## <a name="syntax"></a>Sintassi

```
typedef struct tagMEASUREITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemWidth;
    UINT itemHeight;
    DWORD itemData
} MEASUREITEMSTRUCT;
```

#### <a name="parameters"></a>Parametri

*CtlType*<br/>
Contiene il tipo di controllo. I valori per i tipi di controllo sono i seguenti:

- Pole se seznamem ODT_COMBOBOX proprietario.

- Casella di riepilogo di disegno ODT_LISTBOX

- Menu di disegno ODT_MENU

*CtlID*<br/>
Contiene l'ID di controllo per un pulsante, casella di riepilogo o casella combinata. Questo membro non viene usato per un menu.

*ID dell'elemento*<br/>
Contiene l'ID voce di menu per un menu o l'ID di elemento di casella di riepilogo per una casella combinata di altezza variabile o una casella di riepilogo. Questo membro non viene utilizzato per una casella combinata di altezza fissa o una casella di riepilogo o per un pulsante.

*itemWidth*<br/>
Specifica la larghezza di una voce di menu. Il proprietario della voce di menu creato dal proprietario deve compilare questo membro prima della restituzione del messaggio.

*itemHeight*<br/>
Specifica l'altezza di un singolo elemento in una casella di riepilogo o un menu. Prima che venga restituito dal messaggio, il proprietario della casella combinata creato dal proprietario, casella di riepilogo o voce di menu deve compilare questo membro. L'altezza massima di un elemento di casella di riepilogo è 255.

*itemData*<br/>
Per una casella combinata o una casella di riepilogo, questo membro contiene il valore passato alla casella di riepilogo per uno degli elementi seguenti:

- [CComboBox::AddString](../../mfc/reference/ccombobox-class.md#addstring)

- [CComboBox::InsertString](../../mfc/reference/ccombobox-class.md#insertstring)

- [CListBox::AddString](../../mfc/reference/clistbox-class.md#addstring)

- [CListBox::InsertString](../../mfc/reference/clistbox-class.md#insertstring)

Per un menu, questo membro contiene il valore passato al menu da uno degli elementi seguenti:

- [CMenu::AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu)

- [CMenu::InsertMenu](../../mfc/reference/cmenu-class.md#insertmenu)

- [CMenu::ModifyMenu](../../mfc/reference/cmenu-class.md#modifymenu)

In questo modo Windows da elaborare in modo corretto l'interazione dell'utente con il controllo. Tentativo di compilare i membri appropriati nel `MEASUREITEMSTRUCT` struttura causerà un funzionamento non corretto del controllo.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem)

