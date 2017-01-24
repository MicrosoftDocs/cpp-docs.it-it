---
title: "void (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "void"
  - "void_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni [C++], void"
  - "puntatori, void"
  - "void (parola chiave) [C++]"
ms.assetid: d203edba-38e6-4056-8b89-011437351057
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# void (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando usato come tipo restituito da una funzione, `void` specifica che la funzione non restituisce alcun valore.  Quando usato per l'elenco di parametri di una funzione, void specifica che la funzione non accetta parametri.  Quando usato nella dichiarazione di un puntatore, void specifica che il puntatore è universale.  
  
 Se il tipo di puntatore è **void \***, il puntatore può indicare una variabile che non è dichiarata con la parola chiave **const** o `volatile`.  Un puntatore void non può essere dereferenziato a meno che su di esso non venga eseguito il cast su un altro tipo.  Un puntatore void può essere convertito in qualsiasi altro tipo di puntatore ai dati.  
  
 Un puntatore void può puntare a una funzione, ma non a un membro di classe in C\+\+.  
  
 Non è possibile dichiarare una variabile di tipo void.  
  
## Esempio  
  
```  
// void.cpp  
void vobject;   // C2182  
void *pv;   // okay  
int *pint; int i;  
int main() {  
   pv = &i;  
   // Cast optional in C required in C++  
   pint = (int *)pv;  
}   
```  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Puntatori al tipo void](../misc/pointers-to-type-void.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)