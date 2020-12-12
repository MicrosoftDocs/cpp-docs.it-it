---
description: 'Altre informazioni su: forward_iterator_tag struct'
title: Struct forward_iterator_tag
ms.date: 11/04/2016
f1_keywords:
- xutility/std::forward_iterator_tag
helpviewer_keywords:
- forward_iterator_tag struct
- forward_iterator_tag class
ms.assetid: 68b633ac-b135-4e9e-837d-14248a262ec5
ms.openlocfilehash: 9b8b5ea7ff4e7d68c14c892d4ba6ef96f275b7da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324295"
---
# <a name="forward_iterator_tag-struct"></a>Struct forward_iterator_tag

Classe che fornisce un tipo restituito per la funzione **iterator_category** che rappresenta un iteratore in avanti.

## <a name="syntax"></a>Sintassi

```cpp
struct forward_iterator_tag    : public input_iterator_tag {};
```

## <a name="remarks"></a>Osservazioni

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve individuare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`> **::iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è lo stesso di **iterator** \< **Iter**> **:: iterator_category** quando **iter** descrive un oggetto che può fungere da iteratore in attesa.

## <a name="example"></a>Esempio

Per un esempio di come usare i tag **iterator_tag**, vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Struct input_iterator_tag](../standard-library/input-iterator-tag-struct.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
