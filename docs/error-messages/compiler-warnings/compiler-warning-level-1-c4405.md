---
title: "Avviso del compilatore (livello 1) C4405 | Microsoft Docs"
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
  - "C4405"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4405"
ms.assetid: 155c64d6-58ae-4455-b61f-ccd711c5da96
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4405
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': l'identificatore è una parola riservata  
  
 Una parola riservata per il codice assembly inline viene utilizzata come nome di variabile.  Questa operazione può provocare risultati imprevisti.  Per non visualizzare questo avviso, evitare di denominare le variabili con parole riservate per il codice assembly inline.  Il seguente codice di esempio genera l'errore C4405:  
  
```  
// C4405.cpp  
// compile with: /W1  
// processor: x86  
void func1() {  
   int mov = 0, i = 0;  
   _asm {  
      mov mov, 0;   // C4405  
      // instead, try ..  
      // mov i, 0;  
   }  
}  
  
int main() {  
}  
```