---
title: Operatori &lt;allocators&gt;
ms.date: 11/04/2016
f1_keywords:
- allocators/std::operator!=
- allocators/std::operator==
ms.assetid: b55d67cb-3c69-46bf-ad40-e845fb096c4e
ms.openlocfilehash: 7bc37e98ed85582cac8fc7ae21e54a6d5da9e06f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364954"
---
# <a name="ltallocatorsgt-operators"></a>Operatori &lt;allocators&gt;

Si tratta delle funzioni dell'operatore del modello globale definite negli &lt;allocatori&gt;. Per le funzioni dell'operatore membro di classe, vedere la documentazione della classe.

|||
|-|-|
|[operatore!](#op_neq)|[operatore di comando](#op_eq_eq)|

## <a name="operator"></a><a name="op_neq"></a>operatore!

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
|*Sinistra*|Uno degli oggetti allocatore di cui verificare la disuguaglianza.|
|*va bene*|Uno degli oggetti allocatore di cui verificare la disuguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti allocatore non sono uguali; **false** se gli oggetti allocatore sono uguali.

### <a name="remarks"></a>Osservazioni

L'operatore modello restituisce `!(left == right)`.

## <a name="operator"></a><a name="op_eq_eq"></a>operatore di comando

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
|*Sinistra*|Uno degli oggetti allocatore di cui verificare l'uguaglianza.|
|*va bene*|Uno degli oggetti allocatore di cui verificare l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti allocatore sono uguali; **false** se gli oggetti allocatore non sono uguali.

### <a name="remarks"></a>Osservazioni

Questo operatore di modello restituisce `left.equals(right)`.

## <a name="see-also"></a>Vedere anche

[\<allocatori>](../standard-library/allocators-header.md)
