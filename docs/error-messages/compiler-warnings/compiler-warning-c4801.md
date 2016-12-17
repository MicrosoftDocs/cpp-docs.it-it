---
title: "Avviso del compilatore C4801 | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4801"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4801"
ms.assetid: 05b29dff-15ef-42ca-9712-dc993afc4fd6
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4801
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Valore restituito per riferimento non verificabile: motivo  
  
 Dopo essere stato memorizzato in una variabile locale, un riferimento di rilevamento non può restituire un valore verificabile.  
  
 Il valore restituito del riferimento è verificabile solo quando il Verifier riesce a tenere traccia del riferimento dalla creazione fino alla restituzione e il riferimento è relativo a un elemento di una matrice o a un membro di una classe.  
  
 Per ulteriori informazioni, vedere [Peverify.exe \(PEVerify Tool\)](../Topic/Peverify.exe%20\(PEVerify%20Tool\).md).  
  
 Per essere verificabile, un riferimento deve rimanere nello stack dal momento della creazione fino a quello della restituzione.  
  
 L'avviso C4801 viene sempre generato come errore.  È possibile disattivarlo utilizzando `#pragma warning` o **\/wd**. Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md).  
  
## Esempio  
 L'avviso C4801 viene visualizzato anche se il Verifier non rileva l'indirizzo accettato perché, in questo caso, viene presupposto che il riferimento non sia verificabile.  Nell'esempio seguente viene generato l'errore C4801:  
  
```  
// C4801.cpp  
// compile with: /clr:safe /c  
int% f(int% p) {  
   return p;   // C4801  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4801:  
  
```  
// C4801_b.cpp  
// compile with: /clr:safe /c  
  
int% f(int i, array<int>^ ar) {  
   int x;  
   int% bri = x;   // cannot return a byref to a local.  
   if (i < ar->Length) {  
      bri = ar[i];   // this byref is ok.  
   }  
  
   return bri;   // C4801 not returned within the basic block  
}  
```  
  
## Esempio  
 L'avviso C4801 può inoltre essere visualizzato se si tenta di dereferenziare e restituire un valore di riferimento in un blocco try.  In questo caso, il codice non potrà essere verificato perché al termine di un blocco try il contenuto dello stack viene cancellato e, di conseguenza, vengono eliminati tutti i valori restituiti nello stack.  Per assicurarsi che non venga generata alcuna eccezione, dereferenziare il tipo di riferimento e assegnarlo a una variabile.  Quindi, al termine della funzione, dereferenziare di nuovo del tipo di riferimento e restituirne il valore.  
  
 Nell'esempio seguente viene generato l'errore C4801:  
  
```  
// C4801_c.cpp  
// compile with: /clr:safe  
using namespace System;  
  
ref class StackEmptyException : public System::Exception {};  
ref class StackFullException : public System::Exception {};  
  
template <typename T>  
ref struct Stack {  
  
   Stack() {  
      topElem = -1;   // initialize stack  
      stackPtr = gcnew array<T>(10);  
   }  
  
   void push(const T%);  
   T% top();  
  
private:  
   int topElem;    
   array<T>^ stackPtr;    
};  
  
template <typename T>   
T% Stack<T>::top() {  
   try {  
      return stackPtr[topElem];   // C4801  
      // Try the following line instead.  
      // T% deadstore = stackPtr[topElem] ;  
   }  
  
   catch (System::IndexOutOfRangeException ^ e) {  
      throw gcnew StackEmptyException();  
   }  
  
   catch (System::Exception ^ e) {  
      throw;  
   }  
  
   return stackPtr[topElem] ;  
}  
  
int main() {  
   typedef Stack<Int32> IntStack;  
   IntStack ^ is = gcnew IntStack();  
  
   int i = 1;  
   while (1) {  
      try {  
         is->push(i++);  
      }  
      catch (System::Exception ^ e) {  
         break;  
      }  
      Console::Write("{0} ", is->top());  
   }  
}  
```