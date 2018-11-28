---
title: /Oy (Omissione dei puntatori ai frame)
ms.date: 11/19/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.OmitFramePointers
- /oy
helpviewer_keywords:
- omit frame pointer
- Oy compiler option [C++]
- stack frame pointer compiler option [C++]
- -Oy compiler option [C++]
- frame pointer omission compiler option [C++]
- suppress frame pointer creation
- /Oy compiler option [C++]
ms.assetid: c451da86-5297-4c5a-92bc-561d41379853
ms.openlocfilehash: 343b0e026c2932e97d4a8d4472ba2035d6302661
ms.sourcegitcommit: 3da2cb3ec85e77ddfd4d2a55edb133d580ce4f18
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/27/2018
ms.locfileid: "52330390"
---
# <a name="oy-frame-pointer-omission"></a>/Oy (Omissione dei puntatori ai frame)

Disabilita la creazione di puntatori ai frame nello stack di chiamate.

## <a name="syntax"></a>Sintassi

> /Oy [-]

## <a name="remarks"></a>Note

Questa opzione consente di velocizzare l'esecuzione delle chiamate di funzione in quanto non è necessario impostare e rimuovere alcun puntatore ai frame. Libera inoltre un ulteriore registro per l'utilizzo generale.

**/Oy** Abilita l'omissione dei puntatori ai frame e **/Oy-** Disabilita omissione. In x64, i compilatori **/Oy** e **/Oy-** non sono disponibili.

Se il codice richiede l'indirizzamento basato sul fotogramma, è possibile specificare il **/Oy-** opzione dopo la **/Ox** oppure utilizzare [ottimizzare](../../preprocessor/optimize.md) con il "**y**"e **disattivare** argomenti per ottenere la massima ottimizzazione con indirizzamento basato sul fotogramma. Il compilatore rileva la maggior parte dei casi in cui è richiesto l'indirizzamento basato su frame (ad esempio, con la `_alloca` e `setjmp` funzioni e con gestione strutturata delle eccezioni).

Il [/Ox (Abilita più ottimizzazioni della velocità)](../../build/reference/ox-full-optimization.md) e [/O1, / O2 (riduce dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) opzioni implicano **/Oy**. Che specifica **/Oy-** dopo il **/Ox**, **/O1**, oppure **/O2** opzione Disabilita **/Oy**, che si tratti esplicita o implicita.

Il **/Oy** rende l'opzione del compilatore uso del debugger più difficile perché il compilatore Sopprime le informazioni sul puntatore di frame. Se si specifica un'opzione del compilatore debug ([/Z7, /Zi, /ZI](../../build/reference/z7-zi-zi-debug-information-format.md)), è consigliabile specificare le **/Oy-** opzione dopo eventuali altre opzioni di ottimizzazione del compilatore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **ottimizzazione** pagina delle proprietà.

1. Modificare il **Ometti puntatori ai Frame** proprietà. Questa proprietà consente di aggiungere o rimuovere solo il **/Oy** opzione. Se si desidera aggiungere il **/Oy-** opzione, selezionare la **della riga di comando** proprietà di pagina e modificare **opzioni aggiuntive**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
