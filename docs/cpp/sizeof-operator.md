---
title: Operatore sizeof | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- sizeof_cpp
dev_langs:
- C++
helpviewer_keywords:
- sizeof operator
ms.assetid: 8bc3b6fb-54a1-4eb7-ada0-05f8c5efc532
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6445fb834982cd13348c9e94def4b75fe31c02e9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46058815"
---
# <a name="sizeof-operator"></a>Operatore sizeof

Restituisce la dimensione del relativo operando relativamente alle dimensioni di tipo **char**.

> [!NOTE]
>  Per informazioni sul `sizeof ...` operatore, vedere [ellissi e modelli Variadic](../cpp/ellipses-and-variadic-templates.md).

## <a name="syntax"></a>Sintassi

```
sizeof unary-expression
sizeof  ( type-name )
```

## <a name="remarks"></a>Note

Il risultato del **sizeof** operatore JE typu `size_t`, un tipo integrale definito nel file di inclusione \<STDDEF. h >. Tale operatore consente di evitare di specificare le dimensioni dei dati dipendenti dal computer nei programmi.

L'operando **sizeof** può essere uno dei seguenti:

- Un nome di tipo. Per utilizzare **sizeof** con un nome di tipo, il nome deve essere racchiuso tra parentesi.

- Un'espressione. Se usato con un'espressione **sizeof** può essere specificato con o senza le parentesi. L'espressione non viene valutata.

Quando la **sizeof** operatore viene applicato a un oggetto di tipo **char**, restituisce 1. Quando la **sizeof** operatore viene applicato a una matrice, restituisce il numero totale di byte della matrice, non la dimensione del puntatore rappresentato dall'identificatore della matrice. Per ottenere le dimensioni del puntatore rappresentato dall'identificatore della matrice, passarlo come parametro a una funzione che usa **sizeof**. Ad esempio:

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

## <a name="sample-output"></a>Esempio di output

```Output
The size of a char is: 1
The length of Hello, world! is: 14
The size of the pointer is 4
```

Quando il **sizeof** operatore viene applicato a un **classe**, **struct**, oppure **unione** tipo, il risultato è il numero di byte in un oggetto di cui tipo, oltre a qualsiasi spaziatura interna aggiunta per allineare i membri ai confini di parola. Il risultato non corrisponde necessariamente alla dimensione calcolata sommando i requisiti di archiviazione dei singoli membri. Il [/Zp](../build/reference/zp-struct-member-alignment.md) l'opzione del compilatore e il [pack](../preprocessor/pack.md) pragma influiscono sui limiti di allineamento per i membri.

Il **sizeof** operatore non restituisce mai 0, anche per una classe vuota.

Il **sizeof** operatore non può essere usato con gli operandi seguenti:

- Funzioni. (Tuttavia **sizeof** può essere applicato ai puntatori a funzioni.)

- Campi di bit.

- Classi non definite.

- Il tipo **void**.

- Matrici allocate in modo dinamico.

- Matrici esterne.

- Tipi incompleti.

- Nomi tra parentesi di tipi incompleti.

Quando la **sizeof** operatore viene applicato a un riferimento, il risultato è lo stesso come se **sizeof** applicato all'oggetto stesso.

Se una matrice non dimensionata è l'ultimo elemento di una struttura, il **sizeof** operatore restituisce le dimensioni della struttura senza la matrice.

Il **sizeof** operatore viene spesso usato per calcolare il numero di elementi in una matrice usando un'espressione nel formato:

```cpp
sizeof array / sizeof array[0]
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)