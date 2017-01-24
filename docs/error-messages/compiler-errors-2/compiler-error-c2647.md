---
title: "Errore del compilatore C2647 | Microsoft Docs"
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
  - "C2647"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2647"
ms.assetid: 1034589e-bc3e-41a6-831f-2a1a4b8a2500
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2647
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': impossibile dereferenziare  un 'tipo1' a un 'tipo2'  
  
 L'operando di sinistra di un operatore puntatore a membro, `->*` o `.*`, non può essere convertito in modo implicito in un tipo correlato all'operando di destra.  
  
 Il seguente codice di esempio genera l'errore C2647:  
  
```  
// C2647.cpp  
class C {};  
class D {};  
  
int main() {  
   D d, *pd;  
   C c, *pc = 0;  
   int C::*pmc = 0;  
   pd->*pmc = 0;   // C2647  
   d.*pmc = 0;   // C2647  
  
   // OK  
   pc->*pmc = 0;  
   c.*pmc = 0;  
}  
```