---
title: Classe is_standard_layout
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_standard_layout
helpviewer_keywords:
- is_standard_layout class
- is_standard_layout
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
ms.openlocfilehash: fba77be22796f3cb5495543d262dd270ac13d598
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560595"
---
# <a name="is_standard_layout-class"></a>Classe is_standard_layout

Verifica se il tipo è un layout standard.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_standard_layout;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query

## <a name="remarks"></a>Osservazioni

Un'istanza di questo predicato di tipo contiene true se il tipo *Ty* è una classe che ha un layout standard di oggetti membro in memoria; in caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
