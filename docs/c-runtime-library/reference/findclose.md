---
description: 'Altre informazioni su: _findclose'
title: _findclose
ms.date: 4/2/2020
api_name:
- _findclose
- _o__findclose
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
- api-ms-win-crt-filesystem-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _findclose
- findclose
helpviewer_keywords:
- _findclose function
- findclose function
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
ms.openlocfilehash: 389a8aaf55605a1d9e3193c86ce500bf313fd631
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329194"
---
# <a name="_findclose"></a>_findclose

Chiude l'handle di ricerca specificato e rilascia le risorse associate.

## <a name="syntax"></a>Sintassi

```C
int _findclose(
   intptr_t handle
);
```

### <a name="parameters"></a>Parametri

*gestire*<br/>
Handle di ricerca restituito da una chiamata precedente a **_findfirst**.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **_findclose** restituisce 0. In caso contrario, viene restituito-1 e **errno** viene impostato su **ENOENT**, a indicare che non sono stati trovati altri file corrispondenti.

## <a name="remarks"></a>Commenti

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_findclose**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Chiamate di sistema](../../c-runtime-library/system-calls.md)<br/>
[Funzioni di ricerca filename](../../c-runtime-library/filename-search-functions.md)<br/>
