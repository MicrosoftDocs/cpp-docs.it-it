---
description: 'Altre informazioni su: virtuale (C++)'
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
ms.openlocfilehash: bf90baa1d9be9992e2e516743857bf8889087188
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161350"
---
# <a name="virtual-c"></a>virtual (C++)

La **`virtual`** parola chiave dichiara una funzione virtuale o una classe base virtuale.

## <a name="syntax"></a>Sintassi

```
virtual [type-specifiers] member-function-declarator
virtual [access-specifier] base-class-name
```

#### <a name="parameters"></a>Parametri

*Type-Specifiers*<br/>
Specifica il tipo restituito della funzione interna virtuale.

*member-function-dichiaratore*<br/>
Dichiara una nuova funzione interna.

*identificatore di accesso*<br/>
Definisce il livello di accesso alla classe di base, **`public`** **`protected`** o **`private`** . Può apparire prima o dopo la **`virtual`** parola chiave.

*Nome-classe-base*<br/>
Identifica un tipo della classe dichiarato precedentemente.

## <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [funzioni virtuali](../cpp/virtual-functions.md) .

Vedere anche le parole chiave seguenti: [classe](../cpp/class-cpp.md), [privato](../cpp/private-cpp.md), [pubblico](../cpp/public-cpp.md)e [protetto](../cpp/protected-cpp.md).

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)
