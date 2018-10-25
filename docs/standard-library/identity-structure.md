---
title: Struttura identity | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- utility/std::identity
dev_langs:
- C++
helpviewer_keywords:
- identity class
- identity structure
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 62acade082847386e065470f23ffe8374f82eb55
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50079194"
---
# <a name="identity-structure"></a>Struttura identity

Struct che fornisce una definizione di tipo come parametro di modello.

## <a name="syntax"></a>Sintassi

```cpp
struct identity {
   typedef Type type;
   Type operator()(const Type& left) const;
   };
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Valore da identificare.|

## <a name="remarks"></a>Note

La classe contiene la definizione di tipo pubblico `type`, che equivale al tipo di parametro di modello. Viene usata insieme alla funzione modello [forward](../standard-library/utility-functions.md#forward) per garantire che un parametro di funzione abbia il tipo desiderato.

Per garantire la compatibilità con il codice precedente, la classe definisce anche la funzione identity `operator()` che restituisce il relativo argomento *sinistro*.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<utility>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<utility>](../standard-library/utility.md)<br/>
