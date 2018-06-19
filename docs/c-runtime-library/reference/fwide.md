---
title: fwide | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- fwide
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- fwide
dev_langs:
- C++
helpviewer_keywords:
- fwide function
ms.assetid: a4641f5b-d74f-4946-95d5-53a64610d28d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fd52c450e2eb34c40d44d00a76550c401abcb6c9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32397268"
---
# <a name="fwide"></a>fwide

Non implementato.

## <a name="syntax"></a>Sintassi

```C
int fwide(
   FILE *stream,
   int mode;
);
```

### <a name="parameters"></a>Parametri

*Flusso*<br/>
Puntatore a **FILE** struttura (ignorato).

*mode*<br/>
La nuova larghezza del flusso: positivo per carattere wide, negativo per byte, zero da lasciare invariato. (Questo valore viene ignorato).

## <a name="return-value"></a>Valore restituito

Questa funzione attualmente restituisce semplicemente *modalità*.

## <a name="remarks"></a>Note

La versione corrente di questa funzione non è conforme allo standard.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fwide**|\<wchar.h>|

Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).