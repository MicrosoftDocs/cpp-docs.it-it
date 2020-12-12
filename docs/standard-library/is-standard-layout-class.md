---
description: 'Altre informazioni su: is_standard_layout Class'
title: Classe is_standard_layout
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_standard_layout
helpviewer_keywords:
- is_standard_layout class
- is_standard_layout
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
ms.openlocfilehash: 8f1f24fcb29e862dff10c2a51d1c9d0b2b28541f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271252"
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

## <a name="remarks"></a>Commenti

Un'istanza di questo predicato di tipo contiene true se il tipo *Ty* è una classe che ha un layout standard di oggetti membro in memoria; in caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
