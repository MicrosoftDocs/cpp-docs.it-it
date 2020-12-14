---
description: 'Altre informazioni su: _aligned_offset_malloc'
title: _aligned_offset_malloc
ms.date: 4/2/2020
api_name:
- _aligned_offset_malloc
- _o__aligned_offset_malloc
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
- api-ms-win-crt-heap-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _aligned_offset_malloc
- aligned_offset_malloc
helpviewer_keywords:
- _aligned_offset_malloc function
- aligned_offset_malloc function
ms.assetid: 447681a3-7c95-4655-86ba-fa3a4ca4c521
ms.openlocfilehash: 0a94a58abde85046e32ca50245e8b9878aeb9b92
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312423"
---
# <a name="_aligned_offset_malloc"></a>_aligned_offset_malloc

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

*allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

## <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria allocato o **null** se l'operazione non è riuscita.

## <a name="remarks"></a>Commenti

**_aligned_offset_malloc** è utile nelle situazioni in cui è necessario l'allineamento su un elemento annidato; ad esempio, se l'allineamento era necessario in una classe annidata.

**_aligned_offset_malloc** si basa su **malloc**; per altre informazioni, vedere [malloc](malloc.md).

**_aligned_offset_malloc** è contrassegnato `__declspec(noalias)` `__declspec(restrict)` come e, pertanto la funzione non modifica le variabili globali e il puntatore restituito non viene associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Questa funzione imposta **errno** su **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore di **_HEAP_MAXREQ**. Per ulteriori informazioni su **errno**, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **_aligned_offset_malloc** convalida i relativi parametri. Se l' *allineamento* non è una potenza di 2 o se l' *offset* è maggiore o uguale a *size* e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in convalida dei [parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **null** e imposta **errno** su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_malloc**|\<malloc.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [_aligned_malloc](aligned-malloc.md).

## <a name="see-also"></a>Vedi anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
