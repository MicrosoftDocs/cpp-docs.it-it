---
title: "Avviso del compilatore (livello 4) C4481 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4481"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4481"
ms.assetid: 7bfd4e0c-b452-4e6c-b7c4-ac5cc93fe4ea
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Avviso del compilatore (livello 4) C4481
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: identificatore di override 'parola chiave'  
  
 È stata specificata una parola chiave non compresa nello standard C\+\+, ad esempio un identificatore di override utilizzabile anche in \/clr.  Per ulteriori informazioni, vedere,  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Identificatori di override](../../windows/override-specifiers-cpp-component-extensions.md)  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4481:  
  
```  
// C4481.cpp  
// compile with: /W4 /c  
class B {  
   virtual void f(unsigned);  
};  
  
class C : B {  
   void f(unsigned) override;   // C4481  
   void f2(unsigned);  
};  
```