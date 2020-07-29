---
title: _fpieee_flt
ms.date: 04/05/2018
api_name:
- _fpieee_flt
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fpieee_flt
- _fpieee_flt
helpviewer_keywords:
- _fpieee_flt function
- exception handling, floating-point
- floating-point exception handling
- fpieee_flt function
ms.assetid: 2bc4801e-0eed-4e73-b518-215da8cc9740
ms.openlocfilehash: c6a77dcba06b58191781900d4e24202c6335cfb8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213567"
---
# <a name="_fpieee_flt"></a>_fpieee_flt

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

*gestore*<br/>
Puntatore alla routine del gestore di trap IEEE dell'utente.

## <a name="return-value"></a>Valore restituito

Il valore restituito di **_fpieee_flt** è il valore restituito dal *gestore*. Come tale, la routine di filtro IEEE può essere utilizzata nella clausola di eccezione di un meccanismo di gestione delle eccezioni strutturata (SEH).

## <a name="remarks"></a>Osservazioni

La funzione **_fpieee_flt** richiama un gestore di trap definito dall'utente per le eccezioni a virgola mobile IEEE e fornisce tutte le informazioni rilevanti. Questa routine svolge la funzione di un filtro eccezioni nel meccanismo SEH, il quale richiama il proprio gestore delle eccezioni IEE quando necessario.

La struttura di **_FPIEEE_RECORD** , definita in FPIEEE. h, contiene informazioni relative a un'eccezione a virgola mobile IEEE. Questa struttura viene passata al gestore trap definito dall'utente da **_fpieee_flt**.

|Campo _FPIEEE_RECORD|Descrizione|
|----------------------------|-----------------|
|**RoundingMode**<br/>**Precisione**|Questi **`unsigned int`** campi contengono informazioni sull'ambiente a virgola mobile nel momento in cui si è verificata l'eccezione.|
|**Operazione**|Questo **`unsigned int`** campo indica il tipo di operazione che ha causato la trap. Se il tipo è un confronto (**_FpCodeCompare**), è possibile specificare uno dei valori di **_FPIEEE_COMPARE_RESULT** speciali (come definito in FPIEEE. h) nel campo **result. Value** . Il tipo di conversione (**_FpCodeConvert**) indica che il trap si è verificato durante un'operazione di conversione a virgola mobile. È possibile esaminare i tipi di **risultato** e **Operand1** per determinare il tipo di conversione tentata.|
|**Operand1**<br/>**Operand2**<br/>**Risultato**|Queste strutture di **_FPIEEE_VALUE** indicano i tipi e i valori del risultato e degli operandi proposti. Ogni struttura contiene i campi seguenti:<br /><br /> **OperandValid** -flag che indica se il valore di risposta è valido.<br />**Format** : tipo di dati del valore corrispondente. Il tipo di formato potrebbe essere restituito anche se il valore corrispondente non è valido.<br />**Valore di risultato** o valore dei dati dell'operando.|
|**Causa**<br/>**Attiva**<br/>**Status**|**_FPIEEE_EXCEPTION_FLAGS** contiene un campo di bit per tipo di eccezione a virgola mobile. Esiste una corrispondenza tra questi campi e gli argomenti usati per mascherare le eccezioni fornite a [_controlfp](control87-controlfp-control87-2.md). Il significato esatto di ogni bit dipende dal contesto:<br /><br /> **Cause** : ogni bit set indica la particolare eccezione generata.<br />**Enable** : ogni bit set indica che l'eccezione specifica è attualmente non mascherata.<br />**Stato** : ogni bit set indica che l'eccezione specifica è attualmente in sospeso. Sono incluse le eccezioni che non sono state generate perché sono state mascherate da **_controlfp**.|

Le eccezioni in sospeso disabilitate vengono generate quando vengono abilitate. Questo può causare un comportamento indefinito quando si usa **_fpieee_flt** come filtro eccezioni. Chiamare sempre [_clearfp](clear87-clearfp.md) prima di abilitare le eccezioni a virgola mobile.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fpieee_flt**|\<fpieee.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_control87, _controlfp, \_ _control87_2](control87-controlfp-control87-2.md)<br/>
[_controlfp_s](controlfp-s.md)<br/>
