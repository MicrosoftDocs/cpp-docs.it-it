---
title: /Gd, /Gr, /Gv, /Gz (Convenzione di chiamata)
ms.date: 09/05/2018
f1_keywords:
- /Gr
- /Gv
- /Gd
- VC.Project.VCCLCompilerTool.CallingConvention
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
ms.openlocfilehash: e1617b7c158e9705a6211310fa7873f667a62ba5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87234367"
---
# <a name="gd-gr-gv-gz-calling-convention"></a>/Gd, /Gr, /Gv, /Gz (Convenzione di chiamata)

Queste opzioni determinano l'ordine in cui gli argomenti della funzione vengono inseriti nello stack, se la funzione chiamante o la funzione chiamata rimuove gli argomenti dallo stack alla fine della chiamata e la convenzione di decorazione dei nomi usata dal compilatore per identificare le singole funzioni.

## <a name="syntax"></a>Sintassi

> **`/Gd`**\
> **`/Gr`**\
> **`/Gv`**\
> **`/Gz`**

## <a name="remarks"></a>Osservazioni

**`/Gd`**, l'impostazione predefinita, specifica la convenzione di chiamata [__cdecl](../../cpp/cdecl.md) per tutte le funzioni ad eccezione delle funzioni membro di C++ e delle funzioni contrassegnate [__stdcall](../../cpp/stdcall.md), [__fastcall](../../cpp/fastcall.md)o [__vectorcall](../../cpp/vectorcall.md).

**`/Gr`** Specifica la **`__fastcall`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, delle funzioni denominate `main` e delle funzioni contrassegnate come, **`__cdecl`** **`__stdcall`** o **`__vectorcall`** . Tutte le **`__fastcall`** funzioni devono avere prototipi. Questa convenzione di chiamata è disponibile solo nei compilatori in x86 e viene ignorata dai compilatori che usano altre architetture.

**`/Gz`** Specifica la **`__stdcall`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, delle funzioni denominate `main` e delle funzioni contrassegnate come, **`__cdecl`** **`__fastcall`** o **`__vectorcall`** . Tutte le **`__stdcall`** funzioni devono avere prototipi. Questa convenzione di chiamata è disponibile solo nei compilatori in x86 e viene ignorata dai compilatori che usano altre architetture.

**`/Gv`** Specifica la **`__vectorcall`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++, funzioni denominate `main` , funzioni con un `vararg` elenco di argomenti variabili o funzioni contrassegnate con un **`__cdecl`** attributo, o in conflitto **`__stdcall`** **`__fastcall`** . Questa convenzione di chiamata è disponibile solo nelle architetture x86 e x64 che supportano /arch:SSE2 e versioni successive e viene ignorata dai compilatori che usano l'architettura ARM.

Le funzioni che accettano un numero variabile di argomenti devono essere contrassegnate come **`__cdecl`** .

**`/Gd`**, **`/Gr`** **`/Gv`** e **`/Gz`** non sono compatibili con [`/clr:safe`](clr-common-language-runtime-compilation.md) o **/CLR: pure**. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive.

> [!NOTE]
> Per impostazione predefinita, per i processori x86, le funzioni membro C++ usano [`__thiscall`](../../cpp/thiscall.md) .

Per tutti i processori, una funzione membro contrassegnata in modo esplicito come **`__cdecl`** , **`__fastcall`** , **`__vectorcall`** o **`__stdcall`** utilizza la convenzione di chiamata specificata se non viene ignorata su tale architettura. Una funzione membro che accetta un numero variabile di argomenti usa sempre la **`__cdecl`** convenzione di chiamata.

Queste opzioni del compilatore non hanno effetto sulla decorazione dei nomi dei metodi e delle funzioni C++. A meno che non siano dichiarati come `extern "C"`, i metodi e le funzioni C++ usano uno schema di decorazione dei nomi diverso. Per altre informazioni, vedere [Nomi decorati](decorated-names.md).

Per altre informazioni sulle convenzioni di chiamata, vedere [Convenzioni di chiamata](../../cpp/calling-conventions.md).

## <a name="__cdecl-specifics"></a>Specifiche di __cdecl

Nei processori x86 tutti gli argomenti delle funzioni vengono passati allo stack da destra a sinistra. Nelle architetture ARM e x64 alcuni argomenti vengono passati per registro e i rimanenti vengono passati allo stack da destra a sinistra. La routine chiamante preleva gli argomenti dallo stack.

Per C, la **`__cdecl`** convenzione di denominazione usa il nome della funzione preceduto da un carattere di sottolineatura ( `_` ). non viene eseguita alcuna conversione di maiuscole/minuscole. A meno che non siano dichiarate come `extern "C"`, le funzioni C++ usano uno schema di decorazione dei nomi diverso. Per altre informazioni, vedere [Nomi decorati](decorated-names.md).

## <a name="__fastcall-specifics"></a>Specifiche di __fastcall

Alcuni argomenti di una **`__fastcall`** funzione vengono passati nei registri (per i processori x86, ECX e EDX) e il resto viene inserito nello stack da destra a sinistra. La routine chiamata preleva questi argomenti dallo stack prima di restituire un valore. In genere **/Gr** riduce il tempo di esecuzione.

> [!NOTE]
> Prestare attenzione quando si usa la **`__fastcall`** convenzione di chiamata per tutte le funzioni scritte in linguaggio assembly inline. L'uso dei registri potrebbe essere in conflitto con l'uso del compilatore.

Per C, la **`__fastcall`** convenzione di denominazione usa il nome della funzione preceduto da un simbolo di chiocciola ( **\@** ) seguito dalla dimensione degli argomenti della funzione in byte. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore usa questo modello per la convenzione di denominazione:

`@function_name@number`

Quando si usa la **`__fastcall`** convenzione di denominazione, usare i file di inclusione standard. In caso contrario, si otterranno riferimenti esterni non risolti.

## <a name="__stdcall-specifics"></a>Specifiche di __stdcall

Gli **`__stdcall`** argomenti di una funzione vengono inseriti nello stack da destra a sinistra e la funzione chiamata estrae questi argomenti dallo stack prima della restituzione.

Per C, la **`__stdcall`** convenzione di denominazione usa il nome della funzione preceduto da un carattere di sottolineatura ( **\_** ) e seguito da un simbolo di chiocciola ( **\@** ) e dalle dimensioni in byte degli argomenti della funzione. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore usa questo modello per la convenzione di denominazione:

`_functionname@number`

## <a name="__vectorcall-specifics"></a>Specifiche di __vectorcall

**`__vectorcall`** Gli argomenti Integer di una funzione vengono passati per valore, usando un massimo di due (su x86) o quattro (su x64) registri integer e fino a sei registri XMM per i valori a virgola mobile e vettoriali e il resto viene passato nello stack da destra a sinistra. La funzione chiamata pulisce lo stack prima di restituire un risultato. I valori restituiti del vettore e a virgola mobile vengono restituiti in XMM0.

Per C, la **`__vectorcall`** convenzione di denominazione usa il nome della funzione seguito da due simboli di chiocciola ( **\@\@** ) e dalla dimensione degli argomenti della funzione in byte. Non viene effettuata alcuna conversione maiuscolo/minuscolo. Il compilatore usa questo modello per la convenzione di denominazione:

`functionname@@number`

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà avanzate di **C/C++**  >  **Advanced** .

1. Modificare la proprietà **Convenzione di chiamata**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CallingConvention%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore MSVC](compiler-options.md)
- [Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
