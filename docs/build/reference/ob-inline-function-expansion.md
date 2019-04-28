---
title: /Ob (Espansione funzioni inline)
ms.date: 09/25/2017
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
ms.openlocfilehash: 6bf16e5725916e81e64d80c0a1f96bf502c8826c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320227"
---
# <a name="ob-inline-function-expansion"></a>/Ob (Espansione funzioni inline)

Controlla l'espansione inline delle funzioni.

## <a name="syntax"></a>Sintassi

> /Ob{0|1|2}

## <a name="arguments"></a>Argomenti

**0**<br/>
Disabilita le espansioni inline. Per impostazione predefinita, espansione viene eseguita a discrezione del compilatore in tutte le funzioni, anche detti *auto-inlining*.

**1**<br/>
Consente l'espansione solo delle funzioni contrassegnate [inline](../../cpp/inline-functions-cpp.md), `__inline`, o `__forceinline`, o in una funzione membro C++ definita in una dichiarazione di classe.

**2**<br/>
Il valore predefinito. Consente l'espansione delle funzioni contrassegnate come `inline`, `__inline`, o `__forceinline` e di qualsiasi altra funzione scelta dal compilatore.

**/ Ob2** è attiva quando [/O1, / O2 (riduce dimensione, Ottimizza velocità)](o1-o2-minimize-size-maximize-speed.md) oppure [/Ox (Abilita più ottimizzazioni della velocità)](ox-full-optimization.md) viene usato.

Questa opzione richiede l'abilitazione delle ottimizzazioni mediante **/O1**, **/O2**, **/Ox**, oppure **/Og**.

## <a name="remarks"></a>Note

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non vi è alcuna garanzia che una funzione verrà espansa inline. È possibile disabilitare le espansioni inline, ma non è possibile forzare il compilatore ad applicare l'inline a una funzione specifica, anche quando si usa la parola chiave `__forceinline`.

È possibile usare la `#pragma` [auto_inline](../../preprocessor/auto-inline.md) direttiva per escludere funzioni dalla considerazione come candidati per l'espansione inline. Vedere anche il `#pragma` [intrinseco](../../preprocessor/intrinsic.md) direttiva.

> [!NOTE]
> Informazioni raccolte dalle esecuzioni dei test di profilatura sostituiscono le ottimizzazioni che verrebbero altrimenti effetto se si specifica **/Ob**, **/Os**, o **/Ot**. Per altre informazioni, vedere [le ottimizzazioni PGO](../profile-guided-optimizations.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere **le proprietà di configurazione**, **C/C++** e selezionare **ottimizzazione**.

1. Modificare il **espansione funzioni Inline** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
