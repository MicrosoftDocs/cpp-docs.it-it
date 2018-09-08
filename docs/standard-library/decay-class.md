---
title: Classe decay | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::decay
dev_langs:
- C++
helpviewer_keywords:
- decay class
ms.assetid: 96baa2fd-c8e0-49af-be91-ba375ba7f9dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7d3ad5bae067bb9661b6cf475d0831b2b2dfcd2a
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44099525"
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

*T*<br/>
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

[<type_traits>](../standard-library/type-traits.md)<br/>
