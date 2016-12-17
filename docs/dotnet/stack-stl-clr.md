---
title: "stack (STL/CLR) | Microsoft Docs"
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
  - "cliext::stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/stack> (intestazione) [STL/CLR]"
  - "<stack> (intestazione) [STL/CLR]"
  - "stack (classe) [STL/CLR]"
ms.assetid: 6ee96b9f-8a33-4cf7-b7e0-6535c24bdefb
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# stack (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che comandi di una sequenza variare lunghezza di elementi con ultimo\- nel log in first out.  Utilizzare l'adattatore `stack` contenitore per gestire un contenitore sottostante come stack premuto.  
  
 In descrizione di seguito, `GValue` sono gli stessi di `Value` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Value^`.  Analogamente, `GContainer` sono gli stessi di `Container` eccetto l'ultimo sia un tipo di riferimento, nel qual caso viene `Container^`.  
  
## Sintassi  
  
```  
template<typename Value,  
    typename Container>  
    ref class stack  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IStack<GValue, GContainer>  
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
|[stack::const\_reference](../dotnet/stack-const-reference-stl-clr.md)|Il tipo di un riferimento costante a un elemento.|  
|[stack::container\_type](../dotnet/stack-container-type-stl-clr.md)|Tipo del contenitore sottostante.|  
|[stack::difference\_type](../dotnet/stack-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[stack::generic\_container](../dotnet/stack-generic-container-stl-clr.md)|Il tipo dell'interfaccia generica per l'adattatore del contenitore.|  
|[stack::generic\_value](../dotnet/stack-generic-value-stl-clr.md)|Il tipo di elemento dell'interfaccia generica per l'adattatore del contenitore.|  
|[stack::reference](../dotnet/stack-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[stack::size\_type](../dotnet/stack-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[stack::value\_type](../dotnet/stack-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[stack::assign](../dotnet/stack-assign-stl-clr.md)|Sostituisce tutti gli elementi.|  
|[stack::empty](../dotnet/stack-empty-stl-clr.md)|Consente di verificare se non sono presenti elementi.|  
|[stack::get\_container](../dotnet/stack-get-container-stl-clr.md)|Accede al contenitore sottostante.|  
|[stack::pop](../dotnet/stack-pop-stl-clr.md)|Rimuove l'ultimo elemento.|  
|[stack::push](../dotnet/stack-push-stl-clr.md)|Aggiunge un nuovo ultimo elemento.|  
|[stack::size](../dotnet/stack-size-stl-clr.md)|Conta il numero di elementi.|  
|[stack::stack](../dotnet/stack-stack-stl-clr.md)|Costruisce un oggetto contenitore.|  
|[stack::top](../dotnet/stack-top-stl-clr.md)|Accede all'ultimo.|  
|[stack::to\_array](../dotnet/stack-to-array-stl-clr.md)|Copia la sequenza selezionata una nuova matrice.|  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|[stack::top\_item](../dotnet/stack-top-item-stl-clr.md)|Accede all'ultimo.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[stack::operator\=](../dotnet/stack-operator-assign-stl-clr.md)|Sostituisce la sequenza selezionata.|  
|[operator\!\= \(stack\)](../dotnet/operator-inequality-stack-stl-clr.md)|Determina se un oggetto di `stack` non equivale a un altro oggetto di `stack`.|  
|[operator\< \(stack\)](../dotnet/operator-less-than-stack-stl-clr.md)|Determina se un oggetto di `stack` è inferiore a un altro oggetto di `stack`.|  
|[operator\<\= \(stack\)](../dotnet/operator-less-or-equal-stack-stl-clr.md)|Determina se un oggetto di `stack` è minore o uguale a un altro oggetto di `stack`.|  
|[operator\=\= \(stack\)](../dotnet/operator-equality-stack-stl-clr.md)|Determina se un oggetto di `stack` equivale a un altro oggetto di `stack`.|  
|[operator\> \(stack\)](../dotnet/operator-greater-than-stack-stl-clr.md)|Determina se un oggetto di `stack` è maggiore di un altro oggetto di `stack`.|  
|[operator\>\= \(stack\)](../dotnet/operator-greater-or-equal-stack-stl-clr.md)|Determina se un oggetto di `stack` è maggiore o uguale a un altro oggetto di `stack`.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.ICloneable>|Duplicare un oggetto.|  
|IStackValue\<, contenitore\>|Gestione dell'adattatore di contenitore generico.|  
  
## Note  
 L'oggetto alloca e libera la memoria per la sequenza di controllo in un contenitore sottostante, di tipo `Container`, che contiene gli elementi di `Value` e aumenta su richiesta.  L'oggetto l'accesso a incremento e visualizzare solo dell'ultimo elemento, che implementa a last in first coda first out \(denominata anche una coda, LIFO o lo stack.  
  
## Requisiti  
 **Intestazione:**\<cliext\/stack\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [deque](../dotnet/deque-stl-clr.md)   
 [list](../dotnet/list-stl-clr.md)   
 [priority\_queue](../dotnet/priority-queue-stl-clr.md)   
 [queue](../dotnet/queue-stl-clr.md)   
 [vettore](../dotnet/vector-stl-clr.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)