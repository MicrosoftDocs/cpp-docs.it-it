---
title: Struct bidirectional_iterator_tag | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xutility/std::bidirectional_iterator_tag
dev_langs:
- C++
helpviewer_keywords:
- bidirectional_iterator_tag class
- bidirectional_iterator_tag struct
ms.assetid: 9ac06066-b8ae-44b6-bee4-b05855f6a31a
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 800968993b874070ccc32baf91e8feec3e01e472
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="bidirectionaliteratortag-struct"></a>Struct bidirectional_iterator_tag

Classe che specifica un tipo restituito per la funzione **iterator_category** che rappresenta un iteratore bidirezionale.

## <a name="syntax"></a>Sintassi

```cpp
struct bidirectional_iterator_tag    : public forward_iterator_tag {};
```

## <a name="remarks"></a>Note

Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione di modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ogni iteratore di tipo `Iterator`, è necessario definire `iterator_traits`< `Iterator`>::**iterator_category** come il tag di categoria più specifico che descrive il comportamento dell'iteratore.

Il tipo è uguale a **iterator**\< **Iter**>::**iterator_category** quando **Iter** descrive un oggetto che può essere usato come iteratore bidirezionale.

## <a name="example"></a>Esempio

Vedere [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per un esempio di utilizzo di `bidirectional_iterator_tag`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Struct forward_iterator_tag](../standard-library/forward-iterator-tag-struct.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
