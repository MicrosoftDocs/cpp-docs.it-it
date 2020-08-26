---
title: Operatori &lt;allocators&gt;
ms.date: 11/04/2016
f1_keywords:
- allocators/std::operator!=
- allocators/std::operator==
ms.assetid: b55d67cb-3c69-46bf-ad40-e845fb096c4e
ms.openlocfilehash: 969c9f8e05a9fafad4d3a1102060e2b3d4d0eb2e
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844782"
---
# <a name="ltallocatorsgt-operators"></a>Operatori &lt;allocators&gt;

Queste sono le funzioni dell'operatore modello globale definite negli &lt; allocatori &gt; . Per le funzioni dell'operatore membro della classe, vedere la documentazione relativa alla classe.

[operatore! =](#op_neq)\
[operatore = =](#op_eq_eq)

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.

```cpp
template <class Type, class Sync>
bool operator!=(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Uno degli oggetti allocatore di cui verificare la disuguaglianza.

*Ok*\
Uno degli oggetti allocatore di cui verificare la disuguaglianza.

### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti allocatore non sono uguali. **`false`** se gli oggetti allocatore sono uguali.

### <a name="remarks"></a>Osservazioni

L'operatore modello restituisce `!(left == right)`.

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.

```cpp
template <class Type, class Sync>
bool operator==(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Uno degli oggetti allocatore di cui verificare l'uguaglianza.

*Ok*\
Uno degli oggetti allocatore di cui verificare l'uguaglianza.

### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti allocatore sono uguali; **`false`** se gli oggetti allocatore non sono uguali.

### <a name="remarks"></a>Osservazioni

Questo operatore di modello restituisce `left.equals(right)`.

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
