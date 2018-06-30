---
title: Struttura DELETEITEMSTRUCT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- DELETEITEMSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- DELETEITEMSTRUCT structure [MFC]
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5c844ad428143c82e8214eab74262b326bf2c9a4
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37123240"
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
 *CtlType*  
 Specifica ODT_LISTBOX (una casella di riepilogo proprietario) o ODT_COMBOBOX (una casella combinata proprietario).  
  
 *CtlID*  
 Specifica l'identificatore della casella di riepilogo o casella combinata.  
  
 *ID elemento*  
 Specifica l'indice dell'elemento nella casella di riepilogo o casella combinata in corso la rimozione.  
  
 *hwndItem*  
 Identifica il controllo.  
  
 *itemData*  
 Specifica i dati definiti dall'applicazione per l'elemento. Questo valore viene passato al controllo il *lParam* parametro del messaggio che aggiunge l'elemento alla casella di riepilogo o casella combinata.  
  
## <a name="remarks"></a>Note  
 Quando un elemento viene rimosso dalla casella di riepilogo o casella combinata o quando la casella di riepilogo o casella combinata viene eliminato definitivamente, Windows invia il messaggio WM_DELETEITEM con il proprietario di ogni elemento eliminato. Il *lParam* parametro del messaggio contiene un puntatore alla struttura.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem)


