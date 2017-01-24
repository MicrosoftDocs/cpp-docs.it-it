---
title: "Errore del compilatore C2657 | Microsoft Docs"
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
  - "C2657"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2657"
ms.assetid: f7cf29a9-684a-4605-9469-ecfee9ba4b03
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2657
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

trovato 'classe::\*' all'inizio di un'istruzione. Si è omesso di specificare un tipo?  
  
 La riga inizia con un identificatore di puntatore a membro.  
  
 Questo errore può essere causato da un identificatore di tipo mancante nella dichiarazione di un puntatore a un membro.  
  
 Il seguente codice di esempio genera l'errore C2657:  
  
```  
// C2657.cpp  
class C {};  
int main() {  
   C::* pmc1;        // C2657  
   int C::* pmc2;   // OK  
}  
```