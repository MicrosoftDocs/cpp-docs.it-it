---
title: '&lt;list&gt;'
ms.date: 11/04/2016
f1_keywords:
- <list>
- std::<list>
helpviewer_keywords:
- list header
ms.assetid: 2345823b-5612-44d8-95d3-aa96ed076d17
ms.openlocfilehash: f2c04bb73bfa379ea87ba4c950bf805931c16ba1
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245569"
---
# <a name="ltlistgt"></a>&lt;list&gt;

Definisce l'elenco di classi modello del contenitore e diversi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <list>
```

> [!NOTE]
> Il \<elenco > libreria Usa inoltre il `#include <initializer_list>` istruzione.

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
|[Classe list](../standard-library/list-class.md)|Classe modello di contenitori sequenziali che gestiscono gli elementi in una disposizione lineare e consentono inserimenti ed eliminazioni efficienti in qualsiasi posizione all'interno della sequenza.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
