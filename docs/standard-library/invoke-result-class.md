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
ms.openlocfilehash: 7c03240d3ee666fcda30562279a8dbda2ca8dc7b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62404850"
---
# <a name="invokeresult-class"></a>Classe invoke_result

Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificato al momento della compilazione. Aggiunta di c++17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Callable, class... Args>
   struct invoke_result<Callable(Args...)>;

// Helper type
template<lass Callable, class... Args>
   using invoke_result_t = typename invoke_result<Callable, Args...>::type;
```

### <a name="parameters"></a>Parametri

*richiamabili*<br/>
Tipo chiamabile su cui eseguire una query.

*Args*<br/>
Tipi dell'elenco di argomenti al tipo chiamabile su cui eseguire una query.

## <a name="remarks"></a>Note

Usare questo modello per determinare il tipo di risultato *Callable*(*Args*...) in fase di compilazione in cui *Callable* e tutti i tipi *Args* sono qualsiasi tipo completo, una matrice di valori associati sconosciuti o un eventualmente cv-qualified `void`. Il `type` il tipo restituito dei nomi dei membri della classe modello *Callable* quando viene richiamato usando gli argomenti *Args*... Il `type` membro viene definito solo se *Callable* può essere chiamato quando viene richiamato usando gli argomenti *Args*... in un contesto non valutato. In caso contrario, la classe modello dispone di alcun membro `type`, che consente di SFINAE di test in un determinato set di tipi di argomento in fase di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[invoke](functional-functions.md#invoke)
