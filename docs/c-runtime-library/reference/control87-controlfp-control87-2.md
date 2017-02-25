---
title: "_control87, _controlfp, __control87_2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_control87"
  - "_controlfp"
  - "__control87_2"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_control87"
  - "__control87_2"
  - "control87"
  - "_controlfp"
  - "controlfp"
  - "control87_2"
  - "_control87_2"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__control87_2 (funzione)"
  - "_control87 (funzione)"
  - "_controlfp (funzione)"
  - "control87 (funzione)"
  - "control87_2 (funzione)"
  - "controlfp (funzione)"
  - "EM_AMBIGUOUS"
  - "funzioni a virgola mobile"
  - "funzioni a virgola mobile, impostazione della parola di controllo"
  - "numeri a virgola mobile, parola di controllo"
ms.assetid: 0d09729d-d9a0-43d6-864c-43ff25e7e0c5
caps.latest.revision: 34
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 34
---
# _control87, _controlfp, __control87_2
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene e imposta la parola di controllo a virgola mobile.  È disponibile una versione più sicura di `_controlfp`; vedere [\_controlfp\_s](../../c-runtime-library/reference/controlfp-s.md).  
  
## Sintassi  
  
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
  
#### Parametri  
 `new`  
 Nuovi valori di bit di parola di controllo.  
  
 `mask`  
 Maschera da impostare per i nuovi bit di parola di controllo.  
  
 `x86_cw`  
 Compilato con la parola di controllo dell'unità a virgola mobile x87.  Passare 0 \(`NULL`\) per impostare solo la parola di controllo SSE2.  
  
 `sse2_cw`  
 Parola di controllo dell'unità a virgola mobile SSE.  Passare 0 \(`NULL`\) per impostare solo la parola di controllo x87.  
  
## Valore restituito  
 Per `_control87` e `_controlfp`, i bit nel valore restituito indicano lo stato del controllo a virgola mobile.  Per una definizione completa dei bit che sono restituiti da `_control87`, vedere FLOAT.H.  
  
 Per `__control87_2`, il valore restituito è 1, che indica un esito positivo.  
  
## Note  
 La funzione `_control87` ottiene e imposta la parola di controllo a virgola mobile.  La parola di controllo a virgola mobile consente al programma di modificare la precisione, l'arrotondamento e le modalità di infinito nel pacchetto matematica a virgola mobile a seconda della piattaforma.  È inoltre possibile utilizzare `_control87` per mascherare o smascherare eccezioni di virgola mobile.  Se il valore di `mask` è uguale a 0, `_control87` otterrà la parola di controllo a virgola mobile.  Se `mask` è diverso da zero, viene impostato un nuovo valore per la parola di controllo: Per ogni bit attivo \(che è uguale a 1\) in `mask`, il corrispondente bit in `new` viene utilizzato per aggiornare la parola di controllo.  Ovvero, `fpcntrl` `=` \(\(`fpcntrl` `& ~mask`\) \(`new & mask`\)\) dove `fpcntrl` è la parola di controllo a virgola mobile.  
  
> [!NOTE]
>  Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.  
  
 `_controlfp` è una versione indipendente dalla piattaforma e portabile di `_control87`.  È quasi identica alla funzione `_control87` su Intel \(x86\), in [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] per le piattaforme ARM.  Se le piattaforme di destinazione sono x86 [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], oppure per le piattaforme ARM utilizzare `_control87` oppure `_controlfp`.  
  
 La differenza tra `_control87` e `_controlfp` è in come vengono esaminati i valori di DENORMAL.  Per le piattaforme Intel \(x86\) [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e per le piattaforme ARM, `_control87` possono impostare e rimuovere la maschera dell'eccezione DENORMAL OPERAND.  `_controlfp` non modifica la maschera di eccezione DENORMAL OPERAND.  Nell'esempio viene illustrata la differenza:  
  
```  
_control87( _EM_INVALID, _MCW_EM );   
// DENORMAL is unmasked by this call  
_controlfp( _EM_INVALID, _MCW_EM );   
// DENORMAL exception mask remains unchanged  
```  
  
 I valori possibili per la costante della maschera \(`mask`\) e i nuovi valori del controllo \(`new`\) sono riportati nella seguente tabella di valori esadecimali.  Utilizzare le costanti portabili elencate di seguito \(`_MCW_EM`, `_EM_INVALID`, e così via\) come argomenti per queste funzioni, invece di fornire i valori esadecimali in modo esplicito.  
  
 Le piattaforme Intel \(x86\) derivate supportano i valori DENORMAL di input e output a livello hardware.  Il comportamento x86 prevede di mantenere i valori DENORMAL.  La piattaforma di ARM e le piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] consentono il supporto SSE2 consentendo agli operandi e ai risultati DENORMAL di essere svuotati oppure impostati a zero.  Le funzioni `_control87` e `_controlfp` forniscono una maschera per modificare questo comportamento.  Nell'esempio seguente viene illustrato l'utilizzo di questa maschera.  
  
```  
_controlfp(_DN_SAVE, _MCW_DN);     
// Denormal values preserved on ARM platforms and on x64 processors with  
// SSE2 support. NOP on x86 platforms.  
_controlfp(_DN_FLUSH, _MCW_DN);     
// Denormal values flushed to zero by hardware on ARM platforms   
// and x64 processors with SSE2 support. Ignored on other x86 platforms.  
```  
  
 Su piattaforme ARM, le funzioni `_controlfp` e `_control87` vengono applicate al registro FPSCR.  Nelle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], solo la parola di controllo SSE2 viene archiviata nel registro MXCSR essendo l'unico interessato.  Su piattaforme Intel \(x86\), `_control87` e `_controlfp` influiscono sulle parole di controllo sia x87 che SSE2, se presenti.  La funzione `__control87_2` permette che sia le unità in virgola mobile x87 e che le unità in virgola mobile SSE2 siano controllate insieme o separatamente.  Se si desidera modificare entrambe le unità, passare gli indirizzi di due interi a `x86_cw` e a `sse2_cw`.  Se si desidera modificare solo un'unità, passare un indirizzo per tale parametro ma passare 0 \(NULL\) per l'altro.  Se viene passato 0 per uno di questi parametri, la funzione non ha alcun effetto su quell'unità a virgola mobile.  Questa funzionalità può essere utile nelle situazioni in cui una parte del codice utilizza l'unità a virgola mobile x87 e un'altra parte del codice utilizza l'unità a virgola mobile SSE2.  Se si utilizza `__control87_2` in una parte del programma e si impostano valori diversi per le parole di controllo a virgola mobile, e quindi si utilizza `_control87` o `_controlfp` per modificare ulteriormente la parola di controllo, allora `_control87` e `_controlfp` potrebbero non essere in grado di restituire una singola parola di controllo per rappresentare lo stato di entrambe le unità a virgola mobile.  In questo caso, queste funzioni impostano il flag `EM_AMBIGUOUS` del valore intero restituito per indicare che c'è un'incoerenza tra le due parole di controllo.  Si tratta di un avviso relativo al fatto che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.  
  
 In ARM e nelle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], non è possibile modificare la modalità di infinito o la precisione dei valori a virgola mobile.  Se la maschera del controllo viene utilizzata sulla piattaforma [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la funzione genera un'asserzione e il gestore di parametro non valido viene invocato come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
> [!NOTE]
>  `__control87_2` non è supportato su ARM o sulle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].  Se si utilizza `__control87_2` e si compila il programma per ARM o l'architettura [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], il compilatore genera un errore.  
  
 Queste funzioni sono ignorate durante la compilazione quando si utilizza [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) o `/clr:pure` per compilare, poiché il common language runtime \(CLR\) supporta solamente la precisione a virgola mobile predefinita.  
  
 **Valori esadecimali**  
  
 Per la maschera `_MCW_EM`, la cancellazione della maschera imposta l'eccezione, che abilita l'eccezione hardware, l'impostazione della maschera nasconde l'eccezione.  Se si verifica `_EM_UNDERFLOW` o `_EM_OVERFLOW`, non viene generata nessuna eccezione hardware fino all'esecuzione della prossima istruzione a virgola mobile.  Per generare un'eccezione hardware subito dopo `_EM_UNDERFLOW` o `_EM_OVERFLOW`, chiamare l'istruzione `FWAIT` MASM.  
  
|Maschera|Valore esadecimale|Costante|Valore esadecimale|  
|--------------|------------------------|--------------|------------------------|  
|`_MCW_DN` \(Controllo non normale\)|0x03000000|`_DN_SAVE`<br /><br /> `_DN_FLUSH`|0x00000000<br /><br /> 0x01000000|  
|`_MCW_EM` \(Maschera dell'eccezione di interruzione\)|0x0008001F|`_EM_INVALID`<br /><br /> `_EM_DENORMAL`<br /><br /> `_EM_ZERODIVIDE`<br /><br /> `_EM_OVERFLOW`<br /><br /> `_EM_UNDERFLOW`<br /><br /> `_EM_INEXACT`|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|  
|`_MCW_IC` \(Controllo dell'infinito\)<br /><br /> \(Di supporto su ARM o nelle piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] \).|0x00040000|`_IC_AFFINE`<br /><br /> `_IC_PROJECTIVE`|0x00040000<br /><br /> 0x00000000|  
|`_MCW_RC` \(Controllo di arrotondamento\)|0x00000300|`_RC_CHOP`<br /><br /> `_RC_UP`<br /><br /> `_RC_DOWN`<br /><br /> `_RC_NEAR`|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|  
|`_MCW_PC` \(Controllo di precisione\)<br /><br /> \(Di supporto su ARM o nelle piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] \).|0x00030000|`_PC_24` \(24 bit\)<br /><br /> `_PC_53` \(53 bit\)<br /><br /> `_PC_64` \(64 bit\)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_control87`, `_controlfp`, `_control87_2`|\<float.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
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
  
## Output  
  
```  
Original: 0x0001  
0.1 * 0.1 = 1.000000000000000e-002  
24-bit:   0x0001  
0.1 * 0.1 = 9.999999776482582e-003  
Default:  0x0001  
0.1 * 0.1 = 1.000000000000000e-002  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_clear87, \_clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [\_status87, \_statusfp, \_statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)   
 [\_controlfp\_s](../../c-runtime-library/reference/controlfp-s.md)