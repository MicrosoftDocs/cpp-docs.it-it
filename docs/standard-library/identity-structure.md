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
ms.openlocfilehash: f065f7c00d3853d00c1063cd5b2838ec6d1d27b4
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38952997"
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
