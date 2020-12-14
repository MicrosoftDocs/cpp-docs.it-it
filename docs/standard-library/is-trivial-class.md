---
description: 'Altre informazioni su: is_trivial Class'
title: Classe is_trivial
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivial
helpviewer_keywords:
- is_trivial
ms.assetid: 6beb11d4-2f38-4c7e-9959-ca5d26250df7
ms.openlocfilehash: 56e5a3c915893b88228f4a40307d2c1e3c32555d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247657"
---
# <a name="is_trivial-class"></a>Classe is_trivial

Verifica se il tipo è trivial.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivial;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo semplice; in caso contrario, include false. I tipi trivial sono tipi scalari, tipi di classe facilmente copiabili, matrici di questi tipi e versioni qualificate CV di questi tipi.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
