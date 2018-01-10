---
title: _fpieee_flt | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _fpieee_flt
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
dev_langs: C++
helpviewer_keywords:
- _fpieee_flt function
- exception handling, floating-point
- floating-point exception handling
- fpieee_flt function
ms.assetid: 2bc4801e-0eed-4e73-b518-215da8cc9740
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 63472ad24a981a39a20e6c0cabb82f7c96d1e59e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fpieeeflt"></a>_fpieee_flt
Richiama un gestore di trap definito dall'utente per le eccezioni a virgola mobile IEEE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _fpieee_flt(   
   unsigned long excCode,  
   struct _EXCEPTION_POINTERS *excInfo,  
   int handler(_FPIEEE_RECORD *)   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `excCode`  
 Codice dell'eccezione.  
  
 `excInfo`  
 Puntatore a una struttura di informazioni sulle eccezioni di Windows NT.  
  
 `handler`  
 Puntatore alla routine del gestore di trap IEEE dell'utente.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore di ritorno di `_fpieee_flt` è il valore restituito da `handler`. Come tale, la routine di filtro IEEE può essere utilizzata nella clausola di eccezione di un meccanismo di gestione delle eccezioni strutturata (SEH).  
  
## <a name="remarks"></a>Note  
 La funzione `_fpieee_flt` richiama un gestore di trap definito dall'utente per le eccezioni a virgola mobile IEEE e fornisce tutte le informazioni rilevanti. Questa routine svolge la funzione di un filtro eccezioni nel meccanismo SEH, il quale richiama il proprio gestore delle eccezioni IEE quando necessario.  
  
 La struttura `_FPIEEE_RECORD`, definita in Fpieee.h, contiene informazioni relative a un'eccezione a virgola mobile IEEE. Questa struttura viene passata al gestore di trap definito dall'utente da `_fpieee_flt`.  
  
|Campo _FPIEEE_RECORD|Descrizione|  
|----------------------------|-----------------|  
|`unsigned int RoundingMode`, `unsigned int Precision`|Questi campi contengono informazioni sull'ambiente a virgola mobile nel momento in cui si è verificata l'eccezione.|  
|`unsigned int Operation`|Indica il tipo di operazione che ha causato il trap. Se il tipo è un confronto (`_FpCodeCompare`), è possibile fornire uno dei valori speciali `_FPIEEE_COMPARE_RESULT` (come definito in Fpieee.h) nel campo `Result.Value`. Il tipo di conversione (`_FpCodeConvert`) indica che il trap si è verificato durante un'operazione di conversione a virgola mobile. È possibile osservare i tipi `Operand1` e `Result` per determinare il tipo di conversione tentata.|  
|`_FPIEEE_VALUE Operand1`, `_FPIEEE_VALUE Operand2`, `_FPIEEE_VALUE Result`|Queste strutture indicano i tipi e i valori del risultato e degli operandi proposti:<br /><br /> `OperandValid` Flag che indica se il valore di risposta è valido.<br /><br /> `Format` Tipo di dati del valore corrispondente. Il tipo di formato potrebbe essere restituito anche se il valore corrispondente non è valido.<br /><br /> `Value` Risultato o valore dei dati dell'operando.|  
|`_FPIEEE_EXCEPTION_FLAGS Cause`, `_FPIEEE_EXCEPTION_FLAGS Enable`, `_FPIEEE_EXCEPTION_FLAGS Status`|_FPIEEE_EXCEPTION_FLAGS contiene un campo di bit per ciascun tipo di eccezione a virgola mobile.<br /><br /> Esiste una corrispondenza tra questi campi e gli argomenti usati per mascherare le eccezioni fornite a [_controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md).<br /><br /> Il significato esatto di ogni bit dipende dal contesto:<br /><br /> `Cause` Ogni bit del set indica la particolare eccezione generata.<br /><br /> `Enable` Ogni bit del set indica che l'eccezione specifica è attualmente non mascherata.<br /><br /> `Status` Ogni bit del set indica che l'eccezione specifica è attualmente in sospeso. Questo include le eccezioni che non sono state generate in quanto sono state mascherate da `_controlfp`.|  
  
 Le eccezioni in sospeso disabilitate vengono generate quando vengono abilitate. Questo può determinare un comportamento indefinito quando si usa `_fpieee_flt` come filtro per le eccezioni. Chiamare sempre [_clearfp](../../c-runtime-library/reference/clear87-clearfp.md) prima di abilitare le eccezioni a virgola mobile.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fpieee_flt`|\<fpieee.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
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
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)   
 [_controlfp_s](../../c-runtime-library/reference/controlfp-s.md)