---
title: _control87, _controlfp, __control87_2
ms.date: 04/05/2018
apiname:
- _control87
- _controlfp
- __control87_2
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
- _control87
- __control87_2
- control87
- _controlfp
- controlfp
- control87_2
- _control87_2
helpviewer_keywords:
- floating-point numbers, control word
- _control87 function
- control87 function
- controlfp function
- _controlfp function
- __control87_2 function
- floating-point functions, setting control word
- floating-point functions
- EM_AMBIGUOUS
- control87_2 function
ms.assetid: 0d09729d-d9a0-43d6-864c-43ff25e7e0c5
ms.openlocfilehash: e2ebfdc80a451ebf02563f78a62dd08618f92bcd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50505872"
---
# <a name="control87-controlfp-control872"></a>_control87, _controlfp, __control87_2

Ottiene e imposta la parola di controllo a virgola mobile. Una versione più sicura dei **controlfp** è disponibile, vedere [controlfp_s](controlfp-s.md).

## <a name="syntax"></a>Sintassi

```C
unsigned int _control87(
   unsigned int new,
   unsigned int mask
);
unsigned int _controlfp(
   unsigned int new,
   unsigned int mask
);
int __control87_2(
   unsigned int new,
   unsigned int mask,
   unsigned int* x86_cw,
   unsigned int* sse2_cw
);
```

### <a name="parameters"></a>Parametri

*new*<br/>
Valori di bit della parola di controllo nuova.

*Maschera*<br/>
Maschera di bit della parola di controllo nuova da impostare.

*x86_cw*<br/>
Compilato con la parola di controllo per l'unità di calcolo in virgola mobile x87. Passare 0 (**NULL**) per impostare solo la parola di controllo SSE2.

*sse2_cw*<br/>
Parola di controllo per l'unità di calcolo in virgola mobile SSE. Passare 0 (**NULL**) per impostare solo x87 parola di controllo.

## <a name="return-value"></a>Valore restituito

Per la **_control87** e **controlfp**, i bit nel valore restituito indicano lo stato del controllo a virgola mobile. Per una definizione completa dei bit restituiti da **_control87**, vedere FLOAT. H.

Per la **__control87_2**, il valore restituito è 1, che indica l'esito positivo.

## <a name="remarks"></a>Note

Il **_control87** funzione Ottiene e imposta la parola di controllo a virgola mobile. La parola di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile, a seconda della piattaforma. È anche possibile usare **_control87** per mascherare o annullare il mascheramento delle eccezioni a virgola mobile. Se il valore per *maschera* è uguale a 0, **_control87** Ottiene la parola di controllo a virgola mobile. Se *maschera* è diverso da zero, viene impostato un nuovo valore per la parola di controllo: per ogni bit che si trova in (vale a dire, uguale a 1) nel *maschera*, il bit corrispondente nella *nuovo* viene usato per aggiornare il controllo Word. In altre parole, **fpcntrl** = ((**fpcntrl** & ~*maschera*) &#124; (*nuovo* & *maschera*)) in cui **fpcntrl** corrisponde alla parola di controllo a virgola mobile.

> [!NOTE]
> Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.

**controlfp** è una versione indipendente dalla piattaforma e portabile della **_control87**. È quasi identico per le **_control87** funzione su piattaforme ARM, x64 e x86. Se la destinazione è x86, x64 o piattaforme ARM, usare **_control87** oppure **controlfp**.

La differenza tra **_control87** e **controlfp** è in modalità gestione dei valori DENORMALIZZATI. Per le piattaforme ARM, x86 e x64 **_control87** consente di impostare e cancellare la maschera di eccezione operando DENORMALIZZATO. **controlfp** non modifica la maschera di eccezione operando DENORMALIZZATO. In questo esempio viene illustrata la differenza:

```C
_control87( _EM_INVALID, _MCW_EM );
// DENORMAL is unmasked by this call
_controlfp( _EM_INVALID, _MCW_EM );
// DENORMAL exception mask remains unchanged
```

I valori possibili per la costante maschera (*maschera*) e nuovi valori di controllo (*nuove*) vengono visualizzati nella tabella di valori esadecimali seguente. Usare le costanti portabili elencate di seguito (**_MCW_EM**, **_EM_INVALID**e così via) come argomenti per queste funzioni, anziché specificare i valori esadecimali in modo esplicito.

Le piattaforme x86 derivate Intel supportano l'input DENORMALIZZATI e restituire valori in hardware. Il comportamento x86 mantiene i valori DENORMALIZZATI. La piattaforma ARM e x64 il supporto di piattaforme con SSE2 consentono gli operandi DENORMALIZZATI e i risultati scaricati o forzato su zero. Il **controlfp** e **_control87** funzioni forniscono una maschera per modificare questo comportamento. Nell'esempio seguente viene illustrato l'uso di questa maschera.

```C
_controlfp(_DN_SAVE, _MCW_DN);
// Denormal values preserved on ARM platforms and on x64 processors with
// SSE2 support. NOP on x86 platforms.
_controlfp(_DN_FLUSH, _MCW_DN);
// Denormal values flushed to zero by hardware on ARM platforms
// and x64 processors with SSE2 support. Ignored on other x86 platforms.
```

Sulle piattaforme ARM, la **_control87** e **controlfp** funzioni si applicano al registro fpscr. In x64 architetture, solo la parola di controllo SSE2 archiviata nel registro MXCSR è interessata. Su x86, piattaforme **_control87** e **controlfp** interessano le parole di controllo per x87 e SSE2, se presente. La funzione **__control87_2** consente sia x87 che SSE2 a virgola mobile e unità di insieme o separatamente. Se si desidera influiscono su entrambe le unità, passare gli indirizzi di due interi da **x86_cw** e **sse2_cw**. Se si desidera solo influiscono su un'unità, passare un indirizzo per il parametro ma passare 0 (**NULL**) per gli altri. Se 0 viene passato per uno di questi parametri, la funzione non ha alcun effetto su tale unità di calcolo a virgola mobile. Questa funzionalità può risultare utile nelle situazioni in cui una parte del codice usa l'unità di calcolo a virgola mobile x87 e un'altra parte del codice usa l'unità di calcolo a virgola mobile SSE2. Se si usa **__control87_2** in una parte di un programma e impostare valori diversi per le parole di controllo a virgola mobile e quindi usare **_control87** oppure **controlfp** per continuare modificare la parola di controllo, quindi **_control87** e **controlfp** potrebbe non essere possibile restituire una parola di controllo singola per rappresentare lo stato di entrambe le unità a virgola mobile. In tal caso, queste funzioni impostano le **EM_AMBIGUOUS** flag nel valore integer restituito per indicare che è presente un'incoerenza tra le due parole di controllo. Si tratta di un avviso che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.

Nel ARM e x64 architetture, la modifica della modalità infinito o la precisione a virgola mobile non sono supportate. Se la maschera di controllo di precisione viene utilizzata in x64 piattaforma, la funzione genera un'asserzione e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

> [!NOTE]
> **__control87_2** non è supportato nel ARM o x64 architetture. Se si usa **__control87_2** e compilare il programma per il ARM o x64 per le architetture, il compilatore genera un errore.

Queste funzioni vengono ignorate quando si usa [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) alla compilazione poiché common language runtime (CLR) supporta solamente la precisione a virgola mobile predefinita.

**Valori esadecimali**

Per il **_MCW_EM** maschera, cancellare la maschera di impostazione dell'eccezione, che consente l'eccezione hardware; la sua impostazione consente di nascondere l'eccezione. Se un **_EM_UNDERFLOW** oppure **_EM_OVERFLOW** si verifica, viene generata alcuna eccezione hardware fino a quando non viene eseguita la successiva istruzione a virgola mobile. Per generare un'eccezione hardware immediatamente dopo **_EM_UNDERFLOW** oppure **_EM_OVERFLOW**, chiamare il **FWAIT** istruzione MASM.

|Maschera|Valore hex|Costante|Valore hex|
|----------|---------------|--------------|---------------|
|**_MCW_DN** (controllo denormalizzato)|0x03000000|**_DN_SAVE**<br /><br /> **_DN_FLUSH**|0x00000000<br /><br /> 0x01000000|
|**_MCW_EM** (maschera eccezione interruzione)|0x0008001F|**_EM_INVALID**<br /><br /> **_EM_DENORMAL**<br /><br /> **_EM_ZERODIVIDE**<br /><br /> **_EM_OVERFLOW**<br /><br /> **_EM_UNDERFLOW**<br /><br /> **_EM_INEXACT**|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|
|**_MCW_IC** (controllo infinito)<br /><br /> (Non supportato in ARM o x64] piattaforme.)|0x00040000|**_IC_AFFINE**<br /><br /> **_IC_PROJECTIVE**|0x00040000<br /><br /> 0x00000000|
|**_MCW_RC** (controllo arrotondamento)|0x00000300|**_RC_CHOP**<br /><br /> **_RC_UP**<br /><br /> **_RC_DOWN**<br /><br /> **_RC_NEAR**|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|
|**_MCW_PC** (controllo precisione)<br /><br /> (Non su ARM o x64 piattaforme supportate.)|0x00030000|**_PC_24** (24 bit)<br /><br /> **_PC_53** (53 bit)<br /><br /> **_PC_64** (64 bit)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_control87**, **controlfp**, **_control87_2**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="example"></a>Esempio

```C
// crt_cntrl87.c
// processor: x86
// This program uses __control87_2 to output the x87 control
// word, set the precision to 24 bits, and reset the status to
// the default.

#include <stdio.h>
#include <float.h>
#pragma fenv_access (on)

int main( void )
{
    double a = 0.1;
    unsigned int control_word_x87;

    // Show original x87 control word and do calculation.
    control_word_x87 = __control87_2(0, 0,
                                     &control_word_x87, 0);
    printf( "Original: 0x%.4x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Set precision to 24 bits and recalculate.
    control_word_x87 = __control87_2(_PC_24, MCW_PC,
                                     &control_word_x87, 0);
    printf( "24-bit:   0x%.4x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Restore default precision-control bits and recalculate.
    control_word_x87 = __control87_2( _CW_DEFAULT, MCW_PC,
                                     &control_word_x87, 0 );
    printf( "Default:  0x%.4x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );
}
```

```Output
Original: 0x0001
0.1 * 0.1 = 1.000000000000000e-002
24-bit:   0x0001
0.1 * 0.1 = 9.999999776482582e-003
Default:  0x0001
0.1 * 0.1 = 1.000000000000000e-002
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
[_controlfp_s](controlfp-s.md)<br/>
