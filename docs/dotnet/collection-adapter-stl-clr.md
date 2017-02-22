---
title: "collection_adapter (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::collection_adapter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collection_adapter (classe) [STL/CLR]"
ms.assetid: 31964058-1f50-48bf-82c2-b0b3cc8a7887
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# collection_adapter (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping di una raccolta .NET da utilizzare come un contenitore STL\/CLR.  Un `collection_adapter` è una classe modello che descrive un oggetto contenitore semplice di STL\/CLR.  Esegue il wrapping di un interfaccia della libreria di classi di base \(BCL\) e restituisce una coppia di iteratori utilizzati per manipolare la sequenza controllata.  
  
## Sintassi  
  
```  
template<typename Coll>  
    ref class collection_adapter;  
  
template<>  
    ref class collection_adapter<  
        System::Collections::ICollection>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IEnumerable>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IList>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IDictionary>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::ICollection<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IEnumerable<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IList<Value>>;  
template<typename Key,  
    typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IDictionary<Key, Value>>;  
```  
  
#### Parametri  
 Coll  
 Tipo della raccolta sottoposta a wrapping.  
  
## Specializzazioni  
  
|Specializzazione|Descrizione|  
|----------------------|-----------------|  
|IEnumerable|Mettere in sequenza gli elementi.|  
|ICollection|Gestisce un gruppo di elementi .|  
|IList|Gestisce un gruppo di elementi ordinati.|  
|IDictionary|Gestisce un insieme di coppie {chiave, valore}.|  
|IEnumerable\<Value\>|Mettere in sequenza gli elementi tipizzati.|  
|ICollection\<Value\>|Gestisce un gruppo di elementi tipizzati.|  
|IList\<Value\>|Gestisce un gruppo di elementi tipizzati.|  
|IDictionary\<Value\>|Gestisce un insieme di coppie {chiave, valore} tipizzate.|  
  
## Membri  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|[collection\_adapter::difference\_type](../dotnet/collection-adapter-difference-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[collection\_adapter::iterator](../dotnet/collection-adapter-iterator-stl-clr.md)|Il tipo di un iteratore della sequenza controllata.|  
|[collection\_adapter::key\_type](../dotnet/collection-adapter-key-type-stl-clr.md)|Il tipo di chiave del dizionario.|  
|[collection\_adapter::mapped\_type](../dotnet/collection-adapter-mapped-type-stl-clr.md)|Il tipo di valore del dizionario.|  
|[collection\_adapter::reference](../dotnet/collection-adapter-reference-stl-clr.md)|Il tipo di un riferimento a un elemento.|  
|[collection\_adapter::size\_type](../dotnet/collection-adapter-size-type-stl-clr.md)|Il tipo di una distanza con segno tra due elementi.|  
|[collection\_adapter::value\_type](../dotnet/collection-adapter-value-type-stl-clr.md)|Il tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[collection\_adapter::base](../dotnet/collection-adapter-base-stl-clr.md)|Definisce l'interfaccia BCL di cui è stato eseguito il wrapping.|  
|[collection\_adapter::begin](../dotnet/collection-adapter-begin-stl-clr.md)|Definisce l'inizio della sequenza controllata.|  
|[collection\_adapter::collection\_adapter](../dotnet/collection-adapter-collection-adapter-stl-clr.md)|Costruisce un oggetto adattatore .|  
|[collection\_adapter::end](../dotnet/collection-adapter-end-stl-clr.md)|Definisce la fine della sequenza controllata.|  
|[collection\_adapter::size](../dotnet/collection-adapter-size-stl-clr.md)|Conta il numero di elementi.|  
|[collection\_adapter::swap](../dotnet/collection-adapter-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[collection\_adapter::operator\=](../dotnet/collection-adapter-operator-assign-stl-clr.md)|Sostituisce il gestore BCL memorizzato.|  
  
## Note  
 Utilizzare questa classe modello per manipolare un contenitore BCL come un contenitore STL\/CLR.  Il `collection_adapter` memorizza il gestore di un'interfaccia BCL, che a sua volta controlla una sequenza di elementi.  Un oggetto `collection_adapter` `X` restituisce una coppia di iteratori di input `X.begin()` e `X.end()` utilizzati per visualizzare gli elementi, in ordine.  Alcune delle specializzazioni consentono inoltre di scrivere `X.size()` per determinare la lunghezza della sequenza controllata.  
  
## Requisiti  
 **Intestazione:** \<cliext\/adapter\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [range\_adapter](../dotnet/range-adapter-stl-clr.md)   
 [make\_collection](../dotnet/make-collection-stl-clr.md)