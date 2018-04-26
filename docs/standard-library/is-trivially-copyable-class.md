---
title: Classe is_trivially_copyable | Microsoft Docs
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
- type_traits/std::is_trivially_copyable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_copyable
ms.assetid: 89a53bf8-036c-4108-91e1-fe34adbde8b3
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c2e2792c93b477c6d6aac4350045a506eda206eb
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="istriviallycopyable-class"></a>Classe is_trivially_copyable

Verifica se il tipo è facilmente copiabile.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_copyable;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è facilmente copiabile; in caso contrario, contiene false. I tipi facilmente copiabili non prevedono operazioni di copia o spostamento o distruttori complessi. In genere, un'operazione di copia è considerata semplice se può essere implementata come una copia bit per bit. I tipi incorporati e le matrici di tipi facilmente copiabili sono facilmente copiabili.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
