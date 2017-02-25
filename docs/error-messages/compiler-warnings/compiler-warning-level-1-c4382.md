---
title: "Avviso del compilatore (livello 1) C4382 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4382"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4382"
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4382
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

generazione di 'tipo': un tipo con distruttore \_\_clrcall o costruttore di copia può essere individuato solo nel modulo \/clr:pure  
  
 Quando la compilazione viene eseguita con **\/clr** e non con **\/clr:pure**, per la gestione delle eccezioni si prevede che le funzioni membro in un tipo nativo siano [\_\_cdecl](../../cpp/cdecl.md) e non [\_\_clrcall](../../cpp/clrcall.md).  I tipi nativi con funzioni membro che utilizzano convenzioni di chiamata `__clrcall` non possono essere intercettati in un modulo compilato con **\/clr**.  
  
 Se l'eccezione viene intercettata in un modulo compilato con **\/clr:pure**, è possibile ignorare l'avviso.  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4382:  
  
```  
// C4382.cpp  
// compile with: /clr /W1 /c  
struct S {  
   __clrcall ~S() {}  
};  
  
struct T {  
   ~T() {}  
};  
  
int main() {  
   S s;  
   throw s;   // C4382  
  
   S * ps = &s;  
   throw ps;   // OK  
  
   T t;  
   throw t;   // OK  
}  
```