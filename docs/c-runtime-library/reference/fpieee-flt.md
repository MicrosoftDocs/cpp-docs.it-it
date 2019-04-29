---
title: _fpieee_flt
ms.date: 04/05/2018
apiname:
- _fpieee_flt
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fpieee_flt
- _fpieee_flt
helpviewer_keywords:
- _fpieee_flt function
- exception handling, floating-point
- floating-point exception handling
- fpieee_flt function
ms.assetid: 2bc4801e-0eed-4e73-b518-215da8cc9740
ms.openlocfilehash: 9a49ec403b1cb95407b0a366accf1d9374d9cb22
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62333248"
---
# <a name="fpieeeflt"></a>_fpieee_flt

Richiama un gestore di trap definito dall'utente per le eccezioni a virgola mobile IEEE.

## <a name="syntax"></a>Sintassi

```C
int _fpieee_flt(
   unsigned long excCode,
   struct _EXCEPTION_POINTERS *excInfo,
   int handler(_FPIEEE_RECORD *)
);
```

### <a name="parameters"></a>Parametri

*excCode*<br/>
Codice dell'eccezione.

*excInfo*<br/>
Puntatore a una struttura di informazioni sulle eccezioni di Windows NT.

*handler*<br/>
Puntatore alla routine del gestore di trap IEEE dell'utente.

## <a name="return-value"></a>Valore restituito

Il valore restituito di **fpieee_flt** è il valore restituito da *gestore*. Come tale, la routine di filtro IEEE può essere utilizzata nella clausola di eccezione di un meccanismo di gestione delle eccezioni strutturata (SEH).

## <a name="remarks"></a>Note

Il **fpieee_flt** funzione richiama un gestore di trap definito dall'utente per le eccezioni a virgola mobile IEEE e fornisce tutte le informazioni pertinenti. Questa routine svolge la funzione di un filtro eccezioni nel meccanismo SEH, il quale richiama il proprio gestore delle eccezioni IEE quando necessario.

Il **fpieee_record** struttura, definita in fpieee. h, contiene informazioni relative a un'eccezione a virgola mobile IEEE. Questa struttura viene passata al gestore di trap definito dall'utente dal **fpieee_flt**.

|Campo _FPIEEE_RECORD|Descrizione|
|----------------------------|-----------------|
|**RoundingMode**<br/>**Precisione**|Questi **unsigned** **int** campi contengono informazioni sull'ambiente a virgola mobile al momento si è verificata l'eccezione.|
|**Operazione**|Ciò **unsigned** **int** campo indica il tipo di operazione che ha causato il trap. Se il tipo è un confronto (**_FpCodeCompare**), è possibile specificare una delle speciali **_FPIEEE_COMPARE_RESULT** valori (come definito in fpieee. h) il **Result.Value** campo. Il tipo di conversione (**_FpCodeConvert**) indica che il trap si è verificato durante un'operazione di conversione a virgola mobile. È possibile esaminare i **Operand1** e **risultato** tipi per determinare il tipo di conversione tentata.|
|**Operand1**<br/>**Operand2**<br/>**Risultato**|Questi **_FPIEEE_VALUE** strutture indicano i tipi e valori di risultato proposto e gli operandi. Ogni struttura contiene questi campi:<br /><br /> **OperandValid** : Flag che indica se il valore di risposta è valido.<br />**Formato** -tipo di dati del valore corrispondente. Il tipo di formato potrebbe essere restituito anche se il valore corrispondente non è valido.<br />**Valore** -risultati o dati valore dell'operando.|
|**Causa**<br/>**Enable**<br/>**Status**|**Fpieee_exception_flags** contiene un campo di bit per ogni tipo di eccezione a virgola mobile. Esiste una corrispondenza tra questi campi e gli argomenti usati per mascherare le eccezioni fornite a [_controlfp](control87-controlfp-control87-2.md). Il significato esatto di ogni bit dipende dal contesto:<br /><br /> **Causa** -ogni bit del set indica la particolare eccezione generata.<br />**Abilitare** -ogni bit del set indica che l'eccezione specifica è attualmente smascherata.<br />**Stato** -ogni bit del set indica che l'eccezione specifica è attualmente in sospeso. Ciò include le eccezioni che non sono state generate perché sono state mascherate da **controlfp**.|

Le eccezioni in sospeso disabilitate vengono generate quando vengono abilitate. Ciò può comportare un comportamento indefinito quando si usa **fpieee_flt** come filtro eccezioni. Chiamare sempre [_clearfp](clear87-clearfp.md) prima di abilitare le eccezioni a virgola mobile.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fpieee_flt**|\<fpieee.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fpieee.c
// This program demonstrates the implementation of
// a user-defined floating-point exception handler using the
// _fpieee_flt function.

#include <fpieee.h>
#include <excpt.h>
#include <float.h>
#include <stddef.h>

int fpieee_handler( _FPIEEE_RECORD * );

int fpieee_handler( _FPIEEE_RECORD *pieee )
{
   // user-defined ieee trap handler routine:
   // there is one handler for all
   // IEEE exceptions

   // Assume the user wants all invalid
   // operations to return 0.

   if ((pieee->Cause.InvalidOperation) &&
       (pieee->Result.Format == _FpFormatFp32))
   {
        pieee->Result.Value.Fp32Value = 0.0F;

        return EXCEPTION_CONTINUE_EXECUTION;
   }
   else
      return EXCEPTION_EXECUTE_HANDLER;
}

#define _EXC_MASK    \
    _EM_UNDERFLOW  + \
    _EM_OVERFLOW   + \
    _EM_ZERODIVIDE + \
    _EM_INEXACT

int main( void )
{
   // ...

   __try {
      // unmask invalid operation exception
      _controlfp_s(NULL, _EXC_MASK, _MCW_EM);

      // code that may generate
      // fp exceptions goes here
   }
   __except ( _fpieee_flt( GetExceptionCode(),
                GetExceptionInformation(),
                fpieee_handler ) ){

      // code that gets control

      // if fpieee_handler returns
      // EXCEPTION_EXECUTE_HANDLER goes here

   }

   // ...
}
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md)<br/>
[_controlfp_s](controlfp-s.md)<br/>
