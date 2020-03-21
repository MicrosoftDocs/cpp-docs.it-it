---
title: Cenni preliminari sulla compilazione di file di informazioni di visualizzazione
ms.date: 05/06/2019
helpviewer_keywords:
- .bsc files, about .bsc files
- bsc files, about bsc files
- browse information files (.bsc)
- browse information files (.bsc), creating
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
ms.openlocfilehash: 94cb5865e56e12f51ef4a8598a5df3fcbe69fa0f
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078350"
---
# <a name="building-browse-information-files-overview"></a>Cenni preliminari sulla compilazione di file di informazioni di visualizzazione

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

Per creare informazioni di visualizzazione per l'esplorazione dei simboli, il compilatore crea un file SBR per ogni file di origine nel progetto, quindi BSCMAKE. EXE concatena i file SBR in un unico file BSC.

La generazione di file SBR e BSC richiede tempo, quindi Visual Studio Disattiva per impostazione predefinita queste funzioni. Se si desidera visualizzare le informazioni correnti, è necessario attivare le opzioni di esplorazione e compilare di nuovo il progetto.

Usare [/fr](fr-fr-create-dot-sbr-file.md) o [/fr](fr-fr-create-dot-sbr-file.md) per indicare al compilatore di creare file SBR. Per creare file BSC, è possibile chiamare [BSCMAKE](bscmake-command-line.md) dalla riga di comando. L'uso di BSCMAKE dalla riga di comando offre un controllo più preciso sulla manipolazione dei file di informazioni di visualizzazione. Per ulteriori informazioni, vedere [riferimento a BSCMAKE](bscmake-reference.md) .

> [!TIP]
>  È possibile attivare la generazione di file SBR, ma lasciare la generazione di file BSC disattivata. Questo fornisce compilazioni veloci ma consente anche di creare rapidamente un file BSC aggiornato attivando la generazione di file BSC e creando il progetto.

È possibile ridurre il tempo, la memoria e lo spazio su disco necessari per compilare un file BSC riducendo le dimensioni del file BSC.

Vedere la [pagina delle proprietà generale (progetto)](general-property-page-project.md) per informazioni su come compilare un file del browser nell'ambiente di sviluppo.

### <a name="to-create-a-smaller-bsc-file"></a>Per creare un file BSC di dimensioni inferiori

1. Utilizzare le [Opzioni della riga di comando BSCMAKE](bscmake-options.md) per escludere le informazioni dal file di informazioni di visualizzazione.

1. Omettere i simboli locali in uno o più file SBR durante la compilazione o il montaggio.

1. Se un file oggetto non contiene le informazioni necessarie per la fase corrente del debug, omettere il file SBR dal comando BSCMAKE quando si ricompila il file di informazioni di visualizzazione.

### <a name="to-combine-the-browse-information-from-several-projects-into-one-browser-file-bsc"></a>Per combinare le informazioni di visualizzazione di più progetti in un unico file del browser (. BSC)

1. Non compilare il file BSC a livello di progetto oppure usare l'opzione/n per impedire che i file SBR vengano troncati.

1. Dopo che tutti i progetti sono stati compilati, eseguire BSCMAKE con tutti i file SBR come input. I caratteri jolly sono accettati. Ad esempio, se sono presenti le directory di progetto C:\X, C:\Y e C:\Z con i file SBR e si vuole combinarle tutte in un file BSC, usare BSCMAKE C:\X\\\*. sbr C:\Y\\\*. sbr C:\Z\\\*. sbr/o c:\ whatever_directory \combined.BSC per compilare il file bsc combinato.

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione aggiuntivi MSVC](c-cpp-build-tools.md)<br/>
[Riferimento a BSCMAKE](bscmake-reference.md)
