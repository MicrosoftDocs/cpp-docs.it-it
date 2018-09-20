---
title: DRAWITEMSTRUCT (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- DRAWITEMSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- DRAWITEMSTRUCT structure [MFC]
ms.assetid: ba9ef1d4-aebb-45e9-b956-4b81a02e50f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 632f1b8b975c73c4f8a708ddb9efd64ce0cae015
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427251"
---
# <a name="drawitemstruct-structure"></a>DRAWITEMSTRUCT (struttura)

La struttura `DRAWITEMSTRUCT` fornisce informazioni necessarie alla finestra proprietaria per determinare come disegnare una voce di menu o un controllo creato dal proprietario.

## <a name="syntax"></a>Sintassi

```
typedef struct tagDRAWITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemAction;
    UINT itemState;
    HWND hwndItem;
    HDC hDC;
    RECT rcItem;
    DWORD itemData;
} DRAWITEMSTRUCT;
```

#### <a name="parameters"></a>Parametri

*CtlType*<br/>
Tipo di controllo. I valori per i tipi di controllo sono i seguenti:

- Pulsante creato dal proprietario ODT_BUTTON

- ODT_COMBOBOX proprietario pole se seznamem

- Casella di riepilogo proprietario ODT_LISTBOX

- Menu creato dal proprietario ODT_MENU

- Controllo visualizzazione elenco ODT_LISTVIEW

- ODT_STATIC controllo statico creato dal proprietario

- Controllo struttura a schede ODT_TAB

*CtlID*<br/>
ID di controllo per una casella combinata, una casella di riepilogo o un pulsante. Questo membro non viene usato per un menu.

*ID dell'elemento*<br/>
L'ID della voce di un menu o l'indice dell'elemento in una casella di riepilogo o in una casella combinata. Per una casella di riepilogo vuota o una casella combinata, questo membro è un valore negativo, che consente all'applicazione disegnare solo il rettangolo di attivazione in corrispondenza delle coordinate specificate per il `rcItem` membro anche se non esistono elementi nel controllo. In questo modo l'utente può visualizzare se la casella di riepilogo o la casella combinata è in stato attivo per l'input. L'impostazione dei bit nel `itemAction` membro determina se il rettangolo deve essere disegnato come se la casella di riepilogo o casella combinata avesse input dello stato attivo.

*itemAction*<br/>
Definisce l'azione di disegno necessaria. Può trattarsi di uno o più dei bit seguenti:

- ODA_DRAWENTIRE questo bit viene impostato quando deve essere disegnato l'intero controllo.

- ODA_FOCUS questo bit viene impostato quando il controllo acquisisce o perde lo stato attivo di input. Il `itemState` membro deve essere controllato per determinare se il controllo ha lo stato attivo.

- ODA_SELECT questo bit viene impostato quando viene modificato solo lo stato di selezione. Il `itemState` membro deve essere controllato per determinare il nuovo stato di selezione.

*itemState*<br/>
Specifica lo stato di visualizzazione dell'elemento dopo l'esecuzione dell'operazione di disegno corrente. Vale a dire, se una voce di menu deve essere visualizzato in grigio, il flag di stato ODS_GRAYED essere imposterà. I flag di stato sono i seguenti:

- ODS_CHECKED questo bit viene impostato se la voce di menu è da controllare. Questo bit viene usato solo in un menu.

- ODS_DISABLED questo bit viene impostato se l'elemento deve essere disegnato come disabilitato.

- ODS_FOCUS questo bit viene impostato se l'elemento ha lo stato attivo di input.

- ODS_GRAYED questo bit viene impostato se l'elemento deve essere visualizzato in grigio. Questo bit viene usato solo in un menu.

- ODS_SELECTED questo bit viene impostato se lo stato dell'elemento è selezionato.

- ODS_COMBOBOXEDIT il disegno viene eseguito nel campo di selezione (controllo di modifica) di una casella combinata creata dal proprietario.

- ODS_DEFAULT l'elemento è l'elemento predefinito.

*hwndItem*<br/>
Specifica l'handle della finestra per il controllo di pulsanti, caselle di riepilogo e caselle combinate. Specifica l'handle del menu (HMENU) che contiene l'elemento per i menu.

*hDC*<br/>
Identifica un contesto di dispositivo. Questo contesto di dispositivo deve essere usato durante l'esecuzione di operazioni di disegno del controllo.

*rcItem*<br/>
Un rettangolo nel contesto di periferica specificato per il *hDC* membro che definisce i limiti del controllo da disegnare. Windows ritaglia automaticamente qualsiasi elemento disegnato dal proprietario nel contesto di dispositivo per pulsanti, caselle di riepilogo e caselle combinate, ma non ritaglia le voci di menu. Quando si disegnano le voci di menu, il proprietario non deve disegnare di fuori i limiti del rettangolo definito dal `rcItem` membro.

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

## <a name="remarks"></a>Note

La finestra proprietaria della voce di menu o controllo disegnato dal proprietario riceve un puntatore alla struttura come le *lParam* parametro del messaggio WM_DRAWITEM.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem)

