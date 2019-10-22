---
title: Classe underlying_type
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::underlying_type
helpviewer_keywords:
- underlying_type
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
ms.openlocfilehash: ea4768d78047112a7584ca49b0e4487fad55a970
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688835"
---
# <a name="underlying_type-class"></a>Classe underlying_type

Genera il tipo integrale sottostante per un tipo di enumerazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct underlying_type;
```

### <a name="parameters"></a>Parametri

@No__t_1 *T*
Tipo da modificare.

## <a name="remarks"></a>Note

Il typedef del membro `type` del modello di classe assegna un nome al tipo integrale sottostante di *t*, quando *t* è un tipo di enumerazione, in caso contrario non è presente alcun membro typedef `type`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
