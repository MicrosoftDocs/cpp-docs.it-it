---
title: "Procedura dettagliata: Distribuzione di un programma (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione di applicazioni [C++], procedure dettagliate"
  - "progetti di installazione [C++]"
  - "distribuzioni di programmi [C++]"
  - "progetti [C++], configurazione"
  - "progetti [C++], distribuzione di programmi"
  - "application deployment [C++], procedure dettagliate"
ms.assetid: 79e6cc4e-dced-419d-aaf7-d62d1367603f
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: Distribuzione di un programma (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo aver creato l'applicazione completando le procedure dettagliate correlate precedenti, disponibili in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md), l'ultimo passaggio consiste nel creare un programma di installazione in modo che altri utenti possano installare il programma dei rispettivi computer.  A tal fine, si aggiungerà un nuovo progetto alla soluzione esistente.  L'output del nuovo progetto è un file setup.exe che installerà l'applicazione in un altro computer.  
  
 In questa procedura dettagliata viene illustrato come utilizzare Windows Installer per distribuire l'applicazione.  Ai fini della distribuzione, è possibile anche utilizzare ClickOnce.  Per ulteriori informazioni, vedere [Distribuzione ClickOnce per applicazioni Visual C\+\+](../ide/clickonce-deployment-for-visual-cpp-applications.md).  Per ulteriori informazioni sulla distribuzione in generale, vedere [Distribuzione di applicazioni, servizi e componenti](../Topic/Deploying%20Applications,%20Services,%20and%20Components.md).  
  
## Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C\+\+.  
  
-   Si presuppone inoltre che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
-   Questa procedura dettagliata non può essere completata nelle versioni Express Edition di Visual Studio.  
  
-   Se questa operazione non è già stata eseguita, scaricare InstallShield Limited Edition \(ISLE\) come descritto nei passaggi più avanti in questo articolo.  ISLE è una versione gratuita per gli sviluppatori di Visual Studio e sostituisce le funzionalità presenti nei modelli di progetto di installazione e distribuzione nelle edizioni precedenti di Visual Studio.  
  
### Per installare il modello di progetto di installazione e distribuzione ISLE  
  
1.  Quando si è connessi a Internet, sulla barra dei menu scegliere **File**, **Nuovo**, **Progetto** per aprire la finestra di dialogo **Nuovo progetto**.  
  
2.  Nel riquadro sinistro della finestra di dialogo espandere i nodi **Installato**, **Modelli** e **Altri tipi di progetto**, quindi selezionare **Installazione e distribuzione**.  Nel riquadro centrale selezionare **Abilita InstallShield Limited Edition**, quindi fare clic su **OK**.  
  
3.  Seguire le istruzioni per l'installazione di InstallShield Limited Edition per Visual Studio \(ISLE\).  
  
4.  Dopo aver scaricato, installato e attivato ISLE, chiudere Visual Studio e riaprirlo.  
  
5.  Sulla barra dei menu scegliere **File**, **Progetti e soluzioni recenti**, quindi scegliere la soluzione **Gioco** per riaprirla.  
  
### Per creare un progetto di installazione e installare il programma  
  
1.  Modificare la configurazione attiva della soluzione in Rilascio.  Sulla barra dei menu scegliere **Compilazione**, **Gestione configurazione**.  Nella finestra di dialogo **Gestione configurazione** nell'elenco a discesa **Configurazione soluzione attiva** selezionare **Rilascia**.  Selezionare il pulsante **Chiudi** per salvare la configurazione.  
  
2.  Sulla barra dei menu scegliere **File**, **Nuovo**, **Progetto** per aprire la finestra di dialogo **Nuovo progetto**.  
  
3.  Nel riquadro sinistro della finestra di dialogo espandere i nodi **Installato**, **Modelli** e **Altri tipi di progetto**, quindi selezionare **Installazione e distribuzione**.  Nel riquadro centrale selezionare **Progetto InstallShield Limited Edition**.  
  
4.  Immettere un nome per il progetto di installazione nella casella **Nome**.  Per questo esempio digitare Game Installer.  Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione**.  Scegliere il pulsante **OK** per creare il progetto di installazione.  Nella finestra dell'editor viene visualizzata una scheda **Assistenti di progetto \(Game Installer\)**.  
  
5.  Nella parte inferiore della scheda **Assistente progetto \(Game Installer\)** scegliere il collegamento **Informazioni applicazioni**.  
  
6.  Nella pagina **Informazioni applicazioni** specificare il nome della società poiché si desidera visualizzarlo nel programma di installazione.  È possibile utilizzare il nome della propria società o, per questo esempio, Contoso.  Specificare il nome dell'applicazione, in questo esempio Gioco.  Specificare l'indirizzo Web dell'azienda oppure, per questo esempio, utilizzare http:\/\/www.contoso.com.  
  
7.  Nella parte inferiore della scheda **Assistente progetto \(Game Installer\)** scegliere il collegamento **Domanda per l'installazione**.  
  
8.  Nella pagina **Domanda per l'installazione** in **Visualizzare una finestra di dialogo relativa al Contratto di licenza** selezionare il pulsante di opzione **No**.  In **Si desidera richiedere agli utenti di immettere il Nome Società e il Nome Utente?** selezionare il pulsante di opzione **No**.  
  
9. In **Esplora soluzioni** espandere il progetto **Game Installer** espandere il nodo **Organizzare l'installazione**, quindi aprire la pagina **Informazioni generali**.  
  
10. Nella scheda **Informazioni generali \(Game Installer\)** della finestra dell'editor, specificare **ID autore tag**, ad esempio, regid.2012\-12.com.Contoso.  
  
11. In **Esplora soluzioni** nel progetto **Game Installer** espandere il nodo **Specifica dati applicazione**, quindi aprire la pagina **File**.  
  
12. Nella scheda **File \(Game Installer\)** della finestra dell'editor, in **File del computer di origine** aprire il menu di scelta rapida per **Output primario dal gioco** e scegliere **Copia**.  
  
13. Aprire un menu di scelta rapida nello spazio sotto la colonna **Nome** in **File del computer di destinazione** e scegliere **Incolla**.  Viene visualizzato un nuovo elemento denominato **Game.Primary Output**.  
  
14. In **Esplora soluzioni**, nel nodo **Specifica dati applicazione**, aprire la pagina **Ridistribuibili**.  
  
15. Nella scheda **Ridistribuibili \(Game Installer\)** nella finestra dell'editor, selezionare la casella di controllo **CRT Visual C\+\+ 11.0 \(x86\)**.  
  
16. Sulla barra dei menu scegliere **Compila**, **Compila soluzione** per compilare il progetto Game e il progetto Game Installer.  
  
17. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto Game Installer ed eseguirlo per installare l'applicazione del gioco nel computer.  È possibile copiare questo file per installare l'applicazione e i file di libreria necessari in un altro computer.  
  
18. È possibile impostare molte opzioni nel progetto di installazione a seconda delle proprie esigenze.  Per ulteriori informazioni, in **Esplora soluzioni**, sotto il progetto **Game Installer**, aprire la pagina **Per iniziare** e quindi scegliere il tasto F1 per aprire la libreria della Guida ISLE.  
  
## Passaggi successivi  
 **Precedente:** [Procedura dettagliata: debug di un progetto \(C\+\+\)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)