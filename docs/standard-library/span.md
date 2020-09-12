---
title: '&lt;intervallo&gt;'
description: Informazioni di riferimento sulle API per lo spazio dei nomi dell'estensione STL (Standard Template Library), che fornisce una visualizzazione semplificata di una sequenza di oggetti contigua.
ms.date: 05/28/2020
f1_keywords:
- <span>
helpviewer_keywords:
- span header
ms.openlocfilehash: f4c6b141dfea6464e58d06e221a39a693469d31c
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90039872"
---
# <a name="ltspangt"></a>&lt;intervallo&gt;

Un oggetto `span` è una visualizzazione su una sequenza contigua di oggetti. Consente l'accesso sicuro veloce e limitato. Diversamente da `vector` o `array` , non è "proprietario" degli elementi a cui fornisce l'accesso.

Per informazioni dettagliate, vedere la [classe Span](span-class.md) . Di seguito è riportato un esempio di come è possibile usare un span:

```cpp
#include <span>
#include <iostream>

void Show(std::span<int> someValues)
{
    // show values in reverse
    for (auto rIt = someValues.rbegin(); rIt != someValues.rend(); ++rIt)
    {
        std::cout << *rIt;
    }

    // show a subspan
    for (auto& i : someValues.subspan(1, 2))
    {
        std::cout << i;
    }
}

int main()
{
    int numbers[]{ 0,1,2,3,4 };
    Show(numbers); // note conversion from array to span
}
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<span>

**Spazio dei nomi:** std

**Opzione del compilatore:** [/std: c + + Latest più recente](../build/reference/std-specify-language-standard-version.md)

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|:-|
|[intervallo](span-class.md)| Fornisce una visualizzazione su una sequenza contigua di oggetti. |

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|:-|
|[operatore =](span-class.md#op_eq)| Assegnazione span |
|[operatore\[\]](span-class.md#op_at)| Accesso a elementi |

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|:-|
| [as_bytes](span-functions.md#as_bytes)| Ottiene i byte di sola lettura sottostanti dell'intervallo. |
| [as_writable_bytes](span-functions.md#as_writable_bytes) | Ottiene i byte sottostanti dell'intervallo. |

### <a name="constants"></a>Costanti

|Nome|Descrizione|
|-|:-|
| **dynamic_extent** | Indica che la dimensione dell'intervallo è determinata in fase di esecuzione anziché in fase di compilazione. Quando il numero di elementi nell'intervallo è noto in fase di compilazione, viene specificato come parametro di `Extent` modello. Quando il numero non è noto fino al runtime, specificare in `dynamic_extent` alternativa. |

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
