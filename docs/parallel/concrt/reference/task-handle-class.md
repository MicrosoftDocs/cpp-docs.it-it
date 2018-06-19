---
title: Classe task_handle | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- task_handle
- PPL/concurrency::task_handle
- PPL/concurrency::task_handle::task_handle
dev_langs:
- C++
helpviewer_keywords:
- task_handle class
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3fa72ed19a691015214fe263033e07f8d6a74c34
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33688206"
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
|[task_handle](#ctor)|Costruisce un nuovo oggetto `task_handle`. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro al costruttore.|  
|[~ task_handle distruttore](#dtor)|Elimina definitivamente il `task_handle` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator()](#task_handle__operator_call)|L'operatore di chiamata di funzione che il runtime richiama per svolgere il lavoro dell'handle di attività.|  
  
## <a name="remarks"></a>Note  
 `task_handle` gli oggetti possono essere utilizzati in combinazione con un `structured_task_group` o un più generale `task_group` oggetto per scomporre il lavoro in attività in parallelo. Per ulteriori informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Si noti che l'autore di un `task_handle` oggetto è responsabile per la gestione della durata dell'oggetto creato `task_handle` fino a quando non è più necessario per il Runtime di concorrenza dell'oggetto. In genere, ciò significa che il `task_handle` oggetto non deve distruggere fino a quando non la `wait` o `run_and_wait` metodo il `task_group` o `structured_task_group` per cui è accodato è stato chiamato.  
  
 `task_handle` gli oggetti vengono in genere utilizzati in combinazione con le espressioni lambda C++. Perché non si conosce il tipo effettivo dell'espressione lambda, di [make_task](concurrency-namespace-functions.md#make_task) funzione viene in genere utilizzata per creare un `task_handle` oggetto.  
  
 Il runtime crea una copia della funzione lavoro passata a un `task_handle` oggetto. Pertanto, le modifiche di stato che si verificano in una funzione dell'oggetto passato a un `task_handle` oggetto non verrà visualizzati nella propria copia dell'oggetto funzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `task_handle`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="task_handle__operator_call"></a> operator) 

 L'operatore di chiamata di funzione che il runtime richiama per svolgere il lavoro dell'handle di attività.  
  
```  
void operator()() const;

 
```  
  
##  <a name="task_handle__ctor"></a> task_handle 

 Costruisce un nuovo oggetto `task_handle`. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro al costruttore.  
  
```  
task_handle(const _Function& _Func);
```  
  
### <a name="parameters"></a>Parametri  
 `_Func`  
 La funzione che sarà richiamata per eseguire il lavoro rappresentato dal `task_handle` oggetto. Può trattarsi di una funzione lambda, un puntatore a una funzione o qualsiasi oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
### <a name="remarks"></a>Note  
 Il runtime crea una copia della funzione lavoro passata al costruttore. Pertanto, le modifiche di stato che si verificano in una funzione dell'oggetto passato a un `task_handle` oggetto non verrà visualizzati nella propria copia dell'oggetto funzione.  
  
##  <a name="dtor"></a> ~task_handle 

 Elimina definitivamente il `task_handle` oggetto.  
  
```  
~task_handle();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe task_group](task-group-class.md)   
 [Classe structured_task_group](structured-task-group-class.md)
