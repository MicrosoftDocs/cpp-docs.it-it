---
title: "intrinsic | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "intrinsic_CPP"
  - "vc-pragma.intrinsic"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "intrinsic (pragma)"
  - "pragma, intrinsic"
ms.assetid: 25c86ac7-ef40-47b7-a2c0-fada9c5dc3c5
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# intrinsic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica che le chiamate alle funzioni specificate nell'elenco di argomenti del pragma sono intrinseche.  
  
## Sintassi  
  
```  
  
#pragma intrinsic( function1 [, function2, ...] )  
```  
  
## Note  
 Il pragma **intrinsic** indica al compilatore che il comportamento di una funzione è noto.  Il compilatore può chiamare la funzione e non sostituire la chiamata di funzione con istruzioni inline, se questo può garantire prestazioni migliori.  
  
 Le funzioni di libreria con formato intrinseco sono elencate di seguito.  Una volta che viene rilevato un pragma **intrinsic**, verrà applicato alla prima definizione di funzione che contiene una funzione intrinseca specificata.  L'effetto continua fino alla fine del file di origine o alla rilevazione di un pragma **function** che specifica la stessa funzione intrinseca.  Il pragma **intrinsic** può essere utilizzato solo all'esterno di una definizione di funzione e a livello globale.  
  
 Le seguenti funzioni hanno formati intrinseci che vengono utilizzati quando si specifica [\/Oi](../build/reference/oi-generate-intrinsic-functions.md):  
  
|||||  
|-|-|-|-|  
|[\_disable](../intrinsics/disable.md)|[\_outp](../c-runtime-library/outp-outpw-outpd.md)|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|[strcmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)|  
|[\_enable](../intrinsics/enable.md)|[\_outpw](../c-runtime-library/outp-outpw-outpd.md)|[labs](../misc/labs-llabs.md)|[strcpy](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)|  
|[\_inp](../c-runtime-library/inp-inpw-inpd.md)|[\_rotl](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|[memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|[strlen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|  
|[\_inpw](../c-runtime-library/inp-inpw-inpd.md)|[\_rotr](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|[memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md)||  
|[\_lrotl](../c-runtime-library/reference/lrotl-lrotr.md)|[\_strset](../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)|[memset](../c-runtime-library/reference/memset-wmemset.md)||  
|[\_lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|[abs](../c-runtime-library/reference/abs-labs-llabs-abs64.md)|[strcat](../c-runtime-library/reference/strcat-wcscat-mbscat.md)||  
  
 I programmi che utilizzano le funzioni intrinseche sono più veloci in quanto non hanno il sovraccarico delle chiamate di funzione, ma potrebbero essere di dimensioni maggiori a causa del codice aggiuntivo generato.  
  
 **Sezione specifico x86**  
  
 Le funzioni intrinseche \_disable e \_enable generano istruzioni in modalità kernel per la disabilitare\/abilitare gli interrupt e possono essere utili in driver in modalità kernel.  
  
## Esempio  
 Compilare il codice seguente dalla riga di comando con "cl \-c \-FAs sample.c" ed esaminare il file sample.asm per verificare che venga trasformano in istruzioni x86 CLI e STI:  
  
```  
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
  
 Le funzioni a virgola mobile elencate di seguito non hanno formati intrinseci reali.  Tali funzioni hanno versioni che passano argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma:  
  
|||||  
|-|-|-|-|  
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|[cosh](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|[pow](../c-runtime-library/reference/pow-powf-powl.md)|[tanh](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|  
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|[sinh](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)||  
  
 Le funzioni a virgola mobile elencate di seguito hanno formati intrinseci reali quando si specifica [\/Oi](../build/reference/oi-generate-intrinsic-functions.md), [\/Og](../build/reference/og-global-optimizations.md) e [\/fp:fast](../build/reference/fp-specify-floating-point-behavior.md) \(o qualsiasi funzione che include \/Og: [\/Ox](../build/reference/ox-full-optimization.md), [\/O1](../build/reference/o1-o2-minimize-size-maximize-speed.md) e \/O2\):  
  
|||||  
|-|-|-|-|  
|[atan](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[exp](../c-runtime-library/reference/exp-expf.md)|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|  
|[atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|[sin](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|[tan](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|  
|[cos](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)||||  
  
 È possibile utilizzare l'opzione del compilatore [\/fp:strict](../build/reference/fp-specify-floating-point-behavior.md) o [\/Za](../build/reference/za-ze-disable-language-extensions.md) per eseguire l'override della generazione di opzioni a virgola mobile intrinseche reali.  In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.  
  
 Per informazioni e un esempio su come abilitare o disabilitare le funzioni intrinseche per un blocco del testo di origine, vedere [funzione \# pragma](../preprocessor/function-c-cpp.md).  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)