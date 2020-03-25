---
title: fwide
ms.date: 11/04/2016
api_name:
- fwide
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fwide
helpviewer_keywords:
- fwide function
ms.assetid: a4641f5b-d74f-4946-95d5-53a64610d28d
ms.openlocfilehash: 652aee03bfb5504a51d74efb326cc7a3d7c28649
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171203"
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

*stream*<br/>
Puntatore alla struttura del **file** (ignorato).

*mode*<br/>
La nuova larghezza del flusso: positivo per carattere wide, negativo per byte, zero da lasciare invariato. (Questo valore viene ignorato).

## <a name="return-value"></a>Valore restituito

Questa funzione attualmente restituisce solo la *modalità*.

## <a name="remarks"></a>Osservazioni

La versione corrente di questa funzione non è conforme allo standard.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fwide**|\<wchar.h>|

Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).
