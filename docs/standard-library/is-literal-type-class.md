---
description: 'Altre informazioni su: is_literal_type Class'
title: Classe is_literal_type
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_literal_type
helpviewer_keywords:
- is_literal_type
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
ms.openlocfilehash: 97cb609c5a42bed0be205b1b51ff901d3e366bb1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323686"
---
# <a name="is_literal_type-class"></a>Classe is_literal_type

Verifica se un tipo può essere utilizzato come **`constexpr`** variabile o essere costruito, utilizzato da o restituito da **`constexpr`** funzioni.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_literal_type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è un *tipo letterale*; in caso contrario, include false. Un tipo di valore letterale può essere **`void`** , un tipo scalare, un tipo di riferimento, una matrice di tipo letterale o un tipo di classe letterale. Un tipo di classe letterale è un tipo di classe con un distruttore semplice, è un tipo di aggregazione o dispone di almeno un costruttore di non spostamento, non di copia **`constexpr`** , e tutte le relative classi di base e i membri dati non statici sono tipi letterali non volatili. Sebbene il tipo di un valore letterale sia sempre un tipo letterale, il concetto di tipo letterale include qualsiasi elemento che il compilatore può valutare come in fase di **`constexpr`** compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
