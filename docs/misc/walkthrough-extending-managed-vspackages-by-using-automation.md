---
title: "Procedura dettagliata: Estensione dei pacchetti VSPackage gestiti tramite l&#39;automazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "pacchetti VSPackage gestiti, estensione tramite l'automazione"
  - "automazione [Visual Studio SDK], procedure dettagliate"
  - "automazione [Visual Studio SDK], pacchetti VSPackage gestiti"
ms.assetid: 7fd2000b-8ec3-4d83-b169-d38008fb57ee
caps.latest.revision: 35
caps.handback.revision: 35
manager: "douge"
---
# Procedura dettagliata: Estensione dei pacchetti VSPackage gestiti tramite l&#39;automazione
Questa procedura dettagliata descrive come usare l'automazione per creare un pacchetto VSPackage gestito che modifica l'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. È necessario creare un pacchetto VSPackage gestito di esempio e quindi usare i metodi di automazione nel pacchetto VSPackage risultante per visualizzare le proprietà di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] nella finestra **Output**.  
  
## Prerequisiti  
 Per seguire questa procedura dettagliata, è necessario installare Visual Studio SDK. Per altre informazioni, vedere [Visual Studio SDK](../Topic/Visual%20Studio%20SDK.md).  
  
## Posizioni del modello di progetto di pacchetto di Visual Studio  
 Il modello di progetto di pacchetto di Visual Studio si trova in tre posizioni diverse nella finestra di dialogo **Nuovo progetto**:  
  
1.  Nella sezione relativa all'estendibilità di Visual Basic. Il linguaggio predefinito del progetto è Visual Basic.  
  
2.  Nella sezione relativa all'estendibilità di C\#. Il linguaggio predefinito del progetto è C\#.  
  
3.  Nella sezione relativa all'estendibilità di altri tipi di progetto. Il linguaggio predefinito del progetto è C\+\+.  
  
### Per creare un pacchetto VSPackage gestito  
  
1.  Creare un progetto di pacchetto di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] denominato `Auto`.  
  
     Per altre informazioni su come creare un pacchetto VSPackage gestito, vedere [Procedura dettagliata: Creazione di un comando di menu tramite il modello di pacchetto di Visual Studio](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
2.  Nella pagina **Selezionare un linguaggio di programmazione** impostare il linguaggio su [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)].  
  
3.  Mantenere i valori predefiniti nella pagina **Informazioni VSPackage di base**.  
  
4.  Nella pagina **Seleziona opzioni VSPackage** selezionare la casella di controllo **Comando di menu**.  
  
5.  Nella pagina **Opzioni comando** modificare il valore di **Nome comando** in `Auto`.  
  
6.  Fare clic sul pulsante **Fine**.  
  
     Il modello genera un progetto gestito denominato Auto.  
  
7.  Compilare la soluzione e verificare che l'operazione avvenga senza errori.  
  
### Per chiamare il modello di automazione  
  
1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto Auto e scegliere **Aggiungi**, quindi **Riferimento**.  
  
2.  Nella scheda **.NET** della finestra di dialogo **Riferimento** fare doppio clic su **EnvDTE**.  
  
     Verrà aggiunto un riferimento allo spazio dei nomi di automazione EnvDTE.  
  
3.  Nel file AutoPackage aggiungere il riferimento allo spazio dei nomi seguente.  
  
     [!code-cs[VSSDKAuto#1](../misc/codesnippet/CSharp/walkthrough-extending-managed-vspackages-by-using-automation_1.cs)]
     [!code-vb[VSSDKAuto#1](../misc/codesnippet/VisualBasic/walkthrough-extending-managed-vspackages-by-using-automation_1.vb)]  
  
4.  Nel file AutoPackage sostituire il corpo del metodo `MenuItemCallback` con le righe seguenti:  
  
     [!code-cs[VSSDKAuto#2](../misc/codesnippet/CSharp/walkthrough-extending-managed-vspackages-by-using-automation_2.cs)]
     [!code-vb[VSSDKAuto#2](../misc/codesnippet/VisualBasic/walkthrough-extending-managed-vspackages-by-using-automation_2.vb)]  
  
 Questo codice chiama <xref:Microsoft.VisualStudio.Shell.Package.GetService%2A> per ottenere un oggetto di automazione <xref:EnvDTE.DTE> che rappresenta l'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Il codice di automazione in `MenuItemCallback` crea un nuovo riquadro denominato **Test** nella finestra **Output**. Il nome e la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] vengono quindi scritti nel nuovo riquadro **Output**.  
  
1.  Compilare e avviare il progetto Auto in modalità di debug premendo F5.  
  
     Verrà avviata la build sperimentale di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \([!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Exp\).  
  
    > [!NOTE]
    >  A questo punto, vengono aperte entrambe le versioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
2.  In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Exp scegliere **Auto** dal menu **Strumenti**.  
  
     Verrà aperto un nuovo riquadro chiamato **Test** nella finestra **Output**, che visualizzerà l'output seguente:  
  
    ```  
    Name is Microsoft Visual Studio Version is x.xx  
    ```  
  
     Dove x.xx è il numero di versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] più recente.  
  
     Per altre informazioni sugli esempi di automazione, vedere gli [esempi di automazione per Visual Studio](http://www.microsoft.com/downloads/details.aspx?familyid=3ff9c915-30e5-430e-95b3-621dccd25150&displaylang=en).  
  
## Vedere anche  
 [Estensione dell'ambiente Visual Studio](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)