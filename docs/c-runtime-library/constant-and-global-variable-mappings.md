---
title: Mapping di costanti e variabili globali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- _tenviron
- _TEOF
- _tfinddata_t
dev_langs:
- C++
helpviewer_keywords:
- tfinddatat function
- tenviron function
- TEOF type
- _TEOF type
- generic-text mappings
- _tenviron function
- _tfinddata_t function
ms.assetid: 3af4fd3e-9ed5-4ed9-96fd-7031e5126fd1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 94cee77f82f850560cc5fe50e13b85c58b7187ad
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077848"
---
# <a name="constant-and-global-variable-mappings"></a>Mapping costanti e variabili globali

Il mapping di tipo standard di queste costanti di testo generico e variabili globali viene definito in TCHAR.H e varia a seconda che nel programma sia stata definita la costante `_UNICODE` o `_MBCS`.

### <a name="generic-text-constant-and-global-variable-mappings"></a>Mapping di costanti di testo generico e variabili globali

|Testo generico: nome dell'oggetto|SBCS (_UNICODE, _MBCS non definiti)|_MBCS definito|_UNICODE definito|
|----------------------------------|--------------------------------------------|--------------------|-----------------------|
|`_TEOF`|`EOF`|`EOF`|`WEOF`|
|`_tenviron`|`_environ`|`_environ`|`_wenviron`|
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|

## <a name="see-also"></a>Vedere anche

[Mapping di testo generico](../c-runtime-library/generic-text-mappings.md)<br/>
[Mapping dei tipi di dati](../c-runtime-library/data-type-mappings.md)<br/>
[Mapping di routine](../c-runtime-library/routine-mappings.md)<br/>
[Programma di testo generico di esempio](../c-runtime-library/a-sample-generic-text-program.md)<br/>
[Using Generic-Text Mappings](../c-runtime-library/using-generic-text-mappings.md) (Uso di mapping di testo generico)