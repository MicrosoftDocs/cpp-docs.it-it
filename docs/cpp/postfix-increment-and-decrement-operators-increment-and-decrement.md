---
title: 'Operatori di incremento e decremento in forma suffissa: + + e -| Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- --
- ++
dev_langs:
- C++
helpviewer_keywords:
- increment operators, syntax
- member-selection operators
- -- operator, postfix decrement operators
- postfix operators
- ++ operator, postfix increment operators
- decrement operators, syntax
- operators [C++], postfix
- decrement operators
ms.assetid: 0204d5c8-51b0-4108-b8a1-074c5754d89c
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: b9e8939e810336150fe3d46be4c72ee1946aebcf
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="postfix-increment-and-decrement-operators--and---"></a>Operatori di incremento e decremento in forma suffissa: ++ e --
## <a name="syntax"></a>Sintassi  
  
```  
postfix-expression ++  
postfix-expression --  
```  
  
## <a name="remarks"></a>Note  
 In C++ sono disponibili operatori di incremento e decremento prefisso e suffisso. In questa sezione verranno descritti solo gli operatori di incremento e decremento suffisso. (Per ulteriori informazioni, vedere [prefisso operatori di incremento e decremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md).) La differenza tra i due è che in notazione suffissa l'operatore viene visualizzato dopo *postfix-expression*, mentre nella notazione prefissa, l'operatore viene visualizzato prima *espressione.* Nell'esempio seguente viene illustrato un operatore di decremento suffisso:  
  
```  
i++;  
```  
  
 Quando si applica l'operatore di decremento suffisso (`++`), il valore dell'operando viene incrementato di un'unità del tipo appropriato. Analogamente, l'effetto dell'applicazione dell'operatore di decremento suffisso (**--**) il valore dell'operando viene diminuito di un'unità del tipo appropriato.  
  
 È importante notare che un suffisso incremento o decremento espressione restituisce il valore dell'espressione **prima di** applicazione del rispettivo operatore. Si verifica l'operazione di incremento o decremento **dopo** l'operando viene valutato. Questo problema si verifica solo quando l'operazione di decremento o di decremento in forma suffissa viene eseguita nel contesto di un'espressione più estesa.  
  
 Quando un operatore suffisso viene applicato a un argomento di funzione, non è garantito che il valore dell'argomento venga incrementato o decrementato prima di essere passato alla funzione.  Per ulteriori informazioni, vedere la sezione 1.9.17 in C++ standard.  
  
 Applicare l'operatore di incremento suffisso a un puntatore a una matrice di oggetti di tipo **lungo** incrementata di quattro per la rappresentazione interna del puntatore. Questo comportamento fa sì che il puntatore, definita in precedenza il * n *elemento della matrice, per fare riferimento al (*n*+ 1) elemento th.  
  
 Gli operandi di incremento e operatori di decremento suffisso devono essere modificabili (non **const**) l-value di tipo aritmetico o puntatore. Il tipo del risultato è uguale a quello del *postfix-expression*, ma non è un l-value.  
  
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un incremento o decremento operatore non può essere di tipo `bool`.
  
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
  
 Le operazioni di post-decremento e post-incremento sui tipi enumerati non sono supportate:  
  
```  
enum Compass { North, South, East, West );  
Compass myCompass;  
for( myCompass = North; myCompass != West; myCompass++ ) // Error  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni di suffisso](../cpp/postfix-expressions.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori di incremento e decremento in forma suffissa C](../c-language/c-postfix-increment-and-decrement-operators.md)
