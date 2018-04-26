---
title: _aligned_offset_malloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _aligned_offset_malloc
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
- _aligned_offset_malloc
- aligned_offset_malloc
dev_langs:
- C++
helpviewer_keywords:
- _aligned_offset_malloc function
- aligned_offset_malloc function
ms.assetid: 447681a3-7c95-4655-86ba-fa3a4ca4c521
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 62ddae2faf8139b58e43f889c46771647b254b10
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="alignedoffsetmalloc"></a>_aligned_offset_malloc

Alloca la memoria in un limite di allineamento specificato.

## <a name="syntax"></a>Sintassi

```C
void * _aligned_offset_malloc(
   size_t size,
   size_t alignment,
   size_t offset
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Dimensione dell'allocazione di memoria richiesta.

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

## <a name="return-value"></a>Valore restituito

Un puntatore al blocco di memoria allocato o **NULL** se l'operazione non riuscita.

## <a name="remarks"></a>Note

**aligned_offset_malloc** è utile nelle situazioni in cui è necessaria l'allineamento su un elemento nidificato; ad esempio, se è stato necessario allineamento in una classe annidata.

**aligned_offset_malloc** basa **malloc**; per ulteriori informazioni, vedere [malloc](malloc.md).

**aligned_offset_malloc** contrassegnato `__declspec(noalias)` e `__declspec(restrict)`, vale a dire che la funzione è sicuramente non per modificare le variabili globali e che il puntatore restituito non è associato un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

La funzione imposta **errno** alla **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore **heap_maxreq**. Per ulteriori informazioni **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **aligned_offset_malloc** convalida i propri parametri. Se *allineamento* non è una potenza di 2 o se *offset* è maggiore o uguale a *dimensioni* e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **NULL** e imposta **errno** al **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_malloc**|\<malloc.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [_aligned_malloc](aligned-malloc.md).

## <a name="see-also"></a>Vedere anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
