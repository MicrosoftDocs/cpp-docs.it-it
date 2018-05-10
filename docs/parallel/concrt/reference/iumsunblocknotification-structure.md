---
title: Struttura IUMSUnblockNotification | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- IUMSUnblockNotification
- CONCRTRM/concurrency::IUMSUnblockNotification
- CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetContext
- CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetNextUnblockNotification
dev_langs:
- C++
helpviewer_keywords:
- IUMSUnblockNotification structure
ms.assetid: eaca9529-c1cc-472b-8ec6-722a1ff0fa2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bda4f6e2b0565d39fd604767f3a89bcdd9a6df2c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="iumsunblocknotification-structure"></a>Struttura IUMSUnblockNotification
Rappresenta una notifica di Gestione risorse indicante che un proxy del thread, che si è bloccato e ha attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, si è sbloccato ed è pronto per essere pianificato. Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IUMSUnblockNotification;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IUMSUnblockNotification::GetContext](#getcontext)|Restituisce il `IExecutionContext` interfaccia per il contesto di esecuzione associato con il proxy del thread che è stato sbloccato. Quando questo metodo restituisce il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al `IThreadProxy::SwitchTo` (metodo), questa interfaccia non è più valida.|  
|[IUMSUnblockNotification:: GetNextUnblockNotification](#getnextunblocknotification)|Restituisce il successivo `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUMSUnblockNotification`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="getcontext"></a>  Metodo IUMSUnblockNotification:: GetContext  
 Restituisce il `IExecutionContext` interfaccia per il contesto di esecuzione associato con il proxy del thread che è stato sbloccato. Quando questo metodo restituisce il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al `IThreadProxy::SwitchTo` (metodo), questa interfaccia non è più valida.  
  
```
virtual IExecutionContext* GetContext() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `IExecutionContext` interfaccia per il contesto di esecuzione per un proxy del thread che è stato sbloccato.  
  
##  <a name="getnextunblocknotification"></a>  Metodo IUMSUnblockNotification:: GetNextUnblockNotification  
 Restituisce il successivo `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.  
  
```
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Alla successiva `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Struttura IUMSScheduler](iumsscheduler-structure.md)   
 [Struttura IUMSCompletionList](iumscompletionlist-structure.md)
