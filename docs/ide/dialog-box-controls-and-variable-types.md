---
title: Tipi di variabili e i controlli finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- dialog box controls, member variables
- dialog box controls, variable types
- variables, dialog box control member variables
ms.assetid: f9cd9cea-45a6-4349-8358-e5efbcdcff76
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 744b9da2db456a72ed386806d8a4aa34c5942f69
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-box-controls-and-variable-types"></a>Tipi di variabili e controlli di finestre di dialogo
È possibile utilizzare il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per aggiungere una variabile membro a un controllo di finestra di dialogo creato mediante MFC. Il tipo di controllo per il quale aggiungere la variabile membro determina le opzioni visualizzate nella finestra di dialogo.  
  
 La tabella seguente descrive tutti i tipi di controllo finestra di dialogo è supportati in MFC e [Editor finestre](../windows/dialog-editor.md)e i relativi tipi disponibili e i valori.  
  
|Control|Tipo di controllo|Tipo di variabile di controllo|Tipo di valore variabile|Valori Min e max (solo tipo di valore)|  
|-------------|------------------|---------------------------|-------------------------|-----------------------------------------|  
|Controllo Animation|SysAnimate32|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|None; solo controllo|N/D|  
|Button|PULSANTE|[CButton](../mfc/reference/cbutton-class.md)|None; solo controllo|N/D|  
|Casella di controllo|CONTROLLO|[CButton](../mfc/reference/cbutton-class.md)|**BOOL**|Valore di Min/Max di valore|  
|Casella combinata|CONTROLLO COMBOBOX|[CComboBox](../mfc/reference/ccombobox-class.md)|[CString](../atl-mfc-shared/reference/cstringt-class.md)|Numero massimo caratteri|  
|Controllo selezione data e ora|SysDateTimePick32|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|[CTime](../atl-mfc-shared/reference/ctime-class.md)|Valore di min/max di valore|  
|Casella di modifica|MODIFICA|[CEdit](../mfc/reference/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime`, o **COleCurrency**|Valore di min/max di valore; alcuni caratteri max di supporto|  
|Controllo tasto di scelta rapida|msctls_hotkey32|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|None; solo controllo|N/D|  
|Casella di riepilogo|CASELLA DI RIEPILOGO|[CListBox](../mfc/reference/clistbox-class.md)|`CString`|Numero massimo caratteri|  
|Controllo List|SysListView32|[CListCtrl](../mfc/reference/clistctrl-class.md)|None; solo controllo|N/D|  
|Controllo Month Calendar|SysMonthCal32|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|`CTime`|Valore di min/max di valore|  
|Controllo Progress|msctls_progress32|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|None; solo controllo|N/D|  
|Controllo Rich Edit 2|RichEdit20A|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|`CString`|Numero massimo caratteri|  
|Controllo Rich Edit|RICHEDIT|`CRichEditCtrl`|`CString`|Numero massimo caratteri|  
|Barra di scorrimento (verticale o orizzontale|BARRA DI SCORRIMENTO|[CScrollBar](../mfc/reference/cscrollbar-class.md)|`int`|Valore di min/max di valore|  
|Dispositivo di scorrimento|msctls_trackbar32|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|`int`|Valore di min/max di valore|  
|Controllo Spin|msctls_updown32|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|None; solo controllo|N/D|  
|Controllo Tab|SysTabControl32|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|None; solo controllo|N/D|  
|Controllo Tree|SysTreeView32|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|None; solo controllo|N/D|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)