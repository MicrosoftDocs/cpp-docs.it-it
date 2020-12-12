---
description: 'Altre informazioni su: &lt; thread&gt;'
title: '&lt;thread&gt;'
ms.date: 11/04/2016
f1_keywords:
- <thread>
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
ms.openlocfilehash: 3387d96772f1ed3322ce79b744e17b6bf494140d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289621"
---
# <a name="ltthreadgt"></a>&lt;thread&gt;

Includere l'intestazione standard \<thread> per definire la classe `thread` e varie funzioni di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <thread>
```

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> Nel codice compilato utilizzando **/CLR**, questa intestazione è bloccata.

La `__STDCPP_THREADS__` macro viene definita come valore diverso da zero per indicare che i thread sono supportati da questa intestazione.

## <a name="members"></a>Membri

### <a name="public-classes"></a>Classi pubbliche

|Nome|Description|
|----------|-----------------|
|[Classe thread](../standard-library/thread-class.md)|Definisce un oggetto usato per osservare e gestire un thread di esecuzione in un'applicazione.|

### <a name="public-structures"></a>Strutture pubbliche

|Nome|Description|
|----------|-----------------|
|[Struttura hash (Libreria standard C++)](../standard-library/hash-structure-stl.md)|Definisce una funzione membro che restituisce un valore che è determinato in modo univoco da un oggetto `thread::id` . La funzione membro definisce una funzione [hash](../standard-library/hash-class.md) adatta per il mapping di valori di tipo `thread::id` a una distribuzione di valori di indice.|

### <a name="public-functions"></a>Funzioni pubbliche

|Nome|Description|
|----------|-----------------|
|[get_id](../standard-library/thread-functions.md#get_id)|Identifica in modo univoco il thread di esecuzione corrente.|
|[sleep_for](../standard-library/thread-functions.md#sleep_for)|Blocca il thread chiamante.|
|[sleep_until](../standard-library/thread-functions.md#sleep_until)|La funzione blocca il thread chiamante almeno fino all'ora specificata.|
|[scambio](../standard-library/thread-functions.md#swap)|Scambia gli Stati di due `thread` oggetti.|
|[yield](../standard-library/thread-functions.md#yield)|Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore operator>=](../standard-library/thread-operators.md#op_gt_eq)|Determina se un oggetto `thread::id` è maggiore o uguale a un altro.|
|[operatore> operator](../standard-library/thread-operators.md#op_gt)|Determina se un oggetto `thread::id` è maggiore di un altro.|
|[operatore operator<=](../standard-library/thread-operators.md#op_lt_eq)|Determina se un oggetto `thread::id` è minore o uguale a un altro.|
|[operatore< operator](../standard-library/thread-operators.md#op_lt)|Determina se un oggetto `thread::id` è minore di un altro.|
|[operatore operator! =](../standard-library/thread-operators.md#op_neq)|Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.|
|[operatore operator = =](../standard-library/thread-operators.md#op_eq_eq)|Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.|
|[operatore<< operator](../standard-library/thread-operators.md#op_lt_lt)|Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
