---
description: 'Altre informazioni su: isleadbyte, _isleadbyte_l'
title: isleadbyte, _isleadbyte_l
ms.date: 4/2/2020
api_name:
- _isleadbyte_l
- isleadbyte
- _o__isleadbyte_l
- _o_isleadbyte
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
- api-ms-win-crt-string-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _istleadbyte
- _isleadbyte_l
- isleadbyte
helpviewer_keywords:
- lead bytes
- _isleadbyte_l function
- _istleadbyte function
- istleadbyte function
- isleadbyte function
ms.assetid: 3b2bcf09-d82b-4803-9e80-59d04942802a
ms.openlocfilehash: 544adda1b794db6a003e3ae7d51b15456574f875
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332652"
---
# <a name="isleadbyte-_isleadbyte_l"></a>isleadbyte, _isleadbyte_l

Determina se un carattere è il byte iniziale di un carattere multibyte.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int isleadbyte( int c );
int _isleadbyte_l( int c );
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

## <a name="return-value"></a>Valore restituito

**isleadbyte** restituisce un valore diverso da zero se l'argomento soddisfa la condizione di test oppure 0 in caso contrario. Nelle impostazioni locali "C" e nelle impostazioni locali del set di caratteri a byte singolo (SBCS), **isleadbyte** restituisce sempre 0.

## <a name="remarks"></a>Commenti

La macro **isleadbyte** restituisce un valore diverso da zero se il relativo argomento è il primo byte di un carattere multibyte. **isleadbyte** produce un risultato significativo per qualsiasi argomento integer da-1 (**EOF**) a **UCHAR_MAX** (0xFF), inclusi.

Il tipo di argomento previsto di **isleadbyte** è **`int`** ; se viene passato un carattere con segno, il compilatore può convertirlo in un integer con l'estensione del segno, ottenendo risultati imprevedibili.

La versione di questa funzione con il suffisso **_L** è identica, ma usa le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istleadbyte**|Restituisce sempre false|**_isleadbyte**|Restituisce sempre false|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isleadbyte**|\<ctype.h>|
|**_isleadbyte_l**|\<ctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Classificazione byte](../../c-runtime-library/byte-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine di _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
