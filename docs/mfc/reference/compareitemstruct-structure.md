---
title: Struttura COMPAREITEMSTRUCT | Microsoft Docs
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
ms.openlocfilehash: 6c42f356cb323bb7690b6c39b1fc7bd9ce0485f3
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37850589"
---
# <a name="compareitemstruct-structure"></a>Struttura COMPAREITEMSTRUCT
Il `COMPAREITEMSTRUCT` struttura fornisce gli identificatori e dati forniti dall'applicazione per due elementi in un elenco ordinato, proprietario o casella combinata.  
  
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
 *CtlType*  
 ODT_LISTBOX (che specifica una casella di riepilogo di disegno) o ODT_COMBOBOX (che specifica una casella combinata proprietario).  
  
 *CtlID*  
 L'ID di controllo per la casella di riepilogo o casella combinata.  
  
 *hwndItem*  
 L'handle della finestra del controllo.  
  
 *itemID1*  
 L'indice del primo elemento nella casella di riepilogo o casella combinata confrontati.  
  
 *itemData1*  
 Dati forniti dall'applicazione per il primo elemento da confrontare. Questo valore è stato passato nella chiamata al aggiunto l'elemento alla casella combinata o un elenco.  
  
 *itemID2*  
 Indice del secondo elemento nella casella di riepilogo o casella combinata confrontati.  
  
 *itemData2*  
 Dati forniti dall'applicazione per il secondo elemento da confrontare. Questo valore è stato passato nella chiamata al aggiunto l'elemento alla casella combinata o un elenco.  
  
## <a name="remarks"></a>Note  
 Ogni volta che un'applicazione aggiunge un nuovo elemento a una casella di riepilogo creato dal proprietario o di una casella combinata creata con lo stile CBS_SORT o LBS_SORT, il proprietario Windows invia un messaggio WM_COMPAREITEM. Il *lParam* parametro del messaggio contiene un puntatore di tipo long a un `COMPAREITEMSTRUCT` struttura. Dopo aver ricevuto il messaggio, il proprietario confronta i due elementi e restituisce un valore che indica quali elementi vengono ordinati prima degli altri.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem)

