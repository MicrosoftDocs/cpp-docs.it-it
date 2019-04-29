---
title: Struct bidirectional_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::bidirectional_iterator_tag
helpviewer_keywords:
- bidirectional_iterator_tag class
- bidirectional_iterator_tag struct
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
ms.openlocfilehash: c8296ddf30c0e2a3d34e69cbf079c0477e0e8b7a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62414082"
---
# <a name="bidirectionaliteratortag-struct"></a>Struct bidirectional_iterator_tag

Una classe che fornisce un tipo restituito per `iterator_category` funzione che rappresenta un iteratore bidirezionale.

## <a name="syntax"></a>Sintassi

```cpp
struct bidirectional_iterator_tag    : public forward_iterator_tag {};
```

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione di modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`>::**iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è identico **iteratore** \< **Iter**>:: **iterator_category** quando `Iter` descrive un oggetto che può essere utilizzato come un bidirezionale iteratore.

## <a name="example"></a>Esempio

Vedere [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di utilizzo di `bidirectional_iterator_tag`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Struct forward_iterator_tag](../standard-library/forward-iterator-tag-struct.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
