---
description: 'Altre informazioni su: bad_function_call Class'
title: Classe bad_function_call
ms.date: 11/04/2016
f1_keywords:
- functional/std::bad_function_call
helpviewer_keywords:
- bad_function_call class
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
ms.openlocfilehash: 659630874f84ea9e7d164b560408b162f07e1f68
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321599"
---
# <a name="bad_function_call-class"></a>Classe bad_function_call

Segnala una chiamata di funzione non valida.

## <a name="syntax"></a>Sintassi

```cpp
class bad_function_call : public std::exception {};
```

## <a name="remarks"></a>Osservazioni

La classe descrive un'eccezione generata per indicare che una chiamata a `operator()` in una [Classe function](../standard-library/function-class.md)
