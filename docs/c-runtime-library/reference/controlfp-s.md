---
title: "_controlfp_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_controlfp_s"
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
  - "controlfp_s"
  - "_controlfp_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_controlfp_s (funzione)"
  - "controlfp_s (funzione)"
  - "EM_AMBIGUOUS"
  - "funzioni a virgola mobile, impostazione della parola di controllo"
  - "numeri a virgola mobile, parola di controllo"
ms.assetid: a51fc3f6-ab13-41f0-b227-6bf02d98e987
caps.latest.revision: 28
caps.handback.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _controlfp_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene e imposta la parola di controllo a virgola mobile.  Questa versione di [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) contiene miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _controlfp_s(  
    unsigned int *currentControl,  
    unsigned int newControl,  
    unsigned int mask  
);  
```  
  
#### Parametri  
 `currentControl`  
 I Valori correnti di bit di parola di controllo.  
  
 `newControl`  
 Nuovi valori di bit di parola di controllo.  
  
 `mask`  
 Maschera da impostare per i nuovi bit di parola di controllo.  
  
## Valore restituito  
 Zero in caso di esito positivo, oppure un valore `errno` di codice di errore.  
  
## Note  
 La funzione `_controlfp_s` è indipendente dalla piattaforma e dalla versione più protetta di `_control87`, che passa la parola di controllo a virgola mobile nell'indirizzo archiviato in `currentControl` e la imposta utilizzando `newControl`.  I bit nei valori indicano lo stato del controllo a virgola mobile.  Lo stato di controllo a virgola mobile consente al programma di modificare la precisione, l'arrotondamento e le modalità di infinito nel pacchetto matematica a virgola mobile, a seconda della piattaforma.  È inoltre possibile utilizzare `_controlfp_s` per mascherare o smascherare eccezioni a virgola mobile.  
  
 Se il valore di `mask` è uguale a 0, `_controlfp_s` ottiene la parola di controllo a virgola mobile e archivia il valore recuperato in `currentControl`.  
  
 Se `mask` è diverso da zero, viene impostato un nuovo valore per la parola di controllo: Per ogni bit impostato\(che è uguale a 1\) in `mask`, il corrispondente bit in `new` viene utilizzato per aggiornare la parola di controllo.  Ovvero, `fpcntrl` `=` \(\(`fpcntrl` `& ~mask`\) &#124; \(`new & mask`\)\) dove `fpcntrl` è la parola di controllo a virgola mobile.  In questo scenario, `currentControl` è impostato al valore dopo che la modifica è stata completata; non è il vecchio valore del bit di parola di controllo.  
  
> [!NOTE]
>  Per impostazione predefinita, le librerie di runtime mascherano tutte le eccezioni a virgola mobile.  
  
 `_controlfp_s` è pressoché identica alla funzione `_control87` su Intel \(x86\), [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e piattaforme ARM.  Se si intende utilizzare x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], o piattaforme ARM, è possibile utilizzare `_control87` o `_controlfp_s`.  
  
 La differenza tra `_control87` e `_controlfp_s` è come vengono esaminati i valori di `DENORMAL`.  Per le piattaforme Intel \(x86\) [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e per le piattaforme ARM, `_control87` possono impostare e rimuovere la maschera dell'eccezione DENORMAL OPERAND.  `_controlfp_s` non modifica la maschera di eccezione DENORMAL OPERAND.  Questo esempio dimostra la differenza:  
  
```  
_control87( _EM_INVALID, _MCW_EM );   
// DENORMAL is unmasked by this call.  
unsigned int current_word = 0;  
_controlfp_s( &current_word, _EM_INVALID, _MCW_EM );   
// DENORMAL exception mask remains unchanged.  
```  
  
 I valori possibili per la costante della maschera \(`mask`\) e i nuovi valori del controllo \(`newControl`\) sono riportati nella seguente tabella di valori esadecimali.  Utilizzare le costanti portabili elencate di seguito \(`_MCW_EM`, `_EM_INVALID`, e così via\) come argomenti per queste funzioni, invece di fornire i valori esadecimali in modo esplicito.  
  
 Le piattaforme Intel \(x86\) derivate supportano i valori DENORMAL di input e output a livello hardware.  Il comportamento x86 prevede di mantenere i valori DENORMAL.  La piattaforma di ARM e le piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] consentono il supporto SSE2 consentendo agli operandi e ai risultati DENORMAL di essere svuotati oppure impostati a zero.  Le funzioni `_controlfp`, `_controlfp_s` e `_control87` forniscono una maschera per modificare questo comportamento.  Nell'esempio seguente viene illustrato l'utilizzo di questa maschera:  
  
```  
unsigned int current_word = 0;  
_controlfp_s(&current_word, _DN_SAVE, _MCW_DN);     
// Denormal values preserved on ARM platforms and on x64 processors with  
// SSE2 support. NOP on x86 platforms.  
_controlfp_s(&current_word, _DN_FLUSH, _MCW_DN);     
// Denormal values flushed to zero by hardware on ARM platforms   
// and x64 processors with SSE2 support. Ignored on other x86 platforms.  
```  
  
 Su piattaforme ARM, la funzione `_controlfp_s` viene applicata al registro FPSCR.  Nelle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], solo la parola di controllo SSE2 viene archiviata nel registro MXCSR essendo l'unico interessato.  Su piattaforme Intel \(x86\), `_controlfp_s` influisce sulle parole di controllo sia per x87 che per SSE2, se presenti.  È possibile che le due parole di controllo sia incompatibile tra loro \(a causa di una chiamata precedente a [\_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md), ad esempio\); se c'è un'incoerenza tra le due parole di controllo, `_controlfp_s` imposta il flag `EM_AMBIGUOUS` in `currentControl`.  Si tratta di un avviso relativo al fatto che la parola di controllo restituita potrebbe non rappresentare con precisione lo stato di entrambe le parole di controllo a virgola mobile.  
  
 In ARM e nelle architetture [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], non è possibile modificare la modalità di infinito o la precisione dei valori a virgola mobile.  e la maschera del controllo di precisione viene utilizzata sulla piattaforma [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la funzione genera un'asserzione e il gestore di parametro non valido viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Se la maschera non è impostata correttamente, la funzione genera un'eccezione non valida di parametro, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
 Questa funzione viene ignorata durante la compilazione quando si utilizza [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) o **\/clr:pure**, poiché il common language runtime \(CLR\) supporta solamente la precisione predefinita a virgola mobile.  
  
 **Valori esadecimali**  
  
 Per la maschera `_MCW_EM`, la cancellazione imposta l'eccezione, che abilita l'eccezione hardware, impostandola per nascondere l'eccezione.  Se si verifica `_EM_UNDERFLOW` o `_EM_OVERFLOW`, non viene generata nessuna eccezione hardware fino all'esecuzione della prossima istruzione a virgola mobile.  Per generare un'eccezione hardware subito dopo `_EM_UNDERFLOW` o `_EM_OVERFLOW`, chiamare l'istruzione FWAIT MASM.  
  
|Maschera|Valore esadecimale|Costante|Valore esadecimale|  
|--------------|------------------------|--------------|------------------------|  
|`_MCW_DN` \(Controllo non normale\)|0x03000000|`_DN_SAVE`<br /><br /> `_DN_FLUSH`|0x00000000<br /><br /> 0x01000000|  
|`_MCW_EM` \(Maschera dell'eccezione di interruzione\)|0x0008001F|`_EM_INVALID`<br /><br /> `_EM_DENORMAL`<br /><br /> `_EM_ZERODIVIDE`<br /><br /> `_EM_OVERFLOW`<br /><br /> `_EM_UNDERFLOW`<br /><br /> `_EM_INEXACT`|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|  
|`_MCW_IC` \(Controllo dell'infinito\)<br /><br /> \(Non supportate su ARM o nelle piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] \).|0x00040000|`_IC_AFFINE`<br /><br /> `_IC_PROJECTIVE`|0x00040000<br /><br /> 0x00000000|  
|`_MCW_RC` \(Controllo di arrotondamento\)|0x00000300|`_RC_CHOP`<br /><br /> `_RC_UP`<br /><br /> `_RC_DOWN`<br /><br /> `_RC_NEAR`|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|  
|`_MCW_PC` \(Controllo di precisione\)<br /><br /> \(Non supportate su ARM o nelle piattaforme [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] \).|0x00030000|`_PC_24` \(24 bit\)<br /><br /> `_PC_53` \(53 bit\)<br /><br /> `_PC_64` \(64 bit\)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_controlfp_s`|\<float.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_contrlfp_s.c  
// processor: x86  
// This program uses _controlfp_s to output the FP control   
// word, set the precision to 24 bits, and reset the status to   
// the default.  
//  
  
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
  
## Output  
  
```  
Original: 0x9001f  
0.1 * 0.1 = 1.000000000000000e-002  
24-bit:   0xa001f  
0.1 * 0.1 = 9.999999776482582e-003  
Default:  0x9001f  
0.1 * 0.1 = 1.000000000000000e-002  
```  
  
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_clear87, \_clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [\_status87, \_statusfp, \_statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)   
 [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)