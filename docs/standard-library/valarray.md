---
title: '&lt;valarray&gt;'
ms.date: 11/04/2016
f1_keywords:
- <valarray>
helpviewer_keywords:
- valarray header
ms.assetid: 30835415-21c1-4801-8f24-6bbef7dd8ecd
ms.openlocfilehash: eb782b0d16c4bc826da4ea9291756f34ca0eaf29
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215413"
---
# <a name="ltvalarraygt"></a>&lt;valarray&gt;

Definisce il modello di classe valarray e numerose funzioni e modelli di classe di supporto.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<valarray>

**Spazio dei nomi:** std

> [!NOTE]
> La \<valarray> libreria usa l'istruzione ' #include <initializer_list>'.

## <a name="remarks"></a>Osservazioni

Questi modelli e funzioni di classe sono consentiti a una latitudine insolita per migliorare le prestazioni. In particolare, qualsiasi funzione che restituisce il tipo `valarray<T1>` può restituire un oggetto di un altro tipo T2. In tal caso, qualsiasi funzione che accetta uno o più argomenti di tipo `valarray<T2>` deve avere overload che accettano combinazioni arbitrarie di questi argomenti, ognuno sostituito da un argomento di tipo T2.

## <a name="members"></a>Membri

### <a name="functions"></a>Funzioni

|||
|-|-|
|[ABS](../standard-library/valarray-functions.md#abs)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al valore assoluto degli elementi dell'oggetto valarray di input.|
|[Acos](../standard-library/valarray-functions.md#acos)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali all'arcocoseno degli elementi dell'oggetto valarray di input.|
|[Asin](../standard-library/valarray-functions.md#asin)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali all'arcoseno degli elementi dell'oggetto valarray di input.|
|[Atan](../standard-library/valarray-functions.md#atan)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al valore di entità dell'arcotangente degli elementi dell'oggetto valarray di input.|
|[atan2](../standard-library/valarray-functions.md#atan2)|Restituisce un oggetto valarray i cui elementi sono uguali all'arcotangente dei componenti cartesiani specificati da una combinazione di costanti ed elementi di oggetti valarray.|
|[iniziare](../standard-library/valarray-functions.md#begin)||
|[cos](../standard-library/valarray-functions.md#cos)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al coseno degli elementi dell'oggetto valarray di input.|
|[cosh](../standard-library/valarray-functions.md#cosh)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al coseno iperbolico degli elementi dell'oggetto valarray di input.|
|[fine](../standard-library/valarray-functions.md#end)||
|[exp](../standard-library/valarray-functions.md#exp)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al valore esponenziale naturale degli elementi dell'oggetto valarray di input.|
|[log](../standard-library/valarray-functions.md#log)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al logaritmo naturale degli elementi dell'oggetto valarray di input.|
|[log10](../standard-library/valarray-functions.md#log10)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al logaritmo in base 10 o comune degli elementi dell'oggetto valarray di input.|
|[POW](../standard-library/valarray-functions.md#pow)|Opera sugli elementi di oggetti valarray di input e costanti, restituendo un oggetto valarray i cui elementi sono uguali a una base specificata dagli elementi di un oggetto valarray di input o di una costante elevata a una potenza specificata dagli elementi di un oggetto valarray di input o di una costante.|
|[peccato](../standard-library/valarray-functions.md#sin)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al seno degli elementi dell'oggetto valarray di input.|
|[sinh](../standard-library/valarray-functions.md#sinh)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al seno iperbolico degli elementi dell'oggetto valarray di input.|
|[sqrt](../standard-library/valarray-functions.md#sqrt)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali alla radice quadrata degli elementi dell'oggetto valarray di input.|
|[scambio](../standard-library/valarray-functions.md#swap)||
|[Tan](../standard-library/valarray-functions.md#tan)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali alla tangente degli elementi dell'oggetto valarray di input.|
|[tanh](../standard-library/valarray-functions.md#tanh)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali alla tangente iperbolica degli elementi dell'oggetto valarray di input.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore! =](../standard-library/valarray-operators.md#op_neq)|Verifica se gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti sono diversi o se tutti gli elementi di un oggetto valarray sono diversi da un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore](../standard-library/valarray-operators.md#op_mod)|Ottiene il resto della divisione degli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti, della divisione di un oggetto valarray per un valore specificato del tipo di elemento dell'oggetto valarray oppure della divisione di un valore specificato per un oggetto valarray.|
|[operatore&](../standard-library/valarray-operators.md#op_amp)|Ottiene l'operatore `AND` bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.|
|[operatore&&](../standard-library/valarray-operators.md#op_amp_amp)|Ottiene l'operatore `AND` logico tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore>](../standard-library/valarray-operators.md#op_gt)|Verifica se gli elementi di un oggetto valarray sono maggiori degli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o minori di un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore>=](../standard-library/valarray-operators.md#op_gt_eq)|Verifica se gli elementi di un oggetto valarray sono maggiori o uguali agli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o uguali o minori o uguali a un valore specificato.|
|[operatore>>](../standard-library/valarray-operators.md#op_gt_gt)|Sposta verso destra i bit per ogni elemento di un oggetto valarray di un numero specificato di posizioni o in base a una quantità di elementi specificata da un secondo oggetto valarray.|
|[operatore<](../standard-library/valarray-operators.md#op_lt)|Verifica se gli elementi di un oggetto valarray sono minori degli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o minori di un valore specificato.|
|[operatore<=](../standard-library/valarray-operators.md#op_lt_eq)|Verifica se gli elementi di un oggetto valarray sono minori o uguali agli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o uguali o minori o uguali a un valore specificato.|
|[operatore<<](../standard-library/valarray-operators.md#op_lt_lt)|Sposta verso sinistra i bit per ogni elemento di un oggetto valarray di un numero specificato di posizioni o in base a una quantità di elementi specificata da un secondo oggetto valarray.|
|[operatore](../standard-library/valarray-operators.md#op_star)|Ottiene il prodotto degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore +](../standard-library/valarray-operators.md#op_add)|Ottiene la somma degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore](../standard-library/valarray-operators.md#operator-)|Ottiene la differenza degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore](../standard-library/valarray-operators.md#op_div)|Ottiene il quoziente degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore = =](../standard-library/valarray-operators.md#op_eq_eq)|Verifica se gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti sono uguali o se tutti gli elementi di un oggetto valarray sono uguali a un valore specificato del tipo di elemento dell'oggetto valarray.|
|[operatore ^](../standard-library/valarray-operators.md#op_xor)|Ottiene l'operatore `OR` esclusivo bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.|
|[operatore&#124;](../standard-library/valarray-operators.md#op_or)|Ottiene l'operatore `OR` bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.|
|[operator&#124;&#124;](../standard-library/valarray-operators.md#op_lor)|Ottiene l'operatore `OR` logico tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe gslice](../standard-library/gslice-class.md)|Classe di utilità per l'oggetto valarray usato per definire sezioni multidimensionali di un oggetto valarray.|
|[Classe gslice_array](../standard-library/gslice-array-class.md)|Modello di classe ausiliario interno che supporta oggetti sezione generale fornendo operazioni tra matrici di subset definite dalla sezione generale di un oggetto valarray.|
|[Classe indirect_array](../standard-library/indirect-array-class.md)|Modello di classe ausiliario interno che supporta oggetti che sono subset di oggetti valarray fornendo operazioni tra matrici di subset definite specificando un subset di indici di un oggetto valarray padre.|
|[Classe mask_array](../standard-library/mask-array-class.md)|Modello di classe ausiliario interno che supporta oggetti che sono subset di oggetti valarray padre, specificati con un'espressione booleana, fornendo operazioni tra le matrici di subset.|
|[Classe Slice](../standard-library/slice-class.md)|Classe di utilità per valarray usata per definire subset simili a vettori unidimensionali di un oggetto valarray.|
|[Classe slice_array](../standard-library/slice-array-class.md)|Modello di classe ausiliario interno che supporta gli oggetti Slice fornendo operazioni tra matrici di subset definite dalla sezione di un oggetto valarray.|
|[valarray (classe)](../standard-library/valarray-class.md)|Il modello di classe descrive un oggetto che controlla una sequenza di elementi di tipo `Type` archiviati come matrice e progettati per l'esecuzione di operazioni matematiche ad alta velocità, ottimizzate per le prestazioni di calcolo.|

### <a name="specializations"></a>Specializzazioni

|||
|-|-|
|[valarray ( \<bool> classe)](../standard-library/valarray-bool-class.md)|Versione specializzata del modello di classe valarray \<**Type**> per gli elementi di tipo **`bool`** .|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
