---
description: 'Altre informazioni su: struttura Identity'
title: Struttura identity
ms.date: 11/04/2016
f1_keywords:
- utility/std::identity
helpviewer_keywords:
- identity class
- identity structure
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
ms.openlocfilehash: 753a3b697eb2a77dd102f681403fd23d7062cb36
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231758"
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

*sinistra*\
Valore da identificare.

## <a name="remarks"></a>Commenti

La classe contiene la definizione di tipo pubblico `type`, che equivale al tipo di parametro di modello. Viene usata insieme alla funzione modello [forward](../standard-library/utility-functions.md#forward) per garantire che un parametro di funzione abbia il tipo desiderato.

Per la compatibilità con il codice precedente, la classe definisce anche la funzione di identità `operator()` che restituisce il relativo argomento a *sinistra*.
