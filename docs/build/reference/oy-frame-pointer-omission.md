---
title: /Oy (Omissione dei puntatori ai frame)
ms.date: 09/22/2017
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
ms.openlocfilehash: d6d896079c08ed2cf595b95ed41045885c83b5bc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431733"
---
# <a name="oy-frame-pointer-omission"></a>/Oy (Omissione dei puntatori ai frame)

Disabilita la creazione di puntatori ai frame nello stack di chiamate.

## <a name="syntax"></a>Sintassi

> /Oy [-]

## <a name="remarks"></a>Note

Questa opzione consente di velocizzare l'esecuzione delle chiamate di funzione in quanto non è necessario impostare e rimuovere alcun puntatore ai frame. Libera inoltre un ulteriore registro per l'utilizzo generale.

**/Oy** Abilita l'omissione dei puntatori ai frame e **/Oy-** Disabilita omissione. **/Oy** è disponibile solo in x86 compilatori.

Se il codice richiede l'indirizzamento basato su EBP, è possibile specificare il **/Oy-** opzione dopo la **/Ox** oppure utilizzare [ottimizzare](../../preprocessor/optimize.md) con il "**y**" e **disattivata** argomenti per ottenere la massima ottimizzazione con indirizzamento basato su EBP. Il compilatore rileva la maggior parte dei casi in cui l'indirizzamento basato su EBP è necessario, ad esempio con le funzioni `_alloca` e `setjmp` e con la gestione delle eccezioni strutturate.

Il [/Ox (Abilita più ottimizzazioni della velocità)](../../build/reference/ox-full-optimization.md) e [/O1, / O2 (riduce dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) opzioni implicano **/Oy**. Che specifica **/Oy-** dopo il **/Ox**, **/O1**, oppure **/O2** opzione Disabilita **/Oy**, che si tratti esplicita o implicita.

Il **/Oy** rende l'opzione del compilatore uso del debugger più difficile perché il compilatore Sopprime le informazioni sul puntatore di frame. Se si specifica un'opzione del compilatore debug ([/Z7, /Zi, /ZI](../../build/reference/z7-zi-zi-debug-information-format.md)), è consigliabile specificare le **/Oy-** opzione dopo eventuali altre opzioni di ottimizzazione del compilatore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **Ometti puntatori ai Frame** proprietà. Questa proprietà consente di aggiungere o rimuovere solo il **/Oy** opzione. Se si desidera aggiungere il **/Oy-** seleziona l'opzione, fare clic su **della riga di comando** e modificare **opzioni aggiuntive**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)

[Opzioni del compilatore](../../build/reference/compiler-options.md)

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
