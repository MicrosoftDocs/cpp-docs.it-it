---
title: Operatori &lt;allocators&gt;
ms.date: 11/04/2016
f1_keywords:
- allocators/std::operator!=
- allocators/std::operator==
ms.assetid: b55d67cb-3c69-46bf-ad40-e845fb096c4e
ms.openlocfilehash: 7d22e550c7054c2197163f2edf829ec17a85a145
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87204560"
---
# <a name="ltallocatorsgt-operators"></a>Operatori &lt;allocators&gt;

Queste sono le funzioni dell'operatore modello globale definite negli &lt; allocatori &gt; . Per le funzioni dell'operatore membro della classe, vedere la documentazione relativa alla classe.

|||
|-|-|
|[operatore! =](#op_neq)|[operatore = =](#op_eq_eq)|

## <a name="operator"></a><a name="op_neq"></a>operatore! =

Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.

```cpp
template <class Type, class Sync>
bool operator!=(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*sinistra*|Uno degli oggetti allocatore di cui verificare la disuguaglianza.|
|*Ok*|Uno degli oggetti allocatore di cui verificare la disuguaglianza.|

### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti allocatore non sono uguali. **`false`** se gli oggetti allocatore sono uguali.

### <a name="remarks"></a>Osservazioni

L'operatore modello restituisce `!(left == right)`.

## <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.

```cpp
template <class Type, class Sync>
bool operator==(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*sinistra*|Uno degli oggetti allocatore di cui verificare l'uguaglianza.|
|*Ok*|Uno degli oggetti allocatore di cui verificare l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti allocatore sono uguali; **`false`** se gli oggetti allocatore non sono uguali.

### <a name="remarks"></a>Osservazioni

Questo operatore di modello restituisce `left.equals(right)`.

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
