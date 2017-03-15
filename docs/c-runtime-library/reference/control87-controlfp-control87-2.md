---
title: _control87, _controlfp, __control87_2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs:
- C++
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
caps.latest.revision: 34
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: a6a25c035a55ca247f0d81f5c206207463672881
ms.lasthandoff: 02/24/2017

---
# <a name="control87-controlfp-control872"></a>_control87, _controlfp, __control87_2
Ottiene e imposta la parola di controllo a virgola mobile. È disponibile una versione più sicura di `_controlfp`; vedere [_controlfp_s](../../c-runtime-library/reference/controlfp-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 `new`  
 Valori di bit della parola di controllo nuova.  
  
 `mask`  
 Maschera di bit della parola di controllo nuova da impostare.  
  
 `x86_cw`  
 Compilato con la parola di controllo per l'unità di calcolo in virgola mobile x87. Passare a 0 (`NULL`) per impostare solo la parola di controllo SSE2.  
  
 `sse2_cw`  
 Parola di controllo per l'unità di calcolo in virgola mobile SSE. Passare 0 (`NULL`) per impostare solo la parola di controllo x87.  
  
## <a name="return-value"></a>Valore restituito  
 Per `_control87` e `_controlfp`, i bit del valore restituito indicano lo stato del controllo a virgola mobile. Per una definizione completa dei bit restituiti da `_control87`, vedere FLOAT.H.  
  
 Per `__control87_2`, il valore restituito è 1, che indica l'esito positivo.  
  
## <a name="remarks"></a>Note  
 La funzione `_control87` ottiene e imposta la parola di controllo a virgola mobile. La parola di controllo a virgola mobile consente al programma di modificare le modalità di precisione, arrotondamento e infinito nel pacchetto matematico a virgola mobile, a seconda della piattaforma. È anche possibile usare `_control87` per mascherare o annullare il mascheramento delle eccezioni a virgola mobile. Se il valore per `mask` è uguale a 0, `_control87` ottiene la parola di controllo a virgola mobile. Se `mask` è diverso da zero, viene impostato un nuovo valore per la parola di controllo: per ogni bit impostato (vale a dire, uguale a 1) in `mask`, il bit corrispondente in `new` viene usato per aggiornare la parola di controllo. In altri termini, `fpcntrl` `=` ((`fpcntrl` `& ~mask`) &#124; (`new & mask`)) dove `fpcntrl` è la parola di controllo a virgola mobile.  
  
> [!NOTE]
>  Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.  
  
 `_controlfp` è una versione indipendente dalla piattaforma e portabile di `_control87`. È quasi identico alla funzione `_control87` sulle piattaforme Intel (x86), [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM. Se si fa riferimento solo a piattaforme x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] o ARM, usare `_control87` o `_controlfp`.  
  
 La differenza tra `_control87` e `_controlfp` risiede nella modalità di gestione dei valori DENORMALIZZATI. Per le piattaforme Intel (x86), [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e ARM, `_control87` consente di impostare e cancellare la maschera di eccezione OPERANDO DENORMALIZZATO. `_controlfp` non modifica la maschera di eccezione OPERANDO DENORMALIZZATO. In questo esempio viene illustrata la differenza:  
  
```  
_control87( _EM_INVALID, _MCW_EM );   
// DENORMAL is unmasked by this call  
_controlfp( _EM_INVALID, _MCW_EM );   
// DENORMAL exception mask remains unchanged  
```  
  
 I valori possibili per la costante maschera (`mask`) e i nuovi valori di controllo (`new`) vengono visualizzati nella tabella dei valori esadecimali seguente. Usare le costanti portabili elencate di seguito (`_MCW_EM`, `_EM_INVALID`e così via) come argomenti per le funzioni, anziché specificare in modo esplicito i valori esadecimali.  
  
 Le piattaforme derivate Intel (x86) supportano i valori di input e output DENORMALIZZATI nell'hardware. Il comportamento x86 mantiene i valori DENORMALIZZATI. La piattaforma ARM e le piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] che supportano SSE2 consentono gli operandi DENORMALIZZATI e la cancellazione dei risultati o la loro forzatura a zero. Le funzioni `_controlfp` e `_control87` offrono una maschera per modificare questo comportamento. Nell'esempio seguente viene illustrato l'uso di questa maschera.  
  
```  
_controlfp(_DN_SAVE, _MCW_DN);     
// Denormal values preserved on ARM platforms and on x64 processors with  
// SSE2 support. NOP on x86 platforms.  
_controlfp(_DN_FLUSH, _MCW_DN);     
// Denormal values flushed to zero by hardware on ARM platforms   
// and x64 processors with SSE2 support. Ignored on other x86 platforms.  
```  
  
 Sulle piattaforme ARM, le funzioni `_control87` e `_controlfp` vengono applicate al registro FPSCR. Nelle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], è interessata solo la parola di controllo SSE2 archiviata nel registro MXCSR. Sulle piattaforme Intel (x86), `_control87` e `_controlfp` interessano le parole di controllo per x87 e SSE2, se presenti. La funzione `__control87_2` consente di controllare le unità di calcolo in virgola mobile x87 e SSE2 sia insieme che separatamente. Se si vuole influire su entrambe le unità, passare gli indirizzi dei due interi su `x86_cw` e `sse2_cw`. Se si vuole influire solo su un'unità, passare un indirizzo per il parametro ma passare 0 (NULL) per l'altro. Se 0 viene passato per uno di questi parametri, la funzione non ha alcun effetto su tale unità di calcolo a virgola mobile. Questa funzionalità può risultare utile nelle situazioni in cui una parte del codice usa l'unità di calcolo a virgola mobile x87 e un'altra parte del codice usa l'unità di calcolo a virgola mobile SSE2. Se si usa `__control87_2` in una parte di un programma e si impostano valori diversi per le parole di controllo a virgola mobile e quindi si usa `_control87` o `_controlfp` per modificare ulteriormente la parola di controllo, `_control87` e `_controlfp` potrebbero non essere in grado di restituire una parola di controllo singola per rappresentare lo stato di entrambe le unità di calcolo a virgola mobile. In tal caso, queste funzioni impostano il flag `EM_AMBIGUOUS` nel valore integer restituito per indicare che è presente un'incoerenza tra le due parole di controllo. Si tratta di un avviso che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.  
  
 Nelle architetture ARM e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la modifica della modalità infinito o la precisione a virgola mobile non sono supportate. Se la maschera di controllo di precisione viene usata nella piattaforma [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la funzione genera un'asserzione e viene richiamato il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).  
  
> [!NOTE]
>  `__control87_2` non è supportato nelle architetture ARM o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]. Se si usa `__control87_2` e si compila il programma per le architetture ARM o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], il compilatore genera un errore.  
  
 Queste funzioni vengono ignorate quando si utilizza [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) compilato in quanto common language runtime (CLR) supporta solo la precisione a virgola mobile predefinita.  
  
 **Valori esadecimali**  
  
 Per la maschera `_MCW_EM`, la sua cancellazione comporta l'impostazione dell'eccezione, che consente l'eccezione hardware; la sua impostazione consente di nascondere l'eccezione. Se si verifica un `_EM_UNDERFLOW` o `_EM_OVERFLOW`, non viene generata alcuna eccezione hardware fino a quando non viene eseguita l'istruzione a virgola mobile successiva. Per generare un'eccezione hardware immediatamente dopo `_EM_UNDERFLOW` o `_EM_OVERFLOW`, chiamare l'istruzione `FWAIT` MASM.  
  
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
|`_control87`, `_controlfp`, `_control87_2`|\<float.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
  
```  
  
      // crt_cntrl87.c  
// processor: x86  
// This program uses __control87_2 to output the x87 control   
// word, set the precision to 24 bits, and reset the status to   
// the default.  
//  
  
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
  
## <a name="output"></a>Output  
  
```  
Original: 0x0001  
0.1 * 0.1 = 1.000000000000000e-002  
24-bit:   0x0001  
0.1 * 0.1 = 9.999999776482582e-003  
Default:  0x0001  
0.1 * 0.1 = 1.000000000000000e-002  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [_clear87, _clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [_status87, _statusfp, _statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)   
 [_controlfp_s](../../c-runtime-library/reference/controlfp-s.md)
