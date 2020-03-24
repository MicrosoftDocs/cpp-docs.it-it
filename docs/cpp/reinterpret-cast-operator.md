---
title: Operatore reinterpret_cast
ms.date: 11/04/2016
f1_keywords:
- reinterpret_cast_cpp
helpviewer_keywords:
- reinterpret_cast keyword [C++]
ms.assetid: eb3283c7-7f88-467e-affd-407d37b46d6c
ms.openlocfilehash: 34c2fcb0e1f7f4df4e207d1737afc9c42e011feb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188285"
---
# <a name="reinterpret_cast-operator"></a>Operatore reinterpret_cast

Consente a qualsiasi puntatore di essere convertito in un qualsiasi altro tipo di puntatore. Consente inoltre a qualsiasi tipo integrale di essere convertito in qualsiasi tipo di puntatore e viceversa.

## <a name="syntax"></a>Sintassi

```
reinterpret_cast < type-id > ( expression )
```

## <a name="remarks"></a>Osservazioni

Un utilizzo improprio dell'operatore **reinterpret_cast** può essere facilmente non sicuro. A meno che la conversione desiderata sia intrinsecamente di basso livello, è necessario usare uno degli altri operatori di cast.

È possibile utilizzare l'operatore **reinterpret_cast** per le conversioni, ad esempio `char*` `int*`o `One_class*` a `Unrelated_class*`, che sono intrinsecamente non sicure.

Il risultato di un **reinterpret_cast** non può essere usato in modo sicuro per qualsiasi altra parte del cast al tipo originale. Altri usi sono, nella migliore delle ipotesi, non portabili.

L'operatore **reinterpret_cast** non è in grado di eseguire il cast degli attributi **const**, **volatile**o **__unaligned** . Per informazioni sulla rimozione di questi attributi, vedere [operatore const_cast](../cpp/const-cast-operator.md) .

L'operatore **reinterpret_cast** converte un valore del puntatore null nel valore del puntatore null del tipo di destinazione.

Un uso pratico di **reinterpret_cast** si trova in una funzione hash, che esegue il mapping di un valore a un indice in modo che due valori distinti si concludano raramente con lo stesso indice.

```cpp
#include <iostream>
using namespace std;

// Returns a hash code based on an address
unsigned short Hash( void *p ) {
   unsigned int val = reinterpret_cast<unsigned int>( p );
   return ( unsigned short )( val ^ (val >> 16));
}

using namespace std;
int main() {
   int a[20];
   for ( int i = 0; i < 20; i++ )
      cout << Hash( a + i ) << endl;
}

Output:
64641
64645
64889
64893
64881
64885
64873
64877
64865
64869
64857
64861
64849
64853
64841
64845
64833
64837
64825
64829
```

Il **reinterpret_cast** consente di trattare il puntatore come tipo integrale. Il risultato viene quindi spostato su bit e XORed con se stesso per creare un indice univoco (univoco a un livello elevato di probabilità). L'indice viene quindi troncato da un cast di tipo C standard al tipo restituito della funzione.

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
