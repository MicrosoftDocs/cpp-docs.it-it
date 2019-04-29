---
title: '&lt;thread&gt;'
ms.date: 11/04/2016
f1_keywords:
- <thread>
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
ms.openlocfilehash: 43fb79ceda6de7409e6f93797ce2f4ff213c43ee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411981"
---
# <a name="ltthreadgt"></a>&lt;thread&gt;

Includere l'intestazione standard \<thread > per definire la classe **thread** e varie funzioni di supporta.

## <a name="syntax"></a>Sintassi

```cpp
#include <thread>
```

## <a name="remarks"></a>Note

> [!NOTE]
> Nel codice compilato usando **/clr**, questa intestazione è bloccata.

Il `__STDCPP_THREADS__` macro viene definita come un valore diverso da zero per indicare che i thread sono supportati da questa intestazione.

## <a name="members"></a>Membri

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe thread](../standard-library/thread-class.md)|Definisce un oggetto che consente di verificare e gestire un thread di esecuzione in un'applicazione.|

### <a name="public-structures"></a>Strutture pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Struttura hash (libreria standard C++)](../standard-library/hash-structure-stl.md)|Definisce una funzione membro che restituisce un valore che viene determinato in modo univoco da un `thread::id`. La funzione membro definisce una [hash](../standard-library/hash-class.md) funzione adatto per mapping di valori di tipo `thread::id` per una distribuzione di valori di indice.|

### <a name="public-functions"></a>Funzioni pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[get_id](../standard-library/thread-functions.md#get_id)|Identifica in modo univoco il thread di esecuzione corrente.|
|[sleep_for](../standard-library/thread-functions.md#sleep_for)|Blocca il thread chiamante.|
|[sleep_until](../standard-library/thread-functions.md#sleep_until)|La funzione blocca il thread chiamante almeno fino all'ora specificata.|
|[swap](../standard-library/thread-functions.md#swap)|Scambia gli stati dei due **thread** oggetti.|
|[yield](../standard-library/thread-functions.md#yield)|Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore > = (operatore)](../standard-library/thread-operators.md#op_gt_eq)|Determina se un oggetto `thread::id` è maggiore o uguale a un altro.|
|[operatore > operatore](../standard-library/thread-operators.md#op_gt)|Determina se un oggetto `thread::id` è maggiore di un altro.|
|[operatore < = (operatore)](../standard-library/thread-operators.md#op_lt_eq)|Determina se un oggetto `thread::id` è minore o uguale a un altro.|
|[operatore < operatore](../standard-library/thread-operators.md#op_lt)|Determina se un oggetto `thread::id` è minore di un altro.|
|[operatore! = (operatore)](../standard-library/thread-operators.md#op_neq)|Confronta due oggetti `thread::id` per stabilirne la disuguaglianza.|
|[operatore Operator = =](../standard-library/thread-operators.md#op_eq_eq)|Confronta due oggetti `thread::id` per stabilirne l'uguaglianza.|
|[operatore << operatore](../standard-library/thread-operators.md#op_lt_lt)|Inserisce una rappresentazione testo di un oggetto `thread::id` in un flusso.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
