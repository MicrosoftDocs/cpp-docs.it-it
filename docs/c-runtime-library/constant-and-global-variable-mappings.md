---
title: Mapping costanti e variabili globali
ms.date: 11/04/2016
f1_keywords:
- _tenviron
- _TEOF
- _tfinddata_t
helpviewer_keywords:
- tfinddatat function
- tenviron function
- TEOF type
- _TEOF type
- generic-text mappings
- _tenviron function
- _tfinddata_t function
ms.assetid: 3af4fd3e-9ed5-4ed9-96fd-7031e5126fd1
ms.openlocfilehash: 0f4e41e652cc1154b3bbc1ae3ca20c143e2745ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50646186"
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