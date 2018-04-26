---
title: Classe money_base | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xlocmon/std::money_base
dev_langs:
- C++
helpviewer_keywords:
- money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a33e60ff54c7ec03ef806f5104513c9838449190
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="moneybase-class"></a>Classe money_base

Questa classe descrive un'enumerazione e una struttura comuni a tutte le specializzazioni della classe modello [moneypunct](../standard-library/moneypunct-class.md).

## <a name="syntax"></a>Sintassi

```cpp
struct pattern
{
   char field[_PATTERN_FIELD_SIZE];
};
```

## <a name="remarks"></a>Note

L'enumerazione **part** descrive i valori possibili degli elementi del campo matrice nel modello di struttura. I valori di **part** sono:

- **none** per trovare la corrispondenza con zero o più spazi o per non generare nulla.

- **sign** per trovare la corrispondenza con un segno positivo o negativo o per generare tale segno.

- **space** per trovare la corrispondenza con zero o più spazi o per generare uno spazio.

- **symbol** per trovare la corrispondenza con un simbolo di valuta o per generare tale simbolo.

- **value** per trovare la corrispondenza con un valore monetario o per generare tale valore.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
