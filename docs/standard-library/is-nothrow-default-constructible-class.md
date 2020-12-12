---
description: 'Altre informazioni su: is_nothrow_default_constructible Class'
title: Classe is_nothrow_default_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_default_constructible
helpviewer_keywords:
- is_nothrow_default_constructible
ms.assetid: c576fcc9-5be1-43aa-b93a-64d3f1848887
ms.openlocfilehash: bbfadf10048175472c10f264856cdb519896b65f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230796"
---
# <a name="is_nothrow_default_constructible-class"></a>Classe is_nothrow_default_constructible

Verifica se il tipo ha un costruttore predefinito non generante.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_nothrow_default_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *Ty* ha un costruttore predefinito nothrow; in caso contrario, contiene false. Un'istanza del tipo predicato è equivalente a `is_nothrow_constructible<Ty>`.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
