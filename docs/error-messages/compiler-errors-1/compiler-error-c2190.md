---
title: "Errore del compilatore C2190 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2190"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2190"
ms.assetid: 34e15f85-d979-4948-80fc-46c414508a70
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2190
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

primo elenco di parametri più lungo del secondo  
  
 Una funzione C è stata dichiarata una seconda volta con un elenco di parametri più breve.  C non supporta le funzioni con overload.  
  
 Il seguente codice di esempio genera l'errore C2190:  
  
```  
// C2190.c  
// compile with: /Za /c  
void func( int, float );  
void func( int  );   // C2190, different parameter list  
void func2( int  );   // OK  
```