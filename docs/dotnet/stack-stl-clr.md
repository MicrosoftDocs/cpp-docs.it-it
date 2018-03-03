---
title: stack (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::stack
dev_langs:
- C++
helpviewer_keywords:
- <stack> header [STL/CLR]
- <cliext/stack> header [STL/CLR]
- stack class [STL/CLR]
ms.assetid: 6ee96b9f-8a33-4cf7-b7e0-6535c24bdefb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c7f6d9eac97fa1907a0901c725645f29dcdd5d9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stack-stlclr"></a>stack (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone dell'accesso last-in First-Out. Si utilizza l'adapter contenitore `stack` per gestire un contenitore sottostante come uno stack di push-down.  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`. Analogamente, `GContainer` equivale `Container` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Container^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class stack  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IStack<GValue, GContainer>  
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
|[stack::const_reference (STL/CLR)](../dotnet/stack-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[stack::container_type (STL/CLR)](../dotnet/stack-container-type-stl-clr.md)|Tipo del contenitore sottostante.|  
|[stack::difference_type (STL/CLR)](../dotnet/stack-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[stack::generic_container (STL/CLR)](../dotnet/stack-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per l'adapter di contenitore.|  
|[stack::generic_value (STL/CLR)](../dotnet/stack-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per l'adapter di contenitore.|  
|[stack::reference (STL/CLR)](../dotnet/stack-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[stack::size_type (STL/CLR)](../dotnet/stack-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[stack::value_type (STL/CLR)](../dotnet/stack-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[stack::assign (STL/CLR)](../dotnet/stack-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[stack::empty (STL/CLR)](../dotnet/stack-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[stack::get_container (STL/CLR)](../dotnet/stack-get-container-stl-clr.md)|Accede al contenitore sottostante.|  
|[stack::pop (STL/CLR)](../dotnet/stack-pop-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[stack::push (STL/CLR)](../dotnet/stack-push-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[stack::size (STL/CLR)](../dotnet/stack-size-stl-clr.md)|Conta il numero di elementi.|  
|[stack::stack (STL/CLR)](../dotnet/stack-stack-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[stack::top (STL/CLR)](../dotnet/stack-top-stl-clr.md)|Accede all'ultimo elemento.|  
|[stack::to_array (STL/CLR)](../dotnet/stack-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[stack::top_item (STL/CLR)](../dotnet/stack-top-item-stl-clr.md)|Accede all'ultimo elemento.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[stack::operator= (STL/CLR)](../dotnet/stack-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator!= (stack) (STL/CLR)](../dotnet/operator-inequality-stack-stl-clr.md)|Determina se un `stack` oggetto non è uguale a un altro `stack` oggetto.|  
|[operator< (stack) (STL/CLR)](../dotnet/operator-less-than-stack-stl-clr.md)|Determina se un `stack` oggetto è minore di un altro `stack` oggetto.|  
|[operator<= (stack) (STL/CLR)](../dotnet/operator-less-or-equal-stack-stl-clr.md)|Determina se un `stack` oggetto è minore o uguale a un altro `stack` oggetto.|  
|[operator== (stack) (STL/CLR)](../dotnet/operator-equality-stack-stl-clr.md)|Determina se un `stack` è uguale a un altro oggetto `stack` oggetto.|  
|[operator> (stack) (STL/CLR)](../dotnet/operator-greater-than-stack-stl-clr.md)|Determina se un `stack` è maggiore di un altro oggetto `stack` oggetto.|  
|[operator>= (stack) (STL/CLR)](../dotnet/operator-greater-or-equal-stack-stl-clr.md)|Determina se un `stack` oggetto è maggiore o uguale a un altro `stack` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|IStack\<valore, contenitore >|Gestire gli adattatori del contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza da esso controllata tramite un contenitore sottostante, di tipo `Container`, che archivia `Value` elementi e aumento delle dimensioni su richiesta. L'oggetto limita l'accesso a push e si estraggono solo l'ultimo elemento, l'implementazione di una coda last-in First-Out (noto anche come una coda LIFO o stack).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/stack >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [coda (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)