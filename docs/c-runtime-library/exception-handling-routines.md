---
title: Routine di gestione delle eccezioni
ms.date: 11/04/2016
f1_keywords:
- c.exceptions
helpviewer_keywords:
- exception handling, routines
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
ms.openlocfilehash: 8def356793906074e6fc4b8d7a139ce1915a5f9b
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57749139"
---
# <a name="exception-handling-routines"></a>Routine di gestione delle eccezioni

Usare le funzioni C++ di gestione delle eccezioni per il ripristino dopo eventi imprevisti durante l'esecuzione del programma.

## <a name="exception-handling-functions"></a>Funzioni di gestione delle eccezioni

|Funzione|Usa|
|--------------|---------|
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++|
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la routine di terminazione personalizzata che verrà chiamata da **terminate**|
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da **unexpected**|
|[terminate](../c-runtime-library/reference/terminate-crt.md)|Viene chiamata automaticamente in determinate circostanze dopo che è stata generata un'eccezione. La funzione **terminate** chiama **abort** o una funzione specificata dall'utente tramite **set_terminate**|
|[Imprevisto](../c-runtime-library/reference/unexpected-crt.md)|Chiama **terminate** o una funzione specifica dall'utente tramite **set_unexpected**. La funzione **unexpected** non viene usata nell'implementazione corrente di gestione delle eccezioni di Microsoft C++|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
