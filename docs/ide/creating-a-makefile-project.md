---
title: Creazione di un progetto Makefile | Documenti Microsoft
ms.custom: 
ms.date: 02/28/2018
ms.technology:
- cpp-ide
ms.topic: article
f1_keywords:
- vc.appwiz.makefile.project
dev_langs:
- C++
helpviewer_keywords:
- Makefile projects, creating
- project files [C++], Makefile projects
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f487126b58dddc0243646ebce7faa2754ffa7053
ms.sourcegitcommit: 4e01d36ffa64ea11bacf589f79d2f1df947e2510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2018
---
# <a name="creating-a-makefile-project"></a>Creazione di un progetto makefile

Se si dispone di un progetto di codice sorgente esistente che si compila dalla riga di comando usando un makefile, procedere in diversi modi trasformandolo in un progetto che può usufruire delle funzionalità dell'IDE di Visual Studio l'ambiente di sviluppo di Visual Studio. In questo articolo viene descritto come creare un progetto Makefile che utilizza il makefile esistente per compilare il codice nell'IDE in Visual Studio. In alternativa, è possibile utilizzare il **Crea nuovo progetto da file di codice esistenti** procedura guidata per creare un progetto MSBuild native da codice sorgente. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](how-to-create-a-cpp-project-from-existing-code.md). A partire da Visual Studio 2017, è inoltre possibile utilizzare il **Apri cartella** funzionalità che è possibile utilizzare diversi sistemi di compilazione esistente come se fossero progetti nativi di Visual Studio. Per altre informazioni, vedere [Open Folder projects in Visual C++](non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++).

Per utilizzare Visual Studio per aprire e compilare il codice sorgente utilizzando il makefile esistente, si crea un nuovo progetto selezionando il modello di progetto MakeFile. Una procedura guidata consente di specificare i comandi e l'ambiente utilizzato per i makefile. È quindi possibile utilizzare questo progetto per compilare il codice nell'ambiente di sviluppo di Visual Studio.

Per impostazione predefinita, il progetto makefile non vengono visualizzati file in Esplora soluzioni. Il progetto makefile specifica le impostazioni di compilazione, vengono riflesse nella pagina delle proprietà del progetto.

Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione. Il makefile ancora controlla il processo di compilazione e specifica le destinazioni di compilazione.

## <a name="to-create-a-makefile-project"></a>Per creare un progetto makefile

1. Seguire le istruzioni dell'argomento della Guida [creazione di un progetto con una creazione guidata applicazione di Visual C++](../ide/creating-desktop-projects-by-using-application-wizards.md).

1. Nel **nuovo progetto** finestra di dialogo espandere **Visual C++** > **generale** e quindi selezionare **progetto Makefile** di Riquadro dei modelli per aprire la creazione guidata progetto.

1. Nel [le impostazioni dell'applicazione](../ide/application-settings-makefile-project-wizard.md) fornire output del comando, pulire e Compila informazioni di ricompilazione per debug e delle vendite al dettaglio.

1. Fare clic su **fine** per chiudere la procedura guidata e aprire il progetto appena creato in **Esplora**.

È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà. Vedere [impostazione delle proprietà dei progetti Visual C++](../ide/working-with-project-properties.md) per informazioni sulla pagina delle proprietà di visualizzazione.

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto makeFile](../ide/makefile-project-wizard.md)<br/>
[Caratteri speciali in un makefile](../build/special-characters-in-a-makefile.md)<br/>
[Contenuto di un makefile](../build/contents-of-a-makefile.md)<br/>
