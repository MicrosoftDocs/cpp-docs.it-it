---
title: Operatore reinterpret_cast
ms.date: 11/04/2016
f1_keywords:
- reinterpret_cast_cpp
helpviewer_keywords:
- reinterpret_cast keyword [C++]
ms.assetid: eb3283c7-7f88-467e-affd-407d37b46d6c
ms.openlocfilehash: 421a1fdce6834f800cd33a55d75c9dc4f88ffc93
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50463096"
---
# <a name="reinterpretcast-operator"></a>Operatore reinterpret_cast

Consente a qualsiasi puntatore di essere convertito in un qualsiasi altro tipo di puntatore. Consente inoltre a qualsiasi tipo integrale di essere convertito in qualsiasi tipo di puntatore e viceversa.

## <a name="syntax"></a>Sintassi

```
reinterpret_cast < type-id > ( expression )
```

## <a name="remarks"></a>Note

L'utilizzo improprio del **reinterpret_cast** operatore può facilmente essere non sicuro. A meno che la conversione desiderata sia intrinsecamente di basso livello, è necessario usare uno degli altri operatori di cast.

Il **reinterpret_cast** operatore può essere usato per le conversioni, ad esempio `char*` al `int*`, o `One_class*` a `Unrelated_class*`, che sono intrinsecamente non sicure.

Il risultato di una **reinterpret_cast** non può essere utilizzato in modo sicuro per qualsiasi elemento diverso da sottoposto a cast al tipo originale. Altri usi sono, nella migliore delle ipotesi, non portabili.

Il **reinterpret_cast** operatore non è possibile eseguire il cast di **const**, **volatile**, oppure **unaligned** attributi. Visualizzare [operatore const_cast](../cpp/const-cast-operator.md) per informazioni sulla rimozione di questi attributi.

Il **reinterpret_cast** operatore converte un valore del puntatore null per il valore del puntatore null del tipo di destinazione.

Un uso pratico di **reinterpret_cast** è in una funzione hash, che è associato un valore a un indice in modo che due distinte di valori raramente end backup con lo stesso indice.

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

Il **reinterpret_cast** consente al puntatore di essere considerato come un tipo integrale. Il risultato viene quindi spostato su bit e XORed con se stesso per creare un indice univoco (univoco a un livello elevato di probabilità). L'indice viene quindi troncato da un cast di tipo C standard al tipo restituito della funzione.

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)