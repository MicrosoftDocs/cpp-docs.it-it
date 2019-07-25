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
ms.openlocfilehash: 2b2051b0c854151cff9b439f5ec0a951c25a6387
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447632"
---
# <a name="invokeresult-class"></a>Classe invoke_result

Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati in fase di compilazione. Aggiunto in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Callable, class... Args>
   struct invoke_result<Callable(Args...)>;

// Helper type
template<lass Callable, class... Args>
   using invoke_result_t = typename invoke_result<Callable, Args...>::type;
```

### <a name="parameters"></a>Parametri

*Callable*\
Tipo chiamabile su cui eseguire una query.

*Args*\
Tipi dell'elenco di argomenti al tipo chiamabile su cui eseguire una query.

## <a name="remarks"></a>Note

Utilizzare questo modello per determinare il tipo di risultato di Callable (*args*...) in fase di  compilazione, dove Callable e tutti i tipi in *args* sono qualsiasi tipo completo, una matrice di associazione sconosciuta o un `void`qualificatore cv. Il `type` membro della classe modello denomina il tipo restituito di *Callable* quando viene richiamato usando gli argomenti *args*.... Il `type` membro viene definito solo se *Callable* può essere chiamato quando viene richiamato usando gli argomenti *args*... in un contesto non valutato. In caso contrario, la classe modello non `type`dispone di membri, che consente i test SFINAE su un particolare set di tipi di argomento in fase di compilazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[invoke](functional-functions.md#invoke)
