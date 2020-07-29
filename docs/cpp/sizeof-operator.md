---
title: Operatore sizeof
ms.date: 11/04/2016
f1_keywords:
- sizeof_cpp
helpviewer_keywords:
- sizeof operator
ms.assetid: 8bc3b6fb-54a1-4eb7-ada0-05f8c5efc532
ms.openlocfilehash: 13e181bf84e359d433fbe951b1aa69320a1f0013
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87186295"
---
# <a name="sizeof-operator"></a>Operatore sizeof

Restituisce la dimensione del relativo operando rispetto alla dimensione del tipo **`char`** .

> [!NOTE]
> Per informazioni sull' `sizeof ...` operatore, vedere [puntini di sospensione e modelli di Variadic](../cpp/ellipses-and-variadic-templates.md).

## <a name="syntax"></a>Sintassi

```
sizeof unary-expression
sizeof  ( type-name )
```

## <a name="remarks"></a>Osservazioni

Il risultato dell' **`sizeof`** operatore è di tipo `size_t` , un tipo integrale definito nel file di inclusione \<stddef.h> . Tale operatore consente di evitare di specificare le dimensioni dei dati dipendenti dal computer nei programmi.

L'operando **`sizeof`** può essere uno dei seguenti:

- Un nome di tipo. Per usare **`sizeof`** con un nome di tipo, il nome deve essere racchiuso tra parentesi.

- Espressione. Se utilizzata con un'espressione, **`sizeof`** può essere specificata con o senza le parentesi. L'espressione non viene valutata.

Quando l' **`sizeof`** operatore viene applicato a un oggetto di tipo **`char`** , viene restituito 1. Quando l' **`sizeof`** operatore viene applicato a una matrice, restituisce il numero totale di byte in tale matrice, non la dimensione del puntatore rappresentato dall'identificatore di matrice. Per ottenere la dimensione del puntatore rappresentato dall'identificatore di matrice, passarla come parametro a una funzione che usa **`sizeof`** . Ad esempio:

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

Quando l' **`sizeof`** operatore viene applicato a un **`class`** **`struct`** tipo, o **`union`** , il risultato è il numero di byte in un oggetto di quel tipo, più qualsiasi riempimento aggiunto per allineare i membri sui limiti di parola. Il risultato non corrisponde necessariamente alla dimensione calcolata sommando i requisiti di archiviazione dei singoli membri. L'opzione del compilatore [/ZP](../build/reference/zp-struct-member-alignment.md) e il pragma [Pack](../preprocessor/pack.md) influiscono sui limiti di allineamento per i membri.

L' **`sizeof`** operatore non restituisce mai 0, neanche per una classe vuota.

L' **`sizeof`** operatore non può essere usato con gli operandi seguenti:

- Funzioni. **`sizeof`** È tuttavia possibile applicare a puntatori a funzioni.

- Campi di bit.

- Classi non definite.

- Tipo **`void`** .

- Matrici allocate in modo dinamico.

- Matrici esterne.

- Tipi incompleti.

- Nomi tra parentesi di tipi incompleti.

Quando l' **`sizeof`** operatore viene applicato a un riferimento, il risultato è lo stesso di se è **`sizeof`** stato applicato all'oggetto stesso.

Se una matrice non dimensionata è l'ultimo elemento di una struttura, l' **`sizeof`** operatore restituisce le dimensioni della struttura senza la matrice.

L' **`sizeof`** operatore viene spesso usato per calcolare il numero di elementi in una matrice usando un'espressione nel formato seguente:

```cpp
sizeof array / sizeof array[0]
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
