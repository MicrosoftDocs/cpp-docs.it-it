---
title: IUMSCompletionList (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrtrm/concurrency::IUMSCompletionList
dev_langs:
- C++
helpviewer_keywords:
- IUMSCompletionList structure
ms.assetid: 81b5250e-3065-492c-b20d-2cdabf12271a
caps.latest.revision: 19
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
translationtype: Machine Translation
ms.sourcegitcommit: fa774c7f025b581d65c28d65d83e22ff2d798230
ms.openlocfilehash: 25023c27244669092e0f57fe59bdb190fd2f2afb
ms.lasthandoff: 02/24/2017

---
# <a name="iumscompletionlist-structure"></a>Struttura IUMSCompletionList
Rappresenta un elenco di completamento UMS. Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato. Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia. L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IUMSCompletionList;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IUMSCompletionList:: GetUnblockNotifications](#getunblocknotifications)|Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano i contesti di esecuzione il cui thread associati proxy sono stati sbloccati dall'ultima volta in cui questo metodo è stato richiamato.|  
  
## <a name="remarks"></a>Note  
 Un'utilità di pianificazione deve essere straordinariamente accurata sulle azioni da eseguire dopo l'utilizzo di questa interfaccia per gli elementi dall'elenco di completamento di rimozione dalla coda. Gli elementi devono essere inseriti nell'elenco dell'utilità di pianificazione di contesti eseguibili e accessibili in genere appena possibile. È anche possibile che uno degli elementi rimossi dalla coda è stato assegnato la proprietà di un blocco arbitrario. L'utilità di pianificazione non può rendere chiamate di funzione arbitrario che possono bloccarsi tra la chiamata a elementi di rimozione dalla coda e la posizione di tali elementi in un elenco che sono in genere accessibili dall'utilità di pianificazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUMSCompletionList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namegetunblocknotificationsa--iumscompletionlistgetunblocknotifications-method"></a><a name="getunblocknotifications"></a>Metodo IUMSCompletionList:: GetUnblockNotifications  
 Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano i contesti di esecuzione il cui thread associati proxy sono stati sbloccati dall'ultima volta in cui questo metodo è stato richiamato.  
  
```
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una catena di `IUMSUnblockNotification` interfacce.  
  
### <a name="remarks"></a>Note  
 Le notifiche restituite non sono validi dopo riprogrammati contesti di esecuzione.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [IUMSScheduler (struttura)](iumsscheduler-structure.md)   
 [IUMSUnblockNotification (struttura)](iumsunblocknotification-structure.md)

