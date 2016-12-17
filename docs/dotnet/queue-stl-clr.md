---
title: "queue (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/queue> (intestazione) [STL/CLR]"
  - "<queue> (intestazione) [STL/CLR]"
  - "queue (classe) [STL/CLR]"
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# queue (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi con primo\/uscita in accesso FIFO \(first\-in primo.  Utilizzare l'adattatore `queue` contenitore per gestire un contenitore sottostante come coda.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `Value` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Value^`.  Analogamente, `GContainer` sono gli stessi di `Container` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Container^`.  
  
## Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class queue  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IQueue<GValue, GContainer>  
    { ..... };  
```  
  
#### Parametri  
 Valore  
 Tipo di un elemento nella sequenza controllata.  
  
 Contenitore  
 Tipo del contenitore sottostante.  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[queue::const\_reference](../dotnet/queue-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[queue::container\_type](../dotnet/queue-container-type-stl-clr.md)|Tipo del contenitore sottostante.|  
|[queue::difference\_type](../dotnet/queue-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[queue::generic\_container](../dotnet/queue-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per l'adattatore del contenitore.|  
|[queue::generic\_value](../dotnet/queue-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica per l'adattatore del contenitore.|  
|[queue::reference](../dotnet/queue-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[queue::size\_type](../dotnet/queue-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[queue::value\_type](../dotnet/queue-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[queue::assign](../dotnet/queue-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[queue::back](../dotnet/queue-back-stl-clr.md)|Accede all'ultimo.|  
|[queue::empty](../dotnet/queue-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[queue::front](../dotnet/queue-front-stl-clr.md)|Accede al primo elemento.|  
|[queue::get\_container](../dotnet/queue-get-container-stl-clr.md)|Accede al contenitore sottostante.|  
|[queue::pop](../dotnet/queue-pop-stl-clr.md)|Rimuove il primo elemento.|  
|[queue::push](../dotnet/queue-push-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[queue::queue](../dotnet/queue-queue-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[queue::size](../dotnet/queue-size-stl-clr.md)|Conta il numero di elementi.|  
|[queue::to\_array](../dotnet/queue-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|[queue::back\_item](../dotnet/queue-back-item-stl-clr.md)|Accede all'ultimo.|  
|[queue::front\_item](../dotnet/queue-front-item-stl-clr.md)|Accede al primo elemento.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[queue::operator\=](../dotnet/queue-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[operator\!\= \(queue\)](../dotnet/operator-inequality-queue-stl-clr.md)|Determina se un oggetto di `queue` non equivale a un altro oggetto di `queue`.|  
|[operator\< \(queue\)](../dotnet/operator-less-than-queue-stl-clr.md)|Determina se un oggetto di `queue` è inferiore a un altro oggetto di `queue`.|  
|[operator\<\= \(queue\)](../dotnet/operator-less-or-equal-queue-stl-clr.md)|Determina se un oggetto di `queue` è minore o uguale a un altro oggetto di `queue`.|  
|[operator\=\= \(queue\)](../dotnet/operator-equality-queue-stl-clr.md)|Determina se un oggetto di `queue` equivale a un altro oggetto di `queue`.|  
|[operator\> \(queue\)](../dotnet/operator-greater-than-queue-stl-clr.md)|Determina se un oggetto di `queue` è maggiore di un altro oggetto di `queue`.|  
|[operator\>\= \(queue\)](../dotnet/operator-greater-or-equal-queue-stl-clr.md)|Determina se un oggetto di `queue` è maggiore o uguale a un altro oggetto di `queue`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|IQueueValue\<, contenitore\>|Gestione dell'adattatore di contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza di controllo in un contenitore sottostante, di tipo `Container`, che contiene gli elementi di `Value` e aumenta su richiesta.  L'oggetto limita l'accesso solo a incremento del primo elemento e a prelevare l'ultimo elemento, implementando un primo\/uscita in coda first out prima \(denominata anche una coda FIFO, o semplicemente una coda\).  
  
## Requisiti  
 **Intestazione:**\<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [list](../dotnet/list-stl-clr.md)   
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [stack](../dotnet/stack-stl-clr.md)   
 [vettore](../dotnet/vector-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)