---
title: "Errore del compilatore C2663 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2663"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2663"
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2663
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': numero overload presentano conversioni non valide per il puntatore 'this'  
  
 Non è stato possibile convertire `this` in alcuna delle versioni in overload della funzione membro.  
  
 Questo errore può verificarsi quando si richiama una funzione membro non\-`const` su un oggetto `const`.  Possibili soluzioni:  
  
1.  Rimuovere `const` dalla dichiarazione dell'oggetto.  
  
2.  Aggiungere la parola chiave `const` a una delle versioni in overload della funzione membro.  
  
 Il seguente codice di esempio genera l'errore C2663:  
  
```  
// C2663.cpp  
struct C {  
   void f() volatile {}  
   void f() {}  
};  
  
struct D {  
   void f() volatile;  
   void f() const {}  
};  
  
const C *pcc;  
const D *pcd;  
  
int main() {  
   pcc->f();    // C2663  
   pcd->f();    // OK  
}  
```