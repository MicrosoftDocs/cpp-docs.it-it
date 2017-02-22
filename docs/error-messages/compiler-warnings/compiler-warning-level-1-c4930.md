---
title: "Avviso del compilatore (livello 1) C4930 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4930"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4930"
ms.assetid: 89a206c9-c536-4186-8e81-1cde3e7f4f5b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso del compilatore (livello 1) C4930
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'prototipo': funzione con prototipo non chiamata. Si intendeva utilizzare una definizione di variabile?  
  
 È stato rilevato un prototipo di funzione non utilizzato.  Se si intende utilizzare il prototipo come dichiarazione di variabile, rimuovere le parentesi di apertura e chiusura.  
  
 Il seguente codice di esempio genera l'errore C4930:  
  
```  
// C4930.cpp  
// compile with: /W1  
class Lock {  
public:  
   int i;  
};  
  
void f() {  
   Lock theLock();   // C4930  
   // try the following line instead  
   // Lock theLock;  
}  
  
int main() {  
}  
```  
  
 L'avviso C4930 può inoltre essere generato quando il compilatore non è in grado di distinguere tra una dichiarazione di prototipo di funzione e una chiamata di funzione.  
  
 Il seguente codice di esempio genera l'errore C4930:  
  
```  
// C4930b.cpp  
// compile with: /EHsc /W1  
  
class BooleanException  
{  
   bool _result;  
  
public:  
   BooleanException(bool result)  
      : _result(result)  
   {  
   }  
  
   bool GetResult() const  
   {  
      return _result;  
   }  
};  
  
template<class T = BooleanException>  
class IfFailedThrow  
{  
public:  
   IfFailedThrow(bool result)  
   {  
      if (!result)  
      {  
         throw T(result);  
      }  
   }  
};  
  
class MyClass  
{  
public:  
   bool MyFunc()  
   {  
      try  
      {  
         IfFailedThrow<>(MyMethod()); // C4930  
  
         // try one of the following lines instead  
         // IfFailedThrow<> ift(MyMethod());  
         // IfFailedThrow<>(this->MyMethod());  
         // IfFailedThrow<>((*this).MyMethod());  
  
         return true;  
      }  
      catch (BooleanException e)  
      {  
         return e.GetResult();  
      }  
   }  
  
private:  
   bool MyMethod()  
   {  
      return true;  
   }  
};  
  
int main()  
{  
   MyClass myClass;  
   myClass.MyFunc();  
}  
```  
  
 Nell'esempio riportato sopra il risultato di un metodo che accetta zero argomenti viene passato come argomento al costruttore di una variabile della classe locale senza nome.  Per risolvere l'ambiguità della chiamata, assegnare un nome alla variabile locale o anteporre un prefisso alla chiamata al metodo con un'istanza di oggetto insieme all'operatore puntatore a membro appropriato.