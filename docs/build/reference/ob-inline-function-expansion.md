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
ms.openlocfilehash: 56a755de69b4f2ce6b659959eca5b25a6d75bfdc
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921191"
---
# <a name="ob-inline-function-expansion"></a>/Ob (Espansione funzioni inline)

Controlla l'espansione inline delle funzioni. Per impostazione predefinita, quando si esegue l'ottimizzazione, l'espansione viene eseguita a discrezione del compilatore su tutte le funzioni, spesso detta *incorporamento automatico* .

## <a name="syntax"></a>Sintassi

::: moniker range=">=msvc-160"

> **/Ob** { **0** | **1** | **2** | **3** }

::: moniker-end

::: moniker range="<=msvc-150"

> **/Ob** { **0** | **1** | **2** }

::: moniker-end

## <a name="arguments"></a>Argomenti

**0**\
Valore predefinito in [/od](od-disable-debug.md). Disabilita le espansioni inline.

**1**\
Consente l'espansione solo di funzioni contrassegnate come [inline](../../cpp/inline-functions-cpp.md), [__inline](../../cpp/inline-functions-cpp.md)o [__forceinline](../../cpp/inline-functions-cpp.md)o in una funzione membro C++ definita in una dichiarazione di classe.

**2**\
Il valore predefinito in [/O1](o1-o2-minimize-size-maximize-speed.md) e [/O2](o1-o2-minimize-size-maximize-speed.md). Consente al compilatore di espandere qualsiasi funzione non contrassegnata in modo esplicito per nessuna incorporata.

::: moniker range=">=msvc-160"

**3**\
Questa opzione specifica l'incorporamento più aggressivo rispetto a **/Ob2** , ma presenta le stesse restrizioni. L'opzione **/OB3** è disponibile a partire da Visual Studio 2019.

::: moniker-end

## <a name="remarks"></a>Osservazioni

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non vi è alcuna garanzia che le funzioni vengano espanse inline. È possibile disabilitare le espansioni inline, ma non è possibile forzare il compilatore in modo che inline una funzione specifica, anche quando si usa la **`__forceinline`** parola chiave.

Per escludere le funzioni dalla considerazione come candidati per l'espansione inline, è possibile usare [__declspec (noinline)](../../cpp/noinline.md)o un'area contrassegnata da [#pragma auto_inline (off)](../../preprocessor/auto-inline.md) e #pragma le direttive [auto_inline (on)](../../preprocessor/auto-inline.md) . Per informazioni su un altro modo per fornire hint di incorporamento al compilatore, vedere la direttiva [intrinseca #pragma](../../preprocessor/intrinsic.md) .

> [!NOTE]
> Le informazioni raccolte dalle esecuzioni dei test di profilatura eseguono l'override delle ottimizzazioni che altrimenti sarebbero attive perché è stato specificato **/ob** , **/OS** o **/OT** . Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà di  >  **ottimizzazione C/C++**  >  **Optimization** .

1. Modificare la proprietà di **espansione della funzione inline** .

::: moniker range=">=msvc-160"

L'opzione **/OB3** non è disponibile nella proprietà di **espansione della funzione inline** . Per impostare **/OB3** :

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++** > **Riga di comando** .

1. Immettere **/OB3** in **Opzioni aggiuntive** .

::: moniker-end

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni/o (Ottimizza codice)](o-options-optimize-code.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
