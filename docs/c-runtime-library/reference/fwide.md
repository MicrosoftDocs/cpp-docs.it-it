---
title: fwide | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a055df312215b5ff424aff54cfee54e0568ab307
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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