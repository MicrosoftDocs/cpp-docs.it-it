---
title: Struttura atomic_flag
ms.date: 11/04/2016
f1_keywords:
- atomic/std::atomic_flag
- atomic/std::atomic_flag::clear
- atomic/std::atomic_flag::test_and_set
ms.assetid: 17f0c2f5-fd39-4a44-873a-b569720a670e
ms.openlocfilehash: ad4b6dcaf6db1a8abe5b81b4d630e84b54fbaa63
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376863"
---
# <a name="atomic_flag-structure"></a>Struttura atomic_flag

Descrive un oggetto che imposta e cancella un flag bool in modo **atomico.** Le operazioni sui flag atomici sono sempre senza blocco.

## <a name="syntax"></a>Sintassi

```cpp
struct atomic_flag;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Chiaro](#clear)|Imposta il flag archiviato su **false**.|
|[test_and_set](#test_and_set)|Imposta il flag archiviato su **true** e restituisce il valore del flag iniziale.|

## <a name="remarks"></a>Osservazioni

Gli oggetti `atomic_flag` possono essere passati alle funzioni non membro [atomic_flag_clear](../standard-library/atomic-functions.md#atomic_flag_clear), [atomic_flag_clear_explicit](../standard-library/atomic-functions.md#atomic_flag_clear_explicit), [atomic_flag_test_and_set](../standard-library/atomic-functions.md#atomic_flag_test_and_set) e [atomic_flag_test_and_set_explicit](../standard-library/atomic-functions.md#atomic_flag_test_and_set_explicit). Tali oggetti possono essere inizializzati tramite il valore `ATOMIC_FLAG_INIT`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> atomica

**Spazio dei nomi:** std

## <a name="atomic_flagclear"></a><a name="clear"></a>atomic_flag::cancellare

Imposta il flag **bool archiviato** in `*this` **false**, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) volatile noexcept;
void atomic_flag::clear(memory_order Order = memory_order_seq_cst) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_flagtest_and_set"></a><a name="test_and_set"></a>atomic_flag::test_and_set

Imposta il flag **bool** `*this` memorizzato in **true**, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

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

[\<>atomica](../standard-library/atomic.md)
