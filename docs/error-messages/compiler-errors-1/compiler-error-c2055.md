---
title: "Errore del compilatore C2055 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2055"
ms.assetid: 6cec79cc-6bec-443f-9897-fbf5452718c7
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2055
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto un elenco di parametri formali. Trovato un elenco di tipi  
  
 Una definizione di funzione contiene un elenco di tipi di parametri anziché un elenco di parametri formali.  La specifica ANSI C richiede la denominazione dei parametri formali, a meno che non siano di tipo void o puntini di sospensione \(`...`\).  
  
 Il seguente codice di esempio genera l'errore C2055:  
  
```  
// C2055.c  
// compile with: /c  
void func(int, char) {}  // C2055  
void func (int i, char c) {}   // OK  
```