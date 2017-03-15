---
title: Classe task_handle | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ppl/concurrency::task_handle
dev_langs:
- C++
helpviewer_keywords:
- task_handle class
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
caps.latest.revision: 23
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: b113cf519f4326650dc1ed4d20dd2ed00921eda9
ms.lasthandoff: 02/24/2017

---
# <a name="taskhandle-class"></a>Classe task_handle
La classe `task_handle` rappresenta un elemento di lavoro parallelo individuale. Incapsula le istruzioni e i dati richiesti per eseguire un lavoro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<
    typename _Function  
>  
class task_handle : public ::Concurrency::details::_UnrealizedChore;  
```  
  
#### <a name="parameters"></a>Parametri  
 `_Function`  
 Il tipo dell'oggetto funzione che sarà richiamato per eseguire il lavoro rappresentato dal `task_handle` oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore task_handle](#ctor)|Costruisce un nuovo oggetto `task_handle`. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro al costruttore.|  
|[~ task_handle distruttore](#dtor)|Elimina il `task_handle` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore operator)](#task_handle__operator_call)|L'operatore di chiamata di funzione che il runtime richiama per eseguire il lavoro dell'handle di attività.|  
  
## <a name="remarks"></a>Note  
 `task_handle`gli oggetti possono essere utilizzati in combinazione con un `structured_task_group` o un più generale `task_group` oggetto per scomporre il lavoro in attività in parallelo. Per ulteriori informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Si noti che l'autore di un `task_handle` oggetto è responsabile per la gestione della durata dell'oggetto creato `task_handle` oggetto finché non è più necessario per il Runtime di concorrenza. In genere, ciò significa che il `task_handle` oggetto non è necessario distruggere finché non la `wait` o `run_and_wait` metodo il `task_group` o `structured_task_group` a cui viene accodata è stato chiamato.  
  
 `task_handle`gli oggetti vengono in genere utilizzati in combinazione con le espressioni lambda C++. Poiché non si conosce il tipo effettivo dell'espressione lambda, la [make_task](concurrency-namespace-functions.md#make_task) funzione viene in genere utilizzata per creare un `task_handle` oggetto.  
  
 Il runtime crea una copia della funzione lavoro passata a un `task_handle` oggetto. Di conseguenza, le modifiche di stato che si verificano in una funzione dell'oggetto passato a un `task_handle` oggetto non verrà incluso nella copia dell'oggetto funzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `task_handle`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nametaskhandleoperatorcalla-operator"></a><a name="task_handle__operator_call"></a>operator) 

 L'operatore di chiamata di funzione che il runtime richiama per eseguire il lavoro dell'handle di attività.  
  
```  
void operator()() const;

 
```  
  
##  <a name="a-nametaskhandlectora-taskhandle"></a><a name="task_handle__ctor"></a>task_handle 

 Costruisce un nuovo oggetto `task_handle`. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro al costruttore.  
  
```  
task_handle(const _Function& _Func);
```  
  
### <a name="parameters"></a>Parametri  
 `_Func`  
 La funzione che sarà richiamata per eseguire il lavoro rappresentato di `task_handle` oggetto. Può trattarsi di un funtore lambda, un puntatore a una funzione o un qualsiasi oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
### <a name="remarks"></a>Note  
 Il runtime crea una copia della funzione lavoro che viene passato al costruttore. Di conseguenza, le modifiche di stato che si verificano in una funzione dell'oggetto passato a un `task_handle` oggetto non verrà incluso nella copia dell'oggetto funzione.  
  
##  <a name="a-namedtora-taskhandle"></a><a name="dtor"></a>~ task_handle 

 Elimina il `task_handle` oggetto.  
  
```  
~task_handle();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe task_group](task-group-class.md)   
 [Classe structured_task_group](structured-task-group-class.md)

