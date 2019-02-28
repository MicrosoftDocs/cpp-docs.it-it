---
title: Classe result_of
ms.date: 02/21/2019
f1_keywords:
- type_traits/std::result_of
- type_traits/std::result_of_t
- type_traits/std::result_of::type
helpviewer_keywords:
- std::result_of
- std::result_of_t
- std::result_of::type
ms.assetid: 5374a096-4b4a-4712-aa97-6852c5cdd6be
ms.openlocfilehash: f60a3ef6528da33fd1117fc940e961e9fe0987df
ms.sourcegitcommit: 4299caac2dc9e806c74ac833d856a3838b0f52a1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/28/2019
ms.locfileid: "57006552"
---
# <a name="resultof-class"></a>Classe result_of

Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati. Aggiunto in c++14, deprecata in c++17.

## <a name="syntax"></a>Sintassi

```cpp
template<class>
struct result_of; // Causes a static assert

template <class Fn, class... ArgTypes>
struct result_of<Fn(ArgTypes...)>;

// Helper type
template<class T>
   using result_of_t = typename result_of<T>::type;
```

### <a name="parameters"></a>Parametri

*Fn*<br/>
Tipo chiamabile su cui eseguire una query.

*ArgTypes*<br/>
Tipi dell'elenco di argomenti al tipo chiamabile su cui eseguire una query.

## <a name="remarks"></a>Note

Usare questo modello per determinare in fase di compilazione il tipo di risultato `Fn`(`ArgTypes`), dove *Fn* è un tipo chiamabile, un riferimento alla funzione o un riferimento al tipo chiamabile, richiamato tramite un elenco di argomenti dei tipi in  *ArgTypes*. Il membro `type` della classe modello attribuisce un nome al tipo di risultato di `decltype(std::invoke(declval<Fn>(), declval<ArgTypes>()...))` se l'espressione non valutata `std::invoke(declval<Fn>(), declval<ArgTypes>()...)` è nel formato corretto. In caso contrario, la classe di modello non ha alcun membro `type`. Il tipo *Fn* e tutti i tipi nel pacchetto di parametri *ArgTypes* devono essere tipi completi, **void**, o matrici di valori associati sconosciuti. Deprecato in favore di [invoke_result](invoke-result-class.md) in c++17.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[classe invoke_result](invoke-result-class.md)<br/>
