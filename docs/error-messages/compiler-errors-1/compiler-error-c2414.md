---
title: "Errore del compilatore C2414 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2414"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2414"
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2414
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

numero di operandi non valido  
  
### Possibili cause  
  
1.  Il codice operativo non supporta il numero di operandi utilizzati.  Consultare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.  
  
2.  Un processore più recente supporta l'istruzione con un numero diverso di operandi.  Impostare l'opzione [\/arch \(Architettura minima della CPU\)](../../build/reference/arch-minimum-cpu-architecture.md) in modo che utilizzi il processore più aggiornato.