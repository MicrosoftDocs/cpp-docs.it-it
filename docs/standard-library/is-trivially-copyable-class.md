---
title: Classe is_trivially_copyable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_copyable
helpviewer_keywords:
- is_trivially_copyable
ms.assetid: 89a53bf8-036c-4108-91e1-fe34adbde8b3
ms.openlocfilehash: 181152bff1d7c2e4f97678b48310f744080822ce
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554368"
---
# <a name="istriviallycopyable-class"></a>Classe is_trivially_copyable

Verifica se il tipo è facilmente copiabile.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_copyable;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo facilmente copiabile in caso contrario, contiene false. I tipi facilmente copiabili non prevedono operazioni di copia o spostamento o distruttori complessi. In genere, un'operazione di copia è considerata semplice se può essere implementata come una copia bit per bit. I tipi incorporati e le matrici di tipi facilmente copiabili sono facilmente copiabili.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
