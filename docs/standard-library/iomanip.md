---
title: '&lt;iomanip&gt;'
ms.date: 11/04/2016
f1_keywords:
- iomanip/std::<iomanip>
- <iomanip>
helpviewer_keywords:
- iomanip header
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
ms.openlocfilehash: b9da0de64bbb0ef48a6a9741ff941e6abda0e705
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449213"
---
# <a name="ltiomanipgt"></a>&lt;iomanip&gt;

Includere l' `iostreams` intestazione \<standard iomanip > per definire diversi manipolatori che accettano un solo argomento.

## <a name="syntax"></a>Sintassi

```cpp
#include <iomanip>
```

## <a name="remarks"></a>Note

Ognuno di questi manipolatori restituisce un tipo non specificato, chiamato `T1` tramite `T10`, che sovraccarica sia `basic_istream` \< **elem**, **TR**>`::`[operator > >](../standard-library/istream-operators.md#op_gt_gt) `basic_ostream` **Elem**,TROperator`::`<[<](../standard-library/ostream-operators.md#op_lt_lt). \<>

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[get_money](../standard-library/iomanip-functions.md#iomanip_get_money)|Ottiene un importo monetario, facoltativamente in formato internazionale.|
|[get_time](../standard-library/iomanip-functions.md#iomanip_get_time)|Ottiene un'ora in una struttura di ora usando un formato specificato.|
|[put_money](../standard-library/iomanip-functions.md#iomanip_put_money)|Fornisce un importo monetario, facoltativamente in formato internazionale.|
|[put_time](../standard-library/iomanip-functions.md#iomanip_put_time)|Fornisce un'ora in una struttura di ora e una stringa di formato da usare.|
|[quoted](../standard-library/iomanip-functions.md#quoted)|Abilita pratiche sequenze di andata e ritorno delle stringhe con operatori di inserimento ed estrazione.|
|[resetiosflags](../standard-library/iomanip-functions.md#resetiosflags)|Cancella i flag specificati.|
|[setbase](../standard-library/iomanip-functions.md#setbase)|Imposta la base per i valori integer.|
|[setfill](../standard-library/iomanip-functions.md#setfill)|Imposta il carattere che verrà usato per riempire gli spazi in una visualizzazione giustificata a destra.|
|[setiosflags](../standard-library/iomanip-functions.md#setiosflags)|Imposta i flag specificati.|
|[setprecision](../standard-library/iomanip-functions.md#setprecision)|Imposta la precisione per i valori a virgola mobile.|
|[setw](../standard-library/iomanip-functions.md#setw)|Specifica la larghezza del campo di visualizzazione.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
