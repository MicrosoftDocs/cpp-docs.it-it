---
title: Virtual (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- virtual_cpp
- virtual
dev_langs:
- C++
helpviewer_keywords:
- virtual base classes [C++], declaring
- base classes [C++], virtual
- virtual functions [C++], declaring
- virtual keyword [C++]
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2471dac12db574aa045142a654effafadbabd732
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092272"
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