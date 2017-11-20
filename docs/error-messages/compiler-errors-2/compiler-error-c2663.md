---
title: Errore del compilatore C2663 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2663
dev_langs: C++
helpviewer_keywords: C2663
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a9efe20b4a80b9ff6f337d32acd35320125008dc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2663"></a>Errore del compilatore C2663
'function': numero overload non presentano conversioni valide per puntatore 'this'  
  
 Il compilatore non è stato possibile convertire `this` a una delle versioni di overload della funzione membro.  
  
 Questo errore può dipendere da richiamare non`const` funzione membro su un `const` oggetto.  Soluzioni possibili:  
  
1.  Rimuovere il `const` dalla dichiarazione dell'oggetto.  
  
2.  Aggiungere `const` a uno degli overload della funzione membro.  
  
 L'esempio seguente genera l'errore C2663:  
  
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