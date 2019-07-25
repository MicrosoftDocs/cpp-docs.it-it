---
title: Classe decay
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::decay
helpviewer_keywords:
- decay class
ms.assetid: 96baa2fd-c8e0-49af-be91-ba375ba7f9dc
ms.openlocfilehash: 73b9e2d8ef9a14830c13ee3f6566137bb51e939d
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450634"
---
# <a name="decay-class"></a>Classe decay

Genera il tipo come passato da valore. Rende il tipo non di riferimento, non costante, non volatile oppure crea un puntatore al tipo da una funzione o un tipo di matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct decay;

template <class T>
using decay_t = typename decay<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Note

Usare il modello decay per ottenere il tipo risultante come se il tipo fosse passato dal valore come argomento. Il typedef membro della classe modello `type` contiene un tipo modificato che viene definito nelle seguenti fasi:

- Il tipo `U` viene definito come `remove_reference<T>::type`.

- Se `is_array<U>::value` è true, il tipo modificato `type` è `remove_extent<U>::type *`.

- In caso contrario, se `is_function<U>::value` è true, il tipo modificato `type` è `add_pointer<U>::type`.

- In caso contrario, il tipo modificato `type` è `remove_cv<U>::type`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
