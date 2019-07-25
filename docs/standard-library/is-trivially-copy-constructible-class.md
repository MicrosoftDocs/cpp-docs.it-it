---
title: Classe is_trivially_copy_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_copy_constructible
helpviewer_keywords:
- is_trivially_copy_constructible
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
ms.openlocfilehash: f8c4026da424e77b57555dd4c342c9ac7a386591
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447982"
---
# <a name="istriviallycopyconstructible-class"></a>Classe is_trivially_copy_constructible

Verifica se il tipo ha un costruttore di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_copy_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *T* è una classe che ha un costruttore di copia semplice; in caso contrario, contiene false.

Un costruttore di copia per una classe *t* è semplice se è dichiarato in modo implicito, la classe *t* non ha funzioni virtuali o basi virtuali, tutte le basi dirette della classe *t* hanno costruttori di copia semplici, le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di copia semplici e le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di copia semplici.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
