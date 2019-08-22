---
title: Struct iterator
ms.date: 11/04/2016
f1_keywords:
- xutility/std::iterator
helpviewer_keywords:
- iterator class
- iterator struct
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
ms.openlocfilehash: 64c9be76cb92d818e40714dd141ded3a8cc17c8a
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455616"
---
# <a name="iterator-struct"></a>Struct iterator

Struttura di base vuota utilizzata per garantire che una classe iteratore definita dall'utente funzioni correttamente `iterator_trait`con i.

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

Si noti `value_type` che non deve essere un tipo costante anche `pointer` se punta a un oggetto `Type` di const e riferimento designa un oggetto `Type`di const.

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare i tipi nella classe iterator di base, vedere [iterator_traits](../standard-library/iterator-traits-struct.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)\
[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
