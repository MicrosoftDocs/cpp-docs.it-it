---
title: "Creazione di una finestra degli strumenti di base | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Visual Studio SDK, finestre degli strumenti"
  - "finestre degli strumenti, creazione nell'IDE"
ms.assetid: 1e96cf07-bde4-445b-bcd0-48cadb351dde
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Creazione di una finestra degli strumenti di base
Le finestre degli strumenti sono comuni in Visual Studio: le finestre **Esplora soluzioni**, **Elenco attività**, **Elenco errori** e **Output** sono tutte finestre degli strumenti. Tutte le finestre degli strumenti possono essere ancorate nell'IDE allo stesso modo. Un ancoraggio prevedibile permette agli utenti di gestire le proprie attività e informazioni con efficienza.  
  
 Il modello di pacchetto di Visual Studio permette di creare un'implementazione di base di una semplice finestra degli strumenti.  
  
### Per creare una finestra degli strumenti tramite il modello di pacchetto di Visual Studio  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nella finestra di dialogo **Nuovo progetto** espandere **Altri tipi di progetto** e quindi fare clic su **Extensibility**.  
  
3.  Nel riquadro **Modelli** fare clic su **Pacchetto di Visual Studio**.  
  
4.  Nella casella **Percorso** digitare il percorso del file del pacchetto VSPackage.  
  
5.  Nella casella **Nome** digitare il nome per la soluzione e fare clic su **OK** per avviare il modello.  
  
6.  Nella pagina **Selezionare un linguaggio di programmazione** selezionare C\# o Visual Basic. Attendere che il modello generi un file key.snk per firmare l'assembly. In alternativa, fare clic su **Sfoglia** per selezionare un file di chiave personale. Il modello crea una copia del file di chiave e gli assegna il nome key.snk.  
  
7.  Nella pagina **Informazioni VSPackage di base** specificare i dettagli relativi al pacchetto VSPackage o accettare le impostazioni predefinite. Per altre informazioni, vedere [Procedura dettagliata: Creazione di un comando di menu tramite il modello di pacchetto di Visual Studio](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
8.  Nella pagina **Seleziona opzioni VSPackage** selezionare Finestra degli strumenti.  
  
9. Nella pagina Opzioni finestra degli strumenti digitare il nome per la barra del titolo nella casella **Nome finestra**. Questo nome viene usato anche come testo visualizzato per il comando di menu della finestra degli strumenti. Il comando di menu viene aggiunto al sottomenu **Altre finestre** del menu **Visualizza**. Digitare l'ID comando per la finestra degli strumenti nella casella **ID comando** oppure accettare il valore predefinito.  
  
10. Fare clic su **Fine** per creare il pacchetto VSPackage nella cartella specificata.  
  
### Per testare la finestra degli strumenti  
  
1.  Scegliere **Altre finestre** dal menu **Visualizza** e quindi fare clic sul comando della finestra degli strumenti. Verrà visualizzata una finestra degli strumenti con un pulsante **Clic qui**.  
  
2.  Fare clic sul pulsante. Verrà visualizzato un messaggio con il testo seguente:  
  
     La posizione corrente è all'interno di \[Company.\<Nome pacchetto VSPackage\>.MyControl\].button1\_Click\(\).  
  
## Vedere anche  
 [Apertura di una finestra degli strumenti a livello di codice](../misc/opening-a-tool-window-programmatically.md)   
 [Concetti di base sui VSPackage](../misc/vspackage-essentials.md)