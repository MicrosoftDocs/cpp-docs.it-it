---
title: Operatore di const_cast | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- const_cast_cpp
dev_langs:
- C++
helpviewer_keywords:
- const_cast keyword [C++]
ms.assetid: 4d8bb203-ef33-4a10-9f9f-c64d4fbc1687
caps.latest.revision: 7
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
ms.openlocfilehash: 8f72367cb4970b2ce0121efc43b79691155808df
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="constcast-operator"></a>Operatore const_cast
Rimuove il **const**, `volatile`, e **unaligned** gli attributi da una classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
const_cast <   
type-id  
 > (   
expression  
 )  
  
```  
  
## <a name="remarks"></a>Note  
 Un puntatore a qualsiasi tipo di oggetto o un puntatore a un membro dati può essere convertito in modo esplicito a un tipo che è identico tranne per il **const**, `volatile`, e **unaligned** qualificatori. Per i puntatori e i riferimenti, il risultato farà riferimento all'oggetto originale. Per i puntatori ai membri dati, il risultato farà riferimento allo stesso membro del puntatore originale (uncast) al membro dati. A seconda del tipo di oggetto a cui si fa riferimento, un'operazione di scrittura tramite il puntatore risultante, il riferimento o il puntatore al membro dati potrebbe produrre un comportamento non definito.  
  
 Non è possibile utilizzare l'operatore `const_cast` per eseguire l'override direttamente dello stato costante di una variabile costante.  
  
 L'operatore `const_cast` converte un valore di puntatore null in un valore di puntatore null del tipo di destinazione.  
  
## <a name="example"></a>Esempio  
  
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
  
 Nella riga contenente `const_cast`, il tipo di dati del puntatore `this` è `const CCTest *`. L'operatore `const_cast` modifica il tipo di dati del puntatore `this` in `CCTest *`, consentendo al membro `number` di essere modificato. Il cast dura solo per il resto dell'istruzione in cui viene visualizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
