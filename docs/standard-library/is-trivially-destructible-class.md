---
title: Classe is_trivially_destructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_destructible
helpviewer_keywords:
- is_trivially_destructible
ms.assetid: 3f7a787d-2448-40c5-ac51-a228318e02ce
ms.openlocfilehash: 61d626c308338595a64031a45908ab299ae1a957
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409772"
---
# <a name="istriviallydestructible-class"></a>Classe is_trivially_destructible

Verifica se il tipo è facilmente distruttibile.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_destructible;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo distruttibile e il distruttore è noto al compilatore di non utilizzare alcuna operazione non semplice. In caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
