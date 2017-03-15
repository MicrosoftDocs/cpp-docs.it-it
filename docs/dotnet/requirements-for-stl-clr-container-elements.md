---
title: "Requisiti degli elementi del contenitore STL/CLR | Microsoft Docs"
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
  - "contenitori, STL"
  - "contenitori, STL/CLR"
  - "libreria C++ standard, contenitore di classi di modello"
  - "STL/CLR, contenitori"
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Requisiti degli elementi del contenitore STL/CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tutti i tipi di riferimento che vengono inseriti nei contenitori di STL\/CLR, devono essere come minimo, i seguenti elementi:  
  
-   Un costruttore di copia public.  
  
-   Un operatore di assegnazione pubblico.  
  
-   Un distruttore pubblico.  
  
 Inoltre, i contenitori associativi come [set](../dotnet/set-stl-clr.md) e [mappa](../dotnet/map-stl-clr.md) devono avere un operatore di confronto pubblico definito, che è `operator<` per impostazione predefinita.  Alcune operazioni sui contenitori potrebbe inoltre essere necessario un costruttore predefinito pubblico e un operatore equivalente pubblico da definire.  
  
 Come i tipi di riferimento, tipi di valore e un handle ai tipi di riferimento che devono essere inseriti in un contenitore associativo devono avere un operatore di confronto come `operator<` definita.  I requisiti per un costruttore di copia public, un operatore di assegnazione pubblico e un distruttore pubblico non disponibili per i tipi di valore o un handle ai tipi di riferimento.  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)