---
title: Classe is_trivial | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: language-reference
f1_keywords:
- type_traits/std::is_trivial
dev_langs:
- C++
helpviewer_keywords:
- is_trivial
ms.assetid: 6beb11d4-2f38-4c7e-9959-ca5d26250df7
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7f6da587ec523db28b133f4219d5c35faa11734a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="istrivial-class"></a>Classe is_trivial

Verifica se il tipo è trivial.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivial;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è un tipo trivial; in caso contrario, contiene false. I tipi trivial sono tipi scalari, tipi di classe facilmente copiabili, matrici di questi tipi e versioni qualificate CV di questi tipi.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
