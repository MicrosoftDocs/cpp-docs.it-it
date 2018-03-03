---
title: Strumenti del linker LNK2020 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2020
dev_langs:
- C++
helpviewer_keywords:
- LNK2020
ms.assetid: 4dd017d0-5e83-471b-ac8a-538ac1ed6870
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 394cafe23851df5320a78a4e165a90422fc305de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk2020"></a>Errore degli strumenti del linker LNK2020
token non risolto 'token'  
  
 Simile a un errore esterno non definito, ad eccezione del fatto che il riferimento è tramite i metadati. Nei metadati, tutte le funzioni e dati devono essere definiti.  
  
 Per risolvere:  
  
-   Definire la funzione mancanti o i dati, o  
  
-   Includere il file oggetto o una libreria in cui la funzione o i dati mancanti sono già definiti.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK2020.  
  
```  
// LNK2020.cpp  
// compile with: /clr /LD  
ref struct A {  
   A(int x);   // LNK2020  
   static int f();   // LNK2020  
};  
  
// OK  
ref struct B {  
   B(int x) {}  
   static int f() { return 0; }  
};  
```  
  
## <a name="example"></a>Esempio  
 LNK2020 si verificherà anche se si crea una variabile di un tipo di modello gestito, ma non creare anche un'istanza del tipo.  
  
 L'esempio seguente genera l'errore LNK2020.  
  
```  
// LNK2020_b.cpp  
// compile with: /clr   
  
template <typename T>  
ref struct Base {  
   virtual void f1() {};  
};  
  
template <typename T>  
ref struct Base2 {  
   virtual void f1() {};  
};  
  
int main() {  
   Base<int>^ p;   // LNK2020  
   Base2<int>^ p2 = gcnew Base2<int>();   // OK  
};  
```