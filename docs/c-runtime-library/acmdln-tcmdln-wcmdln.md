---
title: _acmdln, _tcmdln, _wcmdln
ms.date: 11/04/2016
apiname:
- _wcmdln
- _acmdln
apilocation:
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- _acmdln
- acmdln
- _wcmdln
- wcmdln
- _tcmdln
- tcmdln
helpviewer_keywords:
- _wcmdln global variable
- wcmdln global variable
- _acmdln global variable
- _tcmdln global variable
- tcmdln global variable
- acmdln global variable
ms.assetid: 4fc0a6a0-3f93-420a-a19f-5276061ba539
ms.openlocfilehash: 519cfb305d0092907ff8f10d2b66429a260a5fe2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668052"
---
# <a name="acmdln-tcmdln-wcmdln"></a>_acmdln, _tcmdln, _wcmdln

Variabile globale CRT interna. Riga di comando

## <a name="syntax"></a>Sintassi

```
char * _acmdln;
wchar_t * _wcmdln;

#ifdef WPRFLAG
   #define _tcmdln _wcmdln
#else
   #define _tcmdln _acmdln
```

## <a name="remarks"></a>Note

Nelle variabili CRT interne viene archiviata l'intera riga di comando. Sono esposte nei simboli esportati per CRT, ma non sono progettate per l'uso nel codice. `_acmdln` archivia i dati come stringa di caratteri. `_wcmdln` archivia i dati come stringa di caratteri wide. `_tcmdln` può essere definita come `_acmdln` o `_wcmdln`, a seconda del tipo più appropriato.

## <a name="see-also"></a>Vedere anche

[Variabili globali](../c-runtime-library/global-variables.md)