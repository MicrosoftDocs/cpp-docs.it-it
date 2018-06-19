---
title: Classe is_literal_type | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_literal_type
dev_langs:
- C++
helpviewer_keywords:
- is_literal_type
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4b123144643fd50b019853d21e4140ba2d931f7c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33844985"
---
# <a name="isliteraltype-class"></a>Classe is_literal_type

Verifica se un tipo può essere usato come variabile `constexpr` oppure costruito, usato o restituito da funzioni `constexpr`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_literal_type;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se `T` è un *tipo letterale*; in caso contrario, contiene false. Un tipo letterale è `void`, un tipo scalare, un tipo di riferimento, una matrice di tipo letterale o un tipo di classe letterale. Un tipo di classe letterale è un tipo di classe che ha un distruttore semplice, è un tipo aggregato o ha almeno un costruttore `constexpr` che non supporta la copia o lo spostamento e tutti i relativi membri di dati non statici e le relative classi di base sono tipi letterali non volatili. Se da un lato il tipo di un valore letterale è sempre un tipo letterale, dall'altro il concetto di tipo letterale include tutto ciò che il compilatore può valutare come `constexpr` in fase di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
