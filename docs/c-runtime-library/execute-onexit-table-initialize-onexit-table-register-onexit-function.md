---
title: _execute_onexit_table, _initialize_onexit_table, _register_onexit_function
ms.date: 4/2/2020
api_name:
- _execute_onexit_table
- _initialize_onexit_table
- _register_onexit_function
- _o__execute_onexit_table
- _o__initialize_onexit_table
- _o__register_onexit_function
api_location:
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _execute_onexit_table
- process/_execute_onexit_table
- _initialize_onexit_table
- process/_initialize_onexit_table
- _register_onexit_function
- process/_register_onexit_function
helpviewer_keywords:
- _execute_onexit_table function
- _initialize_onexit_table function
- _register_onexit_function function
ms.assetid: ad9e4149-d4ad-4fdf-aaaf-cf786fcb4473
ms.openlocfilehash: 051961f049109b4fa6a2881e442e621036cb279c
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82913828"
---
# <a name="_execute_onexit_table-_initialize_onexit_table-_register_onexit_function"></a>_execute_onexit_table, _initialize_onexit_table, _register_onexit_function

Registra le routine da chiamare in fase di uscita.

## <a name="syntax"></a>Sintassi

```
int _initialize_onexit_table(
    _onexit_table_t* table
    );

int _register_onexit_function(
    _onexit_table_t* table,
    _onexit_t        function
    );

int _execute_onexit_table(
    _onexit_table_t* table
    );
```

#### <a name="parameters"></a>Parametri

*tabella*<br/>
[in, out] Puntatore alla tabella di funzioni onexit.

*funzione*<br/>
[in] Puntatore a una funzione da aggiungere alla tabella di funzioni onexit.

## <a name="return-value"></a>Valore restituito

Se l'esito è positivo, restituisce 0. In caso contrario viene restituito un valore negativo.

## <a name="remarks"></a>Osservazioni

Queste funzioni sono dettagli di implementazione dell'infrastruttura usati per supportare il runtime di C e devono essere chiamate direttamente dal codice. Il runtime C usa una *tabella di funzioni OnExit* per rappresentare la sequenza di funzioni registrate dalle chiamate `atexit`a `at_quick_exit`, e `_onexit`. La struttura dei dati della tabella di funzioni onexit è un dettaglio di implementazione opaco del runtime di C; l'ordine e il significato dei relativi membri dati possono essere modificati. Non devono essere verificati da codice esterno.

La funzione `_initialize_onexit_table` consente di inizializzare la tabella di funzioni onexit al valore iniziale.  Questa funzione deve essere chiamata prima che la tabella di funzioni onexit venga passata a `_register_onexit_function` o `_execute_onexit_table`.

La funzione `_register_onexit_function` accoda una funzione alla fine della tabella di funzioni onexit.

La funzione `_execute_onexit_table` esegue tutte le funzioni della tabella di funzioni onexit, cancella la tabella e quindi restituisce un risultato. Dopo una chiamata a `_execute_onexit_table`, la tabella è in uno stato non valido: deve essere reinizializzata da una chiamata a `_initialize_onexit_table` prima di essere usata nuovamente.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_initialize_onexit_table function`, `_register_onexit_function`, `_execute_onexit_table`|C, C++: \<process.h>|

Le `_initialize_onexit_table`funzioni `_register_onexit_function`, e `_execute_onexit_table` sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[atexit](../c-runtime-library/reference/atexit.md)<br/>
[exit, _Exit, _exit](../c-runtime-library/reference/exit-exit-exit.md)<br/>
[_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)
