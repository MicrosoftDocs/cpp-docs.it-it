---
description: 'Altre informazioni su: sequenced_policy Class'
title: Classe sequenced_policy
ms.date: 04/18/2019
f1_keywords:
- execution/std::execution::sequenced_policy
ms.openlocfilehash: e4d19e3649e3c768e8efc062baaf735e28a8fc22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250413"
---
# <a name="sequenced_policy-class"></a>Classe sequenced_policy

Utilizzato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e richiedere che l'esecuzione di un algoritmo parallelo non venga parallela.

## <a name="syntax"></a>Sintassi

```cpp
class execution::sequenced_policy;
```

## <a name="remarks"></a>Osservazioni

Durante l'esecuzione di un algoritmo parallelo con il `execution::sequenced_policy` criterio, se la chiamata di una funzione di accesso agli elementi viene terminata tramite un'eccezione non rilevata, `terminate()` deve essere chiamato.
