---
title: /QIntel-jcc-erratum
description: Descrive l'opzione del compilatore Microsoft C/C++ (MSVC)/QIntel-jcc-erratum.
ms.date: 01/07/2020
f1_keywords:
- QIntel-jcc-erratum
helpviewer_keywords:
- /QIntel-jcc-erratum
- -QIntel-jcc-erratum
ms.openlocfilehash: c66dd4bb25647ce193bce4db5dc4ebb1268277c0
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921373"
---
# <a name="qintel-jcc-erratum"></a>/QIntel-jcc-erratum

::: moniker range="<=msvc-150"

L'opzione **/QIntel-JCC-erratum** è disponibile in Visual Studio 2019 versione 16,5 e successive.

::: moniker-end

::: moniker range=">=msvc-160"

Specifica che il compilatore genera istruzioni per attenuare l'effetto sulle prestazioni causato dall'aggiornamento del microcodice cui all'errata di Intel Jump Conditional code (CCM) in alcuni processori Intel.

## <a name="syntax"></a>Sintassi

> **/QIntel-jcc-erratum**

## <a name="remarks"></a>Osservazioni

In **/QIntel-JCC-erratum** il compilatore rileva le istruzioni Jump e di salto con macro che si intersecano o terminano con un limite di 32 byte. Allinea queste istruzioni al limite. Questa modifica attenua l'effetto sulle prestazioni degli aggiornamenti di microcodice che impediscono il cui all'errata del CCM in determinati processori Intel. Per ulteriori informazioni su cui all'errata, vedere [mitigazioni per il codice condizionale Jump cui all'errata](https://www.intel.com/content/dam/support/us/en/documents/processors/mitigations-jump-conditional-code-erratum.pdf) nel sito Web di Intel.

L'opzione **/QIntel-JCC-erratum** è disponibile in Visual Studio 2019 versione 16,5 e successive. Questa opzione è disponibile solo nei compilatori destinati a x86 e x64. L'opzione non è disponibile nei compilatori destinati a processori ARM.

L'opzione **/QIntel-JCC-erratum** è disattivata per impostazione predefinita e funziona solo nelle compilazioni ottimizzate. Questa opzione consente di aumentare le dimensioni del codice.

**/QIntel-JCC-erratum** è incompatibile con [/CLR](clr-common-language-runtime-compilation.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** delle > proprietà di generazione del codice **C/C++** > **Code Generation** .

1. Selezionare un valore per abilitare la proprietà di **mitigazione cui all'errata Intel CCM** . Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

::: moniker-end
