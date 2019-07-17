---
title: '&lt;Esecuzione&gt;'
ms.date: 04/18/2019
f1_keywords:
- <execution>
- std::<execution>
helpviewer_keywords:
- execution header
ms.openlocfilehash: 3bce34019f9ed4880d72a9d16c3c8b78dde0e0e3
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268423"
---
# <a name="ltexecutiongt"></a>&lt;Esecuzione&gt;

Descrive i criteri di esecuzione per gli algoritmi paralleli.

## <a name="syntax"></a>Sintassi

```
namespace std {
    template<class T> inline constexpr bool is_execution_policy_v = is_execution_policy<T>::value;
}
namespace std::execution {
    inline constexpr sequenced_policy seq { unspecified };
    inline constexpr parallel_policy par { unspecified };
    inline constexpr parallel_unsequenced_policy par_unseq { unspecified };
}
```
### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|[is_execution_policy Struct](is-execution-policy-struct.md)|Rileva i criteri di esecuzione allo scopo di esclusione di firme di funzione dalla partecipazione risoluzione in caso contrario ambigua dell'overload.|
|[Classe parallel_policy](parallel-policy-class.md)|Utilizzato come un tipo univoco per risolvere l'ambiguità di overload di un algoritmo parallelo e indicare che l'esecuzione di un algoritmo parallelo possa essere eseguite in parallelo.|
|[Classe parallel_unsequenced_policy](parallel-unsequenced-policy-class.md)|Utilizzato come un tipo univoco per risolvere l'ambiguità di overload di un algoritmo parallelo e indicare che l'esecuzione di un algoritmo parallelo può essere eseguite in parallelo e vettorizzato.|
|[Classe sequenced_policy](sequenced-policy-class.md)|Utilizzato come un tipo univoco per risolvere l'ambiguità di overload di un algoritmo parallelo e richiedono che l'esecuzione di un algoritmo parallelo potrebbe non essere eseguite in parallelo.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<esecuzione >

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](cpp-standard-library-reference.md)
