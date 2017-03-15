---
title: "Operatori definiti dall&#39;utente (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori definiti dall'utente in /clr"
ms.assetid: 42f93b4a-6de4-4e34-b07b-5a62ac014f2c
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori definiti dall&#39;utente (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori definiti per i tipi gestiti sono consentiti come membri o membri di istanza statici, o in ambito globale.  Tuttavia, solo gli operatori statici sono accessibili tramite i metadati ai client scritti in un linguaggio diverso da Visual C\+\+.  
  
 In un tipo di riferimento, un parametro di un operatore definito static deve essere uno dei seguenti:  
  
-   Un handle \(^\) di`type` a un'istanza del tipo di inclusione.  
  
-   Un riferimento indiretto a tipo di riferimento \(^& type^% o di`type`\) all'handle a un'istanza del tipo di inclusione.  
  
 In un tipo di valore, un parametro di un operatore definito static deve essere uno dei seguenti:  
  
-   Lo stesso tipo del tipo di valore di inclusione.  
  
-   Un riferimento indiretto di tipo puntatore \(^\) di`type`al tipo di inclusione.  
  
-   Un riferimento indiretto di tipo riferimento`type`\(%\) o `type`&al tipo di inclusione.  
  
-   Un riferimento indiretto a tipo di riferimento \(`type`^% o di `type`^&\) all'handle.  
  
 È possibile definire i seguenti operatori:  
  
|Operatore|Unario\/forme binarie?|  
|---------------|----------------------------|  
|\!|Unario|  
|\!\=|Binary|  
|%|Binary|  
|&|Unario e binario|  
|&&|Binary|  
|\*|Unario e binario|  
|\+|Unario e binario|  
|\+\+|Unario|  
|,|Binary|  
|\-|Unario e binario|  
|\-\-|Unario|  
|\-\>|Unario|  
|\/|Binary|  
|\<|Binary|  
|\<\<|Binary|  
|\<\=|Binary|  
|\=|Binary|  
|\=\=|Binary|  
|\>|Binary|  
|\>\=|Binary|  
|\>\>|Binary|  
|^|Binary|  
|false|Unario|  
|true|Unario|  
|&#124;|Binary|  
|&#124;&#124;|Binary|  
|~|Unario|  
  
## Esempio  
  
```  
// mcppv2_user-defined_operators.cpp  
// compile with: /clr  
using namespace System;  
public ref struct X {  
   X(int i) : m_i(i) {}  
   X() {}  
  
   int m_i;  
  
   // static, binary, user-defined operator  
   static X ^ operator + (X^ me, int i) {  
      return (gcnew X(me -> m_i + i));  
   }  
  
   // instance, binary, user-defined operator  
   X^ operator -( int i ) {  
      return gcnew X(this->m_i - i);  
   }  
  
   // instance, unary, user-defined pre-increment operator  
   X^ operator ++() {  
      return gcnew X(this->m_i++);  
   }  
  
   // instance, unary, user-defined post-increment operator  
   X^ operator ++(int i) {  
      return gcnew X(this->m_i++);  
   }  
  
   // static, unary user-defined pre- and post-increment operator  
   static X^ operator-- (X^ me) {  
      return (gcnew X(me -> m_i - 1));  
   }  
};  
  
int main() {  
   X ^hX = gcnew X(-5);  
   System::Console::WriteLine(hX -> m_i);  
  
   hX = hX + 1;  
   System::Console::WriteLine(hX -> m_i);  
  
   hX = hX - (-1);  
   System::Console::WriteLine(hX -> m_i);  
  
   ++hX;  
   System::Console::WriteLine(hX -> m_i);  
  
   hX++;  
   System::Console::WriteLine(hX -> m_i);  
  
   hX--;  
   System::Console::WriteLine(hX -> m_i);  
  
   --hX;  
   System::Console::WriteLine(hX -> m_i);  
}  
```  
  
  **\-5**  
**\-4**  
**\-3**  
**\-2**  
**\-1**  
**\-2**  
**\-3**   
## Esempio  
 Nell'esempio seguente viene illustrata una sintesi dell'operatore, che è disponibile solo quando si utilizza **\/clr** per compilare.  Una sintesi dell'operatore crea il form di assegnazione di un operatore binario, se non ne viene definito, dove la sinistra dell'operatore di assegnazione di un tipo CLR.  
  
```  
// mcppv2_user-defined_operators_2.cpp  
// compile with: /clr  
ref struct A {  
   A(int n) : m_n(n) {};  
   static A^ operator + (A^ r1, A^ r2) {  
      return gcnew A( r1->m_n + r2->m_n);  
   };  
   int m_n;  
};  
  
int main() {  
   A^ a1 = gcnew A(10);  
   A^ a2 = gcnew A(20);  
  
   a1 += a2;   // a1 = a1 + a2   += not defined in source  
   System::Console::WriteLine(a1->m_n);  
}  
```  
  
  **30**   
## Vedere anche  
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)