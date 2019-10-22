---
title: Classe decay
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::decay
helpviewer_keywords:
- decay class
ms.assetid: 96baa2fd-c8e0-49af-be91-ba375ba7f9dc
ms.openlocfilehash: 3b22dfecb1162ce67a0d648197465115acb044ba
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688111"
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

@No__t_1 *T*
Tipo da modificare.

## <a name="remarks"></a>Note

Usare il modello decay per ottenere il tipo risultante come se il tipo fosse passato dal valore come argomento. Il typedef del membro del modello di classe `type` include un tipo modificato definito nelle fasi seguenti:

- Il tipo `U` viene definito come `remove_reference<T>::type`.

- Se `is_array<U>::value` è true, il tipo modificato `type` è `remove_extent<U>::type *`.

- In caso contrario, se `is_function<U>::value` è true, il tipo modificato `type` è `add_pointer<U>::type`.

- In caso contrario, il tipo modificato `type` è `remove_cv<U>::type`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
