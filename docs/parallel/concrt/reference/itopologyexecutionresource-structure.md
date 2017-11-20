---
title: Struttura ITopologyExecutionResource | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ITopologyExecutionResource
- CONCRTRM/concurrency::ITopologyExecutionResource
- CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetId
- CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetNext
dev_langs: C++
helpviewer_keywords: ITopologyExecutionResource structure
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9ffe0e2d8f4c26274a71082bec2cecaf19acb1af
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 Questa interfaccia viene generalmente utilizzata per analizzare la topologia del sistema, come rilevato dal gestore delle risorse.  
  
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
