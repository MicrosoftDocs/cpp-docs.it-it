---
title: coda (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::queue
dev_langs:
- C++
helpviewer_keywords:
- <queue> header [STL/CLR]
- queue class [STL/CLR]
- <cliext/queue> header [STL/CLR]
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7e65d5a364f5886df2bad976e3c34dc57266b70f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="queue-stlclr"></a>queue (STL/CLR)
La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che dispone dell'accesso first-in First-Out. Si utilizza l'adapter contenitore `queue` per gestire un contenitore sottostante come una coda.  
  
 Nella sezione successiva, `GValue` equivale `Value` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Value^`. Analogamente, `GContainer` equivale `Container` , a meno che quest'ultimo è un tipo riferimento, nel qual caso è `Container^`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class queue  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IQueue<GValue, GContainer>  
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
|[queue::const_reference (STL/CLR)](../dotnet/queue-const-reference-stl-clr.md)|Tipo di un riferimento costante a un elemento.|  
|[queue::container_type (STL/CLR)](../dotnet/queue-container-type-stl-clr.md)|Tipo del contenitore sottostante.|  
|[queue::difference_type (STL/CLR)](../dotnet/queue-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[queue::generic_container (STL/CLR)](../dotnet/queue-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per l'adapter di contenitore.|  
|[queue::generic_value (STL/CLR)](../dotnet/queue-generic-value-stl-clr.md)|Il tipo di un elemento per l'interfaccia generica per l'adapter di contenitore.|  
|[queue::reference (STL/CLR)](../dotnet/queue-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[queue::size_type (STL/CLR)](../dotnet/queue-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[queue::value_type (STL/CLR)](../dotnet/queue-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[queue::assign (STL/CLR)](../dotnet/queue-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[queue::back (STL/CLR)](../dotnet/queue-back-stl-clr.md)|Accede all'ultimo elemento.|  
|[queue::empty (STL/CLR)](../dotnet/queue-empty-stl-clr.md)|Verifica se sono presenti o meno degli elementi.|  
|[queue::front (STL/CLR)](../dotnet/queue-front-stl-clr.md)|Accede al primo elemento.|  
|[queue::get_container (STL/CLR)](../dotnet/queue-get-container-stl-clr.md)|Accede al contenitore sottostante.|  
|[queue::pop (STL/CLR)](../dotnet/queue-pop-stl-clr.md)|Rimuove il primo elemento.|  
|[queue::push (STL/CLR)](../dotnet/queue-push-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[queue::queue (STL/CLR)](../dotnet/queue-queue-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[queue::size (STL/CLR)](../dotnet/queue-size-stl-clr.md)|Conta il numero di elementi.|  
|[queue::to_array (STL/CLR)](../dotnet/queue-to-array-stl-clr.md)|La sequenza controllata viene copiata in una nuova matrice.|  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|[queue::back_item (STL/CLR)](../dotnet/queue-back-item-stl-clr.md)|Accede all'ultimo elemento.|  
|[queue::front_item (STL/CLR)](../dotnet/queue-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[queue::operator= (STL/CLR)](../dotnet/queue-operator-assign-stl-clr.md)|Sostituisce la sequenza controllata.|  
|[operator!= (queue) (STL/CLR)](../dotnet/operator-inequality-queue-stl-clr.md)|Determina se un `queue` oggetto non è uguale a un altro `queue` oggetto.|  
|[operator< (queue) (STL/CLR)](../dotnet/operator-less-than-queue-stl-clr.md)|Determina se un `queue` oggetto è minore di un altro `queue` oggetto.|  
|[operator<= (queue) (STL/CLR)](../dotnet/operator-less-or-equal-queue-stl-clr.md)|Determina se un `queue` oggetto è minore o uguale a un altro `queue` oggetto.|  
|[operator== (queue) (STL/CLR)](../dotnet/operator-equality-queue-stl-clr.md)|Determina se un `queue` è uguale a un altro oggetto `queue` oggetto.|  
|[operator> (queue) (STL/CLR)](../dotnet/operator-greater-than-queue-stl-clr.md)|Determina se un `queue` è maggiore di un altro oggetto `queue` oggetto.|  
|[operator>= (queue) (STL/CLR)](../dotnet/operator-greater-or-equal-queue-stl-clr.md)|Determina se un `queue` oggetto è maggiore o uguale a un altro `queue` oggetto.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|ICoda\<valore, contenitore >|Gestire gli adattatori del contenitore generico.|  
  
## <a name="remarks"></a>Note  
 L'oggetto alloca e libera spazio di archiviazione per la sequenza da esso controllata tramite un contenitore sottostante, di tipo `Container`, che archivia `Value` elementi e aumento delle dimensioni su richiesta. L'oggetto limita l'accesso alla pressione solo il primo elemento e si estraggono l'ultimo elemento, che implementa un first in First-Out coda (noto anche come una coda FIFO, o semplicemente una coda).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/code >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)