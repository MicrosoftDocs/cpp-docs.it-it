---
title: Classe bad_function_call | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- functional/std::bad_function_call
dev_langs:
- C++
helpviewer_keywords:
- bad_function_call class
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e00dd485478a5a6fb7ff029afdad7bf7212fd56
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33839946"
---
# <a name="badfunctioncall-class"></a>Classe bad_function_call

Segnala una chiamata di funzione non valida.

## <a name="syntax"></a>Sintassi

```cpp
class bad_function_call
 : public std::exception {
 };
```

## <a name="remarks"></a>Note

La classe descrive un'eccezione generata per indicare che una chiamata a `operator()` in una [Classe function](../standard-library/function-class.md)
