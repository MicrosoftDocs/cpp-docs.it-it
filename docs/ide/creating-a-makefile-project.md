---
title: Creazione di un progetto makefile C++ | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.appwiz.makefile.project
dev_langs:
- C++
helpviewer_keywords:
- Makefile projects, creating
- project files [C++], Makefile projects
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3360d2ed86d220bc59d6f09f582c71b48f7d78c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399483"
---
# <a name="creating-a-c-makefile-project"></a>Creazione di un progetto makefile C++

Un *makefile* è un file di testo contenente istruzioni su come creare e collegare (o *compilare*) un set di file di codice sorgente C++. Un programma *make* legge il makefile e richiama un compilatore, un linker e possibilmente altri programmi per creare un file eseguibile. L'implementazione Microsoft del programma *make* viene chiamata **NMAKE**. Per impostazione predefinita, Visual Studio usa il sistema MSBuild basato su file VCSPROJ, creato selezionando **File | Nuovo | Progetto**.

Nel caso in cui sia già disponibile un progetto makefile, è possibile scegliere una delle opzioni seguenti se si vuole codificare il file o eseguirne il debug nell'IDE di Visual Studio:

- Creare in Visual Studio un progetto makefile che usa il makefile esistente per compilare il codice nell'IDE. In questo caso, non si potrà usufruire di tutte le funzionalità dell'IDE che si hanno con un progetto MSBuild nativo. Vedere la sezione [Per creare un progetto makefile](#create_a_makefile_project) riportata di seguito.
- Usare la **Creazione guidata nuovo progetto da file di codice esistenti** per creare un progetto MSBuild nativo dal codice sorgente. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](how-to-create-a-cpp-project-from-existing-code.md).
- **Visual Studio 2017 e versioni successiva**: usare la funzionalità **Apri cartella** per aprire un makefile. Per altre informazioni, vedere [Open Folder projects in Visual C++](non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++).

## <a name="a-namecreateamakefileproject-to-create-a-makefile-project-with-the-makefile-project-template"></a><a name="create_a_makefile_project"> Per creare un progetto makefile con il modello di progetto makefile

In Visual Studio 2017 e versioni successive, il modello di progetto makefile è disponibile se è installato il carico di lavoro per lo sviluppo di applicazioni desktop con C++.

Seguire la procedura guidata per specificare i comandi e l'ambiente usati dal makefile. Questo progetto potrà quindi essere usato per compilare il codice nell'ambiente di sviluppo di Visual Studio.

Per impostazione predefinita, il progetto makefile non visualizza file in Esplora soluzioni. Il progetto makefile specifica le impostazioni di compilazione, riportate nella pagina delle proprietà del progetto.

Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione. Il makefile controlla comunque il processo di compilazione e specifica le destinazioni di compilazione.

1. Nella pagina iniziale di Visual Studio, digitare "makefile" nella casella di ricerca **Nuovo progetto**. In alternativa, nella finestra di dialogo **Nuovo progetto** espandere **Visual C++** > **Generali** (Visual Studio 2015) o **Altro** (Visual Studio 2017) e quindi selezionare **Progetto makefile** nel riquadro Modelli per aprire la procedura guidata di creazione del progetto.

1. Nella pagina [Impostazioni applicazione](../ide/application-settings-makefile-project-wizard.md) specificare le informazioni relative a ricompilazione, comandi, output e pulitura per le build di debug e vendita.

1. Scegliere **Fine** per uscire dalla procedura guidata e aprire il progetto appena creato in **Esplora soluzioni**.

È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà. Per informazioni sulla visualizzazione della pagina delle proprietà, vedere [Impostazione delle proprietà dei progetti Visual C++](../ide/working-with-project-properties.md).

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto makeFile](../ide/makefile-project-wizard.md)<br/>
[Caratteri speciali in un makefile](../build/special-characters-in-a-makefile.md)<br/>
[Contenuto di un makefile](../build/contents-of-a-makefile.md)<br/>
