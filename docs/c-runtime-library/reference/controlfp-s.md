---
description: 'Altre informazioni su: _controlfp_s'
title: _controlfp_s
ms.date: 4/2/2020
api_name:
- _controlfp_s
- _o__controlfp_s
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- controlfp_s
- _controlfp_s
helpviewer_keywords:
- floating-point numbers, control word
- controlfp_s function
- floating-point functions, setting control word
- EM_AMBIGUOUS
- _controlfp_s function
ms.assetid: a51fc3f6-ab13-41f0-b227-6bf02d98e987
ms.openlocfilehash: 2fed3263374df4bdac012c6d41d89adf9232c338
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146471"
---
# <a name="_controlfp_s"></a>_controlfp_s

Ottiene e imposta la parola di controllo a virgola mobile. Questa versione di [_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md) include miglioramenti per la sicurezza, come descritto in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) (Funzionalità di sicurezza in CRT).

## <a name="syntax"></a>Sintassi

```C
errno_t _controlfp_s(
    unsigned int *currentControl,
    unsigned int newControl,
    unsigned int mask
);
```

### <a name="parameters"></a>Parametri

*currentControl*<br/>
Il valore di bit della parola di controllo corrente.

*newControl*<br/>
Valori di bit della parola di controllo nuova.

*maschera*<br/>
Maschera di bit della parola di controllo nuova da impostare.

## <a name="return-value"></a>Valore restituito

Zero se l'operazione ha esito positivo o un codice di errore del valore **errno** .

## <a name="remarks"></a>Commenti

La funzione **_controlfp_s** è una versione indipendente dalla piattaforma e più sicura di **_control87**, che ottiene la parola di controllo a virgola mobile nell'indirizzo archiviato in *CurrentControl* e la imposta usando *newControl*. I bit dei valori indicano lo stato di controllo a virgola mobile. Lo stato di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile, a seconda della piattaforma. È anche possibile usare **_controlfp_s** per mascherare o annullare il mascheramento delle eccezioni a virgola mobile.

Se il valore per *mask* è uguale a 0, **_controlfp_s** ottiene la parola di controllo a virgola mobile e archivia il valore recuperato in *CurrentControl*.

Se *mask* è diverso da zero, viene impostato un nuovo valore per la parola di controllo: per ogni bit impostato (vale a dire, uguale a 1) nella *maschera*, viene usato il bit corrispondente in *New* per aggiornare la parola di controllo. In altre parole, *fpcntrl* = ((*fpcntrl* & ~*mask*) &#124; (*newControl*  &  *mask*), dove *fpcntrl* è la parola di controllo a virgola mobile. In questo scenario, *CurrentControl* è impostato sul valore dopo il completamento della modifica; non è il valore bit della parola di controllo precedente.

> [!NOTE]
> Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.

**_controlfp_s** è quasi identica alla funzione **_Control87** sulle piattaforme Intel (x86), x64 e ARM. Se la destinazione è x86, x64 o piattaforme ARM, è possibile usare **_control87** o **_controlfp_s**.

La differenza tra **_control87** e **_controlfp_s** consiste nel modo in cui trattano i valori denormali. Per le piattaforme Intel (x86), x64 e ARM, **_control87** possibile impostare e deselezionare la maschera di eccezioni degli operandi denormalizzate. **_controlfp_s** non modifica la maschera di eccezione dell'operando denormalizzata. In questo esempio viene illustrata la differenza:

```C
_control87( _EM_INVALID, _MCW_EM );
// DENORMAL is unmasked by this call.
unsigned int current_word = 0;
_controlfp_s( &current_word, _EM_INVALID, _MCW_EM );
// DENORMAL exception mask remains unchanged.
```

I valori possibili per la costante Mask (*maschera*) e i nuovi valori di controllo (*newControl*) vengono visualizzati nella tabella dei valori esadecimali seguenti. Usare le costanti portabili elencate di seguito (**_MCW_EM**, **_EM_INVALID** e così via) come argomenti per queste funzioni, anziché specificare in modo esplicito i valori esadecimali.

Le piattaforme derivate Intel (x86) supportano i valori di input e output DENORMALIZZATI nell'hardware. Il comportamento x86 mantiene i valori DENORMALIZZATI. La piattaforma ARM e le piattaforme x64 con supporto SSE2 consentono di scaricare gli operandi e i risultati denormalizzati oppure forzarli a zero. Le funzioni **_controlfp_s**, **_controlfp** e **_control87** forniscono una maschera per modificare questo comportamento. Nell'esempio seguente viene illustrato l'uso di questa maschera:

```C
unsigned int current_word = 0;
_controlfp_s(&current_word, _DN_SAVE, _MCW_DN);
// Denormal values preserved on ARM platforms and on x64 processors with
// SSE2 support. NOP on x86 platforms.
_controlfp_s(&current_word, _DN_FLUSH, _MCW_DN);
// Denormal values flushed to zero by hardware on ARM platforms
// and x64 processors with SSE2 support. Ignored on other x86 platforms.
```

Sulle piattaforme ARM la funzione **_controlfp_s** si applica al registro registro FPSCR. Nelle architetture x64 è interessata solo la parola di controllo SSE2 archiviata nel registro MXCSR. Sulle piattaforme Intel (x86) **_controlfp_s** influiscono sulle parole di controllo per x87 e SSE2, se presenti. È possibile che le due parole di controllo siano incoerenti tra loro (a causa di una precedente chiamata a [__control87_2](control87-controlfp-control87-2.md), ad esempio); Se è presente un'incoerenza tra le due parole di controllo, **_controlfp_s** imposta il flag di **EM_AMBIGUOUS** in *CurrentControl*. Si tratta di un avviso che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.

Nelle architetture ARM e x64, la modifica della modalità Infinity o della precisione a virgola mobile non è supportata. Se la maschera di controllo della precisione viene utilizzata sulla piattaforma x64, la funzione genera un'asserzione e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Se la maschera non è impostata correttamente, questa funzione genera un'eccezione di parametro non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, questa funzione restituisce **EINVAL** e imposta **errno** su **EINVAL**.

Questa funzione viene ignorata quando si utilizza [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) per la compilazione perché il Common Language Runtime (CLR) supporta solo la precisione a virgola mobile predefinita.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="mask-constants-and-values"></a>Maschera costanti e valori

Per la maschera **_MCW_EM** , la cancellazione imposta l'eccezione, che consente l'eccezione hardware; l'impostazione nasconde l'eccezione. Se si verifica un **_EM_UNDERFLOW** o **_EM_OVERFLOW** , non viene generata alcuna eccezione hardware fino a quando non viene eseguita l'istruzione a virgola mobile successiva. Per generare un'eccezione hardware immediatamente dopo **_EM_UNDERFLOW** o **_EM_OVERFLOW**, chiamare l'istruzione MASM fwait.

|Mask|Valore hex|Costante|Valore hex|
|----------|---------------|--------------|---------------|
|**_MCW_DN** (controllo denormalizzato)|0x03000000|**_DN_SAVE**<br /><br /> **_DN_FLUSH**|0x00000000<br /><br /> 0x01000000|
|**_MCW_EM** (maschera eccezione interrupt)|0x0008001F|**_EM_INVALID**<br /><br /> **_EM_DENORMAL**<br /><br /> **_EM_ZERODIVIDE**<br /><br /> **_EM_OVERFLOW**<br /><br /> **_EM_UNDERFLOW**<br /><br /> **_EM_INEXACT**|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|
|**_MCW_IC** (controllo Infinity)<br /><br /> (Non supportato sulle piattaforme ARM o x64).|0x00040000|**_IC_AFFINE**<br /><br /> **_IC_PROJECTIVE**|0x00040000<br /><br /> 0x00000000|
|**_MCW_RC** (controllo di arrotondamento)|0x00000300|**_RC_CHOP**<br /><br /> **_RC_UP**<br /><br /> **_RC_DOWN**<br /><br /> **_RC_NEAR**|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|
|**_MCW_PC** (controllo di precisione)<br /><br /> (Non supportato sulle piattaforme ARM o x64).|0x00030000|**_PC_24** (24 bit)<br /><br /> **_PC_53** (53 bit)<br /><br /> **_PC_64** (64 bit)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_controlfp_s**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
[_control87, _controlfp, \_ _control87_2](control87-controlfp-control87-2.md)<br/>
