---
title: Pragma intrinsic
description: Il pragma intrinseco MSVC viene usato per specificare le funzioni intrinseche supportate da usare come intrinseci.
ms.date: 07/08/2020
f1_keywords:
- intrinsic_CPP
- vc-pragma.intrinsic
helpviewer_keywords:
- intrinsic pragma
- pragmas, intrinsic
ms.assetid: 25c86ac7-ef40-47b7-a2c0-fada9c5dc3c5
ms.openlocfilehash: 45a5a13f3bda3657b93e1a89e7a842a4465b01d5
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041107"
---
# <a name="intrinsic-pragma"></a>Pragma `intrinsic`

Specifica che le chiamate alle funzioni specificate nell'elenco di argomenti del pragma sono intrinseche.

## <a name="syntax"></a>Sintassi

> **`#pragma intrinsic(`** *`function1`* [**`,`** _`function2`_ ... ] **`)`**

## <a name="remarks"></a>Commenti

Il **`intrinsic`** pragma indica al compilatore che una funzione ha un comportamento noto. Il compilatore può chiamare la funzione e non sostituire la chiamata di funzione con istruzioni inline, se questo può garantire prestazioni migliori.

Le funzioni di libreria con formato intrinseco sono elencate di seguito. Una volta **`intrinsic`** visualizzato, un pragma viene applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata. L'effetto continua fino alla fine del file di origine o all'aspetto di un `function` pragma che specifica la stessa funzione intrinseca. Il **`intrinsic`** pragma può essere utilizzato solo all'esterno di una definizione di funzione, a livello globale.

Le funzioni seguenti hanno form intrinseci e i form intrinseci vengono usati quando si specificano [`/Oi`](../build/reference/oi-generate-intrinsic-functions.md) :

:::row:::
   :::column span="":::
      [`abs`](../c-runtime-library/reference/abs-labs-llabs-abs64.md)\
      [`_disable`](../intrinsics/disable.md)\
      [`_enable`](../intrinsics/enable.md)\
      [`fabs`](../c-runtime-library/reference/fabs-fabsf-fabsl.md)\
      [`_inp`](../c-runtime-library/inp-inpw-inpd.md)\
      [`_inpw`](../c-runtime-library/inp-inpw-inpd.md)\
   :::column-end:::
   :::column span="":::
      [`labs`](../c-runtime-library/reference/abs-labs-llabs-abs64.md)\
      [`_lrotl`](../c-runtime-library/reference/lrotl-lrotr.md)\
      [`_lrotr`](../c-runtime-library/reference/lrotl-lrotr.md)\
      [`memcmp`](../c-runtime-library/reference/memcmp-wmemcmp.md)\
      [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md)\
   :::column-end:::
   :::column span="":::
      [`memset`](../c-runtime-library/reference/memset-wmemset.md)\
      [`_outp`](../c-runtime-library/outp-outpw-outpd.md)\
      [`_outpw`](../c-runtime-library/outp-outpw-outpd.md)\
      [`_rotl`](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)\
      [`_rotr`](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)\
   :::column-end:::
   :::column span="":::
      [`strcat`](../c-runtime-library/reference/strcat-wcscat-mbscat.md)\
      [`strcmp`](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)\
      [`strcpy`](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)\
      [`strlen`](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)\
      [`_strset`](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)\
   :::column-end:::
:::row-end:::

I programmi che usano funzioni intrinseche sono più veloci perché non hanno il sovraccarico delle chiamate di funzione. Tuttavia, possono essere più grandi a causa del codice aggiuntivo generato.

### <a name="x86-specific-example"></a>esempio specifico di x86

Gli `_disable` `_enable` intrinseci e generano istruzioni in modalità kernel per disabilitare o abilitare gli interrupt e possono essere utili nei driver in modalità kernel.

Compilare il codice seguente dalla riga di comando con `cl -c -FAs sample.c` ed esaminare *`sample.asm`* per verificare che si rivolgono a istruzioni x86 CLI e STI:

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

### <a name="intrinsic-floating-point-functions"></a>Funzioni intrinseche a virgola mobile

Queste funzioni a virgola mobile non hanno veri moduli intrinseci. Ma hanno versioni che passano gli argomenti direttamente al chip a virgola mobile, anziché eseguirne il push nello stack:

:::row:::
   :::column span="":::
      [`acos`](../c-runtime-library/reference/acos-acosf-acosl.md)\
      [`asin`](../c-runtime-library/reference/asin-asinf-asinl.md)\
   :::column-end:::
   :::column span="":::
      [`cosh`](../c-runtime-library/reference/cosh-coshf-coshl.md)\
      [`fmod`](../c-runtime-library/reference/fmod-fmodf.md)\
   :::column-end:::
   :::column span="":::
      [`pow`](../c-runtime-library/reference/pow-powf-powl.md)\
      [`sinh`](../c-runtime-library/reference/sinh-sinhf-sinhl.md)\
   :::column-end:::
   :::column span="":::
      [`tanh`](../c-runtime-library/reference/tanh-tanhf-tanhl.md)\
   :::column-end:::
:::row-end:::

Queste funzioni a virgola mobile hanno veri formati intrinseci quando si specificano [`/Oi`](../build/reference/oi-generate-intrinsic-functions.md) e [`/fp:fast`](../build/reference/fp-specify-floating-point-behavior.md) (o qualsiasi opzione che include **`/Oi`** : [`/Ox`](../build/reference/ox-full-optimization.md) , [`/O1`](../build/reference/o1-o2-minimize-size-maximize-speed.md) e [`/O2`](../build/reference/o1-o2-minimize-size-maximize-speed.md) ):

:::row:::
   :::column span="":::
      [`atan`](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)\
      [`atan2`](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)\
      [`cos`](../c-runtime-library/reference/cos-cosf-cosl.md)\
   :::column-end:::
   :::column span="":::
      [`exp`](../c-runtime-library/reference/exp-expf.md)\
      [`log`](../c-runtime-library/reference/log-logf-log10-log10f.md)\
   :::column-end:::
   :::column span="":::
      [`log10`](../c-runtime-library/reference/log-logf-log10-log10f.md)\
      [`sin`](../c-runtime-library/reference/sin-sinf-sinl.md)\
   :::column-end:::
   :::column span="":::
      [`sqrt`](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)\
      [`tan`](../c-runtime-library/reference/tan-tanf-tanl.md)\
   :::column-end:::
:::row-end:::

È possibile usare [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) o [`/Za`](../build/reference/za-ze-disable-language-extensions.md) per eseguire l'override della generazione di opzioni a virgola mobile intrinseche true. In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.

[`#pragma function`](../preprocessor/function-c-cpp.md)Per informazioni e per un esempio su come abilitare e disabilitare le funzioni intrinseche per un blocco di testo di origine, vedere.

## <a name="see-also"></a>Vedi anche

[Direttive pragma e `__pragma` parola chiave](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
