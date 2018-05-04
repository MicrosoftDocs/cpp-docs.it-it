---
title: -Gd, - Gr, - Gv, - Gz (convenzione di chiamata) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /gr
- /Gv
- /gz
- /Gd
- VC.Project.VCCLCompilerTool.CallingConvention
dev_langs:
- C++
helpviewer_keywords:
- -Gd compiler option [C++]
- -Gv compiler option [C++]
- /Gv compiler option [C++]
- -Gr compiler option [C++]
- Gd compiler option [C++]
- Gr compiler option [C++]
- /Gz compiler option [C++]
- -Gz compiler option [C++]
- /Gd compiler option [C++]
- Gz compiler option [C++]
- Gv compiler option [C++]
- /Gr compiler option [C++]
ms.assetid: fd3110cb-2d77-49f2-99cf-a03f9ead00a3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec0d3d7c750be9b6b6d1496c8a1e2265786264f2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="gd-gr-gv-gz-calling-convention"></a>/Gd, /Gr, /Gv, /Gz (Convenzione di chiamata)
Queste opzioni determinano l'ordine in cui funzione gli argomenti vengono inseriti nello stack, se la funzione chiamante o chiamata di funzione rimuove gli argomenti dallo stack alla fine della chiamata e la convenzione di decorazione dei nomi utilizzato per identificare il compilatore singole funzioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Gd  
/Gr  
/Gv  
/Gz  
```  
  
## <a name="remarks"></a>Note  
 **/GD**, l'impostazione predefinita, specifica il [cdecl](../../cpp/cdecl.md) convenzione di chiamata per tutte le funzioni ad eccezione di membro C++ funzioni e che sono contrassegnati [stdcall](../../cpp/stdcall.md), [_ fastcall](../../cpp/fastcall.md), o [vectorcall](../../cpp/vectorcall.md).  
  
 **/GR** specifica il `__fastcall` convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, le funzioni denominate `main`e le funzioni che sono contrassegnate `__cdecl`, `__stdcall`, o `__vectorcall`. Tutti `__fastcall` funzioni devono avere prototipi. Questa convenzione di chiamata è disponibile solo in compilatori x86 e viene ignorata dai compilatori destinati altre architetture.  
  
 **/GZ** specifica il `__stdcall` convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, le funzioni denominate `main`e le funzioni che sono contrassegnate `__cdecl`, `__fastcall`, o `__vectorcall`. Tutti `__stdcall` funzioni devono avere prototipi. Questa convenzione di chiamata è disponibile solo in compilatori x86 e viene ignorata dai compilatori destinati altre architetture.  
  
 **/GV** specifica il `__vectorcall` convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, le funzioni denominata main, funzioni con un `vararg` elenco di argomenti variabili o funzioni che sono contrassegnate con un conflitto `__cdecl`, `__stdcall`, o `__fastcall` attributo. Questa convenzione di chiamata è disponibile solo su architetture x86 e x64 che supportano /arch: SSE2 e versioni successive e viene ignorata dai compilatori che utilizzano l'architettura ARM.  
  
 Funzioni che accettano un numero variabile di argomenti devono essere contrassegnate `__cdecl`.  
  
 **/GD**, **/Gr**, **/Gv** e **/Gz** non sono compatibili con [/CLR: safe](../../build/reference/clr-common-language-runtime-compilation.md) o **/clr: pure**. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
> [!NOTE]
>  Per impostazione predefinita per x86 processori, utilizzano le funzioni membro C++ [thiscall](../../cpp/thiscall.md).  
  
 Per tutti i processori, una funzione membro contrassegnata in modo esplicito come `__cdecl`, `__fastcall`, `__vectorcall`, o `__stdcall` utilizza la convenzione di chiamata specificata, se non viene ignorata su tale architettura. Una funzione membro che accetta un numero variabile di argomenti sempre utilizzato il `__cdecl` convenzione di chiamata.  
  
 Queste opzioni del compilatore non hanno effetto sulla decorazione di metodi e funzioni C++. A meno che non dichiarati come `extern "C"`, metodi e funzioni C++ utilizzano uno schema di decorazione dei nomi differente. Per ulteriori informazioni, vedere [nomi decorati](../../build/reference/decorated-names.md).  
  
 Per ulteriori informazioni sulle convenzioni di chiamata, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
## <a name="cdecl-specifics"></a>specifiche di cdecl  
 X86 processori, tutti gli argomenti di funzione vengono passati nello stack da destra a sinistra. Su ARM e x64 architetture, alcuni argomenti vengono passate dal registro e il resto vengono passati nello stack da destra a sinistra. La routine chiamata estrae gli argomenti dallo stack.  
  
 Per C, il `__cdecl` Usa convenzione di denominazione il nome della funzione preceduto da un carattere di sottolineatura ( `_` ); non viene eseguita alcuna conversione maiuscolo / minuscolo. A meno che non dichiarati come `extern "C"`, le funzioni C++ utilizzano uno schema di decorazione dei nomi diversi. Per ulteriori informazioni, vedere [nomi decorati](../../build/reference/decorated-names.md).  
  
## <a name="fastcall-specifics"></a>specifiche di fastcall  
 Alcune di un `__fastcall` degli argomenti della funzione vengono passati nei registri (x86 a processori, ECX ed EDX), mentre gli altri vengono inseriti nello stack da destra a sinistra. La routine chiamata estrae gli argomenti dallo stack prima della restituzione. In genere, **/Gr** riduce il tempo di esecuzione.  
  
> [!NOTE]
>  Prestare attenzione quando si utilizza il `__fastcall` convenzione di chiamata per qualsiasi funzione che viene scritto in linguaggio assembly inline. L'utilizzo dei registri potrebbe essere in conflitto con l'utilizzo del compilatore.  
  
 Per C, il `__fastcall` Usa convenzione di denominazione il nome della funzione preceduto da un simbolo di chiocciola (`@`) seguito dalla dimensione in byte degli argomenti della funzione. Non viene eseguita alcuna conversione maiuscolo / minuscolo. Il compilatore Usa questo modello per la convenzione di denominazione:  
  
```  
@function_name@number  
```  
  
 Quando si utilizza il `__fastcall` convenzione di denominazione, utilizzare i file di inclusione standard. In caso contrario, si otterranno riferimenti esterni non risolti.  
  
## <a name="stdcall-specifics"></a>specifiche di stdcall  
 Oggetto `__stdcall` gli argomenti della funzione vengono inseriti nello stack da destra a sinistra e la funzione chiamata estrae gli argomenti dallo stack prima della restituzione.  
  
 Per C, il `__stdcall` Usa convenzione di denominazione il nome della funzione preceduto da un carattere di sottolineatura ( `_` ) seguita da un simbolo di chiocciola (@) e le dimensioni in byte degli argomenti della funzione. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore Usa questo modello per la convenzione di denominazione:  
  
```  
_functionname@number  
```  
  
## <a name="vectorcall-specifics"></a>specifiche di vectorcall  
 Oggetto `__vectorcall` degli argomenti di tipo integer della funzione vengono passati per valore, utilizzando fino a due (su x86) o quattro (su x64) intero registra e fino a sei XMM Registra per a virgola mobile e valori vettore e gli altri vengono passati nello stack da destra a sinistra. La funzione chiamata pulisce dallo stack prima della restituzione. Vettore e valori restituiti a virgola mobile vengono restituiti in XMM0.  
  
 Per C, il `__vectorcall` convenzione di denominazione utilizza il nome della funzione seguito da due Chiocciole (@ @) e le dimensioni in byte degli argomenti della funzione. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore Usa questo modello per la convenzione di denominazione:  
  
```  
functionname@@number  
```  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **avanzate** pagina delle proprietà.  
  
4.  Modificare il **convenzione di chiamata** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CallingConvention%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)