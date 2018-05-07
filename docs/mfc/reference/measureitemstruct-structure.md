---
title: Struttura MEASUREITEMSTRUCT | Documenti Microsoft
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
ms.openlocfilehash: ff015fdaf9e37d919459cadc8e4c35c4b795b3f8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
 `CtlType`  
 Contiene il tipo di controllo. I valori per i tipi di controllo sono i seguenti:  
  
- **ODT_COMBOBOX** casella combinata creato dal proprietario.  
  
- **ODT_LISTBOX** casella di riepilogo di disegno  
  
- **ODT_MENU** menu creato dal proprietario.  
  
 `CtlID`  
 Contiene l'ID di controllo per un pulsante, una casella di riepilogo o una casella combinata. Questo membro non viene usato per un menu.  
  
 `itemID`  
 Contiene l'ID della voce di menu per un menu o l'ID di elemento di casella di riepilogo per una casella combinata ad altezza variabile o una casella di riepilogo. Questo membro non viene utilizzato per una casella combinata ad altezza fissa o una casella di riepilogo o per un pulsante.  
  
 *itemWidth*  
 Specifica la larghezza di una voce di menu. Il proprietario della voce di menu di disegno personalizzato è necessario compilare questo membro prima della restituzione del messaggio.  
  
 *itemHeight*  
 Specifica l'altezza di un singolo elemento in una casella di riepilogo o un menu. Prima di restituire il messaggio, il proprietario della casella combinata proprietario, casella di riepilogo o voce di menu deve compilare questo membro. L'altezza massima dell'elemento di una casella di riepilogo è 255.  
  
 `itemData`  
 Per una casella combinata o una casella di riepilogo, questo membro contiene il valore passato alla casella di riepilogo per uno degli elementi seguenti:  
  
- [CComboBox::AddString](../../mfc/reference/ccombobox-class.md#addstring)  
  
- [CComboBox::InsertString](../../mfc/reference/ccombobox-class.md#insertstring)  
  
- [CListBox::AddString](../../mfc/reference/clistbox-class.md#addstring)  
  
- [CListBox::InsertString](../../mfc/reference/clistbox-class.md#insertstring)  
  
 Per un menu, questo membro contiene il valore passato al menu da uno degli elementi seguenti:  
  
- [CMenu::AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu)  
  
- [CMenu::InsertMenu](../../mfc/reference/cmenu-class.md#insertmenu)  
  
- [CMenu::ModifyMenu](../../mfc/reference/cmenu-class.md#modifymenu)  
  
 Ciò consente di elaborare correttamente l'interazione dell'utente con il controllo. Errore per la compilazione dei membri di corretti il `MEASUREITEMSTRUCT` struttura causerà un funzionamento non corretto del controllo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem)

