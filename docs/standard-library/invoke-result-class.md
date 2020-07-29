---
title: Classe invoke_result
ms.date: 02/21/2019
f1_keywords:
- type_traits/std::invoke_result
- type_traits/std::invoke_result_t
- type_traits/std::invoke_result::type
helpviewer_keywords:
- std::invoke_result
- std::invoke_result_t
- std::invoke_result::type
ms.openlocfilehash: e3e1a28310660ad1fbdae4dd58973de378ddf364
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233132"
---
# <a name="invoke_result-class"></a>Classe invoke_result

Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati in fase di compilazione. Aggiunto in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Callable, class... Args>
   struct invoke_result<Callable(Args...)>;

// Helper type
template<class Callable, class... Args>
   using invoke_result_t = typename invoke_result<Callable, Args...>::type;
```

### <a name="parameters"></a>Parametri

*Callable*\
Tipo chiamabile su cui eseguire una query.

*Args*\
Tipi dell'elenco di argomenti al tipo chiamabile su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

Utilizzare questo modello per determinare il tipo di risultato di *Callable*(*args*...) in fase di compilazione, dove *Callable* e tutti i tipi in *args* sono qualsiasi tipo completo, una matrice di associazione sconosciuta o un qualificatore CV **`void`** . Il `type` membro del modello di classe denomina il tipo restituito di *Callable* quando viene richiamato usando gli argomenti *args*.... Il `type` membro viene definito solo se *Callable* può essere chiamato quando viene richiamato usando gli argomenti *args*... in un contesto non valutato. In caso contrario, il modello di classe non dispone `type` di membri, che consente i test SFINAE su un particolare set di tipi di argomento in fase di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[invoke](functional-functions.md#invoke)
