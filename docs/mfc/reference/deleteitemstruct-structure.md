---
title: Struttura DELETEITEMSTRUCT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- DELETEITEMSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- DELETEITEMSTRUCT structure
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: f5936cbb863cf8ace851609cb1dc8352e21f9456
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 Specifica l'indice dell'elemento nella casella di riepilogo o casella combinata in corso la rimozione.  
  
 `hwndItem`  
 Identifica il controllo.  
  
 `itemData`  
 Specifica i dati definiti dall'applicazione per l'elemento. Questo valore viene passato al controllo il **lParam** parametro del messaggio, che aggiunge l'elemento alla casella di riepilogo o casella combinata.  
  
## <a name="remarks"></a>Note  
 Quando un elemento viene rimosso dalla casella di riepilogo o casella combinata o quando viene eliminata la casella di riepilogo o casella combinata, Windows invia il `WM_DELETEITEM` messaggio al proprietario di ogni elemento eliminato. Il **lParam** parametro del messaggio contiene un puntatore alla struttura.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)



