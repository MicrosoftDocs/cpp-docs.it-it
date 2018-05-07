---
title: Struttura COMPAREITEMSTRUCT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COMPAREITEMSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- COMPAREITEMSTRUCT structure [MFC]
ms.assetid: 4b7131a5-5c7d-4e98-aac7-e85650262b52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a94d39c6b6c256444cd2850f7e55a7e4b87f6d7a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compareitemstruct-structure"></a>Struttura COMPAREITEMSTRUCT
Il `COMPAREITEMSTRUCT` struttura fornisce gli identificatori e dati fornita dall'applicazione per due elementi in una casella di elenco ordinato, disegnato dal proprietario o una casella combinata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagCOMPAREITEMSTRUCT {  
    UINT CtlType;  
    UINT CtlID;  
    HWND hwndItem;  
    UINT itemID1;  
    DWORD itemData1;  
    UINT itemID2;  
    DWORD itemData2;  
} COMPAREITEMSTRUCT;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CtlType`  
 **ODT_LISTBOX** (che specifica una casella di riepilogo di disegno) o **ODT_COMBOBOX** (che specifica una casella combinata di disegno).  
  
 `CtlID`  
 L'ID di controllo per la casella di riepilogo o casella combinata.  
  
 `hwndItem`  
 Handle di finestra del controllo.  
  
 *itemID1*  
 L'indice del primo elemento nella casella di riepilogo o casella combinata da confrontare.  
  
 *itemData1*  
 Dati fornita dall'applicazione per il primo elemento da confrontare. Questo valore è stato passato nella chiamata che aggiunto l'elemento alla casella combinata o elenco.  
  
 *itemID2*  
 Indice del secondo elemento nella casella di riepilogo o casella combinata da confrontare.  
  
 *itemData2*  
 Dati fornita dall'applicazione per il secondo elemento da confrontare. Questo valore è stato passato nella chiamata che aggiunto l'elemento alla casella combinata o elenco.  
  
## <a name="remarks"></a>Note  
 Ogni volta che un'applicazione aggiunge un nuovo elemento a una casella di riepilogo disegnato dal proprietario o casella combinata creata con la **CBS_SORT** o **LBS_SORT** stile, Windows invia il proprietario un `WM_COMPAREITEM` messaggio. Il `lParam` parametro del messaggio contiene un puntatore di tipo long a un `COMPAREITEMSTRUCT` struttura. Alla ricezione del messaggio, il proprietario confronta i due elementi e restituisce un valore che indica quale elemento precede l'altro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem)

