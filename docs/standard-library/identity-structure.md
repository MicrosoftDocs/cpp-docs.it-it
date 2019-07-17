---
title: Struttura identity
ms.date: 11/04/2016
f1_keywords:
- utility/std::identity
helpviewer_keywords:
- identity class
- identity structure
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
ms.openlocfilehash: 49b2c1eb3ca03f9bf9199bdbca49348866ff0a7e
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68246156"
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

*A sinistra*\
Valore da identificare.

## <a name="remarks"></a>Note

La classe contiene la definizione di tipo pubblico `type`, che equivale al tipo di parametro di modello. Viene usata insieme alla funzione modello [forward](../standard-library/utility-functions.md#forward) per garantire che un parametro di funzione abbia il tipo desiderato.

Per garantire la compatibilità con il codice precedente, la classe definisce anche la funzione identity `operator()` che restituisce il relativo argomento *sinistro*.
