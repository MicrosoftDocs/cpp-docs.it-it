---
title: "Errore del compilatore C3149 | Microsoft Docs"
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
  - "C3149"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3149"
ms.assetid: cf6e2616-2f06-46da-8a8a-d449cb481c51
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3149
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': tipo non utilizzabile qui senza un 'carattere' di primo livello  
  
 Una dichiarazione non è stata specificata correttamente.  
  
 È possibile, ad esempio, che sia stato definito un tipo CLR in ambito globale e si sia tentato di creare una variabile del tipo come parte della definizione.  Poiché le variabili globali dei tipi CLR non sono consentite, verrà generato l'errore C3149.  
  
 Per correggerlo, dichiarare le variabili dei tipi CLR all'interno di una definizione di funzione o di tipo.  
  
 Il seguente codice di esempio genera l'errore C3149:  
  
```  
// C3149.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   // declare an array of value types   
   array< Int32 ^> IntArray;   // C3149  
   array< Int32>^ IntArray2;   // OK  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3149:  
  
```  
// C3149b.cpp  
// compile with: /clr /c  
delegate int MyDelegate(const int, int);  
void Test1(MyDelegate m) {}   // C3149  
void Test2(MyDelegate ^ m) {}   // OK  
```  
  
 **Estensioni gestite per C\+\+**  
  
 Un oggetto gestito non è stato utilizzato correttamente.  
  
 Il seguente codice di esempio genera l'errore C3149:  
  
```  
// C3149c.cpp  
// compile with: /clr:oldSyntax  
__gc class A {};  
  
int main() {  
   A a = new A;   // C3149  
   A *a = new A;   // OK  
}  
```