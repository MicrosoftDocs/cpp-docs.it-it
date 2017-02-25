---
title: "Errore del compilatore C3073 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3073"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3073"
ms.assetid: b24b9b8b-f9fb-4c3c-a1a0-97fad2081bfc
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3073
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': la classe di riferimento non ha un costruttore di copia definito dall'utente  
  
 In una compilazione [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md), il compilatore non genera un costruttore di copia per un tipo di riferimento.  In qualsiasi compilazione **\/clr** è necessario definire il proprio costruttore di copia per un tipo di riferimento se si prevede che un'istanza del tipo verrà copiata.  
  
 Per ulteriori informazioni, vedere [Semantica dello stack C\+\+ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3073:  
  
```  
// C3073.cpp  
// compile with: /clr  
ref class R {  
public:  
   R(int) {}  
};  
  
ref class S {  
public:  
   S(int) {}  
   S(const S %rhs) {}   // copy constructor  
};  
  
void f(R) {}  
void f2(S) {}  
void f3(R%){}  
  
int main() {  
   R r(1);  
   f(r);   // C3073  
   f3(r);   // OK  
  
   S s(1);  
   f2(s);   // OK  
}  
```