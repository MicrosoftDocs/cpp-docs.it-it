---
title: "Procedura dettagliata: Caricamento automatico degli elementi della casella degli strumenti | Microsoft Docs"
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
  - "Casella degli strumenti [Visual Studio SDK], aggiunta di controlli con reflection"
  - "reflection, casella degli strumenti"
ms.assetid: b03c0d62-3be0-475f-b1d9-725dee993ad6
caps.latest.revision: 56
caps.handback.revision: 56
manager: "douge"
---
# Procedura dettagliata: Caricamento automatico degli elementi della casella degli strumenti
Questa procedura dettagliata descrive il modo in cui un pacchetto VSPackage gestito può usare la reflection per caricare automaticamente tutti gli elementi <xref:System.Drawing.Design.ToolboxItem> forniti dal proprio assembly.  
  
> [!NOTE]
>  Il modo consigliato per aggiungere controlli personalizzati alla casella degli strumenti consiste nell'usare i modelli di controllo della casella degli strumenti forniti con Visual Studio SDK, che include il supporto per il caricamento automatico. Questo argomento viene mantenuto per motivi di compatibilità con le versioni precedenti, per l'aggiunta di controlli esistenti alla casella degli strumenti e per lo sviluppo avanzato della casella degli strumenti.  
>   
>  Per altre informazioni sulla creazione di controlli della casella degli strumenti usando i modelli, vedere [Procedura: Creare un controllo della casella degli strumenti che usa Windows Form](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) e [Creazione di un controllo casella degli strumenti WPF](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 Questa procedura dettagliata fornisce informazioni per eseguire i passaggi seguenti:  
  
1.  Aggiungere e registrare correttamente tutti i controlli della **casella degli strumenti** negli oggetti VSPackage usando <xref:System.ComponentModel.ToolboxItemAttribute>, <xref:System.Drawing.ToolboxBitmapAttribute> e <xref:System.ComponentModel.DisplayNameAttribute>.  
  
2.  Creare i due controlli seguenti e aggiungere le icone per ognuno di essi alla **casella degli strumenti**:  
  
    -   Aggiungere un controllo usando una classe <xref:System.Drawing.Design.ToolboxItem> predefinita.  
  
    -   Aggiungere un altro controllo usando una classe personalizzata derivata dalla classe <xref:System.Drawing.Design.ToolboxItem>.  
  
3.  Registrare i pacchetti VSPackage come oggetti <xref:System.Drawing.Design.ToolboxItem> che forniscono elementi e che hanno la classe <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute>.  
  
4.  Usare la reflection per generare un elenco di tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> forniti dal pacchetto VSPackage durante il suo caricamento.  
  
5.  Creare un gestore per gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>. Questa operazione garantisce che gli oggetti <xref:System.Drawing.Design.ToolboxItem> del pacchetto VSPackage vengano caricati correttamente.  
  
6.  Implementare un comando nel pacchetto VSPackage per forzare la reinizializzazione della **casella degli strumenti**.  
  
## Prerequisiti  
 Per seguire questa procedura dettagliata, è necessario installare Visual Studio SDK. Per altre informazioni, vedere [Panoramica sull'estensione di Visual Studio](../Topic/Extending%20Visual%20Studio%20Overview.md).  
  
## Posizioni del modello di progetto di pacchetto di Visual Studio  
 Il modello di progetto di pacchetto di Visual Studio si trova in tre posizioni diverse nella finestra di dialogo **Nuovo progetto**:  
  
1.  Nella sezione relativa all'estendibilità di Visual Basic. Il linguaggio predefinito del progetto è Visual Basic.  
  
2.  Nella sezione relativa all'estendibilità di C\#. Il linguaggio predefinito del progetto è C\#.  
  
3.  Nella sezione relativa all'estendibilità di altri tipi di progetto. Il linguaggio predefinito del progetto è C\+\+.  
  
## Creazione di un pacchetto VSPackage gestito  
  
#### Per creare il pacchetto VSPackage LoadToolboxMembers  
  
1.  Creare un pacchetto VSPackage denominato `LoadToolboxMembers`. Per altre informazioni, vedere [Procedura dettagliata: Creazione di un comando di menu tramite il modello di pacchetto di Visual Studio](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
2.  Aggiungere un comando di menu.  
  
     Assegnare al comando il nome `Initialize LoadToolboxMembers VB` per Visual Basic o `Initialize LoadToolboxMembers CS` per Visual C\#.  
  
 Se si segue questa procedura dettagliata per più linguaggi, è necessario aggiornare il progetto per evitare ambiguità tra gli assembly generati.  
  
#### Per evitare ambiguità tra pacchetti VSPackage di Visual Basic e Visual C\#  
  
1.  Per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]:  
  
    -   In **Esplora soluzioni** aprire le proprietà del progetto e selezionare la scheda **Applicazione**.  
  
         Modificare il nome dell'assembly in `LoadToolboxMembersVB` e lo spazio dei nomi predefinito in `Company.LoadToolboxMembersVB`.  
  
2.  Per [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)]:  
  
    1.  In **Esplora soluzioni** aprire le proprietà del progetto e selezionare la scheda **Applicazione**.  
  
         Modificare il nome dell'assembly in `LoadToolboxMembersCS` e lo spazio dei nomi predefinito in `Company.LoadToolboxMembersCS`.  
  
    2.  Aprire la classe LoadToolboxMembersPackage nell'editor di codice.  
  
         Per usare gli strumenti di refactoring per rinominare lo spazio dei nomi esistente, fare clic con il pulsante destro del mouse sul nome dello spazio dei nomi esistente, `LoadToolboxMembers`, scegliere **Refactoring** e quindi fare clic su **Rinomina**. Modificare il nome in `LoadToolboxMembersCS`.  
  
3.  Salvare tutte le modifiche.  
  
#### Per aggiungere riferimenti di supporto  
  
1.  Nel progetto LoadToolboxMembers aggiungere un riferimento al componente <xref:System.Drawing.Design?displayProperty=fullName> di .NET Framework nel modo seguente.  
  
    1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto LoadToolboxMembers e scegliere **Aggiungi** e quindi **Riferimento**.  
  
    2.  Nella scheda **.NET** della finestra di dialogo **Riferimenti** fare doppio clic su **System.Drawing.Design**.  
  
2.  Per Visual Basic, aggiungere gli spazi dei nomi seguenti all'elenco degli spazi dei nomi importati nel progetto:  
  
    -   Company.LoadToolboxMembersVB  
  
    -   System  
  
    -   System.ComponentModel  
  
    -   System.Drawing  
  
    -   System.Windows.Forms  
  
#### Per testare il codice generato  
  
1.  Compilare e avviare il pacchetto VSPackage nell'hive sperimentale di Visual Studio.  
  
2.  Scegliere **Inizializza LoadToolboxMembers VB** o **Initialize LoadToolboxMembers CS** dal menu **Strumenti**.  
  
     In questo modo, verrà aperta una finestra di messaggio contenente il testo che indica che il gestore della voce di menu del pacchetto è stato chiamato.  
  
3.  Chiudere la versione sperimentale di [!INCLUDE[vs_current_short](../misc/includes/vs_current_short_md.md)].  
  
## Creazione di un controllo della casella degli strumenti  
 In questa sezione viene creato e registrato un controllo utente, `Control1`, che dichiara un elemento della **casella degli strumenti** predefinito associato. Per altre informazioni su come creare controlli Windows Form e classi <xref:System.Drawing.Design.ToolboxItem>, vedere [Sviluppo di controlli Windows Form in fase di progettazione](../Topic/Developing%20Windows%20Forms%20Controls%20at%20Design%20Time.md).  
  
#### Per creare un controllo della casella degli strumenti che verrà usato con un oggetto ToolboxItem predefinito  
  
1.  In **Esplora soluzioni** aggiungere un oggetto <xref:System.Windows.Forms.UserControl> al progetto LoadToolboxMembers nel modo seguente:  
  
    1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto **LoadToolboxMembers**, scegliere **Aggiungi** e quindi fare clic su **Controllo utente**.  
  
    2.  Nella finestra di dialogo **Aggiungi nuovo elemento** modificare il nome in `Control1.vb` per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o in `Control1.cs` per [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)].  
  
         Per altre informazioni su come aggiungere nuovi elementi a un progetto, vedere [NIB: Procedura: Aggiungere nuovi elementi di progetto](http://msdn.microsoft.com/it-it/63d3e16b-de6e-4bb5-a0e3-ecec762201ce).  
  
     Il nuovo controllo viene aperto in visualizzazione Progettazione.  
  
2.  Dalla **casella degli strumenti** trascinare un controllo **Button** \(che si trova nella categoria **Controlli comuni**\) nella finestra di progettazione.  
  
3.  Fare doppio clic sul pulsante appena creato. In questo modo, verrà generato un gestore eventi per l'evento <xref:System.Windows.Forms.Control.Click> del pulsante. Aggiornare il gestore eventi usando il codice seguente:  
  
     [!code-cs[LoadToolboxMembers#01](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_1.cs)]
     [!code-vb[LoadToolboxMembers#01](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_1.vb)]  
  
4.  Modificare il costruttore del controllo in modo da impostare il testo del pulsante una volta chiamato il metodo `InitializeComponent`:  
  
     [!code-cs[LoadToolboxMembers#02](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_2.cs)]
     [!code-vb[LoadToolboxMembers#02](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_2.vb)]  
  
5.  Aggiungere attributi al file per permettere al pacchetto VSPackage di eseguire query sulla classe <xref:System.Drawing.Design.ToolboxItem> fornita:  
  
     [!code-cs[LoadToolboxMembers#03](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_3.cs)]
     [!code-vb[LoadToolboxMembers#03](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_3.vb)]  
  
6.  Salvare il file.  
  
 Nella routine seguente viene creato e registrato un secondo controllo utente, `Control2`, e un elemento della **casella degli strumenti** personalizzato associato, `Control2_ToolboxItem`, derivato dalla classe <xref:System.Drawing.Design.ToolboxItem>.  
  
#### Per creare un controllo della casella degli strumenti per l'uso di una classe personalizzata derivata da ToolboxItem  
  
1.  Creare un secondo controllo utente denominato `Control2`. Fare doppio clic sul form per visualizzare il file di codice.  
  
2.  Aggiungere `System.Drawing.Design` e `System.Globalization` agli spazi dei nomi usati nella classe.  
  
     [!code-cs[LoadToolboxMembers#04](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_4.cs)]
     [!code-vb[LoadToolboxMembers#04](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_4.vb)]  
  
3.  Aggiungere un pulsante e un gestore dell'evento Click del pulsante e aggiornare il costruttore del controllo allo stesso modo in cui è stato aggiornato il primo controllo.  
  
4.  Aggiungere gli attributi <xref:System.ComponentModel.DisplayNameAttribute>, <xref:System.ComponentModel.DescriptionAttribute>, <xref:System.ComponentModel.ToolboxItemAttribute> e <xref:System.Drawing.ToolboxBitmapAttribute> al file.  
  
     Questi attributi permettono al pacchetto VSPackage di eseguire una query per una classe <xref:System.Drawing.Design.ToolboxItem>.  
  
     Per altre informazioni ed esempi su come scrivere oggetti <xref:System.Drawing.Design.ToolboxItem> personalizzati, vedere la discussione nella pagina delle informazioni di riferimento su <xref:System.Drawing.Design.ToolboxItem>.  
  
     Insieme alle modifiche precedenti, la classe del secondo controllo deve assomigliare al codice seguente. Il simbolo `Control2_ToolboxMenu` verrà definito solo dopo il passaggio successivo.  
  
     [!code-cs[LoadToolboxMembers#05](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_5.cs)]
     [!code-vb[LoadToolboxMembers#05](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_5.vb)]  
  
5.  Creare una classe denominata `Control2_ToolboxItem`. Questo oggetto <xref:System.Drawing.Design.ToolboxItem> viene costruito per il secondo controllo e aggiunto alla **casella degli strumenti**. Alla classe deve essere applicato `SerializableAttribute`.  
  
     [!code-cs[LoadToolboxMembers#06](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_6.cs)]
     [!code-vb[LoadToolboxMembers#06](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_6.vb)]  
  
6.  Salvare il file.  
  
## Incorporamento di icone bitmap  
 Le due istanze di <xref:System.Drawing.ToolboxBitmapAttribute> usate in precedenza indicano che il progetto rappresenta i due controlli usando le icone seguenti:  
  
-   `Control1.bmp`, che si trova nello spazio dei nomi che contiene il primo controllo.  
  
-   `Control2.bmp`, che si trova nello spazio dei nomi che contiene il secondo controllo.  
  
#### Per incorporare icone bitmap per ToolboxItem  
  
1.  Aggiungere due nuove bitmap al progetto, come indicato di seguito.  
  
    1.  Fare clic con il pulsante destro del mouse sul progetto `LoadToolboxMembers`.  
  
    2.  Scegliere **Aggiungi** e quindi fare clic su **Nuovo elemento**.  
  
    3.  Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File bitmap** e assegnare al file il nome `Control1.bmp`.  
  
    4.  Ripetere questi passaggi per la seconda bitmap assegnandole il nome `Control2.bmp`.  
  
         In questo modo, ogni bitmap verrà visualizzata nell'editor delle bitmap di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
2.  Impostare le dimensioni di ogni icona su 16 x 16, come indicato di seguito.  
  
    1.  Per ogni bitmap, scegliere **Finestra Proprietà** dal menu **Visualizza**.  
  
    2.  Nella finestra **Proprietà** impostare **Altezza** e **Larghezza** su 16.  
  
3.  Usare l'editor delle bitmap in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per creare un'immagine per ogni icona.  
  
4.  In **Esplora soluzioni** fare clic su ogni file bitmap e quindi impostare la proprietà **Azione di compilazione** su **Risorsa incorporata** nella finestra **Proprietà**.  
  
5.  Salvare tutti i file aperti.  
  
## Modifica dell'implementazione di VSPackage  
 L'implementazione predefinita di VSPackage deve essere modificata per eseguire le operazioni seguenti:  
  
-   Registrare il supporto come provider di elementi della **casella degli strumenti**.  
  
-   Ottenere un elenco di oggetti <xref:System.Drawing.Design.ToolboxItem> supportati dal pacchetto VSPackage.  
  
-   Caricare l'oggetto <xref:System.Drawing.Design.ToolboxItem> nella **casella degli strumenti** di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] quando vengono gestiti gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>.  
  
 La routine seguente mostra come modificare l'implementazione del pacchetto.  
  
#### Per modificare l'implementazione del pacchetto in provider di elementi della casella degli strumenti per il pacchetto VSPackage  
  
1.  Aprire il file LoadToolboxMembersPackage.cs o LoadToolboxMembersPackage.vb nell'editor di codice.  
  
2.  Modificare la dichiarazione della classe `LoadToolboxMembersPackage`, che è l'implementazione della classe <xref:Microsoft.VisualStudio.Shell.Package> nella soluzione, nel modo indicato di seguito.  
  
    1.  Aggiungere le direttive dello spazio dei nomi seguenti al file di classe `LoadToolboxMembersPackage`.  
  
         [!code-cs[LoadToolboxMembers#07](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_7.cs)]
         [!code-vb[LoadToolboxMembers#07](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_7.vb)]  
  
    2.  Registrare il pacchetto VSPackage come classe <xref:System.Drawing.Design.ToolboxItem> aggiungendo un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute>.  
  
        > [!NOTE]
        >  L'unico argomento di <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> è la versione di <xref:System.Drawing.Design.ToolboxItem> fornita dal pacchetto VSPackage. Se si modifica questo valore, si forza l'IDE a caricare il pacchetto VSPackage anche se ha una versione della classe <xref:System.Drawing.Design.ToolboxItem> meno recente memorizzata nella cache.  
  
    3.  Aggiungere i due nuovi campi `private` seguenti alla classe `LoadToolboxMembersPackage`:  
  
         Un membro di <xref:System.Collections.ArrayList>, denominato `ToolboxItemList`, per contenere un elenco degli oggetti <xref:System.Drawing.Design.ToolboxItem> gestiti dalla classe `LoadToolboxMembersPackage`.  
  
         Un oggetto <xref:System.String>, denominato `CategoryTab`, che contiene la categoria o la scheda **Casella degli strumenti** usata per contenere gli oggetti <xref:System.Drawing.Design.ToolboxItem> gestiti dalla classe `LoadToolboxMembersPackage`.  
  
     Il risultato di questa modifica è simile al codice seguente:  
  
     [!code-cs[LoadToolboxMembers#08](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_8.cs)]
     [!code-vb[LoadToolboxMembers#08](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_8.vb)]  
  
3.  Espandere l'area Membri del pacchetto per modificare il metodo `Initialize` in modo da eseguire le operazioni seguenti:  
  
    -   Per [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], sottoscrivere gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>.  
  
    -   Chiamare il metodo `CreateItemList` per completare l'elemento `ToolboxItemList` dell'oggetto <xref:System.Collections.ArrayList>. L'oggetto `ToolboxItemList` conterrà un elenco di tutti gli elementi della casella degli strumenti gestiti da `LoadToolboxMembersPackage`.  
  
     [!code-cs[LoadToolboxMembers#09](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_9.cs)]
     [!code-vb[LoadToolboxMembers#09](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_9.vb)]  
  
4.  Aggiungere due metodi, `CreateItemList` e `CreateToolboxItem`, per costruire, tramite metadati, istanze degli oggetti <xref:System.Drawing.Design.ToolboxItem> disponibili nell'assembly `LoadToolboxMembers` nel modo seguente:  
  
     [!code-cs[LoadToolboxMembers#10](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_10.cs)]
     [!code-vb[LoadToolboxMembers#10](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_10.vb)]  
  
5.  Implementare il metodo `OnRefreshToolbox` per gestire gli eventi <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> e <xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded>.  
  
     Il metodo `OnRefreshToolbox` usa l'elenco di oggetti <xref:System.Drawing.Design.ToolboxItem> contenuto nel membro `ToolboxItemList` della classe `LoadToolboxMembersPackage`. Il metodo esegue anche le operazioni seguenti:  
  
    -   Rimuove tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> già presenti nella categoria della casella degli strumenti definita dalla variabile `CategoryTab`.  
  
    -   Aggiunge nuove istanze di tutti gli oggetti <xref:System.Drawing.Design.ToolboxItem> elencati in `ToolboxItemList` alla scheda di categoria per VSProject.  
  
    -   Imposta la scheda **Casella degli strumenti** attiva sulla scheda di categoria per VSProject.  
  
     [!code-cs[LoadToolboxMembers#11](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_11.cs)]
     [!code-vb[LoadToolboxMembers#11](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_11.vb)]  
  
    > [!NOTE]
    >  Come esercizio, si potrebbe sviluppare un meccanismo per testare la versione del pacchetto VSPackage o degli elementi ed eseguire l'aggiornamento solo se la versione di VSPackage o di <xref:System.Drawing.Design.ToolboxItem> è cambiata.  
  
## Inizializzazione della casella degli strumenti  
  
#### Per implementare un comando per l'inizializzazione della casella degli strumenti  
  
-   Modificare il metodo del gestore dei comandi voce di menu `MenuItemCallBack` nel modo indicato di seguito.  
  
    1.  Sostituire l'implementazione esistente di `MenuItemCallBack` con il codice seguente:  
  
         [!code-cs[LoadToolboxMembers#12](../misc/codesnippet/CSharp/walkthrough-autoloading-toolbox-items_12.cs)]
         [!code-vb[LoadToolboxMembers#12](../misc/codesnippet/VisualBasic/walkthrough-autoloading-toolbox-items_12.vb)]  
  
## Compilazione ed esecuzione della soluzione  
 È possibile provare il prodotto di questa procedura dettagliata usando un'istanza di Visual Studio in esecuzione nell'hive sperimentale.  
  
#### Per provare questa procedura dettagliata  
  
1.  In Visual Studio scegliere **Ricompila soluzione** dal menu **Compila**.  
  
2.  Premere F5 per avviare una seconda istanza di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] nell'hive del Registro di sistema sperimentale.  
  
     Per altre informazioni su come usare l'hive sperimentale, vedere [L'istanza sperimentale](../Topic/The%20Experimental%20Instance.md).  
  
3.  Fare clic sul menu **Strumenti**.  
  
     Nella parte superiore del menu viene visualizzato un comando denominato **Inizializza LoadToolboxMembers VB** o **Inizializza LoadToolboxMembers CS**, insieme a un'icona con il numero 1.  
  
4.  Creare una nuova applicazione Windows Forms [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] o [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
     Viene visualizzata una finestra di progettazione basata su <xref:System.Windows.Forms.Form>.  
  
5.  Trascinare uno o entrambi i nuovi controlli inclusi nella categoria **LoadToolboxMembers Walkthrough VB** o **LoadToolboxMembers Walkthrough CS** della **casella degli strumenti** nel form nella finestra di progettazione.  
  
    > [!NOTE]
    >  Se la **casella degli strumenti** non è visualizzata, scegliere **Casella degli strumenti** dal menu **Visualizza**. Se la scheda di categoria per VSPackage non è visualizzata nella **casella degli strumenti**, reinizializzare la **casella degli strumenti** scegliendo **Inizializza LoadToolboxMembers VB** o **Inizializza LoadToolboxMembers CS** dal menu **Strumenti**.  
  
6.  Compilare l'applicazione Windows scegliendo **Ricompila soluzione** dal menu **Compila**.  
  
7.  Eseguire l'applicazione scegliendo **Avvia** o **Avvia debug** dal menu **Debug**.  
  
8.  Quando l'applicazione viene eseguita, fare clic su uno dei controlli aggiunti all'applicazione.  
  
     Viene visualizzata una finestra di messaggio con `"Hello world from Company.LoadToolboxMembers.Control1"` o  `"Hello world from Company.LoadToolboxMembers.Control2"`.  
  
## Analisi dell'implementazione  
  
### Creazione di controlli della casella degli strumenti  
 Gli attributi assegnati a `Control1` e `Control2` vengono usati dal metodo `CreateItemList` quando esegue query su `Assembly` per i controlli della **casella degli strumenti** disponibili.  
  
-   <xref:System.ComponentModel.ToolboxItemAttribute> esegue le due funzioni seguenti:  
  
    -   Assegnazione di <xref:System.ComponentModel.ToolboxItemAttribute> a `Control1` e `Control2`, che indica che sono entrambi controlli della casella degli strumenti.  
  
    -   Argomento per il costruttore <xref:System.ComponentModel.ToolboxItemAttribute>, che indica se viene usato l'elemento <xref:System.Drawing.Design.ToolboxItem> predefinito o una classe personalizzata derivata da <xref:System.Drawing.Design.ToolboxItem> quando il controllo viene aggiunto alla **casella degli strumenti**.  
  
         L'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> assegnata a `Control1` viene creata usando un argomento `true`, che indica l'uso di una classe <xref:System.Drawing.Design.ToolboxItem> predefinita quando viene aggiunta alla **casella degli strumenti**.  
  
         L'istanza di <xref:System.ComponentModel.ToolboxItemAttribute> assegnata a `Control2` viene creata usando l'oggetto <xref:System.Type> di una classe derivata da <xref:System.Drawing.Design.ToolboxItem>, ovvero `Control2_ToolboxItem`.  
  
-   La classe <xref:System.Drawing.ToolboxBitmapAttribute> specifica le bitmap usate dall'ambiente per identificare i controlli.  
  
     L'incorporamento di una bitmap in un assembly impostandone la proprietà **Azione di compilazione** su **Risorsa incorporata** comporta l'inserimento della bitmap nello spazio dei nomi dell'assembly. Di conseguenza, è possibile fare riferimento a `Control1.bmp` come `Company.LoadToolboxMembers.Control1.bmp`.  
  
     <xref:System.Drawing.ToolboxBitmapAttribute> supporta un costruttore che accetta questo percorso completo come argomento. Ad esempio, una classe <xref:System.Drawing.ToolboxBitmapAttribute> potrebbe essere applicata a `Control1` usando `[ToolboxBitmap("Company.LoadToolboxMembers.Control1.bmp")]`.  
  
     Per supportare la flessibilità, questa procedura dettagliata usa un costruttore che accetta una classe <xref:System.Type> come primo argomento per il costruttore <xref:System.Drawing.ToolboxBitmapAttribute>. Lo spazio dei nomi usato per identificare il file bitmap viene ottenuto da <xref:System.Type> e inserito davanti al nome base della bitmap.  
  
     Poiché l'oggetto <xref:System.Type> che implementa <xref:Microsoft.VisualStudio.Shell.Package>, ovvero `LoadToolboxMembers`, si trova nello spazio dei nomi `Company.LoadToolboxMembers`, `[ToolboxBitmap(typeof(Control1), "Control1.bmp")]` equivale a `[ToolboxBitmap("Company.LoadToolboxMembers.Control1.bmp")]`.  
  
-   <xref:System.ComponentModel.DisplayNameAttribute> specifica il nome del controllo nella **casella degli strumenti**.  
  
### Registrazione di un provider di controlli della casella degli strumenti  
 L'applicazione della classe <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> alla classe che implementa <xref:Microsoft.VisualStudio.Shell.Package> influisce sulle impostazioni del Registro di sistema del pacchetto VSPackage risultante. Per altre informazioni sulle impostazioni del Registro di sistema per un provider di controlli <xref:System.Drawing.Design.ToolboxItem>, vedere [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md).  
  
 L'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] usa l'argomento di versione per il costruttore <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> per gestire la memorizzazione nella cache dei pacchetti VSPackage che forniscono elementi alla **casella degli strumenti**. Dopo che un pacchetto VSPackage è stato caricato per fornire elementi della **casella degli strumenti**, viene usata una versione del pacchetto VSPackage memorizzata nella cache fino a quando la versione registrata del provider non cambia. Di conseguenza, se si vuole modificare il prodotto di questa procedura dettagliata dopo averlo compilato, assicurarsi di modificare l'argomento di versione del costruttore <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> applicato a `AddToolboxItem`. Ad esempio, `[ProvideToolboxItems(1)]` deve essere modificato in `[ProvideToolboxItems(2)]`. Se la versione non viene modificata, l'ambiente di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] non carica alcuna modifica apportata.  
  
 In questa procedura dettagliata il pacchetto VSPackage è configurato per fornire solo controlli della **casella degli strumenti** che supportano il formato degli Appunti predefinito. Per un elenco dei formati degli Appunti predefiniti, vedere [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md). Se si vuole supportare altri formati degli Appunti o se si sceglie di non supportare alcun formato predefinito, applicare l'attributo <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> alla classe `LoadToolboxMembersPackage`. Per altre informazioni sulla registrazione di un provider di controlli della **casella degli strumenti**, vedere [Sviluppo avanzato di controlli della casella degli strumenti](../misc/advanced-toolbox-control-development.md).  
  
### Aggiunta di controlli alla casella degli strumenti  
 La funzionalità in `CreateItemList` emula gli elementi disponibili in <xref:System.Drawing.Design.ToolboxService.System%23Drawing%23Design%23IToolboxService%23GetToolboxItems%2A>.  
  
 Il metodo `CreateItemList` esamina solo gli oggetti <xref:System.Type> non astratti che implementano le interfacce <xref:System.ComponentModel.IComponent>.  
  
## Passaggi successivi  
 L'uso di <xref:System.Drawing.Design.ToolboxService.System%23Drawing%23Design%23IToolboxService%23GetToolboxItems%2A> invece di `CreateItemList` renderebbe il prodotto di questa procedura dettagliata più solido.  
  
 È anche possibile modificare `CreateItemList` in modo da usare <xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource%2A> per caricare controlli nella **casella degli strumenti** in base a un elenco di testo incorporato nell'assembly `LoadToolboxMembers`.  
  
## Vedere anche  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)   
 [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md)   
 [Sviluppo avanzato di controlli della casella degli strumenti](../misc/advanced-toolbox-control-development.md)   
 [Procedure dettagliate sulla casella degli strumenti](../misc/toolbox-walkthroughs.md)