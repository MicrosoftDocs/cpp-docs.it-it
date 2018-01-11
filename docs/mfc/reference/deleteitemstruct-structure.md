---
title: Struttura DELETEITEMSTRUCT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: DELETEITEMSTRUCT
dev_langs: C++
helpviewer_keywords: DELETEITEMSTRUCT structure [MFC]
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 93be7b23ae713caea5fa64e437fe792c550589f1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deleteitemstruct-structure"></a>Struttura DELETEITEMSTRUCT
Il `DELETEITEMSTRUCT` struttura descrive un proprietario della casella di riepilogo o casella combinata elemento eliminato.  
  
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
 `CtlType`  
 Specifica **ODT_LISTBOX** (una casella di riepilogo proprietario) o **ODT_COMBOBOX** (una casella combinata proprietario).  
  
 `CtlID`  
 Specifica l'identificatore della casella di riepilogo o casella combinata.  
  
 `itemID`  
 Specifica l'indice dell'elemento nella casella di riepilogo o casella combinata viene rimosso.  
  
 `hwndItem`  
 Identifica il controllo.  
  
 `itemData`  
 Specifica i dati definiti dall'applicazione per l'elemento. Questo valore viene passato al controllo il **lParam** parametro del messaggio che aggiunge l'elemento alla casella di riepilogo o casella combinata.  
  
## <a name="remarks"></a>Note  
 Quando un elemento viene rimosso dalla casella di riepilogo o casella combinata o quando la casella di riepilogo o casella combinata viene eliminato definitivamente, Windows invia i `WM_DELETEITEM` messaggio con il proprietario di ogni elemento eliminato. Il **lParam** parametro del messaggio contiene un puntatore alla struttura.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)


