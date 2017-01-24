---
title: "/Gd, /Gr, /Gv, /Gz (Convenzione di chiamata) | Microsoft Docs"
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
  - "/gr"
  - "/Gv"
  - "/gz"
  - "/Gd"
  - "VC.Project.VCCLCompilerTool.CallingConvention"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gd (opzione del compilatore) [C++]"
  - "/Gr (opzione del compilatore) [C++]"
  - "/Gv (opzione del compilatore) [C++]"
  - "/Gz (opzione del compilatore) [C++]"
  - "Gd (opzione del compilatore) [C++]"
  - "-Gd (opzione del compilatore) [C++]"
  - "Gr (opzione del compilatore) [C++]"
  - "-Gr (opzione del compilatore) [C++]"
  - "Gv (opzione del compilatore) [C++]"
  - "-Gv (opzione del compilatore) [C++]"
  - "Gz (opzione del compilatore) [C++]"
  - "-Gz (opzione del compilatore) [C++]"
ms.assetid: fd3110cb-2d77-49f2-99cf-a03f9ead00a3
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Gd, /Gr, /Gv, /Gz (Convenzione di chiamata)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste opzioni determinano l'ordine di inserimento delle funzioni nello stack, stabiliscono se la funzione chiamante o la funzione chiamata rimuove gli argomenti dallo stack alla fine della chiamata e indicano la convenzione di decorazione dei nomi utilizzata dal compilatore per identificare le singole funzioni.  
  
## Sintassi  
  
```  
/Gd  
/Gr  
/Gv  
/Gz  
```  
  
## Note  
 **\/Gd**, l'impostazione predefinita, specifica la convenzione di chiamata [\_\_cdecl](../../cpp/cdecl.md) per tutte le funzioni ad eccezione delle funzioni membro C\+\+ e delle funzioni contrassegnate come [\_\_stdcall](../../cpp/stdcall.md), [\_\_fastcall](../../cpp/fastcall.md), o [\_\_vectorcall](../../cpp/vectorcall.md).  
  
 **\/Gr** specifica la convenzione di chiamata `__fastcall` per tutte le funzioni ad eccezione delle funzioni membro C\+\+, delle funzioni denominate `main`, e delle funzioni contrassegnate come `__cdecl`, `__stdcall`, o `__vectorcall`.  Tutte le funzioni `__fastcall` devono avere dei prototipi.  Questa convenzione di chiamata è disponibile solo nei compilatori destinati a x86 ed è ignorata dai compilatori destinati ad altre architetture.  
  
 **\/Gz** specifica la convenzione di chiamata `__stdcall` per tutte le funzioni ad eccezione delle funzioni membro C\+\+, delle funzioni denominate `main`, e delle funzioni contrassegnate come `__cdecl`, `__fastcall`, o `__vectorcall`.  Tutte le funzioni `__stdcall` devono avere dei prototipi.  Questa convenzione di chiamata è disponibile solo nei compilatori destinati a x86 ed è ignorata dai compilatori destinati ad altre architetture.  
  
 **\/Gv** specifica la convenzione di chiamata `__vectorcall` per tutte le funzioni tranne che per le funzioni membro di C\+\+, le funzioni denominate main, le funzioni con un elenco di argomenti variabile `vararg` oppure che sono contrassegnate con `__cdecl`, `__stdcall` in conflitto o l'attributo `__fastcall`.  Questa convenzione di chiamata è disponibile solo nelle architetture x86 e x64 che supportano \/arch:SSE2 e versioni successive e viene ignorata dai compilatori destinati all'architettura ARM.  
  
 Le funzioni che accettano un numero variabile di argomenti devono essere contrassegnate come `__cdecl`.  
  
 **\/Gd**, **\/Gr**, **\/Gv** e **\/Gz** non sono compatibili con [\/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) o **\/clr:pure**.  
  
> [!NOTE]
>  Per impostazione predefinita, per i processori x86 le funzioni membro C\+\+ utilizzano [\_\_thiscall](../../cpp/thiscall.md).  
  
 Per tutti i processori, una funzione membro contrassegnata in modo esplicito come `__cdecl`, `__fastcall`, `__vectorcall` o `__stdcall` utilizza la convenzione di chiamata specificata se non viene ignorata in tale architettura.  Una funzione membro che prende un numero variabile di argomenti utilizza sempre la convenzione di chiamata `__cdecl`.  
  
 Queste opzioni di compilazione non hanno effetto sulla decorazione dei nomi di metodi e funzioni C\+\+.  A meno che non vengano dichiarati come `extern "C"`, i metodi e le funzioni C\+\+ utilizzano uno schema di decorazione dei nomi differente.  Per ulteriori informazioni, vedere [Nomi decorati](../../build/reference/decorated-names.md).  
  
 Per ulteriori informazioni sulle convenzioni di chiamata, vedere [Convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
## Specifiche di \_\_cdecl  
 Nei processori x86, tutti gli argomenti della funzione vengono passati alo stack da destra a sinistra.  Nelle architetture ARM e x64, alcuni argomenti vengono passati dal registro e il resto viene passato sullo stack da destra a sinistra.  La routine di chiamata determina l'estrazione degli argomenti dallo stack.  
  
 Per C, la convenzione di denominazione `__cdecl` utilizza il nome della funzione preceduto da un carattere di sottolineatura \(`_`\). Non viene effettuata alcuna conversione maiuscolo\/minuscolo.  A meno che non vengano dichiarate come `extern "C"`, le funzioni C\+\+ utilizzano uno schema di decorazione dei nomi differente.  Per ulteriori informazioni, vedere [Nomi decorati](../../build/reference/decorated-names.md).  
  
## Specifiche di \_\_fastcall  
 Alcuni argomenti di una funzione `__fastcall` vengono passati nei registri \(per i processori x86, ECX e EDX\), mentre gli altri vengono inseriti nello stack da destra a sinistra.  La routine chiamata visualizza questi argomenti dallo stack prima della restituzione.  In genere, **\/Gr** riduce il tempo di esecuzione.  
  
> [!NOTE]
>  Prestare attenzione nell'utilizzo della convenzione di chiamata `__fastcall`per qualsiasi funzione scritta in linguaggio assembly inline.  L'utilizzo dei registri potrebbe entrare in conflitto con l'utilizzo del compilatore.  
  
 Per C, la convenzione di denominazione `__fastcall` utilizza il nome della funzione preceduto da un simbolo di chiocciola \(`@`\) seguito dalla dimensione in byte degli argomenti della funzione.  Non viene effettuata alcuna conversione maiuscolo\/minuscolo.  Il compilatore utilizza il seguente modello per la convenzione di denominazione:  
  
```c  
@function_name@number  
```  
  
 Quando si utilizza la convenzione di denominazione `__fastcall`, utilizzare i file di inclusione standard.  Altrimenti si otterranno riferimenti esterni non risolti.  
  
## Specifiche di \_\_stdcall  
 Gli altri argomenti della funzione `__stdcall` vengono inseriti nello stack da destra a sinistra e la funzione chiamata visualizza gli argomenti dallo stack prima della restituzione.  
  
 Per C, la convenzione di denominazione `__stdcall` utilizza il nome della funzione preceduto da un carattere di sottolineatura \(`_`\) e seguito da un simbolo di chiocciola \(@\) e dalla dimensione in byte degli argomenti della funzione.  Non viene effettuata alcuna conversione maiuscolo\/minuscolo.  Il compilatore utilizza il seguente modello per la convenzione di denominazione:  
  
```c  
_functionname@number  
```  
  
## Specifiche di \_\_vectorcall  
 Gli argomenti Integer di una funzione `__vectorcall` vengono passati in base al valore, utilizzando fino a due \(su x86\) o quattro \(x64\) registri di Integer e fino a sei registri XMM per i valori a virgola mobile e i valori dei vettori, mentre il resto viene passato sullo stack da destra verso sinistra.  La funzione chiamata pulisce lo stack prima della restituzione.  I valori restituiti di vettore e a virgola mobile sono restituiti in XMM0.  
  
 Per C, la convenzione di denominazione `__vectorcall` utilizza il nome della funzione preceduto da due simboli di chiocciola \(@@\) seguiti dalla dimensione in byte degli argomenti della funzione.  Non viene effettuata alcuna conversione maiuscolo\/minuscolo.  Il compilatore utilizza il seguente modello per la convenzione di denominazione:  
  
```c  
functionname@@number  
```  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box.  For details, see [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Select the **C\/C\+\+** folder.  
  
3.  Select the **Advanced** property page.  
  
4.  Modify the **Calling Convention** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CallingConvention%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)