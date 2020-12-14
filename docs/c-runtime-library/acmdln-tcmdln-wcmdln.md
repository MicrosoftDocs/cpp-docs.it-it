---
description: 'Altre informazioni su: _acmdln, _tcmdln, _wcmdln'
title: _acmdln, _tcmdln, _wcmdln
ms.date: 11/04/2016
api_name:
- _wcmdln
- _acmdln
api_location:
- msvcrt.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: cc47e6e48e408ebd0a4edc02048d6c40ae638ecd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242691"
---
# <a name="_acmdln-_tcmdln-_wcmdln"></a>_acmdln, _tcmdln, _wcmdln

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

## <a name="remarks"></a>Osservazioni

Nelle variabili CRT interne viene archiviata l'intera riga di comando. Sono esposte nei simboli esportati per CRT, ma non sono progettate per l'uso nel codice. `_acmdln` archivia i dati come stringa di caratteri. `_wcmdln` archivia i dati come stringa di caratteri wide. `_tcmdln` può essere definita come `_acmdln` o `_wcmdln`, a seconda del tipo più appropriato.

## <a name="see-also"></a>Vedi anche

[Variabili globali](../c-runtime-library/global-variables.md)
