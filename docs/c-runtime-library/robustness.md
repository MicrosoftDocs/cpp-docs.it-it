---
title: Efficienza
ms.date: 11/04/2016
helpviewer_keywords:
- robustness [CRT]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
ms.openlocfilehash: 9de2611e29f5f9bfd08839517e873c3dda225af0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211593"
---
# <a name="robustness"></a>Efficienza

Usare le funzioni della libreria di runtime C seguenti per migliorare l'efficienza del programma

## <a name="run-time-robustness-functions"></a>Funzioni per efficienza del runtime

|Funzione|Uso|
|--------------|---------|
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Trasferisce il controllo al meccanismo di gestione degli errori se l' **`new`** operatore non riesce ad allocare memoria.|
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++.|
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [terminate](../c-runtime-library/reference/terminate-crt.md).|
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [unexpected](../c-runtime-library/reference/unexpected-crt.md).|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[SetUnhandledExceptionFilter](/windows/win32/api/errhandlingapi/nf-errhandlingapi-setunhandledexceptionfilter)<br/>
