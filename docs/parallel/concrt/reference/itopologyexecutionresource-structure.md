---
title: Struttura ITopologyExecutionResource | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrtrm/concurrency::ITopologyExecutionResource
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
translationtype: Machine Translation
ms.sourcegitcommit: fa774c7f025b581d65c28d65d83e22ff2d798230
ms.openlocfilehash: cc54beb4790c9d2ea5bfcb2c8ffd4bca7dca399e
ms.lasthandoff: 02/24/2017

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
|[Metodo itopologyexecutionresource:: GetID](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|  
|[Metodo itopologyexecutionresource:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene generalmente utilizzata per esaminare la topologia del sistema come osservato dal gestore delle risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ITopologyExecutionResource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namegetida--itopologyexecutionresourcegetid-method"></a><a name="getid"></a>Metodo itopologyexecutionresource:: GetID  
 Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco di Gestione risorse per questa risorsa di esecuzione.  
  
##  <a name="a-namegetnexta--itopologyexecutionresourcegetnext-method"></a><a name="getnext"></a>Metodo itopologyexecutionresource:: GetNext  
 Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.  
  
```
virtual ITopologyExecutionResource *GetNext() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione. Se non esistono altri nodi nell'ordine dell'enumerazione del nodo a cui questa risorsa di esecuzione appartiene, tramite questo metodo verrà restituito il valore `NULL`.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

