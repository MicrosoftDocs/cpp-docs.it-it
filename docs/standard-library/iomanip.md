---
title: '&lt;iomanip&gt;'
ms.date: 11/04/2016
f1_keywords:
- iomanip/std::<iomanip>
- <iomanip>
helpviewer_keywords:
- iomanip header
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
ms.openlocfilehash: f6470f98495362149b4e99c6d1e3fe521800438b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50487919"
---
# <a name="ltiomanipgt"></a>&lt;iomanip&gt;

Includere il `iostreams` intestazione standard \<iomanip > per definire diversi manipolatori che accettano un solo argomento.

## <a name="syntax"></a>Sintassi

```cpp
#include <iomanip>

```

## <a name="remarks"></a>Note

Ognuno di questi manipolatori restituisce un tipo non specificato, denominato `T1` attraverso `T10`, che esegue l'overload di entrambi `basic_istream` \< **Elem**, **Tr** > `::` [operatore >>](../standard-library/istream-operators.md#op_gt_gt) e `basic_ostream` \< **Elem**, **Tr** > `::` [operatore <<](../standard-library/ostream-operators.md#op_lt_lt).

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

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
