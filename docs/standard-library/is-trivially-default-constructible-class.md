---
description: 'Altre informazioni su: is_trivially_default_constructible Class'
title: Classe is_trivially_default_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_default_constructible
helpviewer_keywords:
- is_trivially_default_constructible
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
ms.openlocfilehash: 3686dab86b8bf04fe7629b53651988d7ccef161e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118407"
---
# <a name="is_trivially_default_constructible-class"></a>Classe is_trivially_default_constructible

Verifica se il tipo ha un costruttore predefinito semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_default_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un costruttore semplice; in caso contrario, contiene false.

Un costruttore predefinito per una classe *Ty* è semplice se:

- è un costruttore predefinito dichiarato in modo implicito

- la classe *Ty* non ha funzioni virtuali

- la classe *Ty* non ha basi virtuali

- tutte le basi dirette della classe *Ty* hanno costruttori semplici

- le classi di tutti i membri dati non statici del tipo di classe hanno costruttori semplici

- le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori semplici

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
