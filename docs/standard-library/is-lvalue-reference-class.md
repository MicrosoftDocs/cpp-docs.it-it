---
title: Classe is_lvalue_reference | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_lvalue_reference
dev_langs:
- C++
helpviewer_keywords:
- is_lvalue_reference class
- is_lvalue_reference
ms.assetid: 7f11896b-935c-4de1-9c87-9d0127f904e2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 692c5243a7fe2984d43a1e70fc39616de5cbcc9c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33845362"
---
# <a name="islvaluereference-class"></a>Classe is_lvalue_reference

Verifica se il tipo è un riferimento lvalue.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_lvalue_reference;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo `Ty` è un riferimento a un oggetto o a una funzione; in caso contrario, contiene false. Si noti che `Ty` potrebbe non essere un riferimento rvalue. Per altre informazioni sui riferimenti rvalue, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Elementi Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md)<br/>
