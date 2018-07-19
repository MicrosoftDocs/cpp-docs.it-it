---
title: Struct iterator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xutility/std::iterator
dev_langs:
- C++
helpviewer_keywords:
- iterator class
- iterator struct
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a399fa8a9f8fc9a73d75605f31245e42a2154b7c
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38963628"
---
# <a name="iterator-struct"></a>Struct iterator

Struct di base vuoto utilizzato per garantire che una classe iterator definita dall'utente funziona correttamente con `iterator_trait`s.

## <a name="syntax"></a>Sintassi

```cpp
struct iterator {
   typedef Category iterator_category;
   typedef Type value_type;
   typedef Distance difference_type;
   typedef Distance distance_type;
   typedef Pointer pointer;
   typedef Reference reference;
   };
```

## <a name="remarks"></a>Note

La struct modello viene usata come tipo di base per tutti gli iteratori. Definisce i tipi di membro:

- `iterator_category` (sinonimo del parametro modello `Category`)

- `value_type` (sinonimo del parametro modello `Type`)

- `difference_type` (sinonimo del parametro modello `Distance`)

- `distance_type` (sinonimo del parametro modello `Distance`)

- `pointer` (sinonimo del parametro modello `Pointer`)

- `reference` (sinonimo del parametro modello `Reference`)

Si noti che `value_type` non deve essere un tipo costante anche se `pointer` punta a un oggetto del **const** `Type` e definisce come un oggetto di riferimento **const** `Type`.

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare i tipi nella classe iterator di base, vedere [iterator_traits](../standard-library/iterator-traits-struct.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
