---
title: "range_adapter (STL/CLR) | Microsoft Docs"
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
  - "cliext::range_adapter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "range_adapter (classe) [STL/CLR]"
ms.assetid: 3fbe2a65-1216-46a0-a182-422816b80cfb
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# range_adapter (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe modello che esegue il wrapping di una coppia degli iteratori utilizzati per implementare varie la libreria di classi base \(BCL\) collega.  Utilizzare il range\_adapter per modificare un intervallo di STL\/CLR come se fosse una raccolta di BCL.  
  
## Sintassi  
  
```  
template<typename Iter>  
    ref class range_adapter  
        :   public  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<Value>,  
        System::Collections::Generic::ICollection<Value>  
    { ..... };  
```  
  
#### Parametri  
 ITER  
 Il tipo associato con gli iteratori di cui è stato eseguito il wrapping.  
  
## Membri  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[range\_adapter::range\_adapter](../dotnet/range-adapter-range-adapter-stl-clr.md)|Costruisce un oggetto dell'adattatore.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[range\_adapter::operator\=](../dotnet/range-adapter-operator-assign-stl-clr.md)|Sostituisce la coppia archiviata di iteratore.|  
  
## Interfacce  
  
|Interfaccia|Descrizione|  
|-----------------|-----------------|  
|<xref:System.Collections.IEnumerable>|Scorrere gli elementi della raccolta.|  
|<xref:System.Collections.ICollection>|Gestisce un gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Scorrere gli elementi tipizzati nella raccolta.|  
|<xref:System.Collections.Generic.ICollection%601>|Gestisce un gruppo di elementi tipizzati.|  
  
## Note  
 Il range\_adapter archivia una coppia degli iteratori, che a sua volta delimitano una sequenza di elementi.  L'oggetto implementa le interfacce di BCL che consentono di scorrere gli elementi, in ordine.  Utilizzare questa classe modello per modificare gli intervalli di STL\/CLR analogo a quello dei contenitori di BCL.  
  
## Requisiti  
 **Intestazione:**\<cliext\/adapter\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [collection\_adapter](../dotnet/collection-adapter-stl-clr.md)   
 [make\_collection](../dotnet/make-collection-stl-clr.md)