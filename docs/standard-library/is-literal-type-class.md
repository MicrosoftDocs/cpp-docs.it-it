---
title: Classe is_literal_type
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_literal_type
helpviewer_keywords:
- is_literal_type
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
ms.openlocfilehash: 804ef0462308b967fc0c4c95d8dfa96476475aab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50514000"
---
# <a name="isliteraltype-class"></a>Classe is_literal_type

Verifica se un tipo può essere usato come variabile `constexpr` oppure costruito, usato o restituito da funzioni `constexpr`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_literal_type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un *tipo di valore letterale*, in caso contrario, contiene false. È un tipo di valore letterale **void**, un tipo scalare, un tipo riferimento, una matrice di tipo di valore letterale o un tipo di classe letterale. Un tipo di classe letterale è un tipo di classe che ha un distruttore semplice, è un tipo aggregato o ha almeno un costruttore `constexpr` che non supporta la copia o lo spostamento e tutti i relativi membri di dati non statici e le relative classi di base sono tipi letterali non volatili. Se da un lato il tipo di un valore letterale è sempre un tipo letterale, dall'altro il concetto di tipo letterale include tutto ciò che il compilatore può valutare come `constexpr` in fase di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
