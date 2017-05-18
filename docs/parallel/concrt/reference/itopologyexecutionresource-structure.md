---
title: Struttura ITopologyExecutionResource | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ITopologyExecutionResource
- CONCRTRM/concurrency::ITopologyExecutionResource
- CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetId
- CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetNext
dev_langs:
- C++
helpviewer_keywords:
- ITopologyExecutionResource structure
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
caps.latest.revision: 10
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: d9671dbf84a1104bc3b6f3a6f9d383aac167759c
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="itopologyexecutionresource-structure"></a>Struttura ITopologyExecutionResource
Interfaccia a una risorsa di esecuzione come definita da Gestione risorse.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct ITopologyExecutionResource;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Itopologyexecutionresource:: GetID](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|  
|[Itopologyexecutionresource:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene generalmente utilizzata per esaminare la topologia del sistema come osservato dal gestore delle risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ITopologyExecutionResource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="getid"></a>Metodo itopologyexecutionresource:: GetID  
 Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco di Gestione risorse per questa risorsa di esecuzione.  
  
##  <a name="getnext"></a>Metodo itopologyexecutionresource:: GetNext  
 Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.  
  
```
virtual ITopologyExecutionResource *GetNext() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione. Se non esistono altri nodi nell'ordine dell'enumerazione del nodo a cui questa risorsa di esecuzione appartiene, tramite questo metodo verrà restituito il valore `NULL`.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

