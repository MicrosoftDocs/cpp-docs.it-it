---
title: "Avviso del compilatore (livello 2) C4356 | Microsoft Docs"
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
  - "C4356"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4356"
ms.assetid: 3af3defe-de33-43b6-bd6c-2c2e09e34f3f
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4356
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': i membri dati statici non possono essere inizializzati tramite classi derivate  
  
 L'inizializzazione di un membro dati static è stata specificata in modo non valido.  Il compilatore ha accettato l'inizializzazione.  
  
 Si tratta di una nuova modifica del compilatore Visual C\+\+ .NET 2003.  
  
 Affinché il codice funzioni allo stesso modo in tutte le versioni di Visual C\+\+, inizializzare il membro tramite la classe base.  
  
 Per evitare di visualizzare l'avviso, utilizzare il pragma [warning](../../preprocessor/warning.md).  
  
 Il seguente codice di esempio genera l'errore C4356:  
  
```  
// C4356.cpp  
// compile with: /W2 /EHsc  
#include <iostream>  
  
template <class T>  
class C {  
   static int n;  
};  
  
class D : C<int> {};  
  
int D::n = 0; // C4356  
// try the following line instead  
// int C<int>::n = 0;  
  
class A {  
public:  
   static int n;  
};  
  
class B : public A {};  
  
int B::n = 10;   // C4356  
// try the following line instead  
// int A::n = 99;  
  
int main() {  
   using namespace std;  
   cout << B::n << endl;  
}  
```