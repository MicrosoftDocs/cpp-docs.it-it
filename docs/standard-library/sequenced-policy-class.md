---
title: Classe sequenced_policy
ms.date: 04/18/2019
f1_keywords:
- execution/std::execution::sequenced_policy
ms.openlocfilehash: 5647f20b560828016231a9bbd38977c51211e6bb
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79444923"
---
# <a name="sequenced_policy-class"></a>Classe sequenced_policy

Utilizzato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e richiedere che l'esecuzione di un algoritmo parallelo non venga parallela.

## <a name="syntax"></a>Sintassi

```cpp
class execution::sequenced_policy;
```

## <a name="remarks"></a>Osservazioni

Durante l'esecuzione di un algoritmo parallelo con i criteri di `execution::sequenced_policy`, se la chiamata di una funzione di accesso agli elementi viene chiusa tramite un'eccezione non rilevata, viene chiamato `terminate()`.
