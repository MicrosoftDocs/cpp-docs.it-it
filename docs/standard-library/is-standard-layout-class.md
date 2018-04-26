---
title: Classe is_standard_layout | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_standard_layout
dev_langs:
- C++
helpviewer_keywords:
- is_standard_layout class
- is_standard_layout
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 97ed762b390152794a078b6f439a76babe66f54c
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="isstandardlayout-class"></a>Classe is_standard_layout

Verifica se il tipo è un layout standard.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_standard_layout;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`Ty`|Tipo su cui eseguire una query|

## <a name="remarks"></a>Note

Un'istanza di questo predicato di tipo contiene true se il tipo `Ty` è una classe che ha un layout standard di oggetti membro in memoria; in caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
