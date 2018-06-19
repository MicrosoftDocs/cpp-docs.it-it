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
ms.openlocfilehash: e9cd414e2e6f23cb2fe44e6de4b5f53b33ef3555
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857883"
---
# <a name="iterator-struct"></a>Struct iterator

Struct di base vuota usata per assicurare il funzionamento corretto di una classe iterator definita dall'utente con **iterator_trait**.

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

- `value_type` (sinonimo del parametro modello **Type**)

- `difference_type` (sinonimo del parametro modello `Distance`)

- `distance_type` (sinonimo del parametro modello `Distance`)

- `pointer` (sinonimo del parametro modello `Pointer`)

- `reference` (sinonimo del parametro modello `Reference`)

Si noti che `value_type` non deve essere un tipo costante anche se **pointer** punta a un oggetto di tipo **Type** const e definisce come riferimento un oggetto dello stesso **tipo**.

## <a name="example"></a>Esempio

Per un esempio di come dichiarare e usare i tipi nella classe iterator di base, vedere [iterator_traits](../standard-library/iterator-traits-struct.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
