---
description: 'Altre informazioni su: affidabilità'
title: Efficienza
ms.date: 11/04/2016
helpviewer_keywords:
- robustness [CRT]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
ms.openlocfilehash: 7dfe3d40eae4c67f45d4332ce22255a44c33f728
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97284512"
---
# <a name="robustness"></a>Efficienza

Usare le funzioni della libreria di runtime C seguenti per migliorare l'efficienza del programma

## <a name="run-time-robustness-functions"></a>Funzioni per efficienza del runtime

|Funzione|Usa|
|--------------|---------|
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Trasferisce il controllo al meccanismo di gestione degli errori se l' **`new`** operatore non riesce ad allocare memoria.|
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++.|
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [terminate](../c-runtime-library/reference/terminate-crt.md).|
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [unexpected](../c-runtime-library/reference/unexpected-crt.md).|

## <a name="see-also"></a>Vedi anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[SetUnhandledExceptionFilter](/windows/win32/api/errhandlingapi/nf-errhandlingapi-setunhandledexceptionfilter)<br/>
