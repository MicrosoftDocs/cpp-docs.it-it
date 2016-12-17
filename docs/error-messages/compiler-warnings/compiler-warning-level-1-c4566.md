---
title: "Avviso del compilatore (livello 1) C4566 | Microsoft Docs"
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
  - "C4566"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4566"
ms.assetid: 65f40730-e86f-447c-b37b-16caadcfe311
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4566
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

un carattere rappresentato dal nome di caratteri universali 'char' non può essere rappresentato nella tabella codici corrente \(tabella\)  
  
 Non è possibile rappresentare tutti i caratteri Unicode nella tabella codici ANSI corrente.  
  
 Le stringhe di caratteri stretti \(a singolo byte\) vengono convertite in caratteri a più byte, mentre le stringhe di caratteri estesi \(a doppio byte\) non vengono convertite.  
  
 Il seguente codice di esempio genera l'errore C4566:  
  
```  
// C4566.cpp  
// compile with: /W1  
int main() {  
   char c1 = '\u03a0';   // C4566  
   char c2 = '\u0642';   // C4566  
  
   wchar_t c3 = L'\u03a0';   // OK  
   wchar_t c4 = L'\u0642';   // OK  
}  
```