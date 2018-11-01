---
title: Classe is_trivially_copy_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_copy_constructible
helpviewer_keywords:
- is_trivially_copy_constructible
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
ms.openlocfilehash: aa6d6b19ae2bd5d6967c57db61c5697c0c6153e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630516"
---
# <a name="istriviallycopyconstructible-class"></a>Classe is_trivially_copy_constructible

Verifica se il tipo ha un costruttore di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_copy_constructible;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è una classe che ha un costruttore di copia semplice, in caso contrario, contiene false.

Un costruttore di copia per una classe *T* è semplice se si è dichiarato in modo implicito, la classe *T* non dispone di funzioni virtuali o basi virtuali, tutte le basi dirette della classe *T* hanno i costruttori di copia semplice, le classi di tutti i membri dati non statici di tipo classe hanno costruttori di copia semplici e le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di copia semplice.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
