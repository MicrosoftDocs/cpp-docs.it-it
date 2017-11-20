---
title: _execute_onexit_table, _initialize_onexit_table, _register_onexit_function | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _execute_onexit_table
- _initialize_onexit_table
- _register_onexit_function
apilocation: api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _execute_onexit_table
- process/_execute_onexit_table
- _initialize_onexit_table
- process/_initialize_onexit_table
- _register_onexit_function
- process/_register_onexit_function
dev_langs: C++
helpviewer_keywords:
- _execute_onexit_table function
- _initialize_onexit_table function
- _register_onexit_function function
ms.assetid: ad9e4149-d4ad-4fdf-aaaf-cf786fcb4473
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 630b8a5160eaa808c12c16ec8dd45a96a621b7bb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="executeonexittable-initializeonexittable-registeronexitfunction"></a>_execute_onexit_table, _initialize_onexit_table, _register_onexit_function
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
 [inout] `table`  
 Puntatore alla tabella di funzioni onexit.  
  
 [in] `function`  
 Puntatore a una funzione da aggiungere alla tabella di funzioni onexit.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'esito è positivo, il valore restituito è 0. In caso contrario viene restituito un valore negativo.  
  
## <a name="remarks"></a>Note  
 Queste funzioni sono dettagli di implementazione dell'infrastruttura usati per supportare il runtime di C e devono essere chiamate direttamente dal codice. Il runtime di C usa una *tabella di funzioni onexit* per rappresentare la sequenza di funzioni registrate dalle chiamate a `atexit`, `at_quick_exit`, e `_onexit`. La struttura dei dati della tabella di funzioni onexit è un dettaglio di implementazione opaco del runtime di C; l'ordine e il significato dei relativi membri dati possono essere modificati. Non devono essere verificati da codice esterno.  
  
 La funzione `_initialize_onexit_table` consente di inizializzare la tabella di funzioni onexit al valore iniziale.  Questa funzione deve essere chiamata prima che la tabella di funzioni onexit venga passata a `_register_onexit_function` o `_execute_onexit_table`.  
  
 La funzione `_register_onexit_function` accoda una funzione alla fine della tabella di funzioni onexit.  
  
 La funzione `_execute_onexit_table` esegue tutte le funzioni della tabella di funzioni onexit, cancella la tabella e quindi restituisce un risultato. Dopo una chiamata a `_execute_onexit_table`, la tabella è in uno stato non valido: deve essere reinizializzata da una chiamata a `_initialize_onexit_table` prima di essere usata nuovamente.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_initialize_onexit_table function`, `_register_onexit_function`, `_execute_onexit_table`|C, C++: \<process.h>|  
  
 Le funzioni `_initialize_onexit_table`, `_register_onexit_function` e `_execute_onexit_table` sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [atexit](../c-runtime-library/reference/atexit.md)   
 [exit, _Exit, _exit](../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md)