---
title: Struct bidirectional_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::bidirectional_iterator_tag
helpviewer_keywords:
- bidirectional_iterator_tag class
- bidirectional_iterator_tag struct
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
ms.openlocfilehash: bab2664fcb552a72baa032d719cf6b0141ffe525
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456632"
---
# <a name="bidirectionaliteratortag-struct"></a>Struct bidirectional_iterator_tag

Classe che fornisce un tipo restituito per `iterator_category` la funzione che rappresenta un iteratore bidirezionale.

## <a name="syntax"></a>Sintassi

```cpp
struct bidirectional_iterator_tag    : public forward_iterator_tag {};
```

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione di modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`>::**iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è identico all' **iteratore** \< **iter**>:  : iterator_category `Iter` quando descrive un oggetto che può essere utilizzato come iteratore bidirezionale.

## <a name="example"></a>Esempio

Vedere [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di utilizzo di `bidirectional_iterator_tag`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Struct forward_iterator_tag](../standard-library/forward-iterator-tag-struct.md)\
[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
