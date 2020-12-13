---
description: 'Altre informazioni su: _control87, _controlfp, __control87_2'
title: _control87, _controlfp, __control87_2
ms.date: 08/29/2019
api_name:
- _control87
- _controlfp
- __control87_2
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
ms.openlocfilehash: 0270c4a65225ad463f9098b5c00d311ee1096652
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146510"
---
# <a name="_control87-_controlfp-__control87_2"></a>_control87, _controlfp, __control87_2

Ottiene e imposta la parola di controllo a virgola mobile. È disponibile una versione più sicura di **_controlfp** ; vedere [_controlfp_s](controlfp-s.md).

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

*Nuovo*\
Valori di bit della parola di controllo nuova.

*maschera*\
Maschera di bit della parola di controllo nuova da impostare.

*x86_cw*\
Compilato con la parola di controllo per l'unità di calcolo in virgola mobile x87. Passare 0 (**null**) per impostare solo la parola di controllo SSE2.

*sse2_cw*\
Parola di controllo per l'unità di calcolo in virgola mobile SSE. Passare 0 (**null**) per impostare solo la parola di controllo x87.

## <a name="return-value"></a>Valore restituito

Per **_control87** e **_controlfp**, i bit nel valore restituito indicano lo stato del controllo a virgola mobile. Per una definizione completa dei bit restituiti da **_control87**, vedere float. H.

Per **__control87_2**, il valore restituito è 1, che indica l'esito positivo.

## <a name="remarks"></a>Commenti

La funzione **_control87** ottiene e imposta la parola di controllo a virgola mobile. La parola di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito, a seconda della piattaforma. È anche possibile usare **_control87** per mascherare o annullare il mascheramento delle eccezioni a virgola mobile. Se il valore per *mask* è uguale a 0, **_control87** ottiene la parola di controllo a virgola mobile. Se *mask* è diverso da zero, viene impostato un nuovo valore per la parola di controllo: per ogni bit che è on (ovvero, uguale a 1) nella *maschera*, viene usato il bit corrispondente in *New* per aggiornare la parola di controllo. In altre parole, **fpcntrl** = ((**fpcntrl** & ~*mask*) &#124; (*nuova*  &  *maschera*)) dove **fpcntrl** è la parola di controllo a virgola mobile.

> [!NOTE]
> Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.

**_controlfp** è una versione portatile indipendente dalla piattaforma di **_control87** quasi identica alla funzione **_control87** . Se il codice è destinato a più di una piattaforma, usare **_controlfp** o **_controlfp_s**. La differenza tra **_control87** e **_controlfp** consiste nel modo in cui trattano i valori denormali. Per le piattaforme x86, x64, ARM e ARM64, **_control87** possibile impostare e deselezionare la maschera di eccezioni degli operandi denormalizzate. **_controlfp** non modifica la maschera di eccezione dell'operando denormalizzata. In questo esempio viene illustrata la differenza:

```C
_control87( _EM_INVALID, _MCW_EM );
// DENORMAL is unmasked by this call
_controlfp( _EM_INVALID, _MCW_EM );
// DENORMAL exception mask remains unchanged
```

I valori possibili per la costante Mask (*maschera*) e i nuovi valori di controllo (*nuovo*) vengono visualizzati nella tabella di controllo maschere e valori di Word. Usare le costanti portabili elencate di seguito (**_MCW_EM**, **_EM_INVALID** e così via) come argomenti per queste funzioni, anziché specificare in modo esplicito i valori esadecimali.

Le piattaforme derivate da Intel x86 supportano i valori di input e output denormalizzati nell'hardware. Il comportamento x86 mantiene i valori DENORMALIZZATI. Le piattaforme ARM e ARM64 e le piattaforme x64 con supporto SSE2 consentono di scaricare gli operandi e i risultati denormalizzati o di forzarli a zero. Le funzioni **_controlfp** e **_control87** forniscono una maschera per modificare questo comportamento. Nell'esempio seguente viene illustrato l'uso di questa maschera.

```C
_controlfp(_DN_SAVE, _MCW_DN);
// Denormal values preserved on ARM platforms and on x64 processors with
// SSE2 support. NOP on x86 platforms.
_controlfp(_DN_FLUSH, _MCW_DN);
// Denormal values flushed to zero by hardware on ARM platforms
// and x64 processors with SSE2 support. Ignored on other x86 platforms.
```

Sulle piattaforme ARM e ARM64 le funzioni **_control87** e **_controlfp** si applicano al registro registro FPSCR. Solo la parola di controllo SSE2 archiviata nel registro MXCSR è interessata dalle piattaforme x64. Sulle piattaforme x86 **_control87** e **_controlfp** influiscono sulle parole di controllo per x87 e SSE2, se presenti.

La funzione **__control87_2** consente di controllare le unità a virgola mobile x87 e SSE2 insieme o separatamente. Per influenzare entrambe le unità, passare gli indirizzi di due Integer a **x86_cw** e **sse2_cw**. Se si vuole solo influenzare un'unità, passare un indirizzo per tale parametro, ma passare 0 (**null**) per l'altro. Se 0 viene passato per uno di questi parametri, la funzione non ha alcun effetto su tale unità di calcolo a virgola mobile. È utile quando una parte del codice usa l'unità a virgola mobile x87 e un'altra parte usa l'unità a virgola mobile SSE2.

Se si usa **__control87_2** per impostare valori diversi per le parole di controllo a virgola mobile, **_control87** o **_controlfp** potrebbe non essere in grado di restituire una singola parola di controllo per rappresentare lo stato di entrambe le unità a virgola mobile. In tal caso, queste funzioni impostano il flag **EM_AMBIGUOUS** nel valore integer restituito per indicare un'incoerenza tra le due parole di controllo. Il flag **EM_AMBIGUOUS** è un avviso indicante che la parola di controllo restituita potrebbe non rappresentare in modo accurato lo stato di entrambe le parole di controllo a virgola mobile.

Sulle piattaforme ARM, ARM64 e x64, la modifica della modalità Infinity o della precisione a virgola mobile non è supportata. Se la maschera di controllo della precisione viene utilizzata sulla piattaforma x64, la funzione genera un'asserzione e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

> [!NOTE]
> **__control87_2** non è supportato sulle piattaforme ARM, arm64 o x64. Se si usa **__control87_2** e si compila il programma per le piattaforme ARM, arm64 o x64, il compilatore genera un errore.

Queste funzioni vengono ignorate quando si usa [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) per la compilazione. Il Common Language Runtime (CLR) supporta solo la precisione a virgola mobile predefinita.

### <a name="control-word-masks-and-values"></a>Controllare le maschere e i valori di Word

Per la maschera **_MCW_EM** , la cancellazione della maschera imposta l'eccezione, che consente l'eccezione hardware; Se si imposta la maschera, l'eccezione viene nascosta. Se si verifica un **_EM_UNDERFLOW** o **_EM_OVERFLOW** , non viene generata alcuna eccezione hardware fino a quando non viene eseguita l'istruzione a virgola mobile successiva. Per generare un'eccezione hardware immediatamente dopo **_EM_UNDERFLOW** o **_EM_OVERFLOW**, chiamare l'istruzione MASM **fwait** .

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
|**_control87**, **_controlfp**, **_control87_2**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_cntrl87.c
// processor: x86
// compile by using: cl /W4 /arch:IA32 crt_cntrl87.c
// This program uses __control87_2 to output the x87 control
// word, set the precision to 24 bits, and reset the status to
// the default.

#include <stdio.h>
#include <float.h>
#pragma fenv_access (on)

int main( void )
{
    double a = 0.1;
    unsigned int control_word_x87 = 0;
    int result;

    // Show original x87 control word and do calculation.
    result = __control87_2(0, 0, &control_word_x87, 0 );
    printf( "Original: 0x%.8x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Set precision to 24 bits and recalculate.
    result = __control87_2(_PC_24, MCW_PC, &control_word_x87, 0 );
    printf( "24-bit:   0x%.8x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Restore default precision-control bits and recalculate.
    result = __control87_2( _CW_DEFAULT, MCW_PC, &control_word_x87, 0 );
    printf( "Default:  0x%.8x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );
}
```

```Output
Original: 0x0009001f
0.1 * 0.1 = 1.000000000000000e-02
24-bit:   0x000a001f
0.1 * 0.1 = 9.999999776482582e-03
Default:  0x0009001f
0.1 * 0.1 = 1.000000000000000e-02
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[_clear87, _clearfp](clear87-clearfp.md)\
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)\
[_controlfp_s](controlfp-s.md)
