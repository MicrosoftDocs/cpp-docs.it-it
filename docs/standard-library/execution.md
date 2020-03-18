---
title: '&gt; di esecuzione &lt;'
ms.date: 04/18/2019
f1_keywords:
- <execution>
- std::<execution>
helpviewer_keywords:
- execution header
ms.openlocfilehash: 81e9aa63265c367412fda709aacd5ca3953e9fdf
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445037"
---
# <a name="ltexecutiongt"></a>&gt; di esecuzione &lt;

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
|[Struct is_execution_policy](is-execution-policy-struct.md)|Rileva i criteri di esecuzione allo scopo di escludere le firme di funzione dalla partecipazione alla risoluzione dell'overload altrimenti ambigua.|
|[Classe parallel_policy](parallel-policy-class.md)|Utilizzato come tipo univoco per distinguere l'overload dell'algoritmo parallelo e indicare che l'esecuzione di un algoritmo parallelo può essere parallela.|
|[Classe parallel_unsequenced_policy](parallel-unsequenced-policy-class.md)|Usato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e indicare che l'esecuzione di un algoritmo parallelo può essere parallela e vettoriale.|
|[Classe sequenced_policy](sequenced-policy-class.md)|Utilizzato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e richiedere che l'esecuzione di un algoritmo parallelo non venga parallela.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<esecuzione >

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Header Files Reference](cpp-standard-library-header-files.md)\ (Riferimento file di intestazione)
[Sicurezza dei thread nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](cpp-standard-library-reference.md)
