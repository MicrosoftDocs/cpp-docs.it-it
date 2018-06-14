---
title: 'Procedura dettagliata: Distribuzione di un programma (C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- deploying applications [C++], walkthroughs
- setup projects [C++]
- program deployments [C++]
- projects [C++], setup
- projects [C++], deploying programs
- application deployment [C++], walkthroughs
ms.assetid: 79e6cc4e-dced-419d-aaf7-d62d1367603f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e1753c63673b9dd083e2b690788801bd467938c3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33335536"
---
# <a name="walkthrough-deploying-your-program-c"></a>Procedura dettagliata: Distribuzione di un programma (C++)
Dopo aver creato l'applicazione completando le procedure dettagliate correlate precedenti, disponibili in [Uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md), l'ultimo passaggio è la creazione di un programma di installazione, in modo che altri utenti possano installare il programma nei rispettivi computer. A tal fine, si aggiungerà un nuovo progetto alla soluzione esistente. L'output del nuovo progetto è un file setup.exe che installerà l'applicazione in un altro computer.  
  
 In questa procedura dettagliata viene illustrato come utilizzare Windows Installer per distribuire l'applicazione. Ai fini della distribuzione, è possibile anche utilizzare ClickOnce. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md). Per altre informazioni sulla distribuzione in generale, vedere [Distribuzione di applicazioni, servizi e componenti](/visualstudio/deployment/deploying-applications-services-and-components).  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
-   Questa procedura dettagliata non può essere completata nelle versioni Express Edition di Visual Studio.  
  
-   Se questa operazione non è già stata eseguita, scaricare InstallShield Limited Edition (ISLE) come descritto nei passaggi più avanti in questo articolo. ISLE è una versione gratuita per gli sviluppatori di Visual Studio e sostituisce le funzionalità presenti nei modelli di progetto di installazione e distribuzione nelle edizioni precedenti di Visual Studio.  
  
### <a name="to-install-the-isle-setup-and-deployment-project-template"></a>Per installare il modello di progetto di installazione e distribuzione ISLE  
  
1.  Mentre è attiva una connessione a Internet, sulla barra dei menu scegliere **File**, **Nuovo**, **Progetto** per aprire la finestra di dialogo **Nuovo progetto**.  
  
2.  Nel riquadro a sinistra della finestra di dialogo espandere i nodi **Installato**, **Modelli** e **Altri tipi di progetto**, quindi selezionare **Installazione e distribuzione**. Nel riquadro centrale selezionare **Abilita InstallShield Limited Edition**, quindi fare clic su **OK**.  
  
3.  Seguire le istruzioni per l'installazione di InstallShield Limited Edition per Visual Studio (ISLE).  
  
4.  Dopo aver scaricato, installato e attivato ISLE, chiudere Visual Studio e riaprirlo.  
  
5.  Sulla barra dei menu scegliere **File**, **Progetti e soluzioni recenti**, quindi scegliere la soluzione **Game** per riaprirla.  
  
### <a name="to-create-a-setup-project-and-install-your-program"></a>Per creare un progetto di installazione e installare il programma  
  
1.  Modificare la configurazione attiva della soluzione in Rilascio. Nella barra dei menu scegliere **Compilazione**, **Gestione configurazione**. Nella finestra di dialogo **Gestione configurazione** nell'elenco a discesa **Configurazione soluzione attiva** selezionare **Rilascio**. Scegliere il pulsante **Chiudi** per salvare la configurazione.  
  
2.  Sulla barra dei menu scegliere **File**, **Nuovo**, **Progetto** per aprire la finestra di dialogo **Nuovo progetto**.  
  
3.  Nel riquadro a sinistra della finestra di dialogo espandere i nodi **Installato**, **Modelli** e **Altri tipi di progetto**, quindi selezionare **Installazione e distribuzione**. Nel riquadro centrale selezionare **Progetto InstallShield Limited Edition**.  
  
4.  Immettere un nome per il progetto di installazione nella casella **Nome**. Per questo esempio digitare **Game Installer**. Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione**. Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene visualizzata la scheda **Assistente progetto (Game Installer)**.  
  
5.  Nella parte inferiore della scheda **Assistente progetto (Game Installer)** scegliere il collegamento **Informazioni sull'applicazione**.  
  
6.  Nella pagina **Informazioni sull'applicazione** specificare il nome della società come si vuole visualizzarlo nel programma di installazione. È possibile usare il nome della propria società oppure, per questo esempio, il nome **Contoso**. Specificare il nome dell'applicazione, in questo esempio **Game**. Specificare l'indirizzo Web dell'azienda oppure, per questo esempio, usare **http://www.contoso.com**.  
  
7.  Nella parte inferiore della scheda **Assistente progetto (Game Installer)** scegliere il collegamento **Installation Interview** (Domanda per l'installazione).  
  
8.  Nella pagina **Installation Interview** (Domanda per l'installazione) in **Do you want to display a License Agreement Dialog** (Visualizzare una finestra di dialogo relativa al Contratto di licenza) selezionare il pulsante di opzione **No**. In **Do you want to prompt users to enter their Company Name and User Name** (Si vuole richiedere agli utenti di immettere il Nome Società e il Nome Utente) selezionare il pulsante di opzione **No**.  
  
9. In **Esplora soluzioni** espandere il progetto **Game Installer**, espandere il nodo **Organize Your Setup** (Organizzare l'installazione), quindi aprire la pagina **Informazioni generali**.  
  
10. Nella scheda **Informazioni generali (Game Installer)** della finestra dell'editor, specificare un valore per **Tag Creator ID** (ID autore tag), ad esempio, **regid.2012-12.com.Contoso**.  
  
11. In **Esplora soluzioni** nel progetto **Game Installer** espandere il nodo **Specify Application Data** (Specifica dati applicazione), quindi aprire la pagina **File**.  
  
12. Nella scheda **File (Game Installer)** della finestra dell'editor, in **Source computer's files** (File del computer di origine) aprire il menu di scelta rapida per **Primary Output From Game** (Output primario da Game) e scegliere **Copia**.  
  
13. Aprire un menu di scelta rapida nello spazio sotto la colonna **Nome** in **Destination computer's files** (File del computer di destinazione) e scegliere **Incolla**. Viene visualizzato un nuovo elemento denominato **Game.Primary Output**.  
  
14. In **Esplora soluzioni** nel nodo **Specify Application Data** (Specifica dati applicazione) aprire la pagina **Redistributables** (Ridistribuibili).  
  
15. Nella scheda **Ridistribuibili (Game Installer)**, nella finestra dell'editor selezionare la casella di controllo **CRT Visual C++ 11.0 (x86)**.  
  
16. Sulla barra dei menu scegliere **Compila**, **Compila soluzione** per compilare il progetto Game e il progetto Game Installer.  
  
17. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto Game Installer ed eseguirlo per installare l'applicazione del gioco nel computer. È possibile copiare questo file per installare l'applicazione e i file di libreria necessari in un altro computer.  
  
18. È possibile impostare molte opzioni nel progetto di installazione a seconda delle proprie esigenze. Per altre informazioni, in **Esplora soluzioni**, sotto il progetto **Game Installer** aprire la pagina **Per iniziare** e quindi premere F1 per aprire la libreria della Guida ISLE.  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [Procedura dettagliata: Debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)