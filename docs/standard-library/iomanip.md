---
title: '&lt;iomanip&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- iomanip/std::<iomanip>
- <iomanip>
dev_langs:
- C++
helpviewer_keywords:
- iomanip header
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9a410dae35771d89b9d9ae72c8221501f051d10e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ltiomanipgt"></a>&lt;iomanip&gt;

Includere il `iostreams` intestazione standard \<iomanip > per definire diversi manipolatori che accettano un singolo argomento.

## <a name="syntax"></a>Sintassi

```cpp
#include <iomanip>

```

## <a name="remarks"></a>Note

Ciascuno di questi manipolatori restituisce un tipo non specificato, a cui viene assegnato un nome compreso tra **T1** e **T10**, che esegue l'overload sia di `basic_istream`\<**Elem**, **Tr**>`::`[operator>>](../standard-library/istream-operators.md#op_gt_gt) sia di `basic_ostream`\<**Elem**, **Tr**>`::`[operator<<](../standard-library/ostream-operators.md#op_lt_lt).

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
