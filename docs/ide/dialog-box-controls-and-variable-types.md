---
title: Tipi di variabili e controlli di finestre di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog box controls, member variables
- dialog box controls, variable types
- variables, dialog box control member variables
ms.assetid: f9cd9cea-45a6-4349-8358-e5efbcdcff76
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f2fbae37072f50898181334a9059a7dc9c6a83a9
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33335065"
---
# <a name="dialog-box-controls-and-variable-types"></a>Tipi di variabili e controlli di finestre di dialogo
È possibile usare l'[Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per aggiungere una variabile membro a un controllo di finestra di dialogo creato con MFC. Il tipo di controllo per il quale si aggiunge la variabile membro determina le opzioni visualizzate nella finestra di dialogo.  
  
 La tabella seguente descrive tutti i tipi di controllo di finestra di dialogo supportati in MFC e nell'[Editor finestre](../windows/dialog-editor.md) e i relativi tipi e valori disponibili.  
  
|Control|Tipo di controllo|Tipo variabile controllo|Tipo variabile valore|Valori min e max (solo tipo di valore)|  
|-------------|------------------|---------------------------|-------------------------|-----------------------------------------|  
|Controllo Animation|SysAnimate32|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|Nessuno; solo controllo|N/D|  
|Button|BUTTON|[CButton](../mfc/reference/cbutton-class.md)|Nessuno; solo controllo|N/D|  
|Casella di controllo|CHECK|[CButton](../mfc/reference/cbutton-class.md)|**BOOL**|Valore min/valore max|  
|Casella combinata|COMBOBOX|[CComboBox](../mfc/reference/ccombobox-class.md)|[CString](../atl-mfc-shared/reference/cstringt-class.md)|N. max caratteri|  
|Controllo selezione data e ora|SysDateTimePick32|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|[CTime](../atl-mfc-shared/reference/ctime-class.md)|Valore min/valore max|  
|Casella di modifica|MODIFICA|[CEdit](../mfc/reference/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime` o **COleCurrency**|Valore min/max; alcuni supportano caratteri max|  
|Controllo tasto di scelta rapida|msctls_hotkey32|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|Nessuno; solo controllo|N/D|  
|Casella di riepilogo|LISTBOX|[CListBox](../mfc/reference/clistbox-class.md)|`CString`|N. max caratteri|  
|Controllo List|SysListView32|[CListCtrl](../mfc/reference/clistctrl-class.md)|Nessuno; solo controllo|N/D|  
|Controllo Month Calendar|SysMonthCal32|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|`CTime`|Valore min/valore max|  
|Controllo Progress|msctls_progress32|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|Nessuno; solo controllo|N/D|  
|Controllo Rich Edit 2|RichEdit20A|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|`CString`|N. max caratteri|  
|Controllo Rich Edit|RICHEDIT|`CRichEditCtrl`|`CString`|N. max caratteri|  
|Barra di scorrimento (verticale o orizzontale|SCROLLBAR|[CScrollBar](../mfc/reference/cscrollbar-class.md)|`int`|Valore min/valore max|  
|Dispositivo di scorrimento|msctls_trackbar32|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|`int`|Valore min/valore max|  
|Controllo Spin|msctls_updown32|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|Nessuno; solo controllo|N/D|  
|Controllo Tab|SysTabControl32|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|Nessuno; solo controllo|N/D|  
|Controllo Tree|SysTreeView32|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|Nessuno; solo controllo|N/D|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)