---
title: /Ob (Espansione funzioni inline)
ms.date: 08/08/2019
f1_keywords:
- VC.Project.VCCLWCECompilerTool.InlineFunctionExpansion
- VC.Project.VCCLCompilerTool.InlineFunctionExpansion
- /ob
helpviewer_keywords:
- inline functions, function expansion compiler option [C++]
- -Ob1 compiler option [C++]
- -Ob0 compiler option [C++]
- /Ob0 compiler option [C++]
- /Ob1 compiler option [C++]
- any suitable compiler option [C++]
- Ob2 compiler option [C++]
- Ob1 compiler option [C++]
- /Ob2 compiler option [C++]
- Ob compiler option [C++]
- -Ob2 compiler option [C++]
- disable compiler option [C++]
- -Ob compiler option [C++]
- /Ob compiler option [C++]
- only __inline compiler option [C++]
- Ob0 compiler option [C++]
- inline expansion, compiler option
ms.assetid: f134e6df-e939-4980-a01d-47425dbc562a
ms.openlocfilehash: 7eb3db1e359349eaf5125a6c8a46a3ac7d847f2f
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915474"
---
# <a name="ob-inline-function-expansion"></a>/Ob (Espansione funzioni inline)

Controlla l'espansione inline delle funzioni. Per impostazione predefinita, quando si esegue l'ottimizzazione, l'espansione viene eseguita a discrezione del compilatore su tutte le funzioni, spesso detta *incorporamento automatico*.

## <a name="syntax"></a>Sintassi

::: moniker range=">=vs-2019"

> **/Ob** {**0**|12|**3**}|

::: moniker-end

::: moniker range="<=vs-2017"

> **/Ob** {**0**|12|}

::: moniker-end

## <a name="arguments"></a>Argomenti

**0**\
Valore predefinito in [/od](od-disable-debug.md). Disabilita le espansioni inline.

**1**\
Consente l'espansione solo di funzioni contrassegnate come [inline](../../cpp/inline-functions-cpp.md), [__inline](../../cpp/inline-functions-cpp.md)o [__forceinline](../../cpp/inline-functions-cpp.md)o in C++ una funzione membro definita in una dichiarazione di classe.

**2**\
Il valore predefinito in [/O1](o1-o2-minimize-size-maximize-speed.md) e [/O2](o1-o2-minimize-size-maximize-speed.md). Consente al compilatore di espandere qualsiasi funzione non contrassegnata in modo esplicito per nessuna incorporata.

::: moniker range=">=vs-2019"

**3**\
Questa opzione specifica l'incorporamento più aggressivo rispetto a **/Ob2**, ma presenta le stesse restrizioni. L'opzione **/OB3** è disponibile a partire da Visual Studio 2019.

::: moniker-end

## <a name="remarks"></a>Note

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non vi è alcuna garanzia che le funzioni vengano espanse inline. È possibile disabilitare le espansioni inline, ma non è possibile forzare il compilatore in modo che inline una funzione specifica, `__forceinline` anche quando si usa la parola chiave.

Per escludere le funzioni dalla considerazione come candidati per l'espansione inline, è possibile usare [_ _ declspec (noinline)](../../cpp/noinline.md)o un'area contrassegnata da [#pragma auto_inline (off)](../../preprocessor/auto-inline.md) e #pragma direttive [auto_inline (on)](../../preprocessor/auto-inline.md) . Per informazioni su un altro modo per fornire hint di incorporamento al compilatore, vedere la direttiva [intrinseca #pragma](../../preprocessor/intrinsic.md) .

> [!NOTE]
> Le informazioni raccolte dalle esecuzioni dei test di profilatura eseguono l'override delle ottimizzazioni che altrimenti sarebbero attive perché è stato specificato **/ob**, **/OS**o **/OT**. Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** >  > **C/C++** **ottimizzazione** .

1. Modificare la proprietà di **espansione della funzione inline** .

::: moniker range=">=vs-2019"

L'opzione **/OB3** non è disponibile nella proprietà di **espansione della funzione inline** . Per impostare **/OB3**:

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **configurazione proprietà** > > **C/C++**  **riga di comando** .

1. Immettere **/OB3** in **Opzioni aggiuntive**.

::: moniker-end

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni/o (Ottimizza codice)](o-options-optimize-code.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
