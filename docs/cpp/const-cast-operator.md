---
title: Operatore const_cast | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- const_cast_cpp
dev_langs:
- C++
helpviewer_keywords:
- const_cast keyword [C++]
ms.assetid: 4d8bb203-ef33-4a10-9f9f-c64d4fbc1687
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89ed2b161c5b8f73d68fb22eb29eb00e057d7029
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943596"
---
# <a name="constcast-operator"></a>Operatore const_cast
Rimuove il **const**, **volatile**, e **unaligned** attributi da una classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
const_cast <type-id> (expression)  
  
```  
  
## <a name="remarks"></a>Note  
 Un puntatore a qualsiasi tipo di oggetto o un puntatore a un membro dati può essere convertito in modo esplicito a un tipo che è identico tranne per il **const**, **volatile**, e **unaligned** qualificatori. Per i puntatori e i riferimenti, il risultato farà riferimento all'oggetto originale. Per i puntatori ai membri dati, il risultato farà riferimento allo stesso membro del puntatore originale (uncast) al membro dati. A seconda del tipo di oggetto a cui si fa riferimento, un'operazione di scrittura tramite il puntatore risultante, il riferimento o il puntatore al membro dati potrebbe produrre un comportamento non definito.  
  
 Non è possibile utilizzare l'operatore `const_cast` per eseguire l'override direttamente dello stato costante di una variabile costante.  
  
 L'operatore `const_cast` converte un valore di puntatore null in un valore di puntatore null del tipo di destinazione.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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
  
 Nella riga contenente la `const_cast`, il tipo di dati il **ciò** puntatore è `const CCTest *`. Il `const_cast` operatore modifica il tipo di dati del **ciò** puntatore al `CCTest *`, consentendo al membro `number` da modificare. Il cast dura solo per il resto dell'istruzione in cui viene visualizzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)