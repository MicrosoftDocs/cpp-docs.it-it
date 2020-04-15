---
title: Cenni preliminari sulla compilazione di file di informazioni di visualizzazione
ms.date: 05/06/2019
helpviewer_keywords:
- .bsc files, about .bsc files
- bsc files, about bsc files
- browse information files (.bsc)
- browse information files (.bsc), creating
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
ms.openlocfilehash: ffacb7aaf9ac1f7ad6fc4cf12ab479099dc57725
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320679"
---
# <a name="building-browse-information-files-overview"></a>Cenni preliminari sulla compilazione di file di informazioni di visualizzazione

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

Per creare informazioni di visualizzazione per l'esplorazione dei simboli, il compilatore crea un file sbr per ogni file di origine nel progetto, quindi BSCMAKE. EXE concatena i file sbr in un unico file bsc.

La generazione di file sbr e bsc richiede tempo, pertanto Visual Studio disattiva queste funzioni per impostazione predefinita. Se si desidera visualizzare le informazioni correnti, è necessario attivare le opzioni di esplorazione e compilare nuovamente il progetto.

Utilizzare [/FR](fr-fr-create-dot-sbr-file.md) o [/Fr](fr-fr-create-dot-sbr-file.md) per indicare al compilatore di creare file sbr. Per creare file bsc, è possibile chiamare [BSCMAKE](bscmake-command-line.md) dalla riga di comando. L'utilizzo di BSCMAKE dalla riga di comando consente di controllare in modo più preciso la manipolazione dei file di informazioni di visualizzazione. Per ulteriori informazioni, [vedere Riferimento a BSCMAKE.](bscmake-reference.md)

> [!TIP]
> È possibile attivare la generazione di file sbr, ma lasciare disattivata la generazione di file BSc. Ciò fornisce compilazioni veloci, ma consente anche di creare rapidamente un nuovo file BSC attivando la generazione di file BSC e compilando il progetto.

È possibile ridurre il tempo, la memoria e lo spazio su disco necessari per creare un file bsc riducendo le dimensioni del file bsc.

Vedere [Pagina delle proprietà generale (progetto)](general-property-page-project.md) per informazioni su come compilare un file del browser nell'ambiente di sviluppo.

### <a name="to-create-a-smaller-bsc-file"></a>Per creare un file bsc più piccolo

1. Utilizzare le [opzioni della riga di comando di BSCMAKE](bscmake-options.md) per escludere informazioni dal file di informazioni di visualizzazione.

1. Omettere i simboli locali in uno o più file sbr durante la compilazione o l'assemblaggio.

1. Se un file oggetto non contiene informazioni necessarie per la fase corrente del debug, omettere il relativo file sbr dal comando BSCMAKE quando si ricompila il file di informazioni di visualizzazione.

### <a name="to-combine-the-browse-information-from-several-projects-into-one-browser-file-bsc"></a>Per combinare le informazioni di visualizzazione di più progetti in un unico file del browser (con estensione bsc)

1. Non compilare il file bsc a livello di progetto o utilizzare l'opzione /n per impedire che i file sbr vengano troncati.

1. Dopo aver compilato tutti i progetti, eseguire BSCMAKE con tutti i file sbr come input. Sono accettati i caratteri jolly. Ad esempio, se si erano incorporate directory di progetto C:, X, C:, E C:, con i file sbr e si desidera combinarli\\\*tutti in un\\\*unico file BSC,\\utilizzare BSCMAKE C whatever_directory:\*.

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione aggiuntivi MSVC](c-cpp-build-tools.md)<br/>
[Riferimento a BSCMAKE](bscmake-reference.md)
