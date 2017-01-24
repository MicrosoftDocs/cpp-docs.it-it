---
title: "Dichiaratore di riferimento lvalue: &amp; | Microsoft Docs"
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
  - "&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "& (operatore), operatore di riferimento"
  - "operatore di riferimento"
ms.assetid: edf0513d-3dcc-4663-b276-1269795dda51
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiaratore di riferimento lvalue: &amp;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Contiene l'indirizzo di un oggetto, ma sintatticamente si comporta come un oggetto.  
  
## Sintassi  
  
```  
  
type-id & cast-expression  
```  
  
## Note  
 È possibile considerare un riferimento lvalue come nome alternativo per un oggetto.  Una dichiarazione di riferimento lvalue è costituita da un elenco facoltativo di identificatori seguiti da un dichiaratore di riferimento.  Un riferimento deve essere inizializzato e non può essere modificato.  
  
 Qualsiasi oggetto il cui l'indirizzo può essere convertito in un dato tipo di puntatore, può anche essere convertito in un tipo di riferimento simile.  Ad esempio, qualsiasi oggetto il cui l'indirizzo può essere convertito in un tipo `char *`, può anche essere convertito in un tipo `char &`.  
  
 Non confondere le dichiarazioni di riferimento con l'uso di [operatore address\-of](../cpp/address-of-operator-amp.md).  Quando l'`&`*identificatore* è preceduto da un tipo, quale `int` o `char`, l'*identificatore* viene dichiarato come un riferimento al tipo.  Quando l'`&`*identificatore* non è preceduto da un tipo, l'utilizzo è quello dell'operatore address\-of.  
  
## Esempio  
 Nell'esempio seguente viene illustrato il dichiaratore di riferimento dichiarando un oggetto `Person` e un riferimento a tale oggetto.  Poiché `rFriend` è un riferimento a `myFriend`, l'aggiornamento delle variabili modifica lo stesso oggetto.  
  
```  
// reference_declarator.cpp  
// compile with: /EHsc  
// Demonstrates the reference declarator.  
#include <iostream>  
using namespace std;  
  
struct Person  
{  
    char* Name;  
    short Age;  
};  
  
int main()  
{  
   // Declare a Person object.  
   Person myFriend;  
  
   // Declare a reference to the Person object.  
   Person& rFriend = myFriend;  
  
   // Set the fields of the Person object.  
   // Updating either variable changes the same object.  
   myFriend.Name = "Bill";  
   rFriend.Age = 40;  
  
   // Print the fields of the Person object to the console.  
   cout << rFriend.Name << " is " << myFriend.Age << endl;  
}  
```  
  
  **Bill ha 40 anni**   
## Vedere anche  
 [Riferimenti](../cpp/references-cpp.md)   
 [Argomenti di funzione di tipo Reference](../cpp/reference-type-function-arguments.md)   
 [Funzioni che restituiscono tipi di riferimento](../cpp/reference-type-function-returns.md)   
 [Riferimenti a puntatori](../cpp/references-to-pointers.md)