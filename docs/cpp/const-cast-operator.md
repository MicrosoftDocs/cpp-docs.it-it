---
title: Operatore const_cast
ms.date: 11/04/2016
f1_keywords:
- const_cast_cpp
helpviewer_keywords:
- const_cast keyword [C++]
ms.assetid: 4d8bb203-ef33-4a10-9f9f-c64d4fbc1687
ms.openlocfilehash: 36de296d1e871ca759108497922973ddea8e3382
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227556"
---
# <a name="const_cast-operator"></a>Operatore const_cast

Rimuove gli **`const`** **`volatile`** attributi, e **`__unaligned`** da una classe.

## <a name="syntax"></a>Sintassi

```
const_cast <type-id> (expression)
```

## <a name="remarks"></a>Osservazioni

Un puntatore a qualsiasi tipo di oggetto o un puntatore a un membro dati può essere convertito in modo esplicito in un tipo identico tranne che per i **`const`** **`volatile`** **`__unaligned`** qualificatori, e. Per i puntatori e i riferimenti, il risultato farà riferimento all'oggetto originale. Per i puntatori ai membri dati, il risultato farà riferimento allo stesso membro del puntatore originale (uncast) al membro dati. A seconda del tipo di oggetto a cui si fa riferimento, un'operazione di scrittura tramite il puntatore risultante, il riferimento o il puntatore al membro dati potrebbe produrre un comportamento non definito.

Non è possibile usare l' **`const_cast`** operatore per eseguire direttamente l'override dello stato costante di una variabile costante.

L' **`const_cast`** operatore converte un valore del puntatore null nel valore del puntatore null del tipo di destinazione.

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

Nella riga contenente l'oggetto **`const_cast`** , il tipo di dati del **`this`** puntatore è `const CCTest *` . L' **`const_cast`** operatore modifica il tipo di dati del **`this`** puntatore a `CCTest *` , consentendo la `number` modifica del membro. Il cast dura solo per il resto dell'istruzione in cui viene visualizzato.

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
