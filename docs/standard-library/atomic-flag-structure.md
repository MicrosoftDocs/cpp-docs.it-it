---
title: Struttura atomic_flag
ms.date: 11/04/2016
f1_keywords:
- atomic/std::atomic_flag
- atomic/std::atomic_flag::clear
- atomic/std::atomic_flag::test_and_set
ms.assetid: 17f0c2f5-fd39-4a44-873a-b569720a670e
ms.openlocfilehash: 36944c3c3bdc58272d87bbcdfb119d1c52c43995
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447398"
---
# <a name="atomicflag-structure"></a>Struttura atomic_flag

Descrive un oggetto che imposta e cancella atomicamente un flag **bool** . Le operazioni sui flag atomici sono sempre senza blocco.

## <a name="syntax"></a>Sintassi

```cpp
struct atomic_flag;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[clear](#clear)|Imposta il flag archiviato su **false**.|
|[test_and_set](#test_and_set)|Imposta il flag archiviato su **true** e restituisce il valore del flag iniziale.|

## <a name="remarks"></a>Note

Gli oggetti `atomic_flag` possono essere passati alle funzioni non membro [atomic_flag_clear](../standard-library/atomic-functions.md#atomic_flag_clear), [atomic_flag_clear_explicit](../standard-library/atomic-functions.md#atomic_flag_clear_explicit), [atomic_flag_test_and_set](../standard-library/atomic-functions.md#atomic_flag_test_and_set) e [atomic_flag_test_and_set_explicit](../standard-library/atomic-functions.md#atomic_flag_test_and_set_explicit). Tali oggetti possono essere inizializzati tramite il valore `ATOMIC_FLAG_INIT`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> atomico

**Spazio dei nomi:** std

## <a name="clear"></a>  atomic_flag::clear

Imposta il flag **bool** archiviato in `*this` su **false**, entro i vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) volatile noexcept;
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="test_and_set"></a>  atomic_flag::test_and_set

Imposta il flag **bool** archiviato in `*this` su **true**, entro i vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
bool atomic_flag::test_and_set(memory_order Order = memory_order_seq_cst) volatile noexcept;
bool atomic_flag::test_and_set(memory_order Order = memory_order_seq_cst) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Valore iniziale del flag archiviato in `*this`.

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)
