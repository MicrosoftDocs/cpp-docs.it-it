---
title: Pragma intrinsic
ms.date: 08/29/2019
f1_keywords:
- intrinsic_CPP
- vc-pragma.intrinsic
helpviewer_keywords:
- intrinsic pragma
- pragmas, intrinsic
ms.assetid: 25c86ac7-ef40-47b7-a2c0-fada9c5dc3c5
ms.openlocfilehash: bb4403abf5e278ed3727af660579e22ab69592c7
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220936"
---
# <a name="intrinsic-pragma"></a>Pragma intrinsic

Specifica che le chiamate alle funzioni specificate nell'elenco di argomenti del pragma sono intrinseche.

## <a name="syntax"></a>Sintassi

> **#pragma intrinseco (** *funzione1* [ **,** _funzione2_ ...] **)**

## <a name="remarks"></a>Note

Il pragma intrinseco indica al compilatore che una funzione ha un comportamento noto. Il compilatore può chiamare la funzione e non sostituire la chiamata di funzione con istruzioni inline, se questo può garantire prestazioni migliori.

Le funzioni di libreria con formato intrinseco sono elencate di seguito. Quando viene visualizzato un pragma intrinseco, questo viene applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o all'aspetto di un `function` pragma che specifica la stessa funzione intrinseca. Il pragma intrinseco può essere utilizzato solo all'esterno di una definizione di funzione, a livello globale.

Le funzioni seguenti hanno form intrinseci e i form intrinseci vengono usati quando si specifica [/OI](../build/reference/oi-generate-intrinsic-functions.md):

|||||
|-|-|-|-|
|[_disable](../intrinsics/disable.md)|[_outp](../c-runtime-library/outp-outpw-outpd.md)|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|[strcmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)|
|[_enable](../intrinsics/enable.md)|[_outpw](../c-runtime-library/outp-outpw-outpd.md)|[labs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|[strcpy](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)|
|[_inp](../c-runtime-library/inp-inpw-inpd.md)|[_rotl](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|[memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|[strlen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|
|[_inpw](../c-runtime-library/inp-inpw-inpd.md)|[_rotr](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|[memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md)||
|[_lrotl](../c-runtime-library/reference/lrotl-lrotr.md)|[_strset](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)|[memset](../c-runtime-library/reference/memset-wmemset.md)||
|[_lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|[abs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|[strcat](../c-runtime-library/reference/strcat-wcscat-mbscat.md)||

I programmi che usano funzioni intrinseche sono più veloci perché non hanno il sovraccarico delle chiamate di funzione, ma possono essere più grandi a causa del codice aggiuntivo generato.

**Specifico per x86**

Gli `_disable` intrinseci e `_enable` generano istruzioni in modalità kernel per disabilitare o abilitare gli interrupt e possono essere utili nei driver in modalità kernel.

### <a name="example"></a>Esempio

Compilare il codice seguente dalla riga di comando con `cl -c -FAs sample.c` ed esaminare sample. asm per verificare che si rivolgono a istruzioni x86 CLI e STI:

```cpp
// pragma_directive_intrinsic.cpp
// processor: x86
#include <dos.h>   // definitions for _disable, _enable
#pragma intrinsic(_disable)
#pragma intrinsic(_enable)
void f1(void) {
   _disable();
   // do some work here that should not be interrupted
   _enable();
}
int main() {
}
```

**Specifica END x86**

Le funzioni a virgola mobile elencate di seguito non hanno veri moduli intrinseci. Tali funzioni hanno versioni che passano argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma:

|||||
|-|-|-|-|
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|[cosh](../c-runtime-library/reference/cosh-coshf-coshl.md)|[pow](../c-runtime-library/reference/pow-powf-powl.md)|[tanh](../c-runtime-library/reference/tanh-tanhf-tanhl.md)|
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|[sinh](../c-runtime-library/reference/sinh-sinhf-sinhl.md)||

Le funzioni a virgola mobile elencate di seguito hanno vere forme intrinseche quando si specificano [/OI](../build/reference/oi-generate-intrinsic-functions.md), [/og](../build/reference/og-global-optimizations.md)e [/FP: Fast](../build/reference/fp-specify-floating-point-behavior.md) (o qualsiasi opzione che include/og: [/Ox](../build/reference/ox-full-optimization.md), [/O1](../build/reference/o1-o2-minimize-size-maximize-speed.md)e [/O2](../build/reference/o1-o2-minimize-size-maximize-speed.md)):

|||||
|-|-|-|-|
|[atan](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[exp](../c-runtime-library/reference/exp-expf.md)|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|
|[atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|[sin](../c-runtime-library/reference/sin-sinf-sinl.md)|[tan](../c-runtime-library/reference/tan-tanf-tanl.md)|
|[cos](../c-runtime-library/reference/cos-cosf-cosl.md)||||

È possibile utilizzare [/FP: Strict](../build/reference/fp-specify-floating-point-behavior.md) o [/za](../build/reference/za-ze-disable-language-extensions.md) per eseguire l'override della generazione di opzioni a virgola mobile intrinseche true. In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.

Per informazioni e per un esempio su come abilitare o disabilitare gli intrinseci per un blocco di testo di origine, vedere la [funzione #pragma](../preprocessor/function-c-cpp.md) .

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
