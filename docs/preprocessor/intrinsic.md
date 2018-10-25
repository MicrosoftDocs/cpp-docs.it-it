---
title: funzione intrinseca | Microsoft Docs
ms.custom: ''
ms.date: 04/11/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- intrinsic_CPP
- vc-pragma.intrinsic
dev_langs:
- C++
helpviewer_keywords:
- intrinsic pragma
- pragmas, intrinsic
ms.assetid: 25c86ac7-ef40-47b7-a2c0-fada9c5dc3c5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: af7fe3a96a31f636a0a1c45b1ee74dd4006d15fe
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50071599"
---
# <a name="intrinsic"></a>intrinsic

Specifica che le chiamate alle funzioni specificate nell'elenco di argomenti del pragma sono intrinseche.

## <a name="syntax"></a>Sintassi

```cpp
#pragma intrinsic( function1 [, function2, ...] )
```

## <a name="remarks"></a>Note

Il **intrinseco** pragma indica al compilatore che una funzione è noto il comportamento.  Il compilatore può chiamare la funzione e non sostituire la chiamata di funzione con istruzioni inline, se questo può garantire prestazioni migliori.

Le funzioni di libreria con formato intrinseco sono elencate di seguito. Una volta un' **intrinseco** è stato rilevato il pragma, verrà applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o alla rilevazione di un `function` pragma specificando la stessa funzione intrinseca. Il **intrinseco** pragma può essere usato solo all'esterno di una definizione di funzione, ovvero a livello globale.

Le seguenti funzioni hanno formati intrinseci e i formati intrinseci vengono usati quando si specifica [/Oi](../build/reference/oi-generate-intrinsic-functions.md):

|||||
|-|-|-|-|
|[_disable](../intrinsics/disable.md)|[_outp](../c-runtime-library/outp-outpw-outpd.md)|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|[strcmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)|
|[_enable](../intrinsics/enable.md)|[_outpw](../c-runtime-library/outp-outpw-outpd.md)|[labs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|[strcpy](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)|
|[_inp](../c-runtime-library/inp-inpw-inpd.md)|[_rotl](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|[memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|[strlen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|
|[_inpw](../c-runtime-library/inp-inpw-inpd.md)|[_rotr](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|[memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md)||
|[_lrotl](../c-runtime-library/reference/lrotl-lrotr.md)|[_strset](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)|[memset](../c-runtime-library/reference/memset-wmemset.md)||
|[_lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|[abs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|[strcat](../c-runtime-library/reference/strcat-wcscat-mbscat.md)||

I programmi che utilizzano le funzioni intrinseche sono più veloci in quanto non hanno il sovraccarico delle chiamate di funzione, ma potrebbero essere di dimensioni maggiori a causa del codice aggiuntivo generato.

**x86 specifico**

Il `_disable` e `_enable` intrinseci generano istruzioni in modalità kernel per disabilitare o abilitare gli interrupt e possono essere utili in driver in modalità kernel.

### <a name="example"></a>Esempio

Compilare il codice seguente dalla riga di comando con `cl -c -FAs sample.c` ed esaminare file Sample. asm per verificare che venga trasformano in x86 istruzioni CLI e STI:

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

**Fine sezione specifica x86**

Le funzioni a virgola mobile elencate di seguito non hanno formati intrinseci reali. Tali funzioni hanno versioni che passano argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma:

|||||
|-|-|-|-|
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|[cosh](../c-runtime-library/reference/cosh-coshf-coshl.md)|[pow](../c-runtime-library/reference/pow-powf-powl.md)|[tanh](../c-runtime-library/reference/tanh-tanhf-tanhl.md)|
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|[sinh](../c-runtime-library/reference/sinh-sinhf-sinhl.md)||

Le funzioni a virgola mobile elencate di seguito hanno formati intrinseci reali quando si specifica [/Oi](../build/reference/oi-generate-intrinsic-functions.md), [/Og](../build/reference/og-global-optimizations.md), e [/fp: fast](../build/reference/fp-specify-floating-point-behavior.md) (o qualsiasi opzione che include /Og: [/ Ox](../build/reference/ox-full-optimization.md), [/O1](../build/reference/o1-o2-minimize-size-maximize-speed.md)e/O2):

|||||
|-|-|-|-|
|[atan](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[exp](../c-runtime-library/reference/exp-expf.md)|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|
|[atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|[sin](../c-runtime-library/reference/sin-sinf-sinl.md)|[tan](../c-runtime-library/reference/tan-tanf-tanl.md)|
|[cos](../c-runtime-library/reference/cos-cosf-cosl.md)||||

È possibile usare [/fp: strict](../build/reference/fp-specify-floating-point-behavior.md) oppure [/Za](../build/reference/za-ze-disable-language-extensions.md) per eseguire l'override della generazione delle opzioni a virgola mobile intrinseche true. In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.

Visualizzare [#pragma funzione](../preprocessor/function-c-cpp.md) per informazioni e un esempio su come abilitare o disabilitare le funzioni intrinseche per un blocco di testo di origine.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)