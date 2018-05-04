---
title: _aligned_free | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _aligned_free
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- aligned_free
- _aligned_free
dev_langs:
- C++
helpviewer_keywords:
- _aligned_free function
- aligned_free function
ms.assetid: ed1ce952-cdfc-4682-85cc-f75d4101603d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bd89d0c8657df4bec2da5bf021c8964ad418cd9b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="alignedfree"></a>_aligned_free

Libera un blocco di memoria che è stato allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md).

## <a name="syntax"></a>Sintassi

```C
void _aligned_free (
   void *memblock
);
```

### <a name="parameters"></a>Parametri

*memblock* un puntatore al blocco di memoria che è stato restituito per il **aligned_malloc** o **aligned_offset_malloc** (funzione).

## <a name="remarks"></a>Note

**aligned_free** contrassegnato `__declspec(noalias)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali. Per altre informazioni, vedere [noalias](../../cpp/noalias.md).

Questa funzione non convalida il parametro, a differenza di altre funzioni CRT _aligned. Se *memblock* è un **NULL** semplicemente puntatore, questa funzione non esegue alcuna azione. Non viene modificato **errno** e non richiamano il gestore di parametri non validi. Se si verifica un errore nella funzione a causa del mancato utilizzo precedente di funzioni _aligned per allocare il blocco di memoria oppure si verifica un problema di allineamento della memoria a causa di alcune calamità impreviste, la funzione genera un report di debug dalle [Macro _RPT, _RPTF, _RPTW, _RPTFW](rpt-rptf-rptw-rptfw-macros.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_free**|\<malloc.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [_aligned_malloc](aligned-malloc.md).

## <a name="see-also"></a>Vedere anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
