---
title: "pair (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::pair"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pair (classe) [STL/CLR]"
ms.assetid: 3326b4d9-a52a-49e5-8103-9aa5e8b352de
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# pair (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che incapsula una coppia di valori.  
  
## Sintassi  
  
```  
template<typename Value1,  
    typename Value2>  
    ref class pair;  
```  
  
#### Parametri  
 Value1  
 Tipo del primo valore di cui è stato eseguito il wrapping.  
  
 Value2  
 Tipo del secondo valore di cui è stato eseguito il wrapping.  
  
## Membri  
  
|Definizione dei tipi|Descrizione|  
|--------------------------|-----------------|  
|[pair::first\_type](../dotnet/pair-first-type-stl-clr.md)|Tipo del primo valore di cui è stato eseguito il wrapping.|  
|[pair::second\_type](../dotnet/pair-second-type-stl-clr.md)|Tipo del secondo valore di cui è stato eseguito il wrapping.|  
  
|Oggetto membro|Descrizione|  
|--------------------|-----------------|  
|[pair::first](../dotnet/pair-first-stl-clr.md)|Il primo valore memorizzato.|  
|[pair::second](../dotnet/pair-second-stl-clr.md)|Il secondo valore memorizzato.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[pair::pair](../dotnet/pair-pair-stl-clr.md)|Costruisce un oggetto coppia.|  
|[pair::swap](../dotnet/pair-swap-stl-clr.md)|Scambia il contenuto di due coppie.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|[pair::operator\=](../dotnet/pair-operator-assign-stl-clr.md)|Sostituisce la coppia di valori memorizzata.|  
  
## Note  
 L'oggetto contiene una coppia di valori.  Utilizzare questa classe modello per combinare due valori in un singolo oggetto.  Si noti che `cliext::pair` \(descritto qui\) memorizza solo i tipi gestiti; per archiviare una coppia di tipi non gestiti utilizzare `std::pair`, dichiarato in `<utility>`.  
  
## Requisiti  
 **Intestazione:** \<cliext\/utility\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [make\_pair](../dotnet/make-pair-stl-clr.md)