---
title: /LINKREPROTARGET (Nome del file per la riproduzione del collegamento)
description: Opzione del linker o dello strumento di libreria per impostare il nome di un file di destinazione per la riproduzione di un collegamento.
ms.date: 09/24/2019
f1_keywords:
- /LINKREPROTARGET
helpviewer_keywords:
- LINKREPROTARGET linker option
- /LINKREPROTARGET linker option
- -LINKREPROTARGET linker option
- linker repro reporting
ms.openlocfilehash: d629c4c2665239d03f38569677fa579b6c8d37e0
ms.sourcegitcommit: a361362354f6ce51eda4ffdb016b81c24cd225cb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/01/2019
ms.locfileid: "71712677"
---
# <a name="linkreprotarget-link-repro-file-name"></a>/LINKREPROTARGET (Nome del file per la riproduzione del collegamento)

Indica al linker o allo strumento di libreria di generare una ripetizione dei collegamenti solo quando la destinazione ha il nome file specificato.

## <a name="syntax"></a>Sintassi

> **/LINKREPROTARGET:** _nome file_

### <a name="arguments"></a>Argomenti

**/LINKREPROTARGET:** _nome file_\
Nome del file di destinazione da filtrare. Una procedura di riproduzione del collegamento viene generata solo quando il file denominato è la destinazione di output. I nomi di file che includono spazi devono essere racchiusi tra virgolette doppie. Il nome del file deve includere il nome di base e l'estensione, ma non il percorso.

## <a name="remarks"></a>Note

L'opzione **/LINKREPROTARGET** viene usata per specificare il nome di un file di destinazione per il quale generare una *ripetizione dei collegamenti* . Una procedura di riproduzione del collegamento è un set di elementi di compilazione che consentono a Microsoft di riprodurre un problema che si verifica in fase di collegamento o durante le operazioni di libreria. Lo strumento linker o Library produce una procedura di riproduzione del collegamento quando si specifica l'opzione [/LINKREPRO](linkrepro.md) o quando si imposta la variabile di ambiente `link_repro` nell'ambiente di compilazione da riga di comando.

L'opzione **/LINKREPROTARGET** è utile nelle compilazioni complesse che richiamano lo strumento del linker o della libreria più di una volta. Consente di specificare una destinazione specifica per la riproduzione del collegamento, ad esempio *problem. dll*. Consente di generare la riproduzione del collegamento solo quando lo strumento genera un file specifico.

Per ulteriori informazioni su come e quando creare una procedura di riproduzione del collegamento, vedere la sezione relativa alle procedure di [collegamento](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md#link-repros) per la [segnalazione di un C++ problema con il set di strumenti Microsoft](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

È necessario impostare le opzioni **/LINKREPRO** e [/out](out-output-file-name.md) affinché l'opzione **/LINKREPROTARGET** abbia effetto.

**/LINKREPROTARGET** è disponibile a partire da Visual Studio 2019 versione 16,1.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **proprietà di configurazione** > **linker** >  della**riga di comando** .

1. Immettere l'opzione **/LINKREPROTARGET:** _file-name_ nella casella **Opzioni aggiuntive** . Scegliere **OK** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)\
[/LINKREPRO](linkrepro.md)
