---
title: Classe is_trivially_default_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_default_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_default_constructible
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 73bdd8186f2ce56e4a6ecec0fa4f9468d9da8e8c
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44102707"
---
# <a name="istriviallydefaultconstructible-class"></a>Classe is_trivially_default_constructible

Verifica se il tipo ha un costruttore predefinito semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_default_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è una classe che ha un costruttore semplice, in caso contrario, contiene false.

Un costruttore predefinito per una classe *Ty* è piuttosto semplice se:

- è un costruttore predefinito dichiarato in modo implicito

- la classe *Ty* non ha funzioni virtuali

- la classe *Ty* non ha basi virtuali

- tutte le basi dirette della classe *Ty* hanno costruttori semplici

- le classi di tutti i membri dati non statici del tipo di classe hanno costruttori semplici

- le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori semplici

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
