---
title: "Errore del compilatore C2786 | Microsoft Docs"
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
  - "C2786"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2786"
ms.assetid: 6676d8c0-86dd-4a39-bdda-b75a35f4d137
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2786
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': operando non valido per \_\_uuidof  
  
 L'operatore [\_\_uuidof](../../cpp/uuidof-operator.md) accetta un tipo definito dall'utente con un GUID collegato o un oggetto di tale tipo definito dall'utente.  Possibili cause:  
  
1.  L'argomento non è un tipo definito dall'utente.  
  
2.  `__uuidof` non è in grado di estrarre il GUID dall'argomento.  
  
 Il seguente codice di esempio genera l'errore C2786:  
  
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