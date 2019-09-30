---
title: /LINKREPRO (collega il nome della directory di riproduzione)
description: Opzione del linker o dello strumento di libreria per impostare la directory per la riproduzione di un collegamento.
ms.date: 09/24/2019
f1_keywords:
- /LINKREPRO
helpviewer_keywords:
- LINKREPRO linker option
- /LINKREPRO linker option
- -LINKREPRO linker option
- linker repro reporting
ms.openlocfilehash: d81fb529cdbb0741c6dff58032dad97df89b4d4f
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71686852"
---
# <a name="linkrepro-link-repro-directory-name"></a>/LINKREPRO (collega il nome della directory di riproduzione)

Indica al linker o allo strumento di libreria di generare una riproduzione di collegamenti in una directory specificata.

## <a name="syntax"></a>Sintassi

> **/LINKREPRO:** _nome-directory_

### <a name="arguments"></a>Argomenti

**/LINKREPRO:** _nome-directory_\
Directory specificata dall'utente in cui archiviare la riproduzione del collegamento. I nomi di directory che includono spazi devono essere racchiusi tra virgolette doppie.

## <a name="remarks"></a>Note

L'opzione **/LINKREPRO** viene usata per creare una procedura di *riproduzione del collegamento*. Si tratta di un set di artefatti di compilazione che consentono a Microsoft di riprodurre un problema che si verifica in fase di collegamento o durante le operazioni di libreria. È utile per i problemi, ad esempio un arresto anomalo del back-end che interessa la generazione di codice in fase di collegamento (LTCG), un errore del linker LNK1000 o un arresto anomalo del linker. Lo strumento genera una procedura di riproduzione del collegamento quando si specifica l'opzione del linker **/LINKREPRO** o quando si imposta la variabile di ambiente `link_repro` nell'ambiente di compilazione da riga di comando. Per ulteriori informazioni, vedere la sezione relativa alle procedure di [collegamento](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md#link-repros) per [segnalare un problema con il set C++ di strumenti Microsoft](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Sia l'opzione del linker **/LINKREPRO** che la variabile di ambiente `link_repro` richiedono di specificare una directory di output per la riproduzione del collegamento. Nella riga di comando o nell'IDE specificare la directory usando un'opzione **/LINKREPRO:** _directory-name_ . Il _nome di directory_ specificato può essere un percorso assoluto o relativo, ma la directory deve esistere. L'opzione della riga di comando sostituisce qualsiasi valore di directory impostato nella variabile di ambiente `link_repro`.

Per informazioni su come limitare la generazione di una ripetizione dei collegamenti a un nome file di destinazione specifico, vedere l'opzione [/LINKREPROTARGET](linkreprotarget.md) . Questa opzione può essere utilizzata per specificare una destinazione specifica per la quale generare una procedura di riproduzione del collegamento. È utile nelle compilazioni complesse che richiamano lo strumento del linker o della libreria più di una volta.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **proprietà di configurazione** > **linker** >  della**riga di comando** .

1. Immettere l'opzione **/LINKREPRO:** _directory-name_ nella casella **Opzioni aggiuntive** . Il valore di _nome directory_ specificato deve esistere. Scegliere **OK** per applicare la modifica.

Dopo aver generato la riproduzione del collegamento, aprire di nuovo questa pagina delle proprietà per rimuovere l'opzione **/LINKREPRO** dalle compilazioni.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)\
[/LINKREPROTARGET](linkreprotarget.md)
