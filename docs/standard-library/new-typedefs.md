---
title: Typedef &lt;new&gt;
ms.date: 11/04/2016
f1_keywords:
- new/std::new_handler
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
ms.openlocfilehash: 80123bc35422984ef92bdba6da45052d3461b1d7
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245149"
---
# <a name="ltnewgt-typedefs"></a>Typedef &lt;new&gt;

## <a name="hardware_constructive_interference_size"></a> hardware_constructive_interference_size

```cpp
inline constexpr size_t hardware_constructive_interference_size = implementation-defined;
```

### <a name="remarks"></a>Note

Questo numero è il valore massimo consigliato di dimensioni di memoria contigua occupata da due oggetti accessibili con la località temporale dal thread simultanei. Deve essere almeno `alignof(max_align_t)`.

### <a name="example"></a>Esempio

```cpp
struct together { 
    atomic<int> dog;
    int puppy;
};

struct kennel {
    // Other data members...
    alignas(sizeof(together)) together pack;
    // Other data members...
};

static_assert(sizeof(together) <= hardware_constructive_interference_size);
```

## <a name="hardware_destructive_interference_size"></a> hardware_destructive_interference_size e altre

```cpp
inline constexpr size_t hardware_destructive_interference_size = implementation-defined;
```

### <a name="remarks"></a>Note

Questo numero è l'offset consigliato minimo tra due oggetti si accede contemporaneamente per evitare un calo delle prestazioni a causa della contesa introdotto dall'implementazione. Deve essere almeno `alignof(max_align_t)`.

### <a name="example"></a>Esempio

```cpp
struct keep_apart {
    alignas(hardware_destructive_interference_size) atomic<int> cat;
    alignas(hardware_destructive_interference_size) atomic<int> dog;
};
```

## <a name="new_handler"></a> new_handler

Il tipo punta a una funzione appropriata per l'uso come nuovo gestore.

```cpp
typedef void (*new_handler)();
```

### <a name="remarks"></a>Note

Questo tipo di funzione del gestore viene chiamato da **operatore new** o `operator new[]` quando essi non riesce a soddisfare una richiesta per l'archiviazione aggiuntiva.

### <a name="example"></a>Esempio

Vedere [set_new_handler](../standard-library/new-functions.md#set_new_handler) per un esempio d'uso di `new_handler` come valore restituito.
