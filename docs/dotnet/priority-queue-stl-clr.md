---
title: "priority_queue (STL/CLR) | Microsoft Docs"
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
  - "cliext::priority_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/queue> (intestazione) [STL/CLR]"
  - "<queue> (intestazione) [STL/CLR]"
  - "priority_queue (classe) [STL/CLR]"
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# priority_queue (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza ordinata in base alla lunghezza di elementi che dispone di accesso limitati.  Utilizzare l'adattatore `priority_queue` contenitore per gestire un contenitore sottostante come coda delle priorità.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `Value` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Value^`.  Analogamente, `GContainer` sono gli stessi di `Container` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Container^`.  
  
## Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class priority_queue  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IPriorityQueue<GValue, GContainer>  
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
|[priority\_queue::const\_reference](../dotnet/priority-queue-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[priority\_queue::container\_type](../dotnet/priority-queue-container-type-stl-clr.md)|Tipo del contenitore sottostante.|  
|[priority\_queue::difference\_type](../dotnet/priority-queue-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[priority\_queue::generic\_container](../dotnet/priority-queue-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per l'adattatore del contenitore.|  
|[priority\_queue::generic\_value](../dotnet/priority-queue-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica per l'adattatore del contenitore.|  
|[priority\_queue::reference](../dotnet/priority-queue-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[priority\_queue::size\_type](../dotnet/priority-queue-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[priority\_queue::value\_compare](../dotnet/priority-queue-value-compare-stl-clr.md)|Il delegato dell'ordine per due elementi.|  
|[priority\_queue::value\_type](../dotnet/priority-queue-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[priority\_queue::assign](../dotnet/priority-queue-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[priority\_queue::empty](../dotnet/priority-queue-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[priority\_queue::get\_container](../dotnet/priority-queue-get-container-stl-clr.md)|Accede al contenitore sottostante.|  
|[priority\_queue::pop](../dotnet/priority-queue-pop-stl-clr.md)|Rimuove l'elemento di hghest\- priorità.|  
|[priority\_queue::priority\_queue](../dotnet/priority-queue-priority-queue-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[priority\_queue::push](../dotnet/priority-queue-push-stl-clr.md)|Aggiungere un nuovo elemento.|  
|[priority\_queue::size](../dotnet/priority-queue-size-stl-clr.md)|Conta il numero di elementi.|  
|[priority\_queue::top](../dotnet/priority-queue-top-stl-clr.md)|Accede all'elemento priorità più elevata.|  
|[priority\_queue::to\_array](../dotnet/priority-queue-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
|[priority\_queue::value\_comp](../dotnet/priority-queue-value-comp-stl-clr.md)|Copia il delegato di ordinamento per due elementi.|  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|[priority\_queue::top\_item](../dotnet/priority-queue-top-item-stl-clr.md)|Accede all'elemento priorità più elevata.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[priority\_queue::operator\=](../dotnet/priority-queue-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|IPriorityQueueValue\<, contenitore\>|Gestione dell'adattatore di contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza di controllo in un contenitore sottostante, di tipo `Container`, che contiene gli elementi di `Value` e aumenta su richiesta.  Tiene la sequenza ordinata come heap, l'elemento con priorità più alta l'elemento superiore\) facilmente accessibile e rimovibile.  L'oggetto l'accesso a incremento degli elementi nuovi e a prelevare appena l'elemento priorità più elevata, che implementa una coda delle priorità.  
  
 L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [priority\_queue::value\_compare](../dotnet/priority-queue-value-compare-stl-clr.md).  È possibile specificare l'oggetto delegato archiviato quando si crea il priority\_queue; se non si specifica oggetto delegato, l'impostazione predefinita è il confronto `operator<(value_type, value_type)`.  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [priority\_queue::value\_comp](../dotnet/priority-queue-value-comp-stl-clr.md)`()`.  
  
 Tale oggetto delegato deve imporre un ordine debole rispetto ai valori di tipo [priority\_queue::value\_type](../dotnet/priority-queue-value-type-stl-clr.md).  Ciò significa, per i due chiavi `X` e `Y`:  
  
 `value_comp()(X, Y)` restituisce lo stesso risultato booleano a ogni chiamata.  
  
 Se `value_comp()(X, Y)` è true, in `value_comp()(Y, X)` deve essere false.  
  
 Se `value_comp()(X, Y)` è true, in `X` sarebbe ordinato prima di `Y`.  
  
 Se `!value_comp()(X, Y) && !value_comp()(Y, X)` è true, in `X` e `Y` causate da ordine equivalente.  
  
 Per qualsiasi elemento `X` che precede `Y` sequenza selezionata, `key_comp()(Y, X)` è false. \(Per l'oggetto delegato predefinito, chiavi non diminuiscono mai il valore\).  
  
 L'elemento priorità più elevata viene convertita in uno degli elementi che non è stato ordinato prima di qualsiasi altro elemento.  
  
 Poiché il contenitore sottostante gestisce gli elementi ordinati come heap:  
  
 Il contenitore deve supportare gli iteratori di accesso casuale.  
  
 Gli elementi con ordine equivalente possono essere prelievo in un ordine diverso che sono stati stack. \(L'ordine non diventa stabile.\)  
  
 Pertanto, i candidati per il contenitore sottostante includono [deque](../dotnet/deque-stl-clr.md) e [vettore](../dotnet/vector-stl-clr.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/queue\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [queue](../dotnet/queue-stl-clr.md)   
 [stack](../dotnet/stack-stl-clr.md)   
 [vettore](../dotnet/vector-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)