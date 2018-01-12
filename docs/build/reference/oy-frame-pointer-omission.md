---
title: -Oy (omissione dei puntatori Frame) | Documenti Microsoft
ms.custom: 
ms.date: 09/22/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.OmitFramePointers
- /oy
dev_langs: C++
helpviewer_keywords:
- omit frame pointer
- Oy compiler option [C++]
- stack frame pointer compiler option [C++]
- -Oy compiler option [C++]
- frame pointer omission compiler option [C++]
- suppress frame pointer creation
- /Oy compiler option [C++]
ms.assetid: c451da86-5297-4c5a-92bc-561d41379853
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 15a760d1a9df383356ead2eb2d1e1b08e8b9ca57
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="oy-frame-pointer-omission"></a>/Oy (Omissione dei puntatori ai frame)

Disabilita la creazione di puntatori ai frame nello stack di chiamate.

## <a name="syntax"></a>Sintassi

> /Oy [-]

## <a name="remarks"></a>Note

Questa opzione consente di velocizzare l'esecuzione delle chiamate di funzione in quanto non è necessario impostare e rimuovere alcun puntatore ai frame. Libera inoltre un ulteriore registro, EBP sul processore Intel 386 o versioni successive, per l'archiviazione delle variabili e delle sottoespressioni utilizzate di frequente.

**/Oy** consente l'omissione dei puntatori di frame e **/Oy-** Disabilita omissione. **/Oy** è disponibile solo in x86 compilatori.

Se il codice richiede l'indirizzamento basato su EBP, è possibile specificare il **/Oy-** dopo il **/Ox** o utilizzare [ottimizzare](../../preprocessor/optimize.md) con la "**y**" e **off** argomenti per ottenere la massima ottimizzazione con l'indirizzamento basato su EBP. Il compilatore rileva la maggior parte dei casi in cui l'indirizzamento basato su EBP è necessario, ad esempio con le funzioni `_alloca` e `setjmp` e con la gestione delle eccezioni strutturate.

Il [/Ox (abilitare più velocità ottimizzazioni)](../../build/reference/ox-full-optimization.md) e [/O1, /O2 (Riduci dimensione, Ottimizza velocità)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) opzioni presuppongono **/Oy**. Specifica di **/Oy-** dopo il **/Ox**, **/O1**, o **/O2** opzione Disabilita **/Oy**, se si tratta di esplicita o implicita.

Il **/Oy** rende opzione del compilatore utilizzando il debugger più difficile perché il compilatore elimina le informazioni sul puntatore di frame. Se si specifica un'opzione del compilatore di debug ([/Z7, /Zi, /ZI](../../build/reference/z7-zi-zi-debug-information-format.md)), è consigliabile specificare il **/Oy-** opzione dopo eventuali altre opzioni di ottimizzazione del compilatore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic su di **ottimizzazione** pagina delle proprietà.

1. Modificare il **Ometti puntatori ai Frame** proprietà. Questa proprietà consente di aggiungere o rimuovere solo il **/Oy** opzione. Se si desidera aggiungere il **/Oy-** opzione, fare clic su **riga di comando** e modificare **opzioni aggiuntive**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni /O (ottimizza codice)](../../build/reference/o-options-optimize-code.md)

[Opzioni del compilatore](../../build/reference/compiler-options.md)

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)