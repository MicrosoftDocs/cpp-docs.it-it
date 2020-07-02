---
title: '&lt;intervallo&gt;'
ms.date: 05/28/2020
f1_keywords:
- <span>
helpviewer_keywords:
- span header
ms.openlocfilehash: 27f27acfa84a3ccc42586593747e4657146cbe39
ms.sourcegitcommit: 83ea5df40917885e261089b103d5de3660314104
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/01/2020
ms.locfileid: "85813535"
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

**Opzione del compilatore:** /std: c + + Latest più recente

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|||
|-|:-|
|[intervallo](span-class.md)| Fornisce una visualizzazione su una sequenza contigua di oggetti. |

### <a name="operators"></a>Operatori

|||
|-|:-|
|[operatore =](span-class.md#op_eq)| Assegnazione span |
|[operatore\[\]](span-class.md#op_at)| Accesso a elementi |

### <a name="functions"></a>Funzioni

|||
|-|:-|
| [as_bytes](span-functions.md#as_bytes)| Ottiene i byte di sola lettura sottostanti dell'intervallo. |
| [as_writable_bytes](span-functions.md#as_writable_bytes) | Ottiene i byte sottostanti dell'intervallo. |

### <a name="constants"></a>Costanti

|||
|-|:-|
| **dynamic_extent** | Indica che la dimensione dell'intervallo è determinata in fase di esecuzione anziché in fase di compilazione. Quando il numero di elementi nell'intervallo è noto in fase di compilazione, viene specificato come parametro di `Extent` modello. Quando il numero non è noto fino al runtime, specificare in `dynamic_extent` alternativa. |

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
