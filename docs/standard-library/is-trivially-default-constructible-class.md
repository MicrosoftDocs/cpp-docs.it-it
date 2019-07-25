---
title: Classe is_trivially_default_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_default_constructible
helpviewer_keywords:
- is_trivially_default_constructible
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
ms.openlocfilehash: 19a5e8afedf3e59d5dafa937af4f7d35343eb7d9
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459646"
---
# <a name="istriviallydefaultconstructible-class"></a>Classe is_trivially_default_constructible

Verifica se il tipo ha un costruttore predefinito semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_default_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un costruttore semplice; in caso contrario, contiene false.

Un costruttore predefinito per una classe *Ty* è semplice se:

- è un costruttore predefinito dichiarato in modo implicito

- la classe *Ty* non ha funzioni virtuali

- la classe *Ty* non ha basi virtuali

- tutte le basi dirette della classe *Ty* hanno costruttori semplici

- le classi di tutti i membri dati non statici del tipo di classe hanno costruttori semplici

- le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori semplici

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
