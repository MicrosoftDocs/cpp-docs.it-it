---
title: Errore del compilatore C2786 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2786
dev_langs: C++
helpviewer_keywords: C2786
ms.assetid: 6676d8c0-86dd-4a39-bdda-b75a35f4d137
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f7165e131f3594349471b50cdc81926a9bcf9d2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2786"></a>Errore del compilatore C2786
'type': operando non valido per uuidof  
  
 Il [uuidof](../../cpp/uuidof-operator.md) operatore accetta un tipo definito dall'utente con un GUID collegato o un oggetto di un tipo definito dall'utente.  Possibili cause:  
  
1.  L'argomento non è un tipo definito dall'utente.  
  
2.  `__uuidof`Impossibile estrarre il GUID dall'argomento.  
  
 L'esempio seguente genera l'errore C2786:  
  
```  
// C2786.cpp  
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};  
  
int main() {  
   __uuidof(int);   // C2786  
   __uuidof(int *);   // C2786  
   __uuidof(A **);   // C2786  
  
   // no error  
   __uuidof(A);  
   __uuidof(A *);  
   __uuidof(A &);  
   __uuidof(A[]);  
  
   int i;  
   int *pi;  
   A **ppa;  
  
   __uuidof(i);      // C2786  
   __uuidof(pi);     // C2786  
   __uuidof(ppa);    // C2786  
}  
```