---
title: "Errore del compilatore C3162 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3162"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3162"
ms.assetid: 0d4c4a24-1456-4191-b7d8-c38cb7b17c32
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore del compilatore C3162
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': un tipo di riferimento con un distruttore non può essere utilizzato come tipo di membro dati statici 'membro'  
  
 Common Language Runtime non è in grado di stabilire quando eseguire un distruttore definito dall'utente qualora la classe contenga anche una funzione membro statica.  
  
 Un distruttore non verrà mai eseguito, a meno che l'oggetto non venga eliminato in modo esplicito.  
  
 Per ulteriori informazioni, vedere,  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Problemi comuni relativi alla migrazione di Visual C\+\+ a 64 bit](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3162:  
  
```  
// C3162.cpp  
// compile with: /clr /c  
ref struct A {  
   ~A() { System::Console::WriteLine("in destructor"); }  
   static A i;   // C3162  
   static A^ a = gcnew A;   // OK  
};  
  
int main() {  
   A ^ a = gcnew A;  
   delete a;  
}  
```