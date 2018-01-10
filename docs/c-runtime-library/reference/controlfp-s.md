---
title: _controlfp_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _controlfp_s
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
- controlfp_s
- _controlfp_s
dev_langs: C++
helpviewer_keywords:
- floating-point numbers, control word
- controlfp_s function
- floating-point functions, setting control word
- EM_AMBIGUOUS
- _controlfp_s function
ms.assetid: a51fc3f6-ab13-41f0-b227-6bf02d98e987
caps.latest.revision: "28"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a8c8f651e04a1d68cd27f8321d6a30250c0e6ce1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="controlfps"></a>_controlfp_s
Ottiene e imposta la parola di controllo a virgola mobile. Questa versione di [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) include miglioramenti per la sicurezza, come descritto in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) (Funzionalità di sicurezza in CRT).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _controlfp_s(  
    unsigned int *currentControl,  
    unsigned int newControl,  
    unsigned int mask  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `currentControl`  
 Il valore di bit della parola di controllo corrente.  
  
 `newControl`  
 Valori di bit della parola di controllo nuova.  
  
 `mask`  
 Maschera di bit della parola di controllo nuova da impostare.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se l'esito è positivo oppure un codice di errore con valore `errno`.  
  
## <a name="remarks"></a>Note  
 La funzione `_controlfp_s` è una versione indipendente dalla piattaforma e più sicura di `_control87`, che ottiene la parola di controllo a virgola mobile nell'indirizzo archiviato in `currentControl` e viene impostata usando `newControl`. I bit dei valori indicano lo stato di controllo a virgola mobile. Lo stato di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile, a seconda della piattaforma. È anche possibile usare `_controlfp_s` per mascherare o annullare il mascheramento delle eccezioni a virgola mobile.  
  
 Se il valore per `mask` è uguale a 0, `_controlfp_s` ottiene la parola di controllo a virgola mobile e archivia il valore recuperato in `currentControl`.  
  
 Se `mask` è diverso da zero, viene impostato un nuovo valore per la parola di controllo: per ogni bit impostato (vale a dire, uguale a 1) in `mask`, il bit corrispondente in `new` viene usato per aggiornare la parola di controllo. In altri termini, `fpcntrl` `=` ((`fpcntrl` `& ~mask`) &#124; (`new & mask`)) dove `fpcntrl` è la parola di controllo a virgola mobile. In questo scenario, `currentControl` è impostato sul valore dopo il completamento della modifica, non è il valore di bit della parola di controllo precedente.  
  
> [!NOTE]
>  Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.  
  
 `_controlfp_s` è quasi identico alla funzione `_control87` sulle piattaforme Intel (x86), [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM. Se si fa riferimento solo a piattaforme x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] o ARM, è possibile usare `_control87` o `_controlfp_s`.  
  
 La differenza tra `_control87` e `_controlfp_s` risiede nella modalità di gestione dei valori `DENORMAL`. Per le piattaforme Intel (x86), [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM, `_control87` consente di impostare e cancellare la maschera di eccezione OPERANDO DENORMALIZZATO. `_controlfp_s` non modifica la maschera di eccezione OPERANDO DENORMALIZZATO. In questo esempio viene illustrata la differenza:  
  
```C  
_control87( _EM_INVALID, _MCW_EM );   
// DENORMAL is unmasked by this call.  
unsigned int current_word = 0;  
_controlfp_s( &current_word, _EM_INVALID, _MCW_EM );   
// DENORMAL exception mask remains unchanged.  
```  
  
 I valori possibili per la costante maschera (`mask`) e i nuovi valori di controllo (`newControl`) vengono visualizzati nella tabella dei valori esadecimali seguente. Usare le costanti portabili elencate di seguito (`_MCW_EM`, `_EM_INVALID` e così via) come argomenti per le funzioni, anziché specificare in modo esplicito i valori esadecimali.  
  
 Le piattaforme derivate Intel (x86) supportano i valori di input e output DENORMALIZZATI nell'hardware. Il comportamento x86 mantiene i valori DENORMALIZZATI. La piattaforma ARM e le piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] che supportano SSE2 consentono gli operandi DENORMALIZZATI e la cancellazione dei risultati o la loro forzatura a zero. Le funzioni `_controlfp_s`, `_controlfp` e `_control87` offrono una maschera per modificare questo comportamento. Nell'esempio seguente viene illustrato l'uso di questa maschera:  
  
```C  
unsigned int current_word = 0;  
_controlfp_s(&current_word, _DN_SAVE, _MCW_DN);     
// Denormal values preserved on ARM platforms and on x64 processors with  
// SSE2 support. NOP on x86 platforms.  
_controlfp_s(&current_word, _DN_FLUSH, _MCW_DN);     
// Denormal values flushed to zero by hardware on ARM platforms   
// and x64 processors with SSE2 support. Ignored on other x86 platforms.  
```  
  
 Sulle piattaforme ARM, la funzione `_controlfp_s` viene applicata al registro FPSCR. Nelle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], è interessata solo la parola di controllo SSE2 archiviata nel registro MXCSR. Sulle piattaforme Intel (x86) `_controlfp_s` interessa le parole di controllo per x87 e SSE2, se presenti. È possibile che le due parole di controllo siano incompatibili tra loro, ad esempio a causa di una precedente chiamata a [__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md); se non vi è incoerenza tra le due parole di controllo, `_controlfp_s` imposta il flag `EM_AMBIGUOUS` su `currentControl`. Si tratta di un avviso che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.  
  
 Nelle architetture ARM e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la modifica della modalità infinito o la precisione a virgola mobile non sono supportate. Se la maschera di controllo di precisione viene usata nella piattaforma [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la funzione genera un'asserzione e viene richiamato il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).  
  
 Se la maschera non è impostata correttamente, questa funzione genera un'eccezione di parametro non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
 Questa funzione viene ignorata quando utilizza [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) per la compilazione perché common language runtime (CLR) supporta solo la precisione a virgola mobile predefinita.  
  
### <a name="mask-constants-and-values"></a>Le costanti di maschera e valori  
  
 Per la maschera `_MCW_EM`, la sua cancellazione comporta l'impostazione dell'eccezione, che consente l'eccezione hardware; la sua impostazione consente di nascondere l'eccezione. Se si verifica un `_EM_UNDERFLOW` o `_EM_OVERFLOW`, non viene generata alcuna eccezione hardware fino a quando non viene eseguita l'istruzione a virgola mobile successiva. Per generare un'eccezione hardware immediatamente dopo `_EM_UNDERFLOW` o `_EM_OVERFLOW`, chiamare l'istruzione FWAIT MASM.  
  
|Maschera|Valore hex|Costante|Valore hex|  
|----------|---------------|--------------|---------------|  
|`_MCW_DN` (Controllo denormalizzato)|0x03000000|`_DN_SAVE`<br /><br /> `_DN_FLUSH`|0x00000000<br /><br /> 0x01000000|  
|`_MCW_EM` (Maschera eccezione interruzione)|0x0008001F|`_EM_INVALID`<br /><br /> `_EM_DENORMAL`<br /><br /> `_EM_ZERODIVIDE`<br /><br /> `_EM_OVERFLOW`<br /><br /> `_EM_UNDERFLOW`<br /><br /> `_EM_INEXACT`|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|  
|`_MCW_IC` (Controllo infinito)<br /><br /> (Non supportato sulle piattaforme ARM o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].)|0x00040000|`_IC_AFFINE`<br /><br /> `_IC_PROJECTIVE`|0x00040000<br /><br /> 0x00000000|  
|`_MCW_RC` (Controllo arrotondamento)|0x00000300|`_RC_CHOP`<br /><br /> `_RC_UP`<br /><br /> `_RC_DOWN`<br /><br /> `_RC_NEAR`|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|  
|`_MCW_PC` (Controllo precisione)<br /><br /> (Non supportato sulle piattaforme ARM o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].)|0x00030000|`_PC_24` (24 bit)<br /><br /> `_PC_53` (53 bit)<br /><br /> `_PC_64` (64 bit)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_controlfp_s`|\<float.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_contrlfp_s.c  
// processor: x86  
// This program uses _controlfp_s to output the FP control   
// word, set the precision to 24 bits, and reset the status to   
// the default.  
  
#include <stdio.h>  
#include <float.h>  
#pragma fenv_access (on)  
  
int main( void )  
{  
    double a = 0.1;  
    unsigned int control_word;  
    int err;  
  
    // Show original FP control word and do calculation.  
    err = _controlfp_s(&control_word, 0, 0);  
    if ( err ) /* handle error here */;  
  
    printf( "Original: 0x%.4x\n", control_word );  
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );  
  
    // Set precision to 24 bits and recalculate.  
    err = _controlfp_s(&control_word, _PC_24, MCW_PC);  
    if ( err ) /* handle error here */;  
  
    printf( "24-bit:   0x%.4x\n", control_word );  
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );  
  
    // Restore default precision-control bits and recalculate.  
    err = _controlfp_s(&control_word, _CW_DEFAULT, MCW_PC);  
    if ( err ) /* handle error here */;  
  
    printf( "Default:  0x%.4x\n", control_word );  
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );  
}  
```  
  
```Output  
Original: 0x9001f  
0.1 * 0.1 = 1.000000000000000e-002  
24-bit:   0xa001f  
0.1 * 0.1 = 9.999999776482582e-003  
Default:  0x9001f  
0.1 * 0.1 = 1.000000000000000e-002  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [_clear87, _clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [_status87, _statusfp, _statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)   
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)