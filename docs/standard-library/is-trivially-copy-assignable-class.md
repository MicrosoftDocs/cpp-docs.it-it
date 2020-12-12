---
description: 'Altre informazioni su: is_trivially_copy_assignable Class'
title: Classe is_trivially_copy_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_copy_assignable
helpviewer_keywords:
- is_trivially_copy_assignable
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
ms.openlocfilehash: 010e820db570f594568cb60f4edae83b91a997c4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271239"
---
# <a name="is_trivially_copy_assignable-class"></a>Classe is_trivially_copy_assignable

Verifica se il tipo ha un operatore di assegnazione di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *T* è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.

Un costruttore di assegnazione per una classe *t* è semplice se viene specificato in modo implicito, la classe *t* non ha funzioni virtuali, la classe *t* non ha basi virtuali, le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione semplici e le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione semplici.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
