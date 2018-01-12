---
title: 'Procedura dettagliata: Distribuzione di un programma (C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- deploying applications [C++], walkthroughs
- setup projects [C++]
- program deployments [C++]
- projects [C++], setup
- projects [C++], deploying programs
- application deployment [C++], walkthroughs
ms.assetid: 79e6cc4e-dced-419d-aaf7-d62d1367603f
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ce59dc7b767c8ff8e988ac7a765d3bb5f1cdfffc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-deploying-your-program-c"></a>Procedura dettagliata: Distribuzione di un programma (C++)
Ora che è stato creato l'applicazione completando la precedenza di procedure dettagliate correlate, elencati nella [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md), l'ultimo passaggio consiste nel creare un programma di installazione in modo che altri utenti possano installare il programma nei computer. A tal fine, si aggiungerà un nuovo progetto alla soluzione esistente. L'output del nuovo progetto è un file setup.exe che installerà l'applicazione in un altro computer.  
  
 In questa procedura dettagliata viene illustrato come utilizzare Windows Installer per distribuire l'applicazione. Ai fini della distribuzione, è possibile anche utilizzare ClickOnce. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md). Per ulteriori informazioni sulla distribuzione, in generale, vedere [distribuzione di applicazioni, servizi e componenti](/visualstudio/deployment/deploying-applications-services-and-components).  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Inoltre, presuppone di aver completato la precedenza di procedure dettagliate correlate elencati in [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
-   Questa procedura dettagliata non può essere completata nelle versioni Express Edition di Visual Studio.  
  
-   Se questa operazione non è già stata eseguita, scaricare InstallShield Limited Edition (ISLE) come descritto nei passaggi più avanti in questo articolo. ISLE è una versione gratuita per gli sviluppatori di Visual Studio e sostituisce le funzionalità presenti nei modelli di progetto di installazione e distribuzione nelle edizioni precedenti di Visual Studio.  
  
### <a name="to-install-the-isle-setup-and-deployment-project-template"></a>Per installare il modello di progetto di installazione e distribuzione ISLE  
  
1.  Quando si è connessi a Internet, nella barra dei menu, scegliere **File**, **New**, **progetto** per aprire la **nuovo progetto** la finestra di dialogo.  
  
2.  Nel riquadro sinistro della finestra di dialogo, espandere il **installato**, **modelli**, e **altri tipi di progetto** nodi e quindi selezionare **installazione e distribuzione**. Nel riquadro centrale selezionare **Abilita InstallShield Limited Edition** e quindi scegliere il **OK** pulsante.  
  
3.  Seguire le istruzioni per l'installazione di InstallShield Limited Edition per Visual Studio (ISLE).  
  
4.  Dopo aver scaricato, installato e attivato ISLE, chiudere Visual Studio e riaprirlo.  
  
5.  Nella barra dei menu, scegliere **File**, **progetti e soluzioni recenti**, quindi scegliere il **gioco** soluzione per riaprirlo.  
  
### <a name="to-create-a-setup-project-and-install-your-program"></a>Per creare un progetto di installazione e installare il programma  
  
1.  Modificare la configurazione attiva della soluzione in Rilascio. Nella barra dei menu scegliere **Compilazione**, **Gestione configurazione**. Nel **Configuration Manager** della finestra di dialogo di **configurazione soluzione attiva** elenco a discesa, seleziona **versione**. Scegliere il **Chiudi** pulsante per salvare la configurazione.  
  
2.  Nella barra dei menu, scegliere **File**, **New**, **progetto** per aprire la **nuovo progetto** la finestra di dialogo.  
  
3.  Nel riquadro sinistro della finestra di dialogo, espandere il **installato**, **modelli**, e **altri tipi di progetto** nodi e quindi selezionare **installazione e distribuzione**. Nel riquadro centrale selezionare **progetto InstallShield Limited Edition**.  
  
4.  Immettere un nome per il progetto di installazione nel **nome** casella. Per questo esempio, immettere **Game Installer**. Nel **soluzione** elenco a discesa, seleziona **aggiungere alla soluzione**. Scegliere il **OK** pulsante per creare il progetto di installazione. Oggetto **Assistente progetto (Game Installer)** scheda viene visualizzata nella finestra dell'editor.  
  
5.  In fondo il **Assistente progetto (Game Installer)** scheda, scegliere il **informazioni sull'applicazione** collegamento.  
  
6.  Nel **informazioni sull'applicazione** , specificare il nome della società che si desidera venga visualizzato nel programma di installazione. È possibile usare il proprio nome aziendale, o per questo esempio, usare **Contoso**. Specificare il nome dell'applicazione; In questo esempio, specificare **gioco**. Specificare l'indirizzo web della società o per questo esempio, usare **http://www.contoso.com**.  
  
7.  In fondo il **Assistente progetto (Game Installer)** scheda, scegliere il **domanda per l'installazione** collegamento.  
  
8.  Nel **domanda per l'installazione** pagina **si desidera visualizzare una finestra di dialogo di contratto di licenza**, selezionare il **n** pulsante di opzione. In **si desidera richiedere agli utenti di immettere il nome della società e nome utente**, selezionare il **n** pulsante di opzione.  
  
9. In **Esplora**, espandere il **Game Installer** del progetto, espandere il **organizza l'installazione** nodo e quindi aprire il **leinformazionigenerali** pagina.  
  
10. Nel **informazioni generali (Game Installer)** scheda nella finestra dell'editor, specificare un **ID autore Tag**, ad esempio, **regid.2012 12**.  
  
11. In **Esplora**, sotto il **Game Installer** del progetto, espandere il **specifica dati applicazione** nodo e quindi aprire il **file** pagina.  
  
12. Nel **file (Game Installer)** scheda nella finestra dell'editor, **file del computer di origine**, aprire il menu di scelta rapida per **Output primario dal gioco** scegliere **Copia**.  
  
13. Aprire un menu di scelta rapida nello spazio sotto il **nome** colonna **file computer di destinazione**e scegliere **Incolla**. Un nuovo elemento denominato **Output Game** viene visualizzato.  
  
14. In **Esplora**, sotto il **specifica dati applicazione** nodo, aprire il **ridistribuibili** pagina.  
  
15. Nel **ridistribuibili (Game Installer)** scheda nella finestra dell'editor, seleziona il **CRT Visual C++ 11.0 (x86)** casella di controllo.  
  
16. Nella barra dei menu, scegliere **compilare**, **Compila soluzione** per compilare il progetto Game e il progetto Game Installer.  
  
17. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto Game Installer ed eseguirlo per installare l'applicazione del gioco nel computer. È possibile copiare questo file per installare l'applicazione e i file di libreria necessari in un altro computer.  
  
18. È possibile impostare molte opzioni nel progetto di installazione a seconda delle proprie esigenze. Per ulteriori informazioni, in **Esplora soluzioni**, sotto il **Game Installer** progetto, aprire il **Introduzione** pagina e quindi scegliere il tasto F1 per aprire la raccolta della Guida ISLE.  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [procedura dettagliata: debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)  
 [Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)