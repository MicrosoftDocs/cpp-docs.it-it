---
description: Altre informazioni su:/Oy (omissione dei puntatori ai frame)
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
ms.openlocfilehash: dc0f9272bce5ad36840eac9ccdfc7e2465f7e3c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226298"
---
# <a name="oy-frame-pointer-omission"></a>/Oy (Omissione dei puntatori ai frame)

Disabilita la creazione di puntatori ai frame nello stack di chiamate.

## <a name="syntax"></a>Sintassi

> /Oy [-]

## <a name="remarks"></a>Commenti

Questa opzione consente di velocizzare l'esecuzione delle chiamate di funzione in quanto non è necessario impostare e rimuovere alcun puntatore ai frame. Consente inoltre di liberare un altro registro per l'utilizzo generale.

**/Oy** consente l'omissione del puntatore ai frame e **/Oy-** Disabilita l'omissione. Nei compilatori x64, **/Oy** e **/Oy-** non sono disponibili.

Se il codice richiede l'indirizzamento basato su frame, è possibile specificare l'opzione **/Oy-** dopo l'opzione **/Ox** oppure usare [optimize](../../preprocessor/optimize.md) con gli argomenti "**y**" e **off** per ottenere l'ottimizzazione massima con indirizzamento basato su frame. Il compilatore rileva la maggior parte delle situazioni in cui è richiesto l'indirizzamento basato su frame, ad esempio con le `_alloca` `setjmp` funzioni e e con la gestione delle eccezioni strutturata.

Le opzioni [/Ox (Abilita la maggior parte delle ottimizzazioni della velocità)](ox-full-optimization.md) e [/O1,/O2 (Riduci dimensione, Ottimizza velocità)](o1-o2-minimize-size-maximize-speed.md) implicano **/Oy**. Se si specifica **/Oy-** dopo l'opzione **/Ox**, **/O1** o **/O2** , il **/Oy** viene disabilitato, indipendentemente dal fatto che sia esplicito o implicito.

L'opzione del compilatore **/Oy** rende più difficile l'uso del debugger perché il compilatore disattiva le informazioni relative ai puntatori ai frame. Se si specifica un'opzione del compilatore di debug ([/Z7,/Zi,/Zi](z7-zi-zi-debug-information-format.md)), è consigliabile specificare l'opzione **/Oy-** dopo qualsiasi altra opzione del compilatore di ottimizzazione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà di  >  **ottimizzazione C/C++**  >   .

1. Modificare la proprietà **Ometti puntatori ai frame** . Questa proprietà aggiunge o rimuove solo l'opzione **/Oy** . Se si vuole aggiungere l'opzione **/Oy-** , selezionare la pagina delle proprietà **riga di comando** e modificare le **Opzioni aggiuntive**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/o (Ottimizza codice)](o-options-optimize-code.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
