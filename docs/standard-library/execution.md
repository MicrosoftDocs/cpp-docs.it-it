---
description: 'Altre informazioni su: &lt; esecuzione&gt;'
title: '&lt;esecuzione&gt;'
ms.date: 04/18/2019
f1_keywords:
- <execution>
helpviewer_keywords:
- execution header
ms.openlocfilehash: 7603bc6a78671482f691f15f83f51439a5002870
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126572"
---
# <a name="ltexecutiongt"></a>&lt;esecuzione&gt;

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

|Nome|Descrizione|
|-|-|
|[Struct is_execution_policy](is-execution-policy-struct.md)|Rileva i criteri di esecuzione allo scopo di escludere le firme di funzione dalla partecipazione alla risoluzione dell'overload altrimenti ambigua.|
|[Classe parallel_policy](parallel-policy-class.md)|Utilizzato come tipo univoco per distinguere l'overload dell'algoritmo parallelo e indicare che l'esecuzione di un algoritmo parallelo può essere parallela.|
|[Classe parallel_unsequenced_policy](parallel-unsequenced-policy-class.md)|Usato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e indicare che l'esecuzione di un algoritmo parallelo può essere parallela e vettoriale.|
|[Classe sequenced_policy](sequenced-policy-class.md)|Utilizzato come tipo univoco per risolvere l'ambiguità dell'overload degli algoritmi paralleli e richiedere che l'esecuzione di un algoritmo parallelo non venga parallela.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<execution>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](cpp-standard-library-reference.md)
