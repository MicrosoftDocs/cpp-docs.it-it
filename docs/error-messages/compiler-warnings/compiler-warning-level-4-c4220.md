---
title: "Avviso del compilatore (livello 4) C4220 | Microsoft Docs"
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
  - "C4220"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4220"
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4220
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

varargs corrisponde ai parametri rimanenti  
  
 Nelle estensioni Microsoft predefinite \(\/Ze\), un puntatore a una funzione corrisponde a un puntatore a una funzione con argomenti simili, ma variabili.  
  
## Esempio  
  
```  
// C4220.c  
// compile with: /W4  
  
int ( *pFunc1) ( int a, ... );  
int ( *pFunc2) ( int a, int b);  
  
int main()  
{  
   if ( pFunc1 != pFunc2 ) {};  // C4220  
}  
```  
  
 Tali puntatori non corrispondono in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).