---
title: virtual (C++)
ms.date: 11/04/2016
f1_keywords:
- virtual_cpp
- virtual
helpviewer_keywords:
- virtual base classes [C++], declaring
- base classes [C++], virtual
- virtual functions [C++], declaring
- virtual keyword [C++]
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
ms.openlocfilehash: f68bd2e500ebe16c43ef6c3d7a5aede26421b27d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605062"
---
# <a name="virtual-c"></a>virtual (C++)

Il **virtuale** parola chiave dichiara una funzione virtuale o una classe base virtuale.

## <a name="syntax"></a>Sintassi

```
virtual [type-specifiers] member-function-declarator
virtual [access-specifier] base-class-name
```

#### <a name="parameters"></a>Parametri

*identificatori di tipo*<br/>
Specifica il tipo restituito della funzione interna virtuale.

*dichiaratore di funzione membro*<br/>
Dichiara una nuova funzione interna.

*Identificatore di accesso*<br/>
Definisce il livello di accesso per la classe di base **pubbliche**, **protetti** oppure **private**. Può apparire prima o dopo il **virtuale** (parola chiave).

*base-class-name*<br/>
Identifica un tipo della classe dichiarato precedentemente.

## <a name="remarks"></a>Note

Visualizzare [funzioni virtuali](../cpp/virtual-functions.md) per altre informazioni.

Vedere anche le parole chiave seguenti: [classe](../cpp/class-cpp.md), [privato](../cpp/private-cpp.md), [pubblica](../cpp/public-cpp.md), e [protetto](../cpp/protected-cpp.md).

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)