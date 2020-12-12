---
description: 'Altre informazioni su: is_trivially_copy_constructible Class'
title: Classe is_trivially_copy_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_copy_constructible
helpviewer_keywords:
- is_trivially_copy_constructible
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
ms.openlocfilehash: c247e81f52ad98e546a840bb38938fe15bc9b302
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118524"
---
# <a name="is_trivially_copy_constructible-class"></a>Classe is_trivially_copy_constructible

Verifica se il tipo ha un costruttore di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_copy_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *T* è una classe che ha un costruttore di copia semplice; in caso contrario, contiene false.

Un costruttore di copia per una classe *T* è semplice se è dichiarato in modo implicito, la classe *t* non ha funzioni virtuali o basi virtuali, tutte le basi dirette della classe *t* hanno costruttori di copia semplici, le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di copia semplici e le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di copia semplici.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
