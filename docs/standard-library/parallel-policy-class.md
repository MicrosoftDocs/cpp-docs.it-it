---
description: 'Altre informazioni su: parallel_policy Class'
title: Classe parallel_policy
ms.date: 04/18/2019
f1_keywords:
- execution/std::execution::parallel_policy
ms.openlocfilehash: 1cead0bcc44256bf7d41d061d592849a7411b057
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340801"
---
# <a name="parallel_policy-class"></a>Classe parallel_policy

Utilizzato come tipo univoco per distinguere l'overload dell'algoritmo parallelo e indicare che l'esecuzione di un algoritmo parallelo può essere parallela.

## <a name="syntax"></a>Sintassi

```cpp
class execution::parallel_policy;
```

## <a name="remarks"></a>Osservazioni

Durante l'esecuzione di un algoritmo parallelo con il `execution::parallel_policy` criterio, se la chiamata di una funzione di accesso agli elementi viene terminata tramite un'eccezione non rilevata, `terminate()` deve essere chiamato.
