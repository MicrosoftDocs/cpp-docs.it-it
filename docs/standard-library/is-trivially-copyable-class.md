---
title: Classe is_trivially_copyable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_copyable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_copyable
ms.assetid: 89a53bf8-036c-4108-91e1-fe34adbde8b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 177ba6e688f6d7ed2b4c76eb0ede95cc288b1d5d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="istriviallycopyable-class"></a>Classe is_trivially_copyable

Verifica se il tipo è facilmente copiabile.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_copyable;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è facilmente copiabile; in caso contrario, contiene false. I tipi facilmente copiabili non prevedono operazioni di copia o spostamento o distruttori complessi. In genere, un'operazione di copia è considerata semplice se può essere implementata come una copia bit per bit. I tipi incorporati e le matrici di tipi facilmente copiabili sono facilmente copiabili.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
