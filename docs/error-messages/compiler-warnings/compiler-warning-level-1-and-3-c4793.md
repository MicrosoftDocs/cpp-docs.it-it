---
title: "Avviso del compilatore (livelli 1 e 3) C4793 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4793"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4793"
  - "C6630"
  - "C6631"
  - "C6634"
  - "C6635"
  - "C6636"
  - "C6637"
  - "C6638"
  - "C6639"
  - "C6640"
ms.assetid: 819ada53-1d9c-49b8-a629-baf8c12314e6
caps.latest.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 28
---
# Avviso del compilatore (livelli 1 e 3) C4793
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': funzione compilata come nativa: 'causa'  
  
 Il compilatore non è in grado di compilare la *function* nel codice gestito, anche se è specificata l'opzione del compilatore [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  Il compilatore genera invece l'avviso C4793 e un messaggio esplicativo per continuare la compilazione della *function* nel codice nativo.  Il messaggio di continuazione contiene il testo relativo alla *reason* per la quale non è stato possibile eseguire la compilazione della *function* in `MSIL`.  
  
 Quando si specifica l'opzione del compilatore `/clr:pure` l'avviso visualizzato è di livello 1.  
  
 Nella tabella riportata di seguito sono riportati tutti i possibili messaggi di continuazione.  
  
|Messaggio relativo alla causa|Osservazioni|  
|-----------------------------------|------------------|  
|Tipi di dati allineati non supportati nel codice gestito|CLR deve essere in grado di allocare dati in base alle necessità, operazione che potrebbe non essere possibile se i dati sono allineati con dichiarazioni quali [\_\_m128](../../cpp/m128.md) o [align](../../cpp/align-cpp.md).|  
|Le funzioni che utilizzano '\_\_ImageBase' non sono supportate nel codice gestito|`__ImageBase` è un simbolo del linker speciale che in genere viene utilizzato solo dal codice nativo di basso livello per caricare una DLL.|  
|Le funzioni varargs non sono supportate dall'opzione del compilatore '\/clr'|Le funzioni native non possono chiamare funzioni gestite che hanno [elenchi di argomenti variabili](../../misc/variable-argument-lists.md) \(varargs\) perché le funzioni hanno requisiti di layout di stack diversi.  Se, tuttavia, si specifica l'opzione del compilatore `/clr:pure`, gli elenchi di argomenti variabili saranno supportati perché l'assembly può contenere solo funzioni gestite.  Per ulteriori informazioni, vedere [Codice pure e verificabile](../../dotnet/pure-and-verifiable-code-cpp-cli.md).|  
|CLR a 64 bit non supporta i dati dichiarati con il modificatore \_\_ptr32|Un puntatore deve avere le stesse dimensioni di un puntatore nativo nella piattaforma corrente.  Per ulteriori informazioni, vedere [\_\_ptr32, \_\_ptr64](../../cpp/ptr32-ptr64.md).|  
|CLR a 32 bit non supporta i dati dichiarati con il modificatore \_\_ptr64|Un puntatore deve avere le stesse dimensioni di un puntatore nativo nella piattaforma corrente.  Per ulteriori informazioni, vedere [\_\_ptr32, \_\_ptr64](../../cpp/ptr32-ptr64.md).|  
|Uno o più intrinseci non supportati nel codice gestito|Il nome dell'intrinseco non è disponibile al momento della generazione del messaggio.  Tuttavia, un intrinseco che causa questo messaggio rappresenta in genere un'istruzione del computer di basso livello.|  
|Assembly nativo inline \('\_\_asm'\) non supportato nel codice gestito|Il [codice assembly inline](../../assembler/inline/asm.md) può contenere codice nativo arbitrario che non può essere gestito.|  
|Un thunk di funzione virtuale non \_\_clrcall deve essere compilato come nativo|Un thunk di funzione virtuale non [\_\_clrcall](../../cpp/clrcall.md) deve utilizzare un indirizzo non gestito.|  
|Una funzione che utilizza '\_setjmp' deve essere compilata come nativa|CLR deve essere in grado di controllare l'esecuzione del programma.  La funzione [setjmp](../../cpp/using-setjmp-longjmp.md) tuttavia ignora l'esecuzione normale del programma salvando e ripristinando le informazioni di basso livello quali registri e stato di esecuzione.|  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4793.  
  
```  
// C4793.cpp  
// compile with: /c /clr /W3   
// processor: x86  
int asmfunc(void) {   // C4793, compiled as unmanaged, native code  
   __asm {  
      mov eax, 0  
   }  
}  
```  
  
  **avviso C4793: funzione 'asmfunc' compilata come codice nativo:**  
 **Assembly nativo inline \('\_\_asm'\) non supportato nel codice gestito**   
## Esempio  
 Nell'esempio seguente viene generato l'errore C4793.  
  
```  
// C4793_b.cpp  
// compile with: /c /clr /W3  
#include <setjmp.h>  
jmp_buf test_buf;  
  
void f() {  
   setjmp(test_buf);   // C4793 warning  
}  
```  
  
  **avviso C4793: funzione 'f' compilata come codice nativo:**  
 **Una funzione che utilizza '\_setjmp' deve essere compilata come nativa**