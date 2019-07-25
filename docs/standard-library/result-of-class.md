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
ms.openlocfilehash: 5a3265cfe4b2629bf02925ea6e3eeb0c4acb1e0e
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451206"
---
# <a name="resultof-class"></a>Classe result_of

Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati. Aggiunto in C++ 14, deprecato in C++ 17.

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

*FN*\
Tipo chiamabile su cui eseguire una query.

*ArgTypes*\
Tipi dell'elenco di argomenti al tipo chiamabile su cui eseguire una query.

## <a name="remarks"></a>Note

Usare questo modello per determinare in fase di compilazione il tipo di `Fn`risultato`ArgTypes`di (), dove *FN* è un tipo chiamabile, un riferimento a una funzione o un riferimento al tipo chiamabile, richiamato usando un elenco di argomenti dei tipi in *argTypes*. Il membro `type` della classe modello attribuisce un nome al tipo di risultato di `decltype(std::invoke(declval<Fn>(), declval<ArgTypes>()...))` se l'espressione non valutata `std::invoke(declval<Fn>(), declval<ArgTypes>()...)` è nel formato corretto. In caso contrario, la classe di modello non ha alcun membro `type`. Il tipo *FN* e tutti i tipi nel pacchetto di parametri *argTypes* devono essere tipi completi, **void**o matrici di associazione sconosciuta. Deprecato a favore di [invoke_result](invoke-result-class.md) in c++ 17.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe invoke_result](invoke-result-class.md)
