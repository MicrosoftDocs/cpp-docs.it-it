---
title: Operatore const_cast
ms.date: 11/04/2016
f1_keywords:
- const_cast_cpp
helpviewer_keywords:
- const_cast keyword [C++]
ms.assetid: 4d8bb203-ef33-4a10-9f9f-c64d4fbc1687
ms.openlocfilehash: d2711142e4aa73cc0119949876e7e593067cd45d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180342"
---
# <a name="const_cast-operator"></a>Operatore const_cast

Rimuove gli attributi **const**, **volatile**e **__unaligned** da una classe.

## <a name="syntax"></a>Sintassi

```
const_cast <type-id> (expression)
```

## <a name="remarks"></a>Osservazioni

Un puntatore a qualsiasi tipo di oggetto o un puntatore a un membro dati può essere convertito in modo esplicito in un tipo identico tranne che per i qualificatori **const**, **volatile**e **__unaligned** . Per i puntatori e i riferimenti, il risultato farà riferimento all'oggetto originale. Per i puntatori ai membri dati, il risultato farà riferimento allo stesso membro del puntatore originale (uncast) al membro dati. A seconda del tipo di oggetto a cui si fa riferimento, un'operazione di scrittura tramite il puntatore risultante, il riferimento o il puntatore al membro dati potrebbe produrre un comportamento non definito.

Non è possibile usare l'operatore **const_cast** per eseguire direttamente l'override dello stato costante di una variabile costante.

L'operatore **const_cast** converte un valore del puntatore null nel valore del puntatore null del tipo di destinazione.

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

Nella riga contenente la **const_cast**, il tipo di dati del puntatore **this** è `const CCTest *`. L'operatore **const_cast** modifica il tipo di dati del puntatore **this** in `CCTest *`, consentendo al membro `number` di essere modificato. Il cast dura solo per il resto dell'istruzione in cui viene visualizzato.

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
