---
title: _controlfp_s
ms.date: 04/05/2018
apiname:
- _controlfp_s
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
helpviewer_keywords:
- floating-point numbers, control word
- controlfp_s function
- floating-point functions, setting control word
- EM_AMBIGUOUS
- _controlfp_s function
ms.assetid: a51fc3f6-ab13-41f0-b227-6bf02d98e987
ms.openlocfilehash: 0624cbfb4870ca87efebac01a8de682b588a4ca3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62335381"
---
# <a name="controlfps"></a>_controlfp_s

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

*mask*<br/>
Maschera di bit della parola di controllo nuova da impostare.

## <a name="return-value"></a>Valore restituito

Zero se ha esito positivo oppure un **errno** valore codice di errore.

## <a name="remarks"></a>Note

Il **controlfp_s** funzione è una versione indipendente dalla piattaforma e più sicura di **_control87**, che ottiene la parola di controllo a virgola mobile nell'indirizzo archiviato in  *currentControl* e impostata usando *newControl*. I bit dei valori indicano lo stato di controllo a virgola mobile. Lo stato di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile, a seconda della piattaforma. È anche possibile usare **controlfp_s** per mascherare o annullare il mascheramento delle eccezioni a virgola mobile.

Se il valore per *maschera* è uguale a 0, **controlfp_s** Ottiene la parola di controllo a virgola mobile e archivia il valore recuperato in *currentControl*.

Se *mask* è diverso da zero, viene impostato un nuovo valore per la parola di controllo: Per uno qualsiasi di bit che viene impostato (vale a dire, uguale a 1) nella *maschera*, il bit corrispondente nella *nuove* viene usato per aggiornare la parola di controllo. In altre parole, *fpcntrl* = ((*fpcntrl* & ~*maschera*) &#124; (*newControl* & *maschera* )) in cui *fpcntrl* corrisponde alla parola di controllo a virgola mobile. In questo scenario *currentControl* è impostata sul valore dopo il completamento della modifica, non è il valore di bit della parola di controllo precedente.

> [!NOTE]
> Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.

**controlfp_s** è quasi identico per il **_control87** funzionino in Intel piattaforme ARM, x64 e (x86). Se la destinazione è x86, x64 o piattaforme ARM, è possibile usare **_control87** oppure **controlfp_s**.

La differenza tra **_control87** e **controlfp_s** è nella modalità di gestione i valori denormalizzati. Per Intel (x86), x64 e piattaforme ARM **_control87** consente di impostare e cancellare la maschera di eccezione operando DENORMALIZZATO. **controlfp_s** non modifica la maschera di eccezione operando DENORMALIZZATO. In questo esempio viene illustrata la differenza:

```C
_control87( _EM_INVALID, _MCW_EM );
// DENORMAL is unmasked by this call.
unsigned int current_word = 0;
_controlfp_s( &current_word, _EM_INVALID, _MCW_EM );
// DENORMAL exception mask remains unchanged.
```

I valori possibili per la costante maschera (*maschera*) e nuovi valori di controllo (*newControl*) vengono visualizzati nella tabella di valori esadecimali seguente. Usare le costanti portabili elencate di seguito (**_MCW_EM**, **_EM_INVALID**e così via) come argomenti per queste funzioni, anziché specificare i valori esadecimali in modo esplicito.

Le piattaforme derivate Intel (x86) supportano i valori di input e output DENORMALIZZATI nell'hardware. Il comportamento x86 mantiene i valori DENORMALIZZATI. La piattaforma ARM e x64 il supporto di piattaforme con SSE2 consentono gli operandi DENORMALIZZATI e i risultati scaricati o forzato su zero. Il **controlfp_s**, **controlfp**, e **_control87** funzioni forniscono una maschera per modificare questo comportamento. Nell'esempio seguente viene illustrato l'uso di questa maschera:

```C
unsigned int current_word = 0;
_controlfp_s(&current_word, _DN_SAVE, _MCW_DN);
// Denormal values preserved on ARM platforms and on x64 processors with
// SSE2 support. NOP on x86 platforms.
_controlfp_s(&current_word, _DN_FLUSH, _MCW_DN);
// Denormal values flushed to zero by hardware on ARM platforms
// and x64 processors with SSE2 support. Ignored on other x86 platforms.
```

Sulle piattaforme ARM, la **controlfp_s** funzione viene applicata al registro fpscr. In x64 architetture, solo la parola di controllo SSE2 archiviata nel registro MXCSR è interessata. Su piattaforme Intel (x86) **controlfp_s** interessa le parole di controllo per x87 e SSE2, se presente. È possibile che le due parole di controllo come non coerenti tra loro (a causa di una chiamata precedente a [__control87_2](control87-controlfp-control87-2.md), ad esempio); se non c'è un'incoerenza tra le due parole di controllo, **controlfp_s** imposta la **EM_AMBIGUOUS** contrassegna nella *currentControl*. Si tratta di un avviso che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.

Nel ARM e x64 architetture, la modifica della modalità infinito o la precisione a virgola mobile non sono supportate. Se la maschera di controllo di precisione viene utilizzata in x64 piattaforma, la funzione genera un'asserzione e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Se la maschera non è impostata correttamente, questa funzione genera un'eccezione di parametro non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, questa funzione restituisce **EINVAL** e imposta **errno** al **EINVAL**.

Questa funzione viene ignorata quando si usa [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) alla compilazione poiché common language runtime (CLR) supporta solamente la precisione a virgola mobile predefinita.

### <a name="mask-constants-and-values"></a>Costanti di maschera e valori

Per il **_MCW_EM** maschera, deselezionandolo imposta l'eccezione, che consente l'eccezione hardware; impostazione consente di nascondere l'eccezione. Se un **_EM_UNDERFLOW** oppure **_EM_OVERFLOW** si verifica, viene generata alcuna eccezione hardware fino a quando non viene eseguita la successiva istruzione a virgola mobile. Per generare un'eccezione hardware immediatamente dopo aver **_EM_UNDERFLOW** oppure **_EM_OVERFLOW**, chiamare l'istruzione FWAIT MASM.

|Maschera|Valore hex|Costante|Valore hex|
|----------|---------------|--------------|---------------|
|**_MCW_DN** (controllo denormalizzato)|0x03000000|**_DN_SAVE**<br /><br /> **_DN_FLUSH**|0x00000000<br /><br /> 0x01000000|
|**_MCW_EM** (maschera eccezione interruzione)|0x0008001F|**_EM_INVALID**<br /><br /> **_EM_DENORMAL**<br /><br /> **_EM_ZERODIVIDE**<br /><br /> **_EM_OVERFLOW**<br /><br /> **_EM_UNDERFLOW**<br /><br /> **_EM_INEXACT**|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|
|**_MCW_IC** (controllo infinito)<br /><br /> (Non su ARM o x64 piattaforme supportate.)|0x00040000|**_IC_AFFINE**<br /><br /> **_IC_PROJECTIVE**|0x00040000<br /><br /> 0x00000000|
|**_MCW_RC** (controllo arrotondamento)|0x00000300|**_RC_CHOP**<br /><br /> **_RC_UP**<br /><br /> **_RC_DOWN**<br /><br /> **_RC_NEAR**|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|
|**_MCW_PC** (controllo precisione)<br /><br /> (Non su ARM o x64 piattaforme supportate.)|0x00030000|**_PC_24** (24 bits)<br /><br /> **_PC_53** (53 bits)<br /><br /> **_PC_64** (64 bits)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_controlfp_s**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
[_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md)<br/>
