---
title: "Classe allocator | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::allocator"
  - "allocator"
  - "memory/std::allocator"
  - "std.allocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator (classe)"
ms.assetid: 3fd58076-56cc-43bb-ad58-b4b7c9c6b410
caps.latest.revision: 20
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe allocator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per matrici di oggetti di tipo **Type**. Un oggetto della classe **allocator** è l'oggetto allocatore predefinito specificato nei costruttori per diverse classi di modello del contenitore della libreria C\+\+ Standard.  
  
## Sintassi  
  
```  
  
template <class   
Type  
>  
class allocator  
  
```  
  
#### Parametri  
 *Tipo*  
 Tipo di oggetto per cui è in corso l'allocazione o la deallocazione dell'archiviazione.  
  
## Note  
 Tutti i contenitori della libreria di modelli standard hanno un parametro di modello che viene impostato su **allocator**. La costruzione di un contenitore con un allocatore personalizzato consente di controllare l'allocazione e il rilascio degli di elementi di tale contenitore.  
  
 Ad esempio, un oggetto allocatore potrebbe allocare spazio di archiviazione in un heap privato o nella memoria condivisa o potrebbe ottimizzare per le dimensioni piccole o grandi dell'oggetto. Potrebbe anche specificare, attraverso le definizioni di tipo fornite, che è possibile accedere agli elementi con speciali oggetti funzione di accesso che gestiscono la memoria condivisa o eseguono operazioni automatiche di Garbage Collection. Di conseguenza, una classe che alloca memoria usando un oggetto allocatore deve usare questi tipi per il puntatore di dichiarazione e gli oggetti di riferimento, proprio come i contenitori della libreria C\+\+ Standard.  
  
 **\(Solo C\_\+\+98\/03\)**Quando si deriva dalla classe allocator, è necessario fornire uno struct [rebind](../Topic/allocator::rebind.md), il cui typedef `_Other` si riferisce alla nuova classe derivata.  
  
 Di conseguenza, un allocatore definisce i tipi seguenti:  
  
-   [pointer](../Topic/allocator::pointer.md) funziona come un puntatore a **Type**.  
  
-   [const\_pointer](../Topic/allocator::const_pointer.md) funziona come un puntatore const a **Type**.  
  
-   [reference](../Topic/allocator::reference.md) funziona come un riferimento a **Type**.  
  
-   [const\_reference](../Topic/allocator::const_reference.md) funziona come un riferimento const a **Type**.  
  
 Questi **Type** specificano il form che puntatori e riferimenti devo accettare per gli elementi allocati. \([allocator::pointer](../Topic/allocator::pointer.md) non è necessariamente identico a **Type**\* per tutti gli oggetti allocatore, anche se ha questa definizione ovvia per la classe **allocator**\).  
  
 **C\+\+11 e versioni successive:**  per abilitare le operazioni di spostamento nell'allocatore, usare l'interfaccia dell'allocatore minimo e implementare il costruttore di copia, gli operatori \=\= e \!\=, allocare e deallocare. Per altre informazioni e un esempio, vedere [Allocatori](../standard-library/allocators.md)  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[allocator](../Topic/allocator::allocator.md)|Costruttori usati per la creazione di oggetti `allocator`.|  
  
### Typedef  
  
|||  
|-|-|  
|[const\_pointer](../Topic/allocator::const_pointer.md)|Tipo che fornisce un puntatore costante al tipo di oggetto gestito dall'allocatore.|  
|[const\_reference](../Topic/allocator::const_reference.md)|Tipo che fornisce un riferimento costante al tipo di oggetto gestito dall'allocatore.|  
|[difference\_type](../Topic/allocator::difference_type.md)|Tipo integrale con segno che può rappresentare la differenza tra valori di puntatori al tipo di oggetto gestito dall'allocatore.|  
|[puntatore](../Topic/allocator::pointer.md)|Tipo che fornisce un puntatore al tipo di oggetto gestito dall'allocatore.|  
|[riferimenti](../Topic/allocator::reference.md)|Tipo che fornisce un riferimento al tipo di oggetto gestito dall'allocatore.|  
|[size\_type](../Topic/allocator::size_type.md)|Un tipo integrale senza segno che può rappresentare la lunghezza di qualsiasi sequenza che un oggetto della classe modello `allocator` può allocare.|  
|[value\_type](../Topic/allocator::value_type.md)|Tipo gestito dall'allocatore.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[indirizzo](../Topic/allocator::address.md)|Trova l'indirizzo di un oggetto il cui valore è specificato.|  
|[allocate](../Topic/allocator::allocate.md)|Alloca un blocco di memoria sufficiente a contenere almeno un numero specificato di elementi.|  
|[construct](../Topic/allocator::construct.md)|Costruisce un tipo specifico di oggetto su un indirizzo specificato che viene inizializzato con un valore specificato.|  
|[deallocate](../Topic/allocator::deallocate.md)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|  
|[elimina definitivamente](../Topic/allocator::destroy.md)|Chiama un distruttore di oggetti senza deallocare la memoria in cui è stato archiviato l'oggetto.|  
|[max\_size](../Topic/allocator::max_size.md)|Restituisce il numero di elementi di tipo `Type` che potrebbe essere assegnata da un oggetto della classe `allocator` prima che la memoria libera si esaurisca.|  
|[rebind](../Topic/allocator::rebind.md)|Una struttura che consente a un allocatore per gli oggetti di un unico tipo di allocare memoria per gli oggetti di un altro tipo.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\=](../Topic/allocator::operator=.md)|Assegna un oggetto `allocator` a un altro oggetto `allocator`.|  
  
## Requisiti  
 **Intestazione:** \<memory\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)