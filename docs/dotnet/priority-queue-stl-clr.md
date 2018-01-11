---
title: priority_queue (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::priority_queue
dev_langs: C++
helpviewer_keywords:
- priority_queue class [STL/CLR]
- <queue> header [STL/CLR]
- <cliext/queue> header [STL/CLR]
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b7d1459da07f7e392a2da1fbf5d6e9d72c8f4653
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="priorityqueue-stlclr"></a>priority_queue (STL/CLR)
La classe modello descrive un oggetto che controlla una lunghezza variabile ordinati in sequenza di elementi che ha accesso limitato. Si utilizza l'adapter contenitore `priority_queue` per gestire un contenitore sottostante come una coda di priorità.  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`. Analogamente, `GContainer` equivale `Container` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Container^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class priority_queue  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IPriorityQueue<GValue, GContainer>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
 Contenitore  
 Tipo del contenitore sottostante.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[priority_queue::const_reference (STL/CLR)](../dotnet/priority-queue-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[priority_queue::container_type (STL/CLR)](../dotnet/priority-queue-container-type-stl-clr.md)|Tipo del contenitore sottostante.|  
|[priority_queue::difference_type (STL/CLR)](../dotnet/priority-queue-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[priority_queue::generic_container (STL/CLR)](../dotnet/priority-queue-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per l'adapter di contenitore.|  
|[priority_queue::generic_value (STL/CLR)](../dotnet/priority-queue-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per l'adapter di contenitore.|  
|[priority_queue::reference (STL/CLR)](../dotnet/priority-queue-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[priority_queue::size_type (STL/CLR)](../dotnet/priority-queue-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[priority_queue::value_compare (STL/CLR)](../dotnet/priority-queue-value-compare-stl-clr.md)|Il delegato di ordinamento per due elementi.|  
|[priority_queue::value_type (STL/CLR)](../dotnet/priority-queue-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[priority_queue::assign (STL/CLR)](../dotnet/priority-queue-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[priority_queue::empty (STL/CLR)](../dotnet/priority-queue-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[priority_queue::get_container (STL/CLR)](../dotnet/priority-queue-get-container-stl-clr.md)|Accede al contenitore sottostante.|  
|[priority_queue::pop (STL/CLR)](../dotnet/priority-queue-pop-stl-clr.md)|Rimuove l'elemento hghest priorità.|  
|[priority_queue::priority_queue (STL/CLR)](../dotnet/priority-queue-priority-queue-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[priority_queue::push (STL/CLR)](../dotnet/priority-queue-push-stl-clr.md)|Aggiunge un nuovo elemento.|  
|[priority_queue::size (STL/CLR)](../dotnet/priority-queue-size-stl-clr.md)|Conta il numero di elementi.|  
|[priority_queue::top (STL/CLR)](../dotnet/priority-queue-top-stl-clr.md)|Accede all'elemento di priorità più alta.|  
|[priority_queue::to_array (STL/CLR)](../dotnet/priority-queue-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
|[priority_queue::value_comp (STL/CLR)](../dotnet/priority-queue-value-comp-stl-clr.md)|Copia il delegato di ordinamento per due elementi.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[priority_queue::top_item (STL/CLR)](../dotnet/priority-queue-top-item-stl-clr.md)|Accede all'elemento di priorità più alta.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[priority_queue::operator= (STL/CLR)](../dotnet/priority-queue-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|IPriorityQueue\<valore, contenitore >|Gestire gli adattatori del contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza da esso controllata tramite un contenitore sottostante, di tipo `Container`, che archivia `Value` elementi e aumento delle dimensioni su richiesta. Mantiene la sequenza ordinata come un heap, con la priorità più alta elemento (superiore) facilmente accessibile e rimovibile. L'oggetto limita l'accesso per l'inserimento di nuovi elementi e si estraggono solo l'elemento di priorità più alta, implementazione di una coda di priorità.  
  
 L'oggetto ordina la sequenza da esso controllata chiamando un oggetto delegato archiviato di tipo [priority_queue::value_compare (STL/CLR)](../dotnet/priority-queue-value-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce la classe priority_queue; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(value_type, value_type)`. L'accesso all'oggetto archiviato chiamando la funzione membro [priority_queue::value_comp (STL/CLR)](../dotnet/priority-queue-value-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordinamento debole strict con valori di tipo [priority_queue:: value_type (STL/CLR)](../dotnet/priority-queue-value-type-stl-clr.md). Pertanto, per le due chiavi `X` e `Y`:  
  
 `value_comp()(X, Y)`Restituisce il valore booleano stesso risultato a ogni chiamata.  
  
 Se `value_comp()(X, Y)` è true, `value_comp()(Y, X)` deve essere false.  
  
 Se `value_comp()(X, Y)` è true, `X` viene definito per essere ordinati prima `Y`.  
  
 Se `!value_comp()(X, Y) && !value_comp()(Y, X)` è true, `X` e `Y` rientrano hanno un ordinamento equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. (Per l'oggetto delegato predefinito, le chiavi non diminuisce mai valore.)  
  
 In questo modo l'elemento con priorità più elevata è uno degli elementi che non viene ordinato prima di qualsiasi altro elemento.  
  
 Poiché il contenitore sottostante conserva gli elementi ordinati come heap:  
  
 Il contenitore deve supportare gli iteratori ad accesso casuale.  
  
 Gli elementi con un ordinamento equivalente possono essere estratti in un ordine diverso rispetto a cui sono state inserite. (L'ordinamento non è stabile).  
  
 Di conseguenza, per il contenitore sottostante inclusi [deque (STL/CLR)](../dotnet/deque-stl-clr.md) e [vettore (STL/CLR)](../dotnet/vector-stl-clr.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [coda (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)