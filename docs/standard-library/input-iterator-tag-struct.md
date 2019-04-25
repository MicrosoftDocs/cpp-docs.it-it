---
title: Struct input_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::input_iterator_tag
helpviewer_keywords:
- input_iterator_tag class
- input_iterator_tag struct
ms.assetid: ad68a4c6-f315-4ce1-8b74-c1fc71bd1577
ms.openlocfilehash: 5478a8f9fa6013202a1ea8dd838eedb80b9c367e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62159250"
---
# <a name="inputiteratortag-struct"></a>Struct input_iterator_tag

Una classe che fornisce un tipo restituito per `iterator_category` funzione che rappresenta un iteratore di input.

## <a name="syntax"></a>Sintassi

struct input_iterator_tag {};

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ciascun iteratore di tipo `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è identico **iteratore** \< **Iter**> **:: iterator_category** quando `Iter` descrive un oggetto che può essere utilizzato come un iteratore di input.

## <a name="example"></a>Esempio

Visualizzare [iterator_traits](../standard-library/iterator-traits-struct.md) oppure [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di come usare `iterator_tag`s.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
