---
title: Typedef &lt;new&gt;
ms.date: 11/04/2016
f1_keywords:
- new/std::new_handler
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
ms.openlocfilehash: 80123bc35422984ef92bdba6da45052d3461b1d7
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78854938"
---
# <a name="ltnewgt-typedefs"></a>Typedef &lt;new&gt;

## <a name="hardware_constructive_interference_size"></a>hardware_constructive_interference_size

```cpp
inline constexpr size_t hardware_constructive_interference_size = implementation-defined;
```

### <a name="remarks"></a>Osservazioni

Questo numero rappresenta la dimensione massima consigliata della memoria contigua occupata da due oggetti a cui si accede con la località temporale per thread simultanei. Deve essere almeno `alignof(max_align_t)`.

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

## <a name="hardware_destructive_interference_size"></a>hardware_destructive_interference_size

```cpp
inline constexpr size_t hardware_destructive_interference_size = implementation-defined;
```

### <a name="remarks"></a>Osservazioni

Questo numero è l'offset minimo consigliato tra due oggetti a cui si accede contemporaneamente per evitare un peggioramento delle prestazioni a causa della contesa introdotta dall'implementazione. Deve essere almeno `alignof(max_align_t)`.

### <a name="example"></a>Esempio

```cpp
struct keep_apart {
    alignas(hardware_destructive_interference_size) atomic<int> cat;
    alignas(hardware_destructive_interference_size) atomic<int> dog;
};
```

## <a name="new_handler"></a>new_handler

Il tipo punta a una funzione appropriata per l'uso come nuovo gestore.

```cpp
typedef void (*new_handler)();
```

### <a name="remarks"></a>Osservazioni

Questo tipo di funzione del gestore viene chiamato da **operator new** o `operator new[]` quando non è in grado di soddisfare una richiesta di archiviazione aggiuntiva.

### <a name="example"></a>Esempio

Vedere [set_new_handler](../standard-library/new-functions.md#set_new_handler) per un esempio d'uso di `new_handler` come valore restituito.
