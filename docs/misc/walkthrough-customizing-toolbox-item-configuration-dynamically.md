---
title: "Procedura dettagliata: Personalizzazione della configurazione dinamica degli elementi della casella degli strumenti | Microsoft Docs"
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
  - "Casella degli strumenti [Visual Studio SDK], aggiunta di controlli (formati personalizzati)"
ms.assetid: 761f44b7-c748-4ff5-921f-fc4f71784b0e
caps.latest.revision: 45
caps.handback.revision: 45
manager: "douge"
---
# Procedura dettagliata: Personalizzazione della configurazione dinamica degli elementi della casella degli strumenti
Questa procedura dettagliata mostra in che modo un pacchetto VSPackage gestito può fornire supporto per la configurazione dinamica di oggetti <xref:System.Drawing.Design.ToolboxItem>.  
  
> [!NOTE]
>  Il modo più semplice per aggiungere controlli personalizzati alla casella degli strumenti consiste nell'usare i modelli di controllo della casella degli strumenti inclusi in Visual Studio SDK. Questo argomento è correlato allo sviluppo avanzato della casella degli strumenti.  
>   
>  Per altre informazioni su come creare controlli della casella degli strumenti usando i modelli, vedere [Procedura: Creare un controllo della casella degli strumenti che usa Windows Form](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) e [Creazione di un controllo casella degli strumenti WPF](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 Questa procedura dettagliata fornisce informazioni per eseguire i passaggi seguenti:  
  
1.  Aggiungere e registrare correttamente tutti i controlli della **casella degli strumenti** negli oggetti VSPackage usando le classi <xref:System.ComponentModel.ToolboxItemAttribute> e <xref:System.Drawing.ToolboxBitmapAttribute>.  
  
2.  Creare i due controlli seguenti e aggiungere le icone per ognuno di essi alla **casella degli strumenti**:  
  
    -   Un controllo che dichiara un oggetto <xref:System.Drawing.Design.ToolboxItem> predefinito associato.  
  
    -   Un controllo che dichiara un elemento della **casella degli strumenti** personalizzato associato derivato dalla classe <xref:System.Drawing.Design.ToolboxItem>.  
  
3.  Scrivere un'implementazione di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> e registrarla eseguendo queste operazioni:  
  
    1.  Definire una classe di filtro che deriva dalla classe <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> e specifica le istanze di <xref:System.Drawing.Design.ToolboxItem> a cui si applicherà questa implementazione.  
  
    2.  Applicare un oggetto <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute>, che fa riferimento alla classe di filtro, alla classe che implementa la classe <xref:Microsoft.VisualStudio.Shell.Package> per il pacchetto VSPackage.  
  
4.  Registrare il pacchetto VSPackage come provider di oggetti <xref:System.Drawing.Design.ToolboxItem> applicando <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> alla classe che implementa la classe <xref:Microsoft.VisualStudio.Shell.Package> per il pacchetto VSPackage.  
  
5.  In fase di caricamento del pacchetto, usare la reflection per generare un elenco di tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> forniti dal pacchetto VSPackage.  
  
6.  Creare un gestore per gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>. Questa operazione garantisce che gli oggetti <xref:System.Drawing.Design.ToolboxItem> del pacchetto VSPackage vengano caricati correttamente.  
  
7.  Implementare un comando nel pacchetto VSPackage per forzare la reinizializzazione della **casella degli strumenti**.  
  
## Prerequisiti  
 Per seguire questa procedura dettagliata, è necessario installare Visual Studio SDK. Per altre informazioni, vedere [Visual Studio SDK](../Topic/Visual%20Studio%20SDK.md).  
  
## Posizioni del modello di progetto di pacchetto di Visual Studio  
 Il modello di progetto di pacchetto di Visual Studio si trova in tre posizioni diverse nella finestra di dialogo **Nuovo progetto**:  
  
1.  Nella sezione relativa all'estendibilità di Visual Basic. Il linguaggio predefinito del progetto è Visual Basic.  
  
2.  Nella sezione relativa all'estendibilità di C\#. Il linguaggio predefinito del progetto è C\#.  
  
3.  Nella sezione relativa all'estendibilità di altri tipi di progetto. Il linguaggio predefinito del progetto è C\+\+.  
  
## Creazione di un pacchetto VSPackage gestito  
 Completare le routine seguenti per creare un pacchetto VSPackage gestito.  
  
#### Per creare un pacchetto VSPackage gestito per fornire elementi della casella degli strumenti  
  
1.  Creare un pacchetto VSPackage denominato `ItemConfiguration`. Per altre informazioni, vedere [Procedura dettagliata: Creazione di un comando di menu tramite il modello di pacchetto di Visual Studio](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
2.  Nel modello **Pacchetto di Visual Studio** aggiungere un comando di menu.  
  
     Assegnare al comando il nome `Initialize ItemConfigurationVB` per Visual Basic o `Initialize ItemConfigurationCS` per Visual C\#.  
  
3.  Per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], aggiungere gli spazi dei nomi seguenti all'elenco di spazi dei nomi importati nel progetto generato:  
  
    -   Company.ItemConfiguration  
  
    -   System  
  
    -   System.ComponentModel  
  
    -   System.Drawing  
  
    -   System.Windows.Forms  
  
4.  Aggiungere un riferimento al componente di .NET Framework <xref:System.Drawing.Design?displayProperty=fullName>.  
  
 Se si segue questa procedura dettagliata per più linguaggi, è necessario aggiornare il progetto per evitare ambiguità tra gli assembly generati.  
  
#### Per evitare ambiguità tra pacchetti VSPackage di Visual Basic e Visual C\#  
  
1.  Per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]:  
  
    1.  Aprire le proprietà del progetto e selezionare la scheda **Applicazione**.  
  
         Modificare il nome dell'assembly in `ItemConfigurationVB` e lo spazio dei nomi predefinito in `Company.ItemConfigurationVB`.  
  
    2.  Selezionare la scheda **Riferimenti**.  
  
         Aggiornare l'elenco di spazi dei nomi importati.  
  
         Rimuovere Company.ItemConfiguration.  
  
         Aggiungere Company.ItemConfigurationVB.  
  
2.  Per [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)]:  
  
    1.  Aprire le proprietà del progetto e selezionare la scheda **Applicazione**.  
  
         Modificare il nome dell'assembly in `ItemConfigurationCS` e lo spazio dei nomi predefinito in `Company.ItemConfigurationCS`.  
  
    2.  Aprire la classe ItemConfigurationPackage nell'editor di codice.  
  
         Per usare gli strumenti di refactoring per rinominare lo spazio dei nomi esistente, fare clic con il pulsante destro del mouse sul nome dello spazio dei nomi esistente, `ItemConfiguration`, scegliere **Refactoring** e quindi fare clic su **Rinomina**. Modificare il nome in `ItemConfigurationCS`.  
  
3.  Salvare tutte le modifiche.  
  
#### Per testare il codice generato  
  
1.  Compilare e avviare il pacchetto VSPackage nell'hive sperimentale di Visual Studio.  
  
2.  Dal menu **Strumenti** scegliere **Inizializza ItemConfiguration VB** o **Inizializza ItemConfiguration CS**.  
  
     In questo modo, verrà aperta una finestra di messaggio contenente il testo che indica che il gestore della voce di menu del pacchetto è stato chiamato.  
  
3.  Chiudere la versione sperimentale di [!INCLUDE[vs_current_short](../misc/includes/vs_current_short_md.md)].  
  
## Creazione di controlli della casella degli strumenti  
 In questa sezione viene creato e registrato un controllo utente, `Control1`, che dichiara un elemento della **casella degli strumenti** predefinito associato. Viene inoltre creato e registrato un secondo controllo utente, `Control2`, con l'elemento della **casella degli strumenti** personalizzato associato, `Control2_ToolboxItem`, derivato dalla classe <xref:System.Drawing.Design.ToolboxItem>. Per altre informazioni su come creare controlli Windows Form e classi <xref:System.Drawing.Design.ToolboxItem>, vedere [Sviluppo di controlli Windows Form in fase di progettazione](../Topic/Developing%20Windows%20Forms%20Controls%20at%20Design%20Time.md).  
  
#### Per creare elementi della casella degli strumenti predefiniti e personalizzati  
  
1.  Fare riferimento alle istruzioni in [Procedura dettagliata: Caricamento automatico degli elementi della casella degli strumenti](../misc/walkthrough-autoloading-toolbox-items.md) per creare un elemento della **casella degli strumenti** predefinito e un elemento della **casella degli strumenti** personalizzato, come descritto di seguito.  
  
    1.  Completare la routine per la creazione di un controllo della **casella degli strumenti** che verrà usato con un oggetto ToolboxItem predefinito. Aggiornare l'oggetto <xref:System.ComponentModel.DescriptionAttribute> per fare riferimento a questo progetto.  
  
         Il codice risultante per la classe `Control1` deve assomigliare al codice seguente.  
  
         [!code-cs[DynamicToolboxMembers#01](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_1.cs)]
         [!code-vb[DynamicToolboxMembers#01](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_1.vb)]  
  
    2.  Completare la routine per la creazione di un controllo della **casella degli strumenti** per l'uso di una classe personalizzata derivata da ToolboxItem. Aggiornare l'oggetto <xref:System.ComponentModel.DescriptionAttribute> per fare riferimento a questo progetto.  
  
         Il codice risultante per le classi `Control2` e `Control2_ToolboxItem` deve assomigliare al codice seguente.  
  
         [!code-vb[DynamicToolboxMembers#02](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_2.vb)]
         [!code-cs[DynamicToolboxMembers#02](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_2.cs)]  
  
2.  Salvare i file.  
  
## Incorporamento di icone bitmap  
 L'attributo <xref:System.Drawing.ToolboxBitmapAttribute> applicato a ogni controllo specifica l'icona da associare al controllo. Creare le bitmap per entrambi i controlli e assegnare i nomi seguenti:  
  
-   `Control1.bmp`, per la classe `Control1`.  
  
-   `Control2.bmp`, per la classe `Control2`.  
  
#### Per incorporare un'icona bitmap per un elemento della casella degli strumenti  
  
1.  Aggiungere una nuova bitmap al progetto, come indicato di seguito:  
  
    1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto VSPackage, scegliere **Aggiungi** e quindi fare clic su **Nuovo elemento**.  
  
    2.  Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File bitmap** e immettere il nome della bitmap.  
  
2.  Usare l'editor di bitmap per creare un'icona di 16x16, come indicato di seguito.  
  
    1.  Scegliere **Finestra Proprietà** dal menu **Visualizza**.  
  
    2.  Nella finestra **Proprietà** impostare **Altezza** e **Larghezza** su 16.  
  
    3.  Usare l'editor per creare l'immagine dell'icona.  
  
3.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sull'elemento bitmap e quindi scegliere **Proprietà**.  
  
4.  Impostare la proprietà **Azione di compilazione** su **Risorsa incorporata**.  
  
5.  Salvare tutti i file aperti.  
  
## Aggiunta di un provider di configurazione dinamica della casella degli strumenti  
 In questa sezione si crea e si registra una classe che implementa l'interfaccia <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>. L'IDE \(Integrated Development Environment, ambiente di sviluppo integrato\) di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] crea un'istanza di questa classe e usa la classe per configurare i controlli della **casella degli strumenti**.  
  
> [!NOTE]
>  Poiché l'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] crea un'istanza dell'implementazione di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>, non implementare l'interfaccia <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> nella classe che implementa <xref:Microsoft.VisualStudio.Shell.Package> per un pacchetto VSPackage.  
  
#### Per creare e registrare un oggetto di configurazione dei controlli della casella degli strumenti  
  
1.  In **Esplora soluzioni** aggiungere una classe al progetto ItemConfiguration e denominarla `ToolboxConfig`.  
  
2.  Aggiungere le istruzioni di spazi dei nomi seguenti al file.  
  
     [!code-cs[DynamicToolboxMembers#03](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_3.cs)]
     [!code-vb[DynamicToolboxMembers#03](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_3.vb)]  
  
3.  Verificare che la classe `ToolboxConfig` sia di tipo `public` e implementi l'interfaccia <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.  
  
4.  Applicare un oggetto <xref:System.Runtime.InteropServices.GuidAttribute> e un oggetto <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> alla classe `ToolboxConfig``.`  
  
    -   Per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], usare un nome di assembly `"ItemConfigurationVB, Version=*, Culture=*, PublicKeyToken=*"`.  
  
    -   Per [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], usare un nome di assembly `"ItemConfigurationCS, Version=*, Culture=*, PublicKeyToken=*"`.  
  
     In questo modo, la classe `ToolboxConfig` funziona solo negli oggetti <xref:System.Drawing.Design.ToolboxItem> forniti dall'assembly che contiene il pacchetto VSPackage corrente.  
  
     [!code-cs[DynamicToolboxMembers#04](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_4.cs)]
     [!code-vb[DynamicToolboxMembers#04](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_4.vb)]  
  
     È possibile generare un GUID scegliendo **Crea GUID** dal menu **Strumenti**. Selezionare il **formato con parentesi quadre**, fare clic su **Copia** e quindi incollare il GUID nel codice. Modificare la parola chiave `GUID` in `Guid`.  
  
5.  Implementare il metodo <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> dell'interfaccia <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> in modo che il metodo funzioni solo sulle due classi <xref:System.Drawing.Design.ToolboxItem>, `Control1` e `Control2`.  
  
     L'implementazione di <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> applica le istanze di <xref:System.ComponentModel.ToolboxItemFilterAttribute> ai due oggetti <xref:System.Drawing.Design.ToolboxItem> in modo che:  
  
    -   L'oggetto <xref:System.Drawing.Design.ToolboxItem> implementato da `Control1` sia disponibile solo nella **casella degli strumenti** per le finestre di progettazione che gestiscono oggetti <xref:System.Windows.Forms.UserControl>.  
  
    -   L'oggetto <xref:System.Drawing.Design.ToolboxItem> implementato da `Control2` non sia disponibile nella **casella degli strumenti** per le finestre di progettazione che gestiscono oggetti <xref:System.Windows.Forms.UserControl>.  
  
     [!code-cs[DynamicToolboxMembers#05](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_5.cs)]
     [!code-vb[DynamicToolboxMembers#05](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_5.vb)]  
  
## Modifica dell'implementazione di VSPackage  
 L'implementazione predefinita di VSPackage fornita dal modello di pacchetto di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] deve essere modificata per eseguire le operazioni seguenti:  
  
-   Eseguire la registrazione come provider di elementi della **casella degli strumenti**.  
  
-   Registrare la classe che fornisce la configurazione dinamica dei controlli della **casella degli strumenti** per il pacchetto VSPackage.  
  
-   Usare l'oggetto <xref:System.Drawing.Design.ToolboxService> per caricare tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> forniti dall'assembly VSPackage.  
  
-   Gestire gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>.  
  
#### Per modificare l'implementazione del pacchetto per un provider di elementi della casella degli strumenti in VSPackage  
  
1.  Aprire la classe ItemConfigurationPackage nell'editor di codice.  
  
2.  Modificare la dichiarazione della classe `ItemConfigurationPackage`, che è l'implementazione della classe <xref:Microsoft.VisualStudio.Shell.Package> nella soluzione.  
  
    1.  Aggiungere le istruzioni di spazi dei nomi seguenti al file.  
  
         [!code-vb[DynamicToolboxMembers#06](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_6.vb)]
         [!code-cs[DynamicToolboxMembers#06](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_6.cs)]  
  
    2.  Per registrare il pacchetto VSPackage come provider di elementi della **casella degli strumenti**, applicare un oggetto <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> al pacchetto. Per registrare la classe `ToolboxConfig` come provider di una configurazione dinamica dei controlli della **casella degli strumenti**, applicare un oggetto <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> al pacchetto.  
  
         [!code-vb[DynamicToolboxMembers#07](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_7.vb)]
         [!code-cs[DynamicToolboxMembers#07](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_7.cs)]  
  
        > [!NOTE]
        >  L'unico argomento di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> è la versione di <xref:System.Drawing.Design.ToolboxItem> fornita dal pacchetto VSPackage. Se si modifica questo valore, si forza l'IDE a caricare il pacchetto VSPackage anche se la versione memorizzata nella cache di <xref:System.Drawing.Design.ToolboxItem> è precedente.  
  
    3.  Creare due nuovi campi `private` nella classe `ItemConfiguration`, come indicato di seguito:  
  
         Un membro di <xref:System.Collections.ArrayList>, denominato `ToolboxItemList`, per contenere un elenco degli oggetti <xref:System.Drawing.Design.ToolboxItem> gestiti dalla classe `ItemConfiguration`.  
  
         Un oggetto <xref:System.String>, denominato `CategoryTab`, che contiene la scheda **Casella degli strumenti** usata per contenere gli oggetti <xref:System.Drawing.Design.ToolboxItem> gestiti dalla classe `ItemConfiguration`.  
  
         [!code-vb[DynamicToolboxMembers#08](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_8.vb)]
         [!code-cs[DynamicToolboxMembers#08](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_8.cs)]  
  
     Il risultato di questa modifica è simile al codice seguente:  
  
     [!code-vb[DynamicToolboxMembers#09](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_9.vb)]
     [!code-cs[DynamicToolboxMembers#09](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_9.cs)]  
  
3.  Definire un metodo `OnRefreshToolbox` per gestire gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>.  
  
     Il metodo `OnRefreshToolbox` usa l'elenco di oggetti <xref:System.Drawing.Design.ToolboxItem> contenuto nel campo `ToolboxItemList` ed esegue le operazioni seguenti:  
  
    -   Rimuove tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> dalla scheda **Casella degli strumenti** definita dal campo `CategoryTab`.  
  
    -   Aggiunge alla scheda **Casella degli strumenti** nuove istanze di tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> elencati nel campo `ToolboxItemList`.  
  
    -   Imposta la scheda **Casella degli strumenti** come scheda attiva.  
  
     [!code-vb[DynamicToolboxMembers#10](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_10.vb)]
     [!code-cs[DynamicToolboxMembers#10](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_10.cs)]  
  
4.  Per [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], nel costruttore, registrare il metodo `OnRefreshToolbox` come gestore degli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>.  
  
     [!code-cs[DynamicToolboxMembers#11](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_11.cs)]  
  
5.  Modificare il metodo `Initialize` in `ItemConfigurationPackage` per compilare il campo `ToolboxItemList` chiamando il metodo <xref:System.Drawing.Design.ToolboxService.GetToolboxItems%2A> della classe <xref:System.Drawing.Design.ToolboxService?displayProperty=fullName>. Il servizio **casella degli strumenti** ottiene tutte le classi di elementi della **casella degli strumenti** definite nell'assembly attualmente in esecuzione. Il campo `ToolboxItemList` viene usato dai gestori eventi della **casella degli strumenti** per caricare gli elementi della **casella degli strumenti**.  
  
     Aggiungere il codice seguente alla fine del metodo `Initialize`.  
  
     [!code-vb[DynamicToolboxMembers#12](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_12.vb)]
     [!code-cs[DynamicToolboxMembers#12](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_12.cs)]  
  
    > [!NOTE]
    >  Come esercizio, si potrebbe sviluppare un meccanismo per testare la versione del pacchetto VSPackage o degli elementi ed eseguire l'aggiornamento solo se la versione di VSPackage o la versione di <xref:System.Drawing.Design.ToolboxItem> è cambiata.  
  
## Inizializzazione della casella degli strumenti  
  
#### Per implementare un comando per l'inizializzazione della casella degli strumenti  
  
-   Nella classe `ItemConfigurationPackage` modificare il metodo `MenuItemCallBack`, che è il gestore del comando della voce di menu.  
  
     Sostituire l'implementazione esistente del metodo `MenuItemCallBack` usando il codice seguente:  
  
     [!code-vb[DynamicToolboxMembers#13](../misc/codesnippet/VisualBasic/walkthrough-customizing-toolbox-item-configuration-dynamically_13.vb)]
     [!code-cs[DynamicToolboxMembers#13](../misc/codesnippet/CSharp/walkthrough-customizing-toolbox-item-configuration-dynamically_13.cs)]  
  
## Compilazione ed esecuzione della soluzione  
 È possibile provare il prodotto di questa procedura dettagliata usando un'istanza di Visual Studio in esecuzione nell'hive sperimentale.  
  
#### Per provare questa procedura dettagliata  
  
1.  In Visual Studio scegliere **Ricompila soluzione** dal menu **Compila**.  
  
2.  Premere F5 per avviare una seconda istanza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] nell'hive del Registro di sistema sperimentale.  
  
     Per altre informazioni su come usare l'hive sperimentale, vedere [L'istanza sperimentale](../Topic/The%20Experimental%20Instance.md).  
  
3.  Fare clic sul menu **Strumenti**.  
  
     Nella parte superiore del menu viene visualizzato un comando denominato **Inizializza ItemConfiguration VB** o **Inizializza ItemConfiguration CS**, insieme a un'icona con il numero 1.  
  
4.  Creare una nuova applicazione Windows Forms [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] o [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
     Viene visualizzata una finestra di progettazione basata su <xref:System.Windows.Forms.Form>.  
  
5.  Aggiungere un controllo utente al progetto.  
  
     Viene visualizzata una finestra di progettazione di controlli utente.  
  
6.  Bloccare la **casella degli strumenti** mantenendola aperta e passare tra le due visualizzazioni Progettazione.  
  
     Si noti che l'elemento della **casella degli strumenti** visibile e quello nascosto dipendono dalla finestra di progettazione con lo stato attivo.  
  
7.  Trascinare il primo elemento della **casella degli strumenti** nel controllo utente per aggiungere un'istanza di `Control1` al controllo utente.  
  
8.  Trascinare il secondo elemento della **casella degli strumenti** nel form per aggiungere un'istanza di `Control2` al form.  
  
9. Compilare l'applicazione Windows.  
  
     Il controllo utente per l'applicazione è ora disponibile nella **casella degli strumenti**.  
  
10. Aggiungere il controllo utente dell'applicazione al form e quindi ricompilare l'applicazione ed eseguirla.  
  
     Quando l'applicazione viene eseguita, fare clic su ogni controllo nel form per ottenere la finestra di messaggio associata.  
  
## Analisi dell'implementazione  
 Poiché il parametro `assemblyFilter` è presente nel costruttore della classe <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute>, il metodo <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> della classe `ToolboxConfg` si applica solo agli oggetti <xref:System.Drawing.Design.ToolboxItem> nell'assembly generato in questa procedura dettagliata.  
  
 Quindi, ogni volta che la categoria **ItemConfiguration Walkthrough** è attiva nella **casella degli strumenti**, viene chiamato il metodo <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem.ConfigureToolboxItem%2A> della classe `ToolboxConfg` e le istanze di <xref:System.ComponentModel.ToolboxItemFilterAttribute> vengono applicate agli oggetti <xref:System.Drawing.Design.ToolboxItem> implementati da `Control1` e `Control2`.  
  
## Vedere anche  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)   
 [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md)   
 [Sviluppo avanzato di controlli della casella degli strumenti](../misc/advanced-toolbox-control-development.md)   
 [Procedure dettagliate sulla casella degli strumenti](../misc/toolbox-walkthroughs.md)