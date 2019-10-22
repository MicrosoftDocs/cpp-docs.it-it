---
title: '&lt;list&gt;'
ms.date: 11/04/2016
f1_keywords:
- <list>
- std::<list>
helpviewer_keywords:
- list header
ms.assetid: 2345823b-5612-44d8-95d3-aa96ed076d17
ms.openlocfilehash: c81990f14c6f9dc2400362015b838df5aed86429
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689434"
---
# <a name="ltlistgt"></a>&lt;list&gt;

Definisce l'elenco di modelli di classe del contenitore e diversi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <list>
```

> [!NOTE]
> Anche la libreria \<list > USA l'istruzione `#include <initializer_list>`.

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator!=](../standard-library/list-operators.md#op_neq)|Verifica se l'oggetto elenco a sinistra dell'operatore non è uguale all'oggetto elenco a destra.|
|[operator<](../standard-library/list-operators.md#op_lt)|Verifica se l'oggetto elenco a sinistra dell'operatore è minore dell'oggetto elenco a destra.|
|[operator\<=](../standard-library/list-operators.md#op_gt_eq)|Verifica se l'oggetto elenco a sinistra dell'operatore è minore o uguale all'oggetto elenco a destra.|
|[operator==](../standard-library/list-operators.md#op_eq_eq)|Verifica se l'oggetto elenco a sinistra dell'operatore è uguale all'oggetto elenco a destra.|
|[operator>](../standard-library/list-operators.md#op_gt)|Verifica se l'oggetto elenco a sinistra dell'operatore è maggiore dell'oggetto elenco a destra.|
|[operator>=](../standard-library/list-operators.md#op_gt_eq)|Verifica se l'oggetto elenco a sinistra dell'operatore è maggiore o uguale all'oggetto elenco a destra.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[swap](../standard-library/list-functions.md#swap)|Scambia gli elementi di due elenchi.|

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe list](../standard-library/list-class.md)|Modello di classe dei contenitori sequenza che conservano gli elementi in una disposizione lineare e consentono inserimenti ed eliminazioni efficienti in qualsiasi posizione all'interno della sequenza.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) (Riferimento per la libreria standard C++)
