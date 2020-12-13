---
description: 'Altre informazioni su: parallel_unsequenced_policy Class'
title: Classe parallel_unsequenced_policy
ms.date: 04/18/2019
f1_keywords:
- execution/std::execution::parallel_unsequenced_policy
ms.openlocfilehash: e39edc0979bf1374bc6092dbadb032811180f668
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340788"
---
# <a name="parallel_unsequenced_policy-class"></a>Classe parallel_unsequenced_policy

Usato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e indicare che l'esecuzione di un algoritmo parallelo può essere parallela e vettoriale.

## <a name="syntax"></a>Sintassi

```cpp
class execution::parallel_unsequenced_policy;
```

## <a name="remarks"></a>Osservazioni

Durante l'esecuzione di un algoritmo parallelo con il `execution::parallel_unsequenced_policy` criterio, se la chiamata di una funzione di accesso agli elementi viene terminata tramite un'eccezione non rilevata, `terminate()` deve essere chiamato.
