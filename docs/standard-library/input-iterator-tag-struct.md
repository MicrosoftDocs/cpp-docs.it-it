---
title: Struct input_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::input_iterator_tag
helpviewer_keywords:
- input_iterator_tag class
- input_iterator_tag struct
ms.assetid: ad68a4c6-f315-4ce1-8b74-c1fc71bd1577
ms.openlocfilehash: 47e0d08f79cfa41c414ac4fcd570ce8fdfbd0b35
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455321"
---
# <a name="inputiteratortag-struct"></a>Struct input_iterator_tag

Classe che fornisce un tipo restituito per la `iterator_category` funzione che rappresenta un iteratore di input.

## <a name="syntax"></a>Sintassi

struct input_iterator_tag {};

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ciascun iteratore di tipo `Iterator`, `iterator_traits`< `Iterator`>  **::iterator_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è uguale a **iterator** \< **iter**>  **:: iterator_category** quando `Iter` descrive un oggetto che può essere utilizzato come iteratore di input.

## <a name="example"></a>Esempio

Per un esempio [](../standard-library/random-access-iterator-tag-struct.md) su come usare `iterator_tag`i, vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o random_access_iterator_tag.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
