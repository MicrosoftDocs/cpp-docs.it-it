---
title: "Avviso del compilatore (livello 1) C4804 | Microsoft Docs"
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
  - "C4804"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4804"
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4804
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operazione': utilizzo non affidabile del tipo 'bool' nell'operazione  
  
 L'avviso viene generato quando si utilizza una variabile o un valore `bool` in modo non convenzionale.  L'avviso C4804 viene visualizzato, ad esempio, se si utilizza l'operatore unario negativo \(**\-**\) o quello di complemento \(`~`\).  L'espressione viene valutata dal compilatore.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4804:  
  
```  
// C4804.cpp  
// compile with: /W1  
  
int main()  
{  
   bool i = true;  
   if (-i)   // C4804, remove the '-' to resolve  
   {  
      i = false;  
   }  
}  
```