---
title: "Operatori di incremento e decremento in forma suffissa: ++ e -- | Microsoft Docs"
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
  - "--"
  - "++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-- (operatore), operatori di decremento suffissi"
  - "++ (operatore), operatori di incremento suffissi"
  - "decremento (operatori)"
  - "decremento (operatori), sintassi"
  - "incremento (operatori), sintassi"
  - "operatori di selezione dei membri"
  - "operatori [C++], suffisso"
  - "operatori suffissi"
ms.assetid: 0204d5c8-51b0-4108-b8a1-074c5754d89c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di incremento e decremento in forma suffissa: ++ e --
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
      postfix-expression   
      ++  
postfix-expression ––  
```  
  
## Note  
 In C\+\+ sono disponibili operatori di incremento e decremento prefisso e suffisso. In questa sezione verranno descritti solo gli operatori di incremento e decremento suffisso. Per ulteriori informazioni, vedere [Operatori di incremento e decremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)\). La differenza tra le due forme consiste nel fatto che nella notazione suffissa l'operatore viene visualizzato dopo l'*postfix\-expression*, mentre nella notazione prefissa l'operatore viene visualizzato dopo *expression.* Nell'esempio seguente viene illustrato un operatore di decremento suffisso:  
  
```  
i++;  
```  
  
 Quando si applica l'operatore di decremento suffisso \(`++`\), il valore dell'operando viene incrementato di un'unità del tipo appropriato.  Analogamente, quando si applica l'operatore di decremento suffisso \(**––**\) il valore dell'operando viene diminuito di un'unità del tipo appropriato.  
  
 È importante notare che un'espressione di incremento o decremento in forma suffissa restituisce il valore dell'espressione **prima** dell'applicazione del rispettivo operatore.  L'operazione di decremento o di incremento viene eseguita **dopo** la valutazione dell'operando.  Questo problema si verifica solo quando l'operazione di decremento o di decremento in forma suffissa viene eseguita nel contesto di un'espressione più estesa.  
  
 Quando un operatore suffisso viene applicato a un argomento di funzione, non è garantito che il valore dell'argomento venga incrementato o decrementato prima di essere passato alla funzione.  Per ulteriori informazioni, vedere la sezione 1.9.17 in C\+\+ standard.  
  
 Se si applica l'operatore di incremento suffisso a un puntatore a una matrice di oggetti di tipo **long**, la rappresentazione interna del puntatore verrà incrementata di quattro.  In questo modo il puntatore, che in precedenza faceva riferimento all'*ennesimo* elemento della matrice, fa riferimento all'elemento *\(n\+1\)esimo*.  
  
 Gli operandi di operatori di incremento e decremento suffisso devono essere valori l\-value di tipo aritmetico o puntatore modificabili \(non **const**\).  Il tipo del risultato è lo stesso di quello di *postfix\-expression*, ma non è più un valore l\-value.  
  
 L'operando di un operatore di incremento suffisso può essere di tipo `bool`, nel qual caso l'operando viene valutato e quindi impostato su **true**.  L'operando di un operatore di decremento suffisso non può essere di tipo `bool`.  
  
 Il codice seguente illustra l'operatore di incremento suffisso:  
  
```  
// expre_Postfix_Increment_and_Decrement_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main() {  
   int i = 10;  
   cout << i++ << endl;  
   cout << i << endl;  
}  
```  
  
 Le operazioni di post\-decremento e post\-incremento sui tipi enumerati non sono supportate:  
  
```  
enum Compass { North, South, East, West );  
Compass myCompass;  
for( myCompass = North; myCompass != West; myCompass++ ) // Error  
```  
  
## Vedere anche  
 [Espressioni in forma suffissa](../cpp/postfix-expressions.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori di incremento e decremento in forma suffissa C](../c-language/c-postfix-increment-and-decrement-operators.md)