---
title: Struct iterator
ms.date: 11/04/2016
f1_keywords:
- xutility/std::iterator
helpviewer_keywords:
- iterator class
- iterator struct
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
ms.openlocfilehash: b45cdb5c3d4608296cca34ad6a0be6e25b588d28
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222303"
---
# <a name="iterator-struct"></a>Struct iterator

Struttura di base vuota utilizzata per garantire che una classe iteratore definita dall'utente funzioni correttamente con `iterator_trait` i.

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

## <a name="remarks"></a>Osservazioni

La struct modello viene usata come tipo di base per tutti gli iteratori. Definisce i tipi di membro:

- `iterator_category` (sinonimo del parametro modello `Category`)

- `value_type` (sinonimo del parametro modello `Type`)

- `difference_type` (sinonimo del parametro modello `Distance`)

- `distance_type` (sinonimo del parametro modello `Distance`)

- `pointer` (sinonimo del parametro modello `Pointer`)

- `reference` (sinonimo del parametro modello `Reference`)

Si noti che `value_type` non deve essere un tipo costante anche se `pointer` punta a un oggetto di **`const`** `Type` e riferimento designa un oggetto di **`const`** `Type` .

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare i tipi nella classe iterator di base, vedere [iterator_traits](../standard-library/iterator-traits-struct.md).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
