---
description: 'Altre informazioni su: operatore reinterpret_cast'
title: Operatore reinterpret_cast
ms.date: 11/04/2016
f1_keywords:
- reinterpret_cast_cpp
helpviewer_keywords:
- reinterpret_cast keyword [C++]
ms.assetid: eb3283c7-7f88-467e-affd-407d37b46d6c
ms.openlocfilehash: 71b7067321c5af1e81311f7ce036c735c96193d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252441"
---
# <a name="reinterpret_cast-operator"></a>Operatore reinterpret_cast

Consente a qualsiasi puntatore di essere convertito in un qualsiasi altro tipo di puntatore. Consente inoltre a qualsiasi tipo integrale di essere convertito in qualsiasi tipo di puntatore e viceversa.

## <a name="syntax"></a>Sintassi

```
reinterpret_cast < type-id > ( expression )
```

## <a name="remarks"></a>Osservazioni

Un utilizzo improprio dell' **`reinterpret_cast`** operatore può essere facilmente non sicuro. A meno che la conversione desiderata sia intrinsecamente di basso livello, è necessario usare uno degli altri operatori di cast.

L' **`reinterpret_cast`** operatore può essere utilizzato per le conversioni, ad **`char*`** esempio **`int*`** , o `One_class*` a `Unrelated_class*` , che sono intrinsecamente non sicure.

Il risultato di un oggetto **`reinterpret_cast`** non può essere usato in modo sicuro per qualsiasi elemento diverso da quello di cui viene eseguito il cast al tipo originale. Altri usi sono, nella migliore delle ipotesi, non portabili.

L' **`reinterpret_cast`** operatore non può eseguire il cast degli **`const`** **`volatile`** attributi, o **`__unaligned`** . Per informazioni sulla rimozione di questi attributi, vedere [operatore const_cast](../cpp/const-cast-operator.md) .

L' **`reinterpret_cast`** operatore converte un valore del puntatore null nel valore del puntatore null del tipo di destinazione.

Un uso pratico di **`reinterpret_cast`** si trova in una funzione hash, che esegue il mapping di un valore a un indice in modo che due valori distinti si concludano raramente con lo stesso indice.

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

**`reinterpret_cast`** Consente di trattare il puntatore come tipo integrale. Il risultato viene quindi spostato su bit e XORed con se stesso per creare un indice univoco (univoco a un livello elevato di probabilità). L'indice viene quindi troncato da un cast di tipo C standard al tipo restituito della funzione.

## <a name="see-also"></a>Vedi anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
