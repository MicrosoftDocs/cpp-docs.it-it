---
title: "Tipi di variabili e controlli di finestre di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli delle finestre di dialogo, variabili membro"
  - "controlli delle finestre di dialogo, tipi di variabili"
  - "variabili, variabili membro dei controlli delle finestre di dialogo"
ms.assetid: f9cd9cea-45a6-4349-8358-e5efbcdcff76
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Tipi di variabili e controlli di finestre di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per aggiungere una variabile membro a un controllo finestra di dialogo creato mediante MFC.  Le opzioni visualizzate nella finestra di dialogo variano a seconda del tipo di controllo per il quale si aggiunge la variabile membro.  
  
 Nella tabella seguente sono indicati tutti i tipi di controllo finestra di dialogo supportati in MFC e nell'[Editor finestre](../mfc/dialog-editor.md) con i relativi tipi e valori disponibili.  
  
|Controllo|Tipo di controllo|Tipo di variabile di controllo|Tipo di variabile di valore|Valori minimi e massimi \(solo tipo di valore\)|  
|---------------|-----------------------|------------------------------------|---------------------------------|-----------------------------------------------------|  
|Controllo animazione|SysAnimate32|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|Nessuno; solo controllo|N\/D|  
|Button|BUTTON|[CButton](../mfc/reference/cbutton-class.md)|Nessuno; solo controllo|N\/D|  
|Casella di controllo|CHECK|[CButton](../mfc/reference/cbutton-class.md)|**BOOL**|Valore minimo\/massimo|  
|Casella combinata|COMBOBOX|[CComboBox](../mfc/reference/ccombobox-class.md)|[CString](../atl-mfc-shared/reference/cstringt-class.md)|Numero massimo caratteri|  
|Controllo DateTimePicker|SysDateTimePick32|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|[CTime](../atl-mfc-shared/reference/ctime-class.md)|Valore minimo\/massimo|  
|Casella di testo|EDIT|[CEdit](../mfc/reference/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime` o **COleCurrency**|Valore minimo\/massimo: alcuni supportano il numero massimo caratteri|  
|Controllo tasto di scelta|msctls\_hotkey32|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|Nessuno; solo controllo|N\/D|  
|Casella di riepilogo|LISTBOX|[CListBox](../mfc/reference/clistbox-class.md)|`CString`|Numero massimo caratteri|  
|Controllo List|SysListView32|[CListCtrl](../mfc/reference/clistctrl-class.md)|Nessuno; solo controllo|N\/D|  
|Controllo calendario mensile|SysMonthCal32|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|`CTime`|Valore minimo\/massimo|  
|Controllo stato|msctls\_progress32|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|Nessuno; solo controllo|N\/D|  
|Controllo Rich Edit 2|RichEdit20A|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|`CString`|Numero massimo caratteri|  
|Controllo Rich Edit|RICHEDIT|`CRichEditCtrl`|`CString`|Numero massimo caratteri|  
|Barra di scorrimento \(verticale o orizzontale\)|SCROLLBAR|[CScrollBar](../mfc/reference/cscrollbar-class.md)|`int`|Valore minimo\/massimo|  
|Dispositivo di scorrimento|msctls\_trackbar32|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|`int`|Valore minimo\/massimo|  
|Casella di selezione|msctls\_updown32|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|Nessuno; solo controllo|N\/D|  
|Controllo struttura a schede|SysTabControl32|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|Nessuno; solo controllo|N\/D|  
|Controllo struttura ad albero|SysTreeView32|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|Nessuno; solo controllo|N\/D|  
  
## Vedere anche  
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)