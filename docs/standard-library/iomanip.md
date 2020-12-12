---
description: 'Altre informazioni su: &lt; iomanip&gt;'
title: '&lt;iomanip&gt;'
ms.date: 11/04/2016
f1_keywords:
- iomanip/std::<iomanip>
- <iomanip>
helpviewer_keywords:
- iomanip header
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
ms.openlocfilehash: 7419900d4cd852ab260a6eeb92ee51623f8f71ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231486"
---
# <a name="ltiomanipgt"></a>&lt;iomanip&gt;

Includere l'intestazione standard `iostreams`\<iomanip> per definire diversi manipolatori che accettano un solo argomento.

## <a name="syntax"></a>Sintassi

```cpp
#include <iomanip>
```

## <a name="remarks"></a>Osservazioni

Ognuno di questi manipolatori restituisce un tipo non specificato, chiamato `T1` tramite `T10` , che sovraccarica sia l' `basic_istream` \<**Elem**, **Tr**> `::` [operatore>>](../standard-library/istream-operators.md#op_gt_gt) che l' `basic_ostream` \<**Elem**, **Tr**> `::` [operatore<<](../standard-library/ostream-operators.md#op_lt_lt).

### <a name="manipulators"></a>Manipolatori

|Nome|Description|
|-|-|
|[get_money](../standard-library/iomanip-functions.md#iomanip_get_money)|Ottiene un importo monetario, facoltativamente in formato internazionale.|
|[get_time](../standard-library/iomanip-functions.md#iomanip_get_time)|Ottiene un'ora in una struttura di ora usando un formato specificato.|
|[put_money](../standard-library/iomanip-functions.md#iomanip_put_money)|Fornisce un importo monetario, facoltativamente in formato internazionale.|
|[put_time](../standard-library/iomanip-functions.md#iomanip_put_time)|Fornisce un'ora in una struttura di ora e una stringa di formato da usare.|
|[tra virgolette](../standard-library/iomanip-functions.md#quoted)|Abilita pratiche sequenze di andata e ritorno delle stringhe con operatori di inserimento ed estrazione.|
|[resetiosflags](../standard-library/iomanip-functions.md#resetiosflags)|Cancella i flag specificati.|
|[setbase](../standard-library/iomanip-functions.md#setbase)|Imposta la base per i valori integer.|
|[riempimento](../standard-library/iomanip-functions.md#setfill)|Imposta il carattere che verrà usato per riempire gli spazi in una visualizzazione giustificata a destra.|
|[setiosflags](../standard-library/iomanip-functions.md#setiosflags)|Imposta i flag specificati.|
|[setprecision](../standard-library/iomanip-functions.md#setprecision)|Imposta la precisione per i valori a virgola mobile.|
|[setw](../standard-library/iomanip-functions.md#setw)|Specifica la larghezza del campo di visualizzazione.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
