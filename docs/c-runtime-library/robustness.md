---
title: Efficienza | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.runtime
dev_langs:
- C++
helpviewer_keywords:
- robustness [CRT]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b4bc7ac76377ef59c9b1f5535f356b35d88a5e4e
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43220959"
---
# <a name="robustness"></a>Efficienza

Usare le funzioni della libreria di runtime C seguenti per migliorare l'efficienza del programma

## <a name="run-time-robustness-functions"></a>Funzioni per efficienza del runtime

|Funzione|Usa|
|--------------|---------|
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Trasferisce il controllo al meccanismo di gestione degli errori se l'operatore **new** non riesce ad allocare la memoria.|
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++.|
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [terminate](../c-runtime-library/reference/terminate-crt.md).|
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installa la funzione di terminazione personalizzata che verrà chiamata da [unexpected](../c-runtime-library/reference/unexpected-crt.md).|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
 [SetUnhandledExceptionFilter](https://msdn.microsoft.com/library/windows/desktop/ms680634.aspx)<br/>
