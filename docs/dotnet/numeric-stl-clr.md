---
title: "numeric (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "<cliext/numeric>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/numeric> (intestazione) [STL/CLR]"
  - "<numeric> (intestazione) [STL/CLR]"
  - "funzioni numeriche [STL/CLR]"
ms.assetid: 1dc4d9a3-e734-459c-9678-5d9be0ef4c79
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# numeric (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le funzioni del modello contenitore che eseguono algoritmi disponibili per l'elaborazione numerica.  
  
## Sintassi  
  
```  
#include <cliext/numeric>  
```  
  
## Funzioni  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[accumulate](../dotnet/accumulate-stl-clr.md)|Calcola la somma di tutti gli elementi compresi alcuni valori iniziali in un intervallo specificato elaborando le somme parziali successive, o calcola il risultato dei risultati parziali successivi ottenuti analogamente tramite l'utilizzo di un'operazione binaria specificata diversa da quella di somma.|  
|[adjacent\_difference](../dotnet/adjacent-difference-stl-clr.md)|Calcola le differenze successive tra ogni elemento e il predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione o calcola il risultato di una routine generalizzata in cui l'operazione di differenza è sostituita da un altra operazione binaria specificata.|  
|[inner\_product](../dotnet/inner-product-stl-clr.md)|Calcola la somma del prodotti tra gli elementi di due intervalli e la aggiunge ad un valore iniziale specificato o calcola il risultato di una routine generalizzata in cui la somma e le operazioni binari del prodotto vengono sostituite da altre operazioni binarie specificate.|  
|[partial\_sum](../dotnet/partial-sum-stl-clr.md)|Calcola una serie di somme in un intervallo di input dal primo elemento attraverso l'elemento `i`\-esimo e archivia il risultato di ciascuna somma `i`\-esima di un intervallo di destinazione o calcola il risultato di una routine generalizzata in cui l'operazione di somma viene sostituito da un'altra operazione binaria specificata.|  
  
## Requisiti  
 **Intestazione:** \<cliext\/numeric\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)