---
title: "Procedura dettagliata: Pubblicazione di un modello di progetto di controllo Web | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "modelli, controlli Web"
  - "modelli di controllo Web"
ms.assetid: b56490f8-38bd-4220-a17e-5ebb30d3ac78
caps.latest.revision: 22
caps.handback.revision: 22
manager: "douge"
---
# Procedura dettagliata: Pubblicazione di un modello di progetto di controllo Web
È possibile creare un modello di progetto di controllo Web da usare come base per altri progetti di controllo Web. È anche possibile distribuire il modello come estensione VSIX.  
  
 Per distribuire un'estensione VSIX, è consigliabile aggiungerla al sito Web Visual Studio Gallery, perché gli sviluppatori possono usare Gestione estensioni per cercare estensioni nuove e aggiornate in questo sito. È inoltre possibile distribuire un'estensione mettendola in un server diverso oppure masterizzandola su CD o su altre risorse multimediali.  
  
 Questa procedura dettagliata, che fa parte di una coppia di procedure dettagliate correlate, spiega come creare un modello di progetto di controllo Web e quindi distribuirlo. L'altra procedura dettagliata, [Procedura dettagliata: Pubblicazione di un'estensione di Visual Studio](../Topic/Walkthrough:%20Publishing%20a%20Visual%20Studio%20Extension.md), spiega come creare e distribuire un controllo Web.  
  
 Questa procedura dettagliata contiene le sezioni seguenti:  
  
-   Creazione di un modello di progetto di controllo Web in un'estensione VSIX  
  
-   Pubblicazione del modello in Visual Studio Gallery  
  
-   Installazione del modello da Visual Studio Gallery  
  
-   Test del modello installato  
  
-   Aggiunta di una procedura guidata per l'azione di debug al modello  
  
## Prerequisiti  
 Per completare questa procedura dettagliata, è necessario comprendere i controlli Web e sapere come creare progetti, impostare le proprietà dei progetti e usare l'istanza sperimentale di Visual Studio. Nel computer devono essere installati sia Visual Studio sia Visual Studio SDK. Prima di iniziare questa procedura dettagliata, completare i passaggi in [Procedura dettagliata: Pubblicazione di un'estensione di Visual Studio](../Topic/Walkthrough:%20Publishing%20a%20Visual%20Studio%20Extension.md).  
  
## Creazione di un modello di progetto di controllo Web in un'estensione VSIX  
 Per creare un modello di progetto di controllo Web, è prima necessario creare un progetto di controllo Web. Per questa procedura dettagliata, iniziare con il progetto di controllo Web ColorTextControl, creato in [Procedura dettagliata: Pubblicazione di un'estensione di Visual Studio](../Topic/Walkthrough:%20Publishing%20a%20Visual%20Studio%20Extension.md).  
  
 Prima di pubblicare un modello di progetto in Visual Studio Gallery, usare la procedura guidata **Esporta modello come VSIX** per esportare il modello come estensione VSIX e assegnargli un'icona per identificarlo in **Gestione estensioni** e un'immagine per illustrare le funzionalità.  
  
#### Per preparare un progetto di controllo Web per la distribuzione  
  
1.  In Visual Studio aprire il progetto MyWebControls.  
  
2.  Usare **Gestione estensioni** per scaricare l'**Esportazione guidata modelli** dal sito Web [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkId=194329).  
  
     Dopo aver installato la procedura guidata, quando un progetto è aperto, nel menu **File** è disponibile la voce **Esporta modello come VSIX**.  
  
3.  Scegliere **Esporta modello come VSIX** dal menu **File**.  
  
     ![Esportazione del progetto come VSIX dal menu File](../misc/media/pcwc_exportasvsix.png "PCWC\_ExportAsVsix")  
  
4.  Nella pagina **Scegliere il tipo di modello** selezionare **Modello di progetto** e quindi selezionare MyWebControls.csproj. Scegliere **Avanti**.  
  
     ![Selezione di un modello di progetto](../misc/media/pcwc_choosetemplate.png "PCWC\_ChooseTemplate")  
  
5.  Nella pagina **Selezionare le opzioni del modello** impostare **Nome modello** su `Extensibility Color Text Web Toolbox Control` e **Descrizione modello** su `Color text web control project that produces a VSIX extension.`  
  
6.  Accanto alla casella **Immagine icona** fare clic su **Sfoglia**. Nella casella **Nome file** digitare `*.*`. Individuare Color.bmp e fare clic su **Apri**.  
  
7.  Accanto alla casella **Anteprima immagine** fare clic su **Sfoglia**. Nella casella **Nome file** digitare `*.*`. Individuare ScreenShot.bmp e fare clic su **Apri**. Scegliere **Avanti**.  
  
     ![Selezione delle opzioni del modello](../misc/media/pcwc_selecttemplateoptions2.png "PCWC\_SelectTemplateOptions2")  
  
8.  Nella pagina di selezione delleopzioni VSIX modificare **Nome prodotto** in `Extensibility Color Text Web Control Template`.  
  
9. Se si vuole, è possibile modificare **Nome società**, **Versione**, **Licenza** e **URL della Guida introduttiva**.  
  
10. Deselezionare l'opzione **Importa automaticamente il modello in Visual Studio**. Scegliere **Fine**.  
  
     ![Deselezione dell'importazione automatica del modello](../misc/media/pcwc_.png "PCWC\_")  
  
     In Esplora risorse, nella cartella ..\\Documenti\\Visual Studio *\<versione\>*\\My Exported Templates\\, è presente il file Extensibility Color Text Web Control Template.vsix.  
  
## Pubblicazione del modello in Visual Studio Gallery  
 Il modello di progetto è ora pronto per la pubblicazione in Visual Studio Gallery.  
  
#### Per pubblicare il modello in Visual Studio Gallery  
  
1.  In un Web browser aprire il sito Web [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkId=194329).  
  
2.  Nell'angolo in alto a destra fare clic su **Accedi**.  
  
3.  Usare l'account Microsoft per accedere. Se non si dispone di un account Microsoft, è possibile crearne uno qui.  
  
4.  Fare clic su **Upload**.  
  
5.  In **Step 1: Extension Type** selezionare **Project or Item Template** e quindi fare clic su **Next**.  
  
6.  In **Step 2: Upload** fare clic su **Browse**. Nella cartella \\My Exported Templates\\ selezionare Extensibility Color Text Web Control Template.vsix. Fare clic su **Next**.  
  
7.  In **Step 3: Basic Information** vengono visualizzate le informazioni della procedura guidata **Esporta modello come VSIX**.  
  
8.  Impostare **Category** su `ASP.NET` e **Tags** su `toolbox, web control, templates`.  
  
9. Leggere il contratto per i contributi e accettarlo e quindi digitare nella casella il testo visualizzato.  
  
10. Fare clic su **Create Contribution** e quindi su **Publish**.  
  
11. Cercare in Visual Studio Gallery il modello Extensibility Color Text Web Control Template. Dovrebbe venire visualizzata la voce relativa al modello.  
  
     ![Listato del nuovo modello di controllo Web](../misc/media/pcwc_templatelisting.png "PCWC\_TemplateListing")  
  
## Installazione del modello da Visual Studio Gallery  
 Una volta pubblicato il modello di progetto di controllo Web, installarlo in Visual Studio e testarlo.  
  
#### Per installare il modello di progetto di controllo Web in Visual Studio  
  
1.  In Visual Studio scegliere **Gestione estensioni** dal menu **Strumenti**.  
  
2.  Fare clic su **Raccolta online** e quindi cercare il modello Extensibility Color Text Web Control Template. Dovrebbe venire visualizzata la voce relativa al modello.  
  
3.  Scegliere **Download**. Dopo aver scaricato l'estensione, fare clic su **Installa**.  
  
## Test del modello installato  
 A questo punto, è possibile usare il modello di progetto Extensibility Color Text Web Control Template per creare controlli Web personalizzati. Non è necessario creare ogni controllo manualmente. Questa sezione mostra come usare il modello per creare un controllo Web BlueColorTextControl.  
  
#### Per creare un controllo Web basato sul modello  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi scegliere **Progetto**.  
  
2.  Nel riquadro sinistro fare clic su **Modelli online**, espandere **Modelli** e quindi fare clic su **ASP.NET**. Nel riquadro centrale fare clic su **Extensibility Color Text Web Control Template**.  
  
     ![Selezione del modello Web di estensibilità per il testo colorato](../misc/media/pcwc_newprojecttemplate.png "PCWC\_NewProjectTemplate")  
  
3.  Impostare **Nome** su `MoreWebControls`. Fare clic su **OK**.  
  
4.  In **Esplora soluzioni** rinominare ColorTextControl.cs in BlueColorTextControl.cs.  
  
5.  Fare doppio clic su BlueColorTextControl.cs per aprirlo nell'editor.  
  
6.  Nell'attributo `ToolboxData` sostituire entrambe le occorrenze di `ColorTextControl` con `BlueColorTextControl`.  
  
     Questi valori specificano i tag di apertura e chiusura generati per il controllo quando viene trascinato dalla **casella degli strumenti** a una pagina Web in fase di progettazione.  I valori devono corrispondere al nome della classe del controllo, che è anche il nome del controllo che verrà visualizzato nella **casella degli strumenti**.  
  
     La parte iniziale del codice sorgente della classe del controllo dovrebbe ora essere simile al codice seguente.  
  
    ```  
    namespace MoreWebControls { [DefaultProperty("Text")] [ToolboxData("<{0}:BlueColorTextControl runat=server> </{0}:BlueColorTextControl>")] [ProvideToolboxControl("MoreWebControls", false)] public class BlueColorTextControl : WebControl {  
  
    ```  
  
7.  Nel metodo `get` modificare `color:green` in `color:blue`.  
  
    ```  
    get { String s = (String)ViewState["Text"]; return "<span style='color:blue'>" + s + "</span>"; }  
    ```  
  
     Ciò consente di racchiudere il testo in un tag span che colora il testo di blu.  
  
8.  Compilare il progetto MoreWebControls.  
  
## Test del nuovo controllo Web  
 A questo punto, è possibile verificare se il nuovo controllo Web è disponibile nella **casella degli strumenti**. Tuttavia, anche se il progetto MoreWebControls è aperto, premendo F5 non si avvia un'istanza sperimentale di Visual Studio in cui testare il controllo. Ciò accade perché il progetto è basato sul modello Extensibility Color Text Web Control Template, che non può ancora impostare un'azione di debug. La sezione successiva illustra come aggiungere al modello una procedura guidata che imposta l'azione di debug. Per il momento, per testare il controllo eseguire la procedura seguente.  
  
#### Per testare il nuovo controllo Web  
  
1.  Per aprire un'istanza sperimentale di Visual Studio, avviare l'istanza sperimentale.  
  
    1.  In [!INCLUDE[win7](../build/includes/win7_md.md)] usare il menu **Start** \(**Start\/Tutti i programmi\/Microsoft Visual Studio \<versione\> SDK\/Tools\/Avvia l'istanza sperimentale di Microsoft Visual Studio \<versione\>**.  
  
    2.  In [!INCLUDE[win81](../misc/includes/win81_md.md)], nella schermata **Start**, digitare **Avvia l'istanza sperimentale di Microsoft Visual Studio \<versione\>**.  
  
2.  Creare un progetto di applicazione Web.  
  
3.  Nel progetto aprire default.aspx. Verificare che sia attiva la visualizzazione **Origine**.  
  
4.  Nella **casella degli strumenti**, nella categoria **MoreWebControls**, dovrebbe essere visualizzato **BlueColorTextControl**.  
  
     ![Controllo BlueColorTextControl MyWebControls](../misc/media/pcwc_toolbox2.png "PCWC\_Toolbox2")  
  
5.  Trascinare un controllo BlueColorTextControl in un punto qualsiasi nel tag `body` della pagina Web.  
  
6.  Nel tag `ColorTextControl` aggiungere un attributo `Text` e impostarne il valore su `Think Blue!`. Il tag risultante dovrebbe essere simile al seguente.  
  
    ```  
    <cc1:BlueColorTextControl ID="BlueColorTextControl1" Text="Think Blue!" runat="server" />  
  
    ```  
  
7.  Premere F5 per avviare il server di sviluppo ASP.NET.  
  
     La visualizzazione di BlueColorTextControl dovrebbe essere simile all'immagine seguente.  
  
     ![BlueColorTextControl esegue il rendering di Think Blue](../misc/media/pcwc_thinkblue.png "PCWC\_ThinkBlue")  
  
8.  Chiudere il server di sviluppo ASP.NET.  
  
9. Chiudere l'istanza sperimentale di Visual Studio.  
  
## Aggiunta di una procedura guidata per l'azione di debug al modello  
 Come indicato nella sezione precedente, se si preme F5 quando il progetto MoreWebControls è aperto, non viene aperta un'istanza sperimentale di Visual Studio. Viene invece visualizzato un messaggio che indica che è impossibile avviare direttamente un progetto con un tipo di output libreria di classi. Ciò si verifica quando il percorso dell'istanza sperimentale è sconosciuto a un progetto. Tuttavia, è possibile consentire a un modello di determinare il percorso dell'istanza sperimentale in un computer di destinazione e impostare l'azione di debug appropriata. Dopo questa operazione, tutti i progetti nel computer basati su tale modello risponderanno alla pressione di F5 come previsto.  
  
 Ogni modello di progetto di estendibilità incluso in Visual Studio SDK contiene una procedura guidata che viene eseguita durante l'installazione, individua l'istanza sperimentale nel computer di destinazione e imposta l'azione di debug. È possibile creare una procedura guidata personalizzata per eseguire questa operazione ed è possibile includerla in ogni modello distribuito.  
  
 Per aggiungere una procedura guidata per l'azione di debug al modello Extensibility Color Text Web Control Template, è necessario eliminare la prima versione del modello, aggiungere la procedura guidata e quindi ricreare il modello.  
  
#### Per eliminare la prima versione del modello  
  
1.  Nell'angolo in alto a sinistra del sito Web Visual Studio Gallery fare clic su **My Contributions**. Verrà visualizzata la voce relativa al modello **Extensibility Color Text Web Control Template**.  
  
2.  Per rimuovere definitivamente il modello di progetto da Visual Studio Gallery, fare clic su **Delete**.  
  
3.  In Visual Studio scegliere **Gestione estensioni** dal menu **Strumenti**.  
  
4.  Selezionare **Extensibility Color Text Web Control Template** e quindi fare clic su **Disinstalla**.  
  
5.  Chiudere **Gestione estensioni**.  
  
6.  Chiudere la soluzione MoreWebControls.  
  
7.  Chiudere Visual Studio.  
  
8.  Eliminare la cartella della soluzione MoreWebControls.  
  
9. Per completare il processo di disinstallazione, riavviare Visual Studio.  
  
 La procedura guidata per l'azione di debug deve avere un'implementazione pubblica di `Microsoft.VisualStudio.TemplateWizard.IWizard` e deve essere firmata usando un nome di assembly sicuro.  
  
#### Per creare la procedura guidata per l'azione di debug  
  
1.  Nella finestra di dialogo **Nuovo progetto** creare un progetto **Visual C\#**, **Windows**, **Libreria di classi** e denominarlo `MyWizard`.  
  
2.  Nel nuovo progetto rinominare class1.cs in MyWizard.cs.  
  
3.  Sostituire il contenuto di MyWizard.cs con il codice seguente.  
  
    ```  
    using System; using System.Collections.Generic; using System.Linq; using System.Text; using Microsoft.VisualStudio.TemplateWizard; using System.Globalization; using EnvDTE; namespace MyWizard { public class MyWizard : IWizard { public void BeforeOpeningFile(ProjectItem projectItem) { } public void ProjectFinishedGenerating(Project project) { foreach (Configuration config in project.ConfigurationManager) { //Set up the debug options to run "devenv /rootsuffix Exp"; config.Properties.Item("StartAction").Value = 1; //Get the full path to devenv.exe through DTE.FullName config.Properties.Item("StartProgram").Value = project.DTE.FullName; config.Properties.Item("StartArguments").Value = "/rootsuffix Exp"; } } public void ProjectItemFinishedGenerating(ProjectItem projectItem) { } public void RunFinished() { } public void RunStarted(object automationObject, Dictionary<string, string> replacementsDictionary, WizardRunKind runKind, object[] customParams) { } public bool ShouldAddProjectItem(string filePath) { return true; } } }  
  
    ```  
  
4.  Aggiungere i riferimenti seguenti al progetto. Se sono disponibili più opzioni, selezionare il riferimento con un percorso di [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)].  
  
    -   EnvDTE  
  
    -   Microsoft.VisualStudio.TemplateWizardInterface  
  
5.  Fare clic con il pulsante destro del mouse sul progetto MyWizard e quindi scegliere **Proprietà**. Nella scheda **Firma** selezionare l'opzione **Firma assembly**.  
  
6.  Nell'elenco **Scegli un file chiave con nome sicuro** selezionare **\<Nuovo…\>**. Verrà visualizzata la finestra di dialogo **Crea chiave con nome sicuro**.  
  
7.  Impostare **Nome file di chiave** su `key.snk` e deselezionare l'opzione **Proteggi file di chiave con una password**.  
  
     ![Specifica di un file di chiave](../misc/media/pcwc_strongname.png "PCWC\_StrongName")  
  
8.  Fare clic su **OK** per aggiungere key.snk al progetto.  
  
9. Compilare il progetto MyWizard per il rilascio. La procedura guidata è ora pronta per essere usata.  
  
10. Chiudere la soluzione MyWizard.  
  
#### Per incorporare la procedura guidata e ricreare il modello  
  
1.  Seguire i passaggi nella sezione precedente, Creazione di un modello di progetto di controllo Web in un'estensione VSIX, apportando però queste modifiche e aggiunte:  
  
    -   Non è necessario scaricare di nuovo la procedura guidata **Esporta modello come VSIX**.  
  
    -   Nella procedura guidata **Esporta modello come VSIX**, nella pagina di selezione delleopzioni VSIX, nella casella **Procedura guidata** passare al file \\bin\\Release\\MyWizard.dll creato nei passaggi precedenti e selezionarlo.  
  
         ![Definizione dell'assembly della procedura guidata](../misc/media/pcwc_wizardassembly.png "PCWC\_WizardAssembly")  
  
    -   Quando viene chiesto di sovrascrivere il file di output dell'estensione VSIX esistente, fare clic su **Sì**.  
  
2.  Quando si raggiunge la sezione Test del nuovo controllo Web, premere F5. Dovrebbe venire avviata un'istanza sperimentale di Visual Studio.  
  
## Passaggi successivi  
 Questa procedura dettagliata ha illustrato come usare la procedura guidata **Esporta modello come VSIX** per creare e distribuire un modello di progetto. Se è necessario un maggiore controllo del modello di progetto, ad esempio per scegliere l'icona visualizzata nella finestra di dialogo **Nuovo progetto**, è necessario creare esplicitamente il modello di progetto ed eseguirne il wrapping in un'estensione VSIX. Per altre informazioni, vedere il post relativo a [creazione e condivisione di modelli di progetto e di elemento](http://go.microsoft.com/fwlink/?LinkId=194551) nel sito Web del blog di Visual Studio.  
  
## Vedere anche  
 [Distribuzione di estensioni di Visual Studio](../Topic/Shipping%20Visual%20Studio%20Extensions.md)