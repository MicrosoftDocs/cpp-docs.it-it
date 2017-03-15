---
title: "Operatore const_cast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "const_cast"
  - "const_cast_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_cast (parola chiave) [C++]"
ms.assetid: 4d8bb203-ef33-4a10-9f9f-c64d4fbc1687
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Operatore const_cast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove gli attributi **const**, `volatile` e **\_\_unaligned** da una classe.  
  
## Sintassi  
  
```  
  
const_cast <   
type-id  
 > (   
expression  
 )  
  
```  
  
## Note  
 Un puntatore a qualsiasi tipo di oggetto o un puntatore a un membro dati può essere esplicitamente convertito in un tipo identico ad eccezione dei qualificatori **const**, `volatile` e **\_\_unaligned**.  Per i puntatori e i riferimenti, il risultato farà riferimento all'oggetto originale.  Per i puntatori ai membri dati, il risultato farà riferimento allo stesso membro del puntatore originale \(uncast\) al membro dati.  A seconda del tipo di oggetto a cui si fa riferimento, un'operazione di scrittura tramite il puntatore risultante, il riferimento o il puntatore al membro dati potrebbe produrre un comportamento non definito.  
  
 Non è possibile utilizzare l'operatore `const_cast` per eseguire l'override direttamente dello stato costante di una variabile costante.  
  
 L'operatore `const_cast` converte un valore di puntatore null in un valore di puntatore null del tipo di destinazione.  
  
## Esempio  
  
```  
// expre_const_cast_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class CCTest {  
public:  
   void setNumber( int );  
   void printNumber() const;  
private:  
   int number;  
};  
  
void CCTest::setNumber( int num ) { number = num; }  
  
void CCTest::printNumber() const {  
   cout << "\nBefore: " << number;  
   const_cast< CCTest * >( this )->number--;  
   cout << "\nAfter: " << number;  
}  
  
int main() {  
   CCTest X;  
   X.setNumber( 8 );  
   X.printNumber();  
}  
```  
  
 Nella riga contenente `const_cast`, il tipo di dati del puntatore `this` è `const CCTest *`.  L'operatore `const_cast` modifica il tipo di dati del puntatore `this` in `CCTest *`, consentendo al membro `number` di essere modificato.  Il cast dura solo per il resto dell'istruzione in cui viene visualizzato.  
  
## Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)