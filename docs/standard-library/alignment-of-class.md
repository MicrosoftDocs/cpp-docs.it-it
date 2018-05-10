---
title: Classe alignment_of | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::alignment_of
dev_langs:
- C++
helpviewer_keywords:
- alignment_of class
- alignment_of
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c7d9ba59d7f1539f690d7b04c70139c263490368
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="alignmentof-class"></a>Classe alignment_of

Ottiene l'allineamento del tipo specificato. Questo struct viene implementato in termini di [alignof](../cpp/alignof-and-alignas-cpp.md). Usare `alignof` direttamente quando è sufficiente eseguire una query di un valore di allineamento. Usare alignment_of quando è necessaria una costante integrale, ad esempio quando si esegue l'invio di tag.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct alignment_of;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

La query di tipo contiene il valore dell'allineamento del tipo `Ty`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe aligned_storage](../standard-library/aligned-storage-class.md)<br/>
