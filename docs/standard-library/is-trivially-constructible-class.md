---
description: 'Altre informazioni su: is_trivially_constructible Class'
title: Classe is_trivially_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_constructible
helpviewer_keywords:
- is_trivially_constructible
ms.assetid: 3fa918c1-e66f-4d0e-a11b-be1fb2c02e7b
ms.openlocfilehash: 4a5c3e20366c4e87aa731c6d6a69787286b947b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247631"
---
# <a name="is_trivially_constructible-class"></a>Classe is_trivially_constructible

Verifica se un tipo è facilmente costruibile quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_trivially_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

*Args*\
Tipi di argomento per cui trovare una corrispondenza in un costruttore di *T*.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è banalmente costruibile usando i tipi di argomento in *args*; in caso contrario, include false. Il tipo *T* è costruibile in modo banale se la definizione della variabile `T t(std::declval<Args>()...);` è ben formata ed è nota per chiamare nessuna operazione non semplice. Sia *T* che tutti i tipi negli *argomenti* devono essere tipi completi, **`void`** , o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
