---
title: Classe is_final
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_final
helpviewer_keywords:
- is_final
ms.assetid: 9dbad82f-6685-4909-94e8-98e4a93994b9
ms.openlocfilehash: f605b160f6ed71aaafcc7c391e17180e4b243444
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50446539"
---
# <a name="isfinal-class"></a>Classe is_final

Verifica se il tipo è un tipo di classe contrassegnato come `final`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_final;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo di classe contrassegnato `final`, in caso contrario, contiene false. Se *T* è un tipo di classe, deve essere un tipo completo.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Identificatore final](../cpp/final-specifier.md)<br/>
