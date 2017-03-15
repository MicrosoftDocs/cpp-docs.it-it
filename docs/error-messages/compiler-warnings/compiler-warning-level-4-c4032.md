---
title: "Avviso del compilatore (livello 4) C4032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4032"
ms.assetid: 70dd0c85-0239-43f9-bb06-507f6a57d206
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4032
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il parametro formale 'numero' ha un tipo diverso quando promosso  
  
 Il tipo di parametro non è compatibile, attraverso le promozioni predefinite, con il tipo in una dichiarazione precedente.  
  
 Si tratta di un errore in C ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\) e di un avviso nelle estensioni Microsoft \(\/Ze\).  
  
## Esempio  
  
```  
// C4032.c  
// compile with: /W4  
void func();  
void func(char);   // C4032, char promotes to int  
  
int main()  
{  
}  
```