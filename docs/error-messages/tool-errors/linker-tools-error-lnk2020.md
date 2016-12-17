---
title: "Errore degli strumenti del linker LNK2020 | Microsoft Docs"
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
  - "LNK2020"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2020"
ms.assetid: 4dd017d0-5e83-471b-ac8a-538ac1ed6870
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2020
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

token non risolto 'token'  
  
 Questo errore è simile a un errore esterno non definito, tranne per il fatto che il riferimento si basa sui metadati.  Nei metadati è necessario che tutte le funzioni e i dati siano definiti.  
  
 Per risolvere il problema eseguire una delle seguenti operazioni:  
  
-   Definire la funzione o i dati mancanti  
  
-   Includere il file oggetto o la libreria in cui sono già stati definiti i dati o la funzione mancante.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK2020:  
  
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
  
## Esempio  
 L'errore LNK2020 può inoltre verificarsi se si crea una variabile di un tipo modello gestito senza creare anche un'istanza del tipo.  
  
 Nell'esempio seguente viene generato l'errore LNK2020:  
  
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