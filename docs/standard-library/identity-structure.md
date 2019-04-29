---
title: Struttura identity
ms.date: 11/04/2016
f1_keywords:
- utility/std::identity
helpviewer_keywords:
- identity class
- identity structure
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
ms.openlocfilehash: 722eb9c0579d0c07765434127d0a7c43718fbc37
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405001"
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
