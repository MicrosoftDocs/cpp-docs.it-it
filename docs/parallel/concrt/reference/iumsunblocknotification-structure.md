---
title: Struttura IUMSUnblockNotification | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IUMSUnblockNotification
- CONCRTRM/concurrency::IUMSUnblockNotification
- CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetContext
- CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetNextUnblockNotification
dev_langs: C++
helpviewer_keywords: IUMSUnblockNotification structure
ms.assetid: eaca9529-c1cc-472b-8ec6-722a1ff0fa2a
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3febe10f7c71e1c1d478dd6f6b6f565c4134e033
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[IUMSUnblockNotification:: GetContext](#getcontext)|Restituisce il `IExecutionContext` interfaccia per il contesto di esecuzione associato con il proxy del thread che è stato sbloccato. Quando questo metodo restituisce il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al `IThreadProxy::SwitchTo` (metodo), questa interfaccia non è più valida.|  
|[IUMSUnblockNotification:: GetNextUnblockNotification](#getnextunblocknotification)|Restituisce il successivo `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUMSUnblockNotification`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="getcontext"></a>Metodo IUMSUnblockNotification:: GetContext  
 Restituisce il `IExecutionContext` interfaccia per il contesto di esecuzione associato con il proxy del thread che è stato sbloccato. Quando questo metodo restituisce il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al `IThreadProxy::SwitchTo` (metodo), questa interfaccia non è più valida.  
  
```
virtual IExecutionContext* GetContext() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `IExecutionContext` interfaccia per il contesto di esecuzione per un proxy del thread che è stato sbloccato.  
  
##  <a name="getnextunblocknotification"></a>Metodo IUMSUnblockNotification:: GetNextUnblockNotification  
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
