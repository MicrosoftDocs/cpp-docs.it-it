---
title: Operatore sizeof
ms.date: 11/04/2016
f1_keywords:
- sizeof_cpp
helpviewer_keywords:
- sizeof operator
ms.assetid: 8bc3b6fb-54a1-4eb7-ada0-05f8c5efc532
ms.openlocfilehash: 8789bb5e0e363458edffa7207ea1e138aae4d284
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365574"
---
# <a name="sizeof-operator"></a>Operatore sizeof

Restituisce la dimensione dell'operando rispetto alla dimensione del tipo **char**.

> [!NOTE]
> Per informazioni `sizeof ...` sull'operatore , vedere [Ellissi e modelli Variadic](../cpp/ellipses-and-variadic-templates.md).

## <a name="syntax"></a>Sintassi

```
sizeof unary-expression
sizeof  ( type-name )
```

## <a name="remarks"></a>Osservazioni

Il risultato dell'operatore `size_t` **sizeof** è di tipo \<, un tipo integrale definito nel file di inclusione stddef.h>. Tale operatore consente di evitare di specificare le dimensioni dei dati dipendenti dal computer nei programmi.

L'operando di **sizeof** può essere uno dei seguenti:

- Un nome di tipo. Per utilizzare **sizeof** con un nome di tipo, il nome deve essere racchiuso tra parentesi.

- Espressione. Se utilizzato con un'espressione, **sizeof** può essere specificato con o senza le parentesi. L'espressione non viene valutata.

Quando l'operatore **sizeof** viene applicato a un oggetto di tipo **char**, restituisce 1. Quando l'operatore **sizeof** viene applicato a una matrice, restituisce il numero totale di byte in tale matrice, non la dimensione del puntatore rappresentato dall'identificatore di matrice. Per ottenere la dimensione del puntatore rappresentato dall'identificatore di matrice, passarlo come parametro a una funzione che utilizza **sizeof**. Ad esempio:

## <a name="example"></a>Esempio

```cpp
#include <iostream>
using namespace std;

size_t getPtrSize( char *ptr )
{
   return sizeof( ptr );
}

int main()
{
   char szHello[] = "Hello, world!";

   cout  << "The size of a char is: "
         << sizeof( char )
         << "\nThe length of " << szHello << " is: "
         << sizeof szHello
         << "\nThe size of the pointer is "
         << getPtrSize( szHello ) << endl;
}
```

## <a name="sample-output"></a>Output di esempio

```Output
The size of a char is: 1
The length of Hello, world! is: 14
The size of the pointer is 4
```

Quando l'operatore **sizeof** viene applicato a un tipo **class**, **struct**o **union,** il risultato è il numero di byte in un oggetto di tale tipo, oltre a qualsiasi spaziatura interna aggiunta per allineare i membri ai limiti delle parole. Il risultato non corrisponde necessariamente alla dimensione calcolata sommando i requisiti di archiviazione dei singoli membri. L'opzione del compilatore [//p](../build/reference/zp-struct-member-alignment.md) e il pragma [pack](../preprocessor/pack.md) influiscono sui limiti di allineamento per i membri.

L'operatore **sizeof** non restituisce mai 0, anche per una classe vuota.

L'operatore **sizeof** non può essere utilizzato con gli operandi seguenti:

- Funzioni. (Tuttavia, **sizeof** può essere applicato ai puntatori alle funzioni.)

- Campi di bit.

- Classi non definite.

- Il tipo **void**.

- Matrici allocate in modo dinamico.

- Matrici esterne.

- Tipi incompleti.

- Nomi tra parentesi di tipi incompleti.

Quando l'operatore **sizeof** viene applicato a un riferimento, il risultato è lo stesso che se **sizeof** fosse stato applicato all'oggetto stesso.

Se una matrice non dimensionata è l'ultimo elemento di una struttura, l'operatore **sizeof** restituisce la dimensione della struttura senza la matrice.

L'operatore **sizeof** viene spesso utilizzato per calcolare il numero di elementi in una matrice utilizzando un'espressione nel formato:

```cpp
sizeof array / sizeof array[0]
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
