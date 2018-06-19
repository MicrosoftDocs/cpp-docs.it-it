---
title: -Ob (espansione funzioni Inline) | Documenti Microsoft
ms.custom: ''
ms.date: 09/25/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLWCECompilerTool.InlineFunctionExpansion
- VC.Project.VCCLCompilerTool.InlineFunctionExpansion
- /ob
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fb7c31dca2d95232850140576be3ddc0ac695cac
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377832"
---
# <a name="ob-inline-function-expansion"></a>/Ob (Espansione funzioni inline)

Controlla l'espansione inline delle funzioni.

## <a name="syntax"></a>Sintassi

> /OB {0 | 1 | 2}

## <a name="arguments"></a>Argomenti

**0**  
Disabilita le espansioni inline. Per impostazione predefinita, espansione viene eseguita a discrezione del compilatore in tutte le funzioni, noto anche come *auto-inlining*.

**1**  
Consente l'espansione solo delle funzioni contrassegnate come [inline](../../cpp/inline-functions-cpp.md), `__inline`, o `__forceinline`, o in una funzione membro C++ definita in una dichiarazione di classe.

**2**  
Il valore predefinito. Consente l'espansione delle funzioni contrassegnate come `inline`, `__inline`, o `__forceinline` e di qualsiasi altra funzione scelta dal compilatore.

**/ Ob2** è attiva quando [/O1, / O2 (Riduci dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o [/Ox (abilitare più velocità ottimizzazioni)](../../build/reference/ox-full-optimization.md) viene utilizzato.

Questa opzione richiede l'abilitazione delle ottimizzazioni mediante **/O1**, **/O2**, **/Ox**, o **/Og**.  

## <a name="remarks"></a>Note

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non vi è alcuna garanzia che una funzione verrà espansa inline. È possibile disabilitare le espansioni inline, ma non è possibile forzare il compilatore ad applicare l'inline a una funzione specifica, anche quando si usa la parola chiave `__forceinline`.

È possibile utilizzare il `#pragma` [auto_inline](../../preprocessor/auto-inline.md) direttiva escludere funzioni dalla considerazione come candidati per l'espansione inline. Vedere anche il `#pragma` [intrinseco](../../preprocessor/intrinsic.md) direttiva.

> [!NOTE]
> Le informazioni raccolte durante le esecuzioni dei test di profilatura sostituiscono le ottimizzazioni che verrebbero altrimenti applicate se si specifica **/Ob**, **/Os**, o **/Ot**. Per ulteriori informazioni, vedere [ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere **le proprietà di configurazione**, **C/C++** e selezionare **ottimizzazione**.

1. Modificare il **espansione funzioni Inline** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)  
[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)