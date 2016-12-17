---
title: "Procedura dettagliata: utilizzo di progetti e soluzioni (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "progetti [C++]"
  - "progetti [C++], informazioni sui progetti"
  - "soluzioni [C++]"
  - "soluzioni [C++], informazioni sulle soluzioni"
ms.assetid: 93a3f290-e294-46e3-876e-e3084d9ae833
caps.latest.revision: 25
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: utilizzo di progetti e soluzioni (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito viene illustrato come creare un progetto C\+\+ in Visual Studio, aggiungere il codice e quindi compilare ed eseguire il progetto.  Il progetto descritto in questa procedura dettagliata è un programma che traccia il numero di giocatori che eseguono diversi giochi di carte.  
  
 In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] il lavoro è organizzato in progetti e soluzioni.  Una soluzione può contenere più di un progetto, ad esempio una DLL e un file eseguibile che fa riferimento alla DLL stessa.  Per ulteriori informazioni, vedere [Soluzioni e progetti](../Topic/Solutions%20and%20Projects%20in%20Visual%20Studio.md).  
  
## Prerequisiti  
  
-   Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C\+\+.  
  
## Creazione di un progetto  
 Per creare un progetto, è innanzitutto necessario scegliere un modello del tipo di progetto.  Per ogni tipo di progetto [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] configura le impostazioni del compilatore e, a seconda del tipo, genera il codice iniziale che è possibile modificare in un secondo momento.  
  
#### Per creare un progetto  
  
1.  Sulla barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nel riquadro sinistro della finestra di dialogo **Nuovo progetto**, espandere il nodo **Modelli installati**, espandere il nodo **Visual C\+\+** e selezionare **Win32**.  
  
3.  Nell'elenco dei modelli installati nel riquadro centrale selezionare **Progetto console Win32**.  
  
4.  Immettere il nome del progetto nella casella **Nome**.  Per questo esempio immettere Game.  
  
     È possibile accettare il percorso predefinito nell'elenco a discesa **Percorso** oppure inserire un percorso diverso o scegliere il pulsante **Sfoglia** e passare alla cartella in cui salvare il progetto.  
  
     Quando si crea un progetto, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] lo inserisce in una soluzione.  Per impostazione predefinita, il nome della soluzione è identico a quello del progetto.  È possibile modificare il nome nella casella **Nome soluzione**, ma per questo esempio, mantenere il nome predefinito.  
  
     Scegliere il pulsante **OK** per avviare **Creazione guidata applicazione Win32**.  
  
5.  Nella pagina **Panoramica** di **Creazione guidata applicazione Win32** scegliere il pulsante **Avanti**.  
  
6.  Nella pagina **Impostazioni applicazione** in **Tipo di applicazione** selezionare **Applicazione console**.  In **Opzioni aggiuntive** deselezionare l'impostazione **Intestazione precompilata**, quindi selezionare l'impostazione **Progetto vuoto**.  Scegliere il pulsante **Fine** per creare il progetto.  
  
     A questo punto si dispone di un progetto, ma non ancora di file di codice sorgente.  
  
## Organizzazione di progetti e file in una soluzione  
 È possibile utilizzare **Esplora soluzioni** per organizzare e gestire progetti, file e altre risorse nella soluzione.  
  
 In questa parte della procedura dettagliata viene illustrato come aggiungere una classe al progetto.  Quando si aggiunge la classe, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] aggiunge i file corrispondenti con estensione h e cpp.  Si aggiungerà quindi un nuovo file di codice sorgente per il programma principale che esegue il test della classe.  
  
#### Per aggiungere una classe a un progetto  
  
1.  Se **Esplora soluzioni** non viene visualizzato, sulla barra dei menu selezionare **Visualizza**, **Esplora soluzioni**.  
  
2.  In **Esplora soluzioni** aprire il menu di scelta rapida della cartella **File di intestazione**, quindi scegliere **Aggiungi**, **Classe**.  
  
     Nel riquadro sinistro della finestra di dialogo **Aggiungi classe**, espandere il nodo **Visual C\+\+** e selezionare **C\+\+**, quindi nell'elenco dei modelli installati nel riquadro centrale selezionare **Classe C**.  Scegliere il pulsante **Aggiungi**.  
  
3.  In **Creazione guidata classe C\+\+ generica** immettere Cardgame nella casella **Nome classe**.  Non modificare le impostazioni e i nomi di file predefiniti.  Fare clic sul pulsante **Fine**.  
  
4.  Il file Cardgame.h viene aperto nell'editor.  Apportare queste modifiche:  
  
    -   Aggiungere due membri dati privati dopo la parentesi graffa di apertura della definizione di classe.  
  
         [!code-cpp[NVC_Walkthrough_Working_With_Projects#100](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_1.h)]  
  
    -   Modificare il costruttore predefinito generato da Visual Studio.  Dopo l'identificatore di accesso `public:` individuare la riga simile alla seguente:  
  
         `Cardgame(void);`  
  
         Modificarla in modo che accetti un parametro di tipo `int`, denominato players.  
  
         [!code-cpp[NVC_Walkthrough_Working_With_Projects#101](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_2.h)]  
  
    -   Dopo il distruttore predefinito aggiungere una dichiarazione inline per una funzione membro int statica denominata GetParticipants che non accetta alcun parametro e restituisce il valore di totalParticipants.  
  
         [!code-cpp[NVC_Walkthrough_Working_With_Projects#102](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_3.h)]  
  
5.  Dopo le modifiche, il file Cardgame.h dovrebbe risultare simile al seguente:  
  
     [!code-cpp[NVC_Walkthrough_Working_With_Projects#103](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_4.h)]  
  
     La riga `#pragma once` indica al compilatore di includere il file solo una volta.  Per ulteriori informazioni, vedere [once](../preprocessor/once.md).  
  
     Per informazioni sulle altre parole chiave di C\+\+ in questo file di intestazione, vedere [class](../cpp/class-cpp.md), [int](../cpp/fundamental-types-cpp.md), [static](../misc/static-cpp.md) e [public](../cpp/public-cpp.md).  
  
6.  Scegliere la scheda **Cardgame.cpp** nel riquadro di modifica per aprirlo e modificarlo.  
  
7.  Eliminare tutto il contenuto del file e sostituirlo con il seguente codice:  
  
     [!code-cpp[NVC_Walkthrough_Working_With_Projects#111](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_5.cpp)]  
  
    > [!NOTE]
    >  È possibile utilizzare il completamento automatico quando si scrive il codice.  Ad esempio, si sta immettendo questo codice, è possibile immettere pl o tot e premere CTRL\+BARRA SPAZIATRICE in modo che il completamento automatico immetta `players` o `totalParticipants` automaticamente.  
  
     Per informazioni su `#include`, vedere [Direttiva \#include](../preprocessor/hash-include-directive-c-cpp.md).  
  
## Aggiunta di un file di origine  
 A questo punto, aggiungere un file di codice sorgente per il programma principale che esegue il test della classe.  
  
#### Per aggiungere un nuovo file di origine  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per la cartella **File di origine**, quindi scegliere **Aggiungi**, **Nuovo elemento**.  
  
     Nella finestra di dialogo **Aggiungi nuovo elemento**, nel riquadro sinistro, espandere il nodo **Installato**, espandere il nodo **Visual C\+\+** e selezionare **Codice**.  Nel riquadro centrale selezionare **File di C\+\+ \(.cpp\)**.  
  
2.  Immettere TestGames.cpp nella casella **Nome**, quindi scegliere il pulsante **Aggiungi**.  
  
3.  Nella finestra di modifica di TestGames.cpp digitare il seguente codice.  
  
     [!code-cpp[NVC_Walkthrough_Working_With_Projects#120](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_6.cpp)]  
  
## Compilazione ed esecuzione di un progetto  
 A questo punto compilare il progetto ed eseguire l'applicazione.  
  
#### Per compilare ed eseguire il progetto  
  
1.  Sulla barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
    > [!NOTE]
    >  Se si utilizza una versione Express Edition in cui non viene visualizzato il menu **Compila**, sulla barra dei menu scegliere **Strumenti**, **Impostazioni**, **Impostazioni avanzate** per abilitarlo.  
  
     Nella finestra **Output** viene visualizzato l'output di una compilazione.  Se la compilazione ha esito positivo, l'output sarà analogo al seguente:  
  
  **1\>\-\-\-\-\-\- Compilazione avviata: Progetto: Game, Configurazione: Debug Win32 \-\-\-\-\-\-**  
**1\>  TestGames.cpp**  
**1\> Cardgame.cpp**  
**1\> Generazione codice in corso...**  
**1\>  Game.vcxproj \-\> c:\\users\\nomeutente\\documents\\visual studio\\Projects\\Game\\Debug\\Game.exe**  
**\=\=\=\=\=\=\=\=\=\= Compilazione: 1 completata, 0 non riuscita, 0 aggiornata, 0 ignorata \=\=\=\=\=\=\=\=\=\=**     La finestra **Output** mostra passaggi diversi a seconda dell'edizione e della configurazione della compilazione, ma se la compilazione del progetto ha avuto esito positivo, l'ultima riga dell'output deve essere sempre simile a quella indicata.  
  
     Se la compilazione ha esito negativo, confrontare il codice con quello fornito nel passaggio precedente.  
  
2.  Per eseguire il progetto, sulla barra dei menu selezionare **Debug**, **Avvia senza eseguire debug**.  Il codice sarà analogo al seguente:  
  
  **4 giocatori hanno avviato un nuovo gioco.  Vi sono 4 giocatori in totale.**  
**8 giocatori hanno avviato un nuovo gioco.  Vi sono 12 giocatori in totale.**  
**1 giocatore ha avviato un nuovo gioco.  Vi sono 13 giocatori in totale.**  
**5 giocatori hanno avviato un nuovo gioco.  Vi sono 18 giocatori in totale.**  
  
## Passaggi successivi  
 **Precedente:** [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  **Successivo:** [Procedura dettagliata: Compilazione di un progetto \(C\+\+\)](../ide/walkthrough-building-a-project-cpp.md).  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)