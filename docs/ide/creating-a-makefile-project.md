---
title: Creazione di un progetto makefile | Microsoft Docs
ms.custom: ''
ms.date: 02/28/2018
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
ms.openlocfilehash: dc854f96f1c41baf28a5af4ca1f253e47d9a8914
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33336778"
---
# <a name="creating-a-makefile-project"></a>Creazione di un progetto makefile

Se è disponibile un progetto di codice sorgente esistente compilato dalla riga di comando usando un makefile, l'ambiente di sviluppo di Visual Studio offre diverse opzioni che consentono di trasformarlo in un progetto in grado di sfruttare tutte le funzionalità dell'IDE di Visual Studio. In questo articolo viene descritto come creare in Visual Studio un progetto makefile che usa il makefile esistente per compilare il codice nell'IDE. In alternativa, è possibile usare la **Creazione guidata nuovo progetto da file di codice esistenti** per creare un progetto MSBuild nativo dal codice sorgente. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](how-to-create-a-cpp-project-from-existing-code.md). A partire da Visual Studio 2017 si può usare anche la funzionalità **Apri cartella**, che è in grado di usare diversi sistemi di compilazione esistenti come se fossero progetti nativi di Visual Studio. Per altre informazioni, vedere [Open Folder projects in Visual C++](non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++).

Per usare Visual Studio per aprire e compilare il codice sorgente usando il makefile esistente, per prima cosa creare un nuovo progetto selezionando il modello di progetto MakeFile. Una procedura guidata consente di specificare i comandi e l'ambiente usati dal makefile. Questo progetto potrà quindi essere usato per compilare il codice nell'ambiente di sviluppo di Visual Studio.

Per impostazione predefinita, il progetto makefile non visualizza file in Esplora soluzioni. Il progetto makefile specifica le impostazioni di compilazione, riportate nella pagina delle proprietà del progetto.

Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione. Il makefile controlla comunque il processo di compilazione e specifica le destinazioni di compilazione.

## <a name="to-create-a-makefile-project"></a>Per creare un progetto makefile

1. Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C++](../ide/creating-desktop-projects-by-using-application-wizards.md).

1. Nella finestra di dialogo **Nuovo progetto** espandere **Visual C++** > **Generali** e quindi selezionare **Progetto makefile** nel riquadro Modelli per aprire la procedura guidata di creazione del progetto.

1. Nella pagina [Impostazioni applicazione](../ide/application-settings-makefile-project-wizard.md) specificare le informazioni relative a ricompilazione, comandi, output e pulitura per le build di debug e vendita.

1. Scegliere **Fine** per uscire dalla procedura guidata e aprire il progetto appena creato in **Esplora soluzioni**.

È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà. Per informazioni sulla visualizzazione della pagina delle proprietà, vedere [Impostazione delle proprietà dei progetti Visual C++](../ide/working-with-project-properties.md).

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto makeFile](../ide/makefile-project-wizard.md)<br/>
[Caratteri speciali in un makefile](../build/special-characters-in-a-makefile.md)<br/>
[Contenuto di un makefile](../build/contents-of-a-makefile.md)<br/>
