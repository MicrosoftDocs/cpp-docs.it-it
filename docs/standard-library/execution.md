---
description: 'Altre informazioni su: &lt; esecuzione&gt;'
title: '&lt;esecuzione&gt;'
ms.date: 01/15/2021
f1_keywords:
- <execution>
- execution/std::execution
- std::execution
helpviewer_keywords:
- execution header
ms.openlocfilehash: 2ffba3ad8620092676588c2a67e36cf8956413ba
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667485"
---
# `<execution>`

Descrive i criteri di esecuzione per gli algoritmi paralleli.

## <a name="syntax"></a>Sintassi

```cpp
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
|[`is_execution_policy` Struct](is-execution-policy-struct.md)|Rileva i criteri di esecuzione per escludere determinate firme di funzione dalla partecipazione alla risoluzione dell'overload altrimenti ambigua.|
|[`parallel_policy` Classe](parallel-policy-class.md)|Utilizzato come tipo univoco per distinguere l'overload dell'algoritmo parallelo. Indica che l'esecuzione di un algoritmo parallelo può essere parallela.|
|[`parallel_unsequenced_policy` Classe](parallel-unsequenced-policy-class.md)|Utilizzato come tipo univoco per distinguere l'overload dell'algoritmo parallelo. Indica che l'esecuzione di un algoritmo parallelo può essere parallela e vettoriale.|
|[`sequenced_policy` Classe](sequenced-policy-class.md)|Utilizzato come tipo univoco per distinguere l'overload dell'algoritmo parallelo. Specifica che l'esecuzione di un algoritmo parallelo potrebbe non essere parallela.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<execution>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)\
[Informazioni di riferimento per la libreria standard C++](cpp-standard-library-reference.md)
