---
title: 'File di informazioni: Panoramica | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- .bsc files, about .bsc files
- bsc files, about bsc files
- browse information files (.bsc)
- browse information files (.bsc), creating
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 493f25ba6839058a9ff749cb0dbb3853b1b16494
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712296"
---
# <a name="building-browse-information-files-overview"></a>Cenni preliminari sulla compilazione di file di informazioni di visualizzazione

Per creare informazioni di visualizzazione per l'esplorazione di simbolo, il compilatore crea un file sbr per ogni file di origine nel progetto, quindi BSCMAKE. File EXE concatena i file SBR in un unico file BSC.

Generazione di file sbr e BSC richiede tempo, in modo che Visual C++ consente di disattivare queste funzioni per impostazione predefinita. Se si desidera visualizzare le informazioni correnti, è necessario attivare le opzioni di ricerca e generare nuovamente il progetto.

Uso [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) oppure [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md) per indicare al compilatore di creare i file SBR. Per creare i file con estensione bsc, è possibile chiamare [BSCMAKE](../../build/reference/bscmake-command-line.md) dalla riga di comando. Mediante l'utilità BSCMAKE dalla riga di comando offre un controllo più preciso sulla manipolazione dei file di informazioni. Visualizzare [riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md) per altre informazioni.

> [!TIP]
>  È possibile attivare la generazione dei file SBR ma lasciare la generazione del file con estensione bsc disattivata. In questo modo fast compilazioni ma consente inoltre di creare rapidamente un nuovo file BSC attivando la generazione del file con estensione bsc e compilazione del progetto.

È possibile ridurre il tempo, memoria e spazio su disco necessario per compilare un file BSC riducendo le dimensioni del file con estensione bsc.

Visualizzare [General Property Page (Project)](../../ide/general-property-page-project.md) per informazioni su come creare un file del browser nell'ambiente di sviluppo.

### <a name="to-create-a-smaller-bsc-file"></a>Per creare un file BSC più piccolo

1. Uso [opzioni della riga di comando di BSCMAKE](../../build/reference/bscmake-options.md) per escludere informazioni dal file di informazioni di visualizzazione.

1. Ometti i simboli locali in uno o più file SBR durante la compilazione o l'assemblaggio.

1. Se un file oggetto non contiene le informazioni necessarie per la fase di debug corrente, omettere il corrispondente file SBR del comando di BSCMAKE quando si ricompila il file di informazioni.

### <a name="to-combine-the-browse-information-from-several-projects-into-one-browser-file-bsc"></a>Per combinare le informazioni di esplorazione da progetti diversi in un unico file (con estensione bsc)

1. Non compilare il file con estensione bsc a livello di progetto oppure utilizzare il parametro /n per impedire che i file SBR vengano troncati.

1. Dopo che tutti i progetti vengono compilati, eseguire BSCMAKE con tutti i file sbr come input. Sono accettati i caratteri jolly. Ad esempio, se si disponeva di directory di progetto C:\X C:\Y e C:\Z con i file sbr e si vuole combinarli in un unico file con estensione bsc, quindi usare BSCMAKE C:\X\\\*SBR C:\Y\\\*SBR C:\Z\\ \*c:\whatever_directory\combined.bsc /o sbr per compilare il file con estensione bsc combinato.

## <a name="see-also"></a>Vedere anche

[Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)<br/>
[Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)
