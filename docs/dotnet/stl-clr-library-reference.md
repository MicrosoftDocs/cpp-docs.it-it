---
title: "Riferimenti della libreria STL/CLR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "directory cliext"
  - "libreria STL/CLR"
  - "STL/CLR, ridistribuzione"
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Riferimenti della libreria STL/CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria STL\/CLR è un assemblaggio della libreria di modelli standard \(STL\), un sottoinsieme della libreria C\+\+ standard, da utilizzare con C\+\+ e Common Language Runtime \(CLR\) di .NET Framework.  Con STL\/CLR è possibile utilizzare tutti i contenitori, gli iteratori e gli algoritmi della libreria STL in un ambiente gestito.  
  
 Per utilizzare STL\/CLR:  
  
-   Le intestazioni di inclusione da **cliext** includono la sottodirectory invece degli equivalenti della solita libreria standard di C\+\+.  
  
-   Qualificare i nomi delle librerie con `cliext::` anziché con `std::`.  
  
 STL\/CLR espone le interfacce e i tipi generici che utilizza negli scenari tra assembly nella **Microsoft.VisualC.STLCLR.dll** dell'assembly .NET.  Questa DLL è inclusa in .NET Framework 3.5.  Se si ridistribuisce un'applicazione che utilizza STL\/CLR, sarà necessario includere .NET Framework 3.5 e tutte le altre librerie di Visual C\+\+ utilizzate dal progetto nella sezione delle dipendenze del progetto di installazione.  
  
## In questa sezione  
 [Spazio dei nomi cliext](../dotnet/cliext-namespace.md)  
 Viene descritto lo spazio dei nomi che contiene tutti i tipi di librerie STL\/CLR.  
  
 [Contenitori STL\/CLR](../dotnet/stl-clr-containers.md)  
 Vengono forniti cenni preliminari sui contenitori individuati nella libreria C\+\+ standard, inclusi i requisiti per gli elementi contenitore, sui tipi di elementi che possono essere utilizzati e sui problemi di proprietà.  
  
 [Requisiti degli elementi del contenitore STL\/CLR](../dotnet/requirements-for-stl-clr-container-elements.md)  
 Vengono descritti i requisiti minimi per tutti i tipi di riferimento che vengono inseriti nei contenitori STL.  
  
 [Procedura: conversione da raccolta .NET a contenitore STL\/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)  
 Viene descritto come convertire una raccolta .NET in un contenitore STL\/CLR.  
  
 [Procedura: conversione da contenitore STL\/CLR a raccolta .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)  
 Viene descritto come convertire un contenitore STL\/CLR in una raccolta .NET.  
  
 [Procedura: esporre un contenitore STL\/CLR da un assembly](../dotnet/how-to-expose-an-stl-clr-container-from-an-assembly.md)  
 Viene illustrato come visualizzare gli elementi di numerosi contenitori STL\/CLR scritti in un assembly C\+\+.  
  
 In questa sezione, vengono inoltre descritti i seguenti componenti di STL\/CLR:  
  
|||  
|-|-|  
|[adapter](../dotnet/adapter-stl-clr.md)|[algorithm](../dotnet/algorithm-stl-clr.md)|  
|[deque](../dotnet/deque-stl-clr.md)|[for each, in](../dotnet/for-each-in.md)|  
|[functional](../dotnet/functional-stl-clr.md)|[hash\_map](../dotnet/hash-map-stl-clr.md)|  
|[hash\_multimap](../dotnet/hash-multimap-stl-clr.md)|[hash\_multiset](../dotnet/hash-multiset-stl-clr.md)|  
|[hash\_set](../dotnet/hash-set-stl-clr.md)|[list](../dotnet/list-stl-clr.md)|  
|[map](../dotnet/map-stl-clr.md)|[multimap](../dotnet/multimap-stl-clr.md)|  
|[multiset](../dotnet/multiset-stl-clr.md)|[numeric](../dotnet/numeric-stl-clr.md)|  
|[priority\_queue](../dotnet/priority-queue-stl-clr.md)|[queue](../dotnet/queue-stl-clr.md)|  
|[set](../dotnet/set-stl-clr.md)|[stack](../dotnet/stack-stl-clr.md)|  
|[utility](../dotnet/utility-stl-clr.md)|[vettore](../dotnet/vector-stl-clr.md)|  
  
## Vedere anche  
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)