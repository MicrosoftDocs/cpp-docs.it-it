---
title: "Procedura dettagliata: Creazione di un controllo della casella degli strumenti WPF | Microsoft Docs"
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
  - "casella degli strumenti"
  - "wpf"
ms.assetid: 8223c06e-f327-4778-8709-e0cc7eae2c78
caps.latest.revision: 15
caps.handback.revision: 15
manager: "douge"
---
# Procedura dettagliata: Creazione di un controllo della casella degli strumenti WPF
Il modello di controllo della casella degli strumenti WPF incluso in Visual Studio SDK consente di creare controlli Windows Presentation Foundation \(WPF\) che vengono aggiunti automaticamente alla **casella degli strumenti** quando l'estensione viene installata. Questa procedura dettagliata mostra come usare il modello per creare un controllo contatore che è possibile distribuire ad altri utenti.  
  
## Prerequisiti  
 Per seguire questa procedura dettagliata, è necessario installare Visual Studio SDK. Per altre informazioni, vedere [Visual Studio SDK](../Topic/Visual%20Studio%20SDK.md).  
  
## Individuazione del modello di controllo della casella degli strumenti WPF in Visual Studio  
 Il modello di controllo della casella degli strumenti WPF è disponibile nella finestra di dialogo **Nuovo progetto** in **Modelli installati**, in queste posizioni:  
  
-   **Visual Basic**, **Extensibility**. Il linguaggio del progetto è Visual Basic.  
  
-   **Visual C\#**, **Extensibility**. Il linguaggio del progetto è Visual C\#.  
  
## Creazione di un progetto di controllo della casella degli strumenti WPF  
 Il modello di controllo della casella degli strumenti WPF crea un controllo utente non definito e fornisce tutte le funzionalità necessarie per aggiungere il controllo alla **casella degli strumenti**.  
  
#### Per creare il progetto  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nella finestra di dialogo **Nuovo progetto**, in **Modelli installati**, fare clic sul nodo per il linguaggio di programmazione preferito e quindi selezionare **Extensibility**. Nell'elenco di tipi di progetto scegliere **Controllo della casella degli strumenti WPF**.  
  
3.  Nella casella **Nome** digitare il nome da usare per il progetto. Questa procedura dettagliata usa il nome `Counter`. Fare clic su **OK**.  
  
     Ciò comporterà la creazione di una soluzione contenente un controllo utente, un attributo per posizionare il controllo nella **casella degli strumenti** e il manifesto VSIX per la distribuzione. La casella **Nome** imposta il nome della soluzione e il nome dello spazio dei nomi, ma non il nome del controllo visualizzato nella **casella degli strumenti**. Questo nome verrà impostato più avanti nella procedura dettagliata.  
  
### Creazione di un'interfaccia utente per il controllo  
 Il controllo `Counter` richiede tre controlli figlio: due controlli <xref:System.Windows.Controls.Label> per visualizzare il testo e il conteggio corrente e un controllo <xref:System.Windows.Controls.Button> per reimpostare il conteggio su 0. Non sono necessari altri controlli figlio, perché le applicazioni di hosting incrementeranno il contatore a livello di codice.  
  
##### Per creare l'interfaccia utente  
  
1.  In **Esplora soluzioni** fare doppio clic sul file ToolboxControl.cs per aprirlo nella finestra di progettazione.  
  
     La finestra di progettazione mostra un controllo <xref:System.Windows.Controls.Grid> che contiene un controllo <xref:System.Windows.Controls.Button>.  
  
2.  Selezionare il controllo <xref:System.Windows.Controls.Grid> e quindi fare clic sulle barre blu visualizzate sui lati superiore e sinistro della griglia per dividere la griglia in due righe e due colonne.  
  
3.  Dalla **casella degli strumenti** trascinare un controllo <xref:System.Windows.Controls.Label> su ognuna delle celle nella riga superiore della griglia.  
  
     A questo punto, è possibile impostare il layout del controllo disponendo gli elementi sulla griglia. In alternativa, è possibile modificare direttamente il codice XAML \(Extensible Application Markup Language\) in modo che il controllo si ridimensioni dinamicamente per adattarsi al testo.  
  
4.  Nel riquadro **XAML** impostare l'altezza degli elementi `RowDefinition` e la larghezza degli elementi `ColumnDefinition` su `"auto"`.  
  
5.  Modificare il markup per il pulsante e le due etichette in modo simile all'esempio seguente.  
  
     [!code-xml[ToolboxControlWPF#11](../misc/codesnippet/Xaml/walkthrough-creating-a-wpf-toolbox-control_1.xaml)]  
  
     Gli attributi `Grid.Row` e `Grid.Column` impostano la posizione degli elementi sulla griglia. L'attributo `Grid.ColumnSpan` del pulsante consente il ridimensionamento della prima colonna indipendentemente dalla larghezza del pulsante.  
  
     Gli attributi `Content` delle etichette usano una sintassi `{Binding}` per associare le proprietà che verranno definite più avanti nella procedura dettagliata.  
  
### Codifica del controllo utente  
 Il controllo `Counter` esporrà un metodo per incrementare il contatore, un evento da generare ogni volta che il contatore viene incrementato, un pulsante `Reset` e tre proprietà per archiviare il conteggio corrente, il testo visualizzato e se mostrare o nascondere il pulsante `Reset`. L'attributo `ProvideTolboxControl` determina la posizione nella **casella degli strumenti** in cui verrà visualizzato il controllo `Counter`.  
  
 È possibile scrivere questo controllo nello stesso modo in cui si scriverebbe un controllo Windows Form, ovvero usando gestori eventi e metodi pubblici per impostare il contenuto delle etichette. In WPF, tuttavia, è possibile impostare un contesto dei dati per il controllo, per poter associare gli attributi degli elementi XAML direttamente alle proprietà nel codice. Questo modello fornisce anche un livello di astrazione per separare le funzionalità di base dall'interfaccia utente \(UI\) del controllo.  
  
 Questa procedura dettagliata mostra come creare una classe di modello di dati e quindi associare il contesto dei dati del controllo al modello di dati.  
  
##### Per creare un modello di dati  
  
1.  Fare doppio clic sul pulsante per aprire la finestra del codice.  
  
2.  All'inizio del file aggiungere una direttiva `using` per lo spazio dei nomi <xref:System.ComponentModel>.  
  
3.  Dopo la classe generata, creare una classe pubblica per definire il contesto dei dati.  
  
     [!code-cs[ToolboxControlWPF#01](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_2.cs)]  
  
     Questa classe implementa l'interfaccia <xref:System.ComponentModel.INotifyPropertyChanged>, che consente l'associazione degli elementi XAML alle proprietà definite.  
  
4.  Fare clic con il pulsante destro del mouse sulla dichiarazione dell'interfaccia <xref:System.ComponentModel.INotifyPropertyChanged>, fare clic su **Implementa interfaccia** e quindi fare di nuovo clic su **Implementa interfaccia**.  
  
     Visual Studio dichiara un evento `PropertyChanged`.  
  
5.  Dopo la dichiarazione dell'evento, creare il metodo privato seguente per generare l'evento.  
  
     [!code-cs[ToolboxControlWPF#02](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_3.cs)]  
  
6.  Creare i campi privati e le proprietà pubbliche seguenti per contenere i valori delle due etichette nel controllo.  
  
     [!code-cs[ToolboxControlWPF#03](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_4.cs)]  
  
     Generando l'evento `PropertyChanged`, l'associazione XAML aggiorna il contenuto dei controlli associati. Impostando le proprietà come `public`, le si rende disponibili per la finestra di progettazione, ma non per altri programmi, a meno che non siano associati a questo contesto dei dati.  
  
 Ora che è stato creato il modello di dati, è possibile implementare la funzionalità code\-behind del controllo.  
  
##### Per implementare il controllo  
  
1.  Nella definizione della classe parziale che implementa il controllo fare clic con il pulsante destro del mouse sul nome della classe, scegliere **Refactoring**, fare clic su **Rinomina** e quindi modificare il nome della classe in `Counter`. Questo nome verrà visualizzato nella **casella degli strumenti** quando l'estensione viene installata.  
  
2.  Immediatamente sopra la definizione di classe, nella dichiarazione dell'attributo `ProvideToolboxControl`, modificare il valore del primo parametro da `"Counter"` a `"General"`. In questo modo si imposta il nome del gruppo di elementi che ospiterà il controllo nella **casella degli strumenti**.  
  
     L'esempio seguente mostra l'attributo `ProvideToolboxControl` e la definizione di classe modificata.  
  
     [!code-cs[ToolboxControlWPF#04](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_5.cs)]  
  
3.  Creare un campo privato per contenere il contesto dei dati per il controllo e quindi nel costruttore assegnare il contesto dei dati alla classe `MyDataModel`, come illustrato nell'esempio seguente.  
  
     [!code-cs[ToolboxControlWPF#05](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_6.cs)]  
  
4.  Creare le proprietà pubbliche seguenti per rispecchiare le proprietà `Text` e `Count` del contesto dei dati.  
  
     [!code-cs[ToolboxControlWPF#06](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_7.cs)]  
  
     Queste proprietà rendono disponibile il contenuto del contesto dei dati per qualsiasi applicazione che include il controllo.  
  
5.  Creare il metodo pubblico seguente per incrementare il contatore e un evento per la notifica all'applicazione di hosting.  
  
     [!code-cs[ToolboxControlWPF#07](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_8.cs)]  
  
6.  Implementare il gestore dell'evento Click per il pulsante `Reset`, come illustrato di seguito.  
  
     [!code-cs[ToolboxControlWPF#08](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_9.cs)]  
  
7.  Aggiungere la proprietà pubblica seguente per mostrare o nascondere il pulsante `Reset`.  
  
     [!code-cs[ToolboxControlWPF#09](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_10.cs)]  
  
## Test del controllo  
 Per testare un controllo della **casella degli strumenti**, eseguirne il test prima di tutto nell'ambiente di sviluppo e quindi in un'applicazione di hosting.  
  
#### Per testare il controllo  
  
1.  Premere F5.  
  
     In questo modo, il progetto viene creato e viene aperta una seconda istanza di Visual Studio con il controllo installato.  
  
2.  Nella nuova istanza di Visual Studio creare un progetto di applicazione WPF.  
  
3.  In **Esplora soluzioni** fare doppio clic sul file MainWindow.xaml per aprirlo nella finestra di progettazione.  
  
4.  Dalla sezione **Generale** della **casella degli strumenti** trascinare un controllo **Counter** sul form e selezionarlo.  
  
     Le proprietà `Text` e `ShowReset` devono essere visualizzate nella finestra **Proprietà**, insieme alle altre proprietà ereditate da <xref:System.Windows.Controls.UserControl>. La proprietà `Count` non deve essere visualizzata perché è di sola lettura.  
  
5.  Modificare il valore della proprietà `Text`.  
  
     Il testo dell'etichetta visualizzato nella finestra di progettazione dovrebbe cambiare.  
  
6.  Impostare la proprietà `ShowReset` su `Hidden` e quindi impostarla di nuovo su `Visible`.  
  
     Il pulsante `Reset` nel controllo dovrebbe scomparire e quindi venire visualizzato di nuovo.  
  
7.  Trascinare un controllo <xref:System.Windows.Controls.Button> sul form, impostare il relativo attributo `Content``` su `Test` e quindi fare doppio clic sul pulsante per aprire il gestore dell'evento Click nella visualizzazione Codice.  
  
8.  Implementare il gestore dell'evento Click per chiamare il metodo `Increment` del controllo.  
  
     [!code-cs[ToolboxControlWPF#21](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_11.cs)]  
  
9. Nella funzione del costruttore, dopo la chiamata a `InitializeComponent`, digitare `counter1.Implemented +=` e quindi premere TAB due volte per generare un gestore per l'evento `Counter.Incremented`.  
  
10. Implementare il nuovo gestore come illustrato nell'esempio seguente.  
  
     [!code-cs[ToolboxControlWPF#22](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_12.cs)]  
  
11. Premere F5.  
  
     L'applicazione WPF dovrebbe aprirsi.  
  
12. Fare clic su **Test**.  
  
     Il valore del contatore dovrebbe aumentare e il pulsante dovrebbe presentare un leggero effetto di dissolvenza.  
  
13. Fare clic su **Test** altre quattro volte.  
  
     Il valore del contatore dovrebbe aumentare e il pulsante dovrebbe continuare a presentare un effetto di dissolvenza fino a scomparire. Se si continua a fare clic nella posizione in cui era presente il pulsante, il valore del contatore dovrebbe continuare ad aumentare.  
  
14. Fare clic su **Reimposta**.  
  
     Il contatore dovrebbe venire reimpostato su **0**.  
  
## Passaggi successivi  
 Quando si crea un controllo della **casella degli strumenti**, Visual Studio crea un file denominato *NomeProgetto*.vsix nella cartella \\bin\\debug\\ del progetto. È possibile distribuire il controllo caricando il file VSIX in una rete o in un sito Web. Quando un utente apre il file VSIX, il controllo viene installato e aggiunto alla **casella degli strumenti** di Visual Studio. In alternativa, se si carica il file VSIX nel sito Web [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkID=123847), gli utenti potranno trovarlo cercando con **Gestione estensioni**.  
  
## Vedere anche  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)   
 [Creazione di un controllo casella degli strumenti di Windows Form](../Topic/Creating%20a%20Windows%20Forms%20Toolbox%20Control.md)   
 [Estensione di altre parti di Visual Studio](../Topic/Extending%20Other%20Parts%20of%20Visual%20Studio.md)   
 [Uso di controlli in WPF Designer](http://msdn.microsoft.com/it-it/c6235492-b10d-4c3c-ba67-6b6a545faee1)   
 [Panoramica della creazione di controlli](../Topic/Control%20Authoring%20Overview.md)