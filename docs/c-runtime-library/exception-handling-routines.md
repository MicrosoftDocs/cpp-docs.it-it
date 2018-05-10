---
title: Routine di gestione delle eccezioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.exceptions
dev_langs:
- C++
helpviewer_keywords:
- exception handling, routines
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eea92c5bfdb54b6c15ae2ae643b2d23b397a3bf6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
