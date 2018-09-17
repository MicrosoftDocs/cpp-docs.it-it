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
ms.openlocfilehash: 4b6a450d26480a0e89a115efc5731725f8f8b913
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714194"
---
# <a name="badfunctioncall-class"></a>Classe bad_function_call

Segnala una chiamata di funzione non valida.

## <a name="syntax"></a>Sintassi

```cpp
class bad_function_call : public std::exception {};
```

## <a name="remarks"></a>Note

La classe descrive un'eccezione generata per indicare che una chiamata a `operator()` in una [Classe function](../standard-library/function-class.md)
