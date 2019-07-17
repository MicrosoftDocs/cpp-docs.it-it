---
title: Classe sequenced_policy
ms.date: 04/18/2019
f1_keywords:
- execution/std::execution::parallel_policy
ms.openlocfilehash: 63be7166b84fa452f53baf6b6de16831eb657a23
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269193"
---
# <a name="sequencedpolicy-class"></a>Classe sequenced_policy

Utilizzato come un tipo univoco per risolvere l'ambiguità di overload di un algoritmo parallelo e richiedono che l'esecuzione di un algoritmo parallelo potrebbe non essere eseguite in parallelo.

## <a name="syntax"></a>Sintassi

```cpp
class execution::sequenced_policy;
```

## <a name="remarks"></a>Note

Durante l'esecuzione di un algoritmo parallelo con il `execution::sequenced_policy` dei criteri, se si conclude la chiamata della funzione di accesso elemento tramite un'eccezione non rilevata, `terminate()` deve essere chiamato.
