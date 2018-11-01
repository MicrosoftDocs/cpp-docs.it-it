---
title: isleadbyte, _isleadbyte_l
ms.date: 11/04/2016
apiname:
- _isleadbyte_l
- isleadbyte
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
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
ms.openlocfilehash: 1a3f427e49e53bb553020da100b0e713350fab3f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50531889"
---
# <a name="isleadbyte-isleadbytel"></a>isleadbyte, _isleadbyte_l

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

**isleadbyte** restituisce un valore diverso da zero se l'argomento soddisfa la condizione di test oppure 0 se non esiste. Set di impostazioni locali (SBCS), nelle impostazioni locali "C" e in un byte SBCS caratteri **isleadbyte** restituisce sempre 0.

## <a name="remarks"></a>Note

Il **isleadbyte** macro restituisce un valore diverso da zero se l'argomento è il primo byte di un carattere multibyte. **isleadbyte** produce un risultato significativo per qualsiasi argomento integer compreso tra -1 (**EOF**) per **UCHAR_MAX** (0xFF), inclusivo.

Il tipo di argomento previsto dei **isleadbyte** viene **int**; se un carattere signed viene passato, il compilatore potrebbe convertirlo in un numero intero per l'estensione del segno, generando risultati imprevisti.

La versione di questa funzione con il **l** suffisso è identico, ma usa le impostazioni locali passate anziché le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**istleadbyte**|Restituisce sempre false|**_isleadbyte**|Restituisce sempre false|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isleadbyte**|\<ctype.h>|
|**_isleadbyte_l**|\<ctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
