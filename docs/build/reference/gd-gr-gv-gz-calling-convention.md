---
title: /Gd, /Gr, /Gv, /Gz (convenzione di chiamata) | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
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
ms.openlocfilehash: e7e6c1466ecc7bce26eb4dabd816e1733f16ae13
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43895136"
---
# <a name="gd-gr-gv-gz-calling-convention"></a>/Gd, /Gr, /Gv, /Gz (Convenzione di chiamata)

Queste opzioni determinano l'ordine di funzione gli argomenti vengono inseriti nello stack, se la funzione chiamante o la funzione chiamata rimuove gli argomenti dallo stack alla fine della chiamata e la convenzione di decorazione dei nomi usato dal compilatore per identificare singole funzioni.

## <a name="syntax"></a>Sintassi

> **/Gd**<br/>
> **/Gr**<br/>
> **/Gv**<br/>
> **/Gz**<br/>

## <a name="remarks"></a>Note

**/GD**, l'impostazione predefinita, consente di specificare il [cdecl](../../cpp/cdecl.md) convenzione di chiamata per tutte le funzioni ad eccezione di membro C++ funzioni e funzioni che sono contrassegnate [stdcall](../../cpp/stdcall.md), [_ fastcall](../../cpp/fastcall.md), oppure [vectorcall](../../cpp/vectorcall.md).

**/GR** consente di specificare il `__fastcall` convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, le funzioni denominata `main`e le funzioni che sono contrassegnate `__cdecl`, `__stdcall`, o `__vectorcall`. Tutti i `__fastcall` funzioni devono avere prototipi. Questa convenzione di chiamata è disponibile solo nei compilatori destinati a x86 e viene ignorata dai compilatori destinati ad altre architetture.

**/GZ** consente di specificare il `__stdcall` convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, le funzioni denominata `main`e le funzioni che sono contrassegnate `__cdecl`, `__fastcall`, o `__vectorcall`. Tutti i `__stdcall` funzioni devono avere prototipi. Questa convenzione di chiamata è disponibile solo nei compilatori destinati a x86 e viene ignorata dai compilatori destinati ad altre architetture.

**/GV** consente di specificare il `__vectorcall` convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, le funzioni denominate main, le funzioni con un `vararg` elenco di argomenti variabili o funzioni che sono contrassegnate con un conflitto `__cdecl`, `__stdcall`, o `__fastcall` attributo. Questa convenzione di chiamata è disponibile solo in architetture x86 e x64 che supportano/arch:SSE2 e versioni successive e viene ignorata dai compilatori destinati all'architettura ARM.

Le funzioni che accettano un numero variabile di argomenti devono essere contrassegnate `__cdecl`.

**/GD**, **/Gr**, **/Gv** e **/Gz** non sono compatibili con [/CLR: safe](../../build/reference/clr-common-language-runtime-compilation.md) o **/clr: pure**. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

> [!NOTE]
> Per impostazione predefinita per x86 processori, le funzioni membro C++ utilizzano [thiscall](../../cpp/thiscall.md).

Per tutti i processori, una funzione membro contrassegnata in modo esplicito come `__cdecl`, `__fastcall`, `__vectorcall`, o `__stdcall` utilizza la convenzione di chiamata specificata se non viene ignorata in tale architettura. Una funzione membro che accetta un numero variabile di argomenti sempre viene utilizzato il `__cdecl` convenzione di chiamata.

Queste opzioni del compilatore non hanno alcun effetto sulla decorazione dei nomi di metodi e funzioni C++. A meno che non dichiarati come `extern "C"`, metodi e funzioni C++ utilizzano uno schema di decorazione dei nomi differente. Per altre informazioni, vedere [nomi decorati](../../build/reference/decorated-names.md).

Per altre informazioni sulle convenzioni di chiamata, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

## <a name="cdecl-specifics"></a>specifiche di cdecl

X86 processori, tutti gli argomenti della funzione vengono passati nello stack da destra a sinistra. In ARM e x64 architetture, alcuni argomenti vengono passate dal registro e il resto viene passato sullo stack da destra a sinistra. La routine chiamante determina l'estrazione degli argomenti dallo stack.

Per C, il `__cdecl` naming convenzione viene utilizzato il nome della funzione preceduto da un carattere di sottolineatura ( `_` ); non viene eseguita alcuna conversione maiuscolo / minuscolo. A meno che non dichiarati come `extern "C"`, le funzioni C++ utilizzano uno schema di decorazione dei nomi differente. Per altre informazioni, vedere [nomi decorati](../../build/reference/decorated-names.md).

## <a name="fastcall-specifics"></a>specifiche di fastcall

Alcuni di un `__fastcall` argomenti della funzione vengono passati nei registri (x86 a processori, ECX ed EDX), mentre gli altri vengono inseriti nello stack da destra a sinistra. La routine chiamata visualizza questi argomenti dallo stack prima della restituzione. In genere **/Gr** riduce il tempo di esecuzione.

> [!NOTE]
> Prestare attenzione quando usano i `__fastcall` convenzione di chiamata per qualsiasi funzione che viene scritto in linguaggio assembly inline. L'utilizzo dei registri potrebbero essere in conflitto con l'utilizzo del compilatore.

Per C, il `__fastcall` naming convenzione viene utilizzato il nome della funzione preceduto da un simbolo di chiocciola (**\@**) seguito dalla dimensione in byte degli argomenti della funzione. Non viene eseguita alcuna conversione maiuscolo / minuscolo. Il compilatore Usa questo modello per la convenzione di denominazione:

`@function_name@number`

Quando si usa il `__fastcall` convenzione di denominazione, usare i file di inclusione standard. In caso contrario, si otterranno riferimenti esterni non risolti.

## <a name="stdcall-specifics"></a>specifiche di stdcall

Oggetto `__stdcall` gli argomenti della funzione vengono inseriti nello stack da destra a sinistra e la funzione chiamata visualizza questi argomenti dallo stack prima della restituzione.

Per C, il `__stdcall` naming convenzione viene utilizzato il nome della funzione preceduto da un carattere di sottolineatura (**\_**) e seguito da un simbolo di chiocciola (**\@**) e le dimensioni della funzione argomenti in byte. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore Usa questo modello per la convenzione di denominazione:

`_functionname@number`

## <a name="vectorcall-specifics"></a>specifiche di vectorcall

Oggetto `__vectorcall` argomenti integer della funzione vengono passati per valore, usando fino a due (su x86) o quattro (x64) intero registra e fino a sei registri XMM registra a virgola mobile e i valori dei vettori, mentre il resto viene passato sullo stack da destra a sinistra. La funzione chiamata pulisce lo stack prima della restituzione. Vettore e restituire valori a virgola mobile sono restituiti in XMM0.

Per C, il `__vectorcall` convenzione di denominazione viene utilizzato il nome della funzione seguito da due Chiocciole (**\@\@**) e le dimensioni in byte degli argomenti della funzione. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore Usa questo modello per la convenzione di denominazione:

`functionname@@number`

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** > **avanzate** pagina delle proprietà.

1. Modificare il **convenzioni di chiamata** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CallingConvention%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore](../../build/reference/compiler-options.md)
- [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
