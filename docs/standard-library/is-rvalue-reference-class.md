---
title: Classe is_rvalue_reference | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_rvalue_reference
dev_langs:
- C++
helpviewer_keywords:
- is_rvalue_reference class
- is_rvalue_reference
ms.assetid: 40a97072-7b5c-4274-9154-298d3dcf064a
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 63c4cc79dd08742d6c7e594df6a8fb20468d3382
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="isrvaluereference-class"></a>Classe is_rvalue_reference

Verifica se il tipo è un riferimento rvalue.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_rvalue_reference;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza di questo predicato di tipo contiene true se il tipo `Ty` è un [riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Elementi Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md)<br/>
