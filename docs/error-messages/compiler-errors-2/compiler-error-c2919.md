---
title: "Compiler Error C2919 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2919"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2919"
ms.assetid: 140a6db9-eb48-4c5e-84a7-a09d2653605b
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2919
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': impossibile utilizzare operatori sulla superficie pubblicata di un tipo WinRT  
  
 Il sistema di tipo Windows Runtime non supporta funzioni membro di operatore nella superficie pubblicata di un tipo.  Infatti, non tutti i linguaggi possono utilizzare funzioni membro di operatore.  È possibile creare funzioni membro di operatore private o interne che possono essere chiamate dal codice C\+\+ nella stessa classe o unità di compilazione.  
  
 Per risolvere il problema, rimuovere la funzione membro di operatore dall'interfaccia pubblica o sostituirla con una funzione membro denominata.  Ad esempio, invece di `operator==`, assegnare alla funzione membro il nome `Equals`.