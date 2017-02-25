---
title: "Errore del compilatore C2448 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2448"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2448"
ms.assetid: e255df3c-f861-4b4d-a193-8768cef061a5
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2448
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': l'inizializzatore di tipo funzione sembra essere una definizione di funzione  
  
 La definizione di funzione non è corretta.  
  
 Questo errore può essere causato da un elenco formale del linguaggio C di tipo obsoleto.  
  
 Il seguente codice di esempio genera l'errore C2448:  
  
```  
// C2448.cpp  
void func(c)  
   int c;  
{}   // C2448  
```