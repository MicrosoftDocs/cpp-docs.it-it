---
title: "Inserimento di un controllo utente in una finestra degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "finestre degli strumenti, aggiunta di controlli utente"
  - "controlli utente [Visual Studio SDK], aggiunta alle finestre degli strumenti"
  - "controlli utente [Visual Studio SDK]"
ms.assetid: 869f3195-e152-4e61-802c-51d6b7ba3e36
caps.latest.revision: 29
caps.handback.revision: 29
manager: "douge"
---
# Inserimento di un controllo utente in una finestra degli strumenti
Questa procedura dettagliata illustra come aggiungere un controllo utente a una finestra degli strumenti.  
  
 Un controllo utente è una raccolta di controlli di Windows raggruppati in un unico controllo. Per aggiungere un controllo utente a una finestra degli strumenti, è sufficiente fare in modo che il controllo utente venga visualizzato nella **casella degli strumenti**. Il controllo utente usato in questa procedura dettagliata è il controllo orologio sviluppato in [Procedura dettagliata: modifica di un controllo composito con Visual C\#](../Topic/Walkthrough:%20Authoring%20a%20Composite%20Control%20with%20Visual%20C%23.md).  
  
## Prerequisiti  
 Per seguire questa procedura dettagliata, è necessario installare Visual Studio SDK. Per altre informazioni, vedere [Visual Studio SDK](../Topic/Visual%20Studio%20SDK.md).  
  
## Creazione del controllo utente  
  
1.  Seguire i passaggi in [Procedura dettagliata: modifica di un controllo composito con Visual C\#](../Topic/Walkthrough:%20Authoring%20a%20Composite%20Control%20with%20Visual%20C%23.md) per creare il controllo orologio. Non creare il controllo sveglia.  
  
> [!NOTE]
>  I passaggi seguenti presuppongono che il controllo orologio sia stato denominato `ctlClock`.  
  
## Creazione di un'estensione della finestra degli strumenti  
  
1.  Creare un progetto VSIX denominato `MyToolWindowPackageUC` con una finestra degli strumenti denominata `MyToolWindow`. Per informazioni su come eseguire questa operazione, vedere [Creazione di un'estensione con una finestra degli strumenti](../Topic/Creating%20an%20Extension%20with%20a%20Tool%20Window.md).  
  
## Aggiunta del controllo utente  
  
1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sulla soluzione **MyToolWindowPackageUC**, scegliere **Aggiungi** e quindi fare clic su **Progetto esistente**.  
  
2.  Nella finestra di dialogo **Aggiungi progetto esistente** aprire il progetto ctlClockLib e selezionare il file di progetto ctlClock.lib.csproj. Fare clic su **OK**. In questo modo viene abilitato il controllo utente che è possibile usare nella finestra di progettazione.  
  
3.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse su MyToolWindowControl.cs e scegliere **Visualizza finestra di progettazione**. Verrà visualizzata la finestra di progettazione di form con il controllo generato per la finestra degli strumenti.  
  
4.  Aprire la **casella degli strumenti**, individuare la sezione **Componenti di ctlClockLib** e fare doppio clic sul controllo **ctlClock** in tale sezione per aggiungere il controllo al form. Non appena si nasconde la **casella degli strumenti**, nel form della finestra degli strumenti dovrebbe venire visualizzato un display con l'ora.  
  
5.  Nella finestra di progettazione selezionare il controllo orologio appena aggiunto e modificarne la proprietà **Ancoraggio** impostandola su **Alto**.  
  
6.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto ctlClockLib e scegliere **Proprietà**.  
  
7.  Nella scheda **Firma** selezionare **Firma assembly**. Nella casella **Scegliere un file di chiave con nome sicuro** fare clic su **\<Sfoglia...\>** e passare al file key.snk nella cartella del progetto **MyToolWindowPackageUC**.  
  
8.  Compilare il programma e assicurarsi che non ci siano errori. Questo passaggio registra il pacchetto VSPackage e la relativa finestra degli strumenti con Visual Studio.  
  
9. Premere F5 per aprire un'istanza di Visual Studio nell'hive sperimentale.  
  
10. Nell'istanza sperimentale di Visual Studio scegliere **Altre finestre** dal menu **Visualizza** e quindi fare clic su **MyToolWindow**. Verrà visualizzata la finestra degli strumenti, con un display con l'ora in funzione.  
  
## Vedere anche  
 [Procedura dettagliata: modifica di un controllo composito con Visual C\#](../Topic/Walkthrough:%20Authoring%20a%20Composite%20Control%20with%20Visual%20C%23.md)