---
title: "Procedura dettagliata: Visualizzazione degli smart tag | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "editor [Visual Studio SDK], novità - smart tag"
ms.assetid: 10bb4f69-b259-41f0-b91a-69b04385d9a5
caps.latest.revision: 31
caps.handback.revision: 31
manager: "douge"
---
# Procedura dettagliata: Visualizzazione degli smart tag
Gli smart tag sono deprecati e sono stati sostituiti dai menu Lampadina. Vedere [Procedura dettagliata: Visualizzazione di suggerimenti di lampadina](../Topic/Walkthrough:%20Displaying%20Light%20Bulb%20Suggestions.md).  
  
 Gli smart tag sono tag sul testo che si espandono per visualizzare un set di azioni. Ad esempio, in un progetto di Visual Basic o Visual C\# viene visualizzata una linea rossa sotto una parola quando si rinomina un identificatore, come un nome di variabile. Quando si sposta il puntatore del mouse sulla sottolineatura, viene visualizzato un pulsante accanto al puntatore. Se si fa clic sul pulsante, viene visualizzata un'azione consigliata, ad esempio la ridenominazione diIsRead in IsReady. Se si fa clic sull'azione, tutti i riferimenti a **IsRead** nel progetto vengono rinominati in **IsReady**.  
  
 Anche se gli smart tag fanno parte dell'implementazione di IntelliSense nell'editor, è possibile implementare smart tag creando sottoclassi di <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag> e quindi implementando le interfacce <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601> e <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider>.  
  
> [!NOTE]
>  Altri tipi di tag possono essere implementati in modo simile.  
  
 La procedura dettagliata seguente mostra come creare uno smart tag da visualizzare sulla parola corrente, contenente due azioni consigliate: la conversione inmaiuscole e la conversione inminuscole.  
  
## Prerequisiti  
 Per seguire questa procedura dettagliata, è necessario installare Visual Studio SDK. Per altre informazioni, vedere [Visual Studio SDK](../Topic/Visual%20Studio%20SDK.md).  
  
## Creazione di un progetto Managed Extensibility Framework \(MEF\)  
  
#### Per creare un progetto MEF  
  
1.  Creare un progetto di classificatore editor. Assegnare alla soluzione il nome `SmartTagTest`.  
  
2.  Aprire il file source.extension.vsixmanifest nell'Editor manifest VSIX.  
  
3.  Verificare che la sezione **Asset** contenga un tipo `Microsoft.VisualStudio.MefComponent`, che **Origine** sia impostato su `A project in current solution` e che **Progetto** sia impostato su SmartTagTest.dll.  
  
4.  Salvare e chiudere il file source.extension.vsixmanifest.  
  
5.  Aggiungere il riferimento seguente al progetto e impostare **CopyLocal** su `false`:  
  
     Microsoft.VisualStudio.Language.Intellisense  
  
6.  Eliminare i file di classe esistenti.  
  
## Implementazione di un tagger per gli smart tag  
  
#### Per implementare un tagger per gli smart tag  
  
1.  Aggiungere un file di classe e assegnargli il nome `TestSmartTag`.  
  
2.  Aggiungere le importazioni seguenti:  
  
     [!code-cs[VSSDKSmartTagTest#1](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_1.cs)]
     [!code-vb[VSSDKSmartTagTest#1](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_1.vb)]  
  
3.  Aggiungere una classe denominata `TestSmartTag` che eredita da <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>.  
  
     [!code-cs[VSSDKSmartTagTest#2](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_2.cs)]
     [!code-vb[VSSDKSmartTagTest#2](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_2.vb)]  
  
4.  Aggiungere un costruttore per la classe che chiama il costruttore base con <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType> impostato su <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType>, che fa sì che venga visualizzata una linea blu sotto il primo carattere di una parola. Se si usa <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType>, verrà visualizzata una riga rossa sotto l'ultimo carattere della parola.  
  
     [!code-cs[VSSDKSmartTagTest#3](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_3.cs)]
     [!code-vb[VSSDKSmartTagTest#3](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_3.vb)]  
  
5.  Aggiungere una classe denominata `TestSmartTagger` che eredita da <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601> con tipo `TestSmartTag` e che implementa <xref:System.IDisposable>.  
  
     [!code-cs[VSSDKSmartTagTest#4](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_4.cs)]
     [!code-vb[VSSDKSmartTagTest#4](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_4.vb)]  
  
6.  Aggiungere i campi privati seguenti alla classe del tagger.  
  
     [!code-cs[VSSDKSmartTagTest#5](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_5.cs)]
     [!code-vb[VSSDKSmartTagTest#5](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_5.vb)]  
  
7.  Aggiungere un costruttore che imposta i campi privati e sottoscrive l'evento <xref:Microsoft.VisualStudio.Text.Editor.ITextView.LayoutChanged>.  
  
     [!code-cs[VSSDKSmartTagTest#6](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_6.cs)]
     [!code-vb[VSSDKSmartTagTest#6](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_6.vb)]  
  
8.  Implementare <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601.GetTags%2A> in modo da creare il tag per la parola corrente. Questo metodo chiama anche un metodo privato `GetSmartTagActions`, che viene descritto più avanti.  
  
     [!code-cs[VSSDKSmartTagTest#7](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_7.cs)]
     [!code-vb[VSSDKSmartTagTest#7](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_7.vb)]  
  
9. Aggiungere un metodo `GetSmartTagActions` per configurare le azioni smart tag. Le azioni stesse verranno implementate in passaggi successivi.  
  
     [!code-cs[VSSDKSmartTagTest#8](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_8.cs)]
     [!code-vb[VSSDKSmartTagTest#8](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_8.vb)]  
  
10. Dichiarare l'evento `SmartTagsChanged`.  
  
     [!code-cs[VSSDKSmartTagTest#9](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_9.cs)]
     [!code-vb[VSSDKSmartTagTest#9](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_9.vb)]  
  
11. Implementare il gestore eventi `OnLayoutChanged` per generare l'evento `TagsChanged`, che provoca la chiamata di <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601.GetTags%2A>.  
  
     [!code-cs[VSSDKSmartTagTest#10](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_10.cs)]
     [!code-vb[VSSDKSmartTagTest#10](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_10.vb)]  
  
12. Implementare il metodo <xref:System.IDisposable.Dispose%2A> in modo che annulli la sottoscrizione dell'evento <xref:Microsoft.VisualStudio.Text.Editor.ITextView.LayoutChanged>.  
  
     [!code-cs[VSSDKSmartTagTest#11](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_11.cs)]
     [!code-vb[VSSDKSmartTagTest#11](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_11.vb)]  
  
## Implementazione del provider di tagger per gli smart tag  
  
#### Per implementare il provider di tagger per gli smart tag  
  
1.  Aggiungere una classe denominata `TestSmartTagTaggerProvider` che eredita da <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider>. Esportarla con <xref:Microsoft.VisualStudio.Utilities.ContentTypeAttribute> impostato su "text", <xref:Microsoft.VisualStudio.Utilities.OrderAttribute> impostato su Before\="default" e <xref:Microsoft.VisualStudio.Text.Tagging.TagTypeAttribute> impostato su <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>.  
  
     [!code-cs[VSSDKSmartTagTest#12](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_12.cs)]
     [!code-vb[VSSDKSmartTagTest#12](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_12.vb)]  
  
2.  Importare <xref:Microsoft.VisualStudio.Text.Operations.ITextStructureNavigatorSelectorService> come proprietà.  
  
     [!code-cs[VSSDKSmartTagTest#13](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_13.cs)]
     [!code-vb[VSSDKSmartTagTest#13](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_13.vb)]  
  
3.  Implementare il metodo <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider.CreateTagger%2A>.  
  
     [!code-cs[VSSDKSmartTagTest#14](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_14.cs)]
     [!code-vb[VSSDKSmartTagTest#14](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_14.vb)]  
  
## Implementazione di azioni smart tag  
  
#### Per implementare azioni smart tag  
  
1.  Creare due classi, denominate `UpperCaseSmartTagAction` e `LowerCaseSmartTagAction`. Entrambe le classi implementano <xref:Microsoft.VisualStudio.Language.Intellisense.ISmartTagAction>.  
  
     [!code-cs[VSSDKSmartTagTest#15](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_15.cs)]
     [!code-vb[VSSDKSmartTagTest#15](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_15.vb)]  
  
     [!code-cs[VSSDKSmartTagTest#16](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_16.cs)]
     [!code-vb[VSSDKSmartTagTest#16](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_16.vb)]  
  
 Le due classi sono simili, con l'unica eccezione che una chiama <xref:System.String.ToUpper%2A> e l'altra chiama <xref:System.String.ToLower%2A>. Anche se i passaggi seguenti descrivono solo la classe dell'azione per le maiuscole, è necessario implementarle entrambe. Usare i passaggi per l'implementazione dell'azione per le maiuscole come criterio per l'implementazione dell'azione per le minuscole.  
  
1.  Dichiarare un set di campi privati.  
  
     [!code-cs[VSSDKSmartTagTest#17](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_17.cs)]
     [!code-vb[VSSDKSmartTagTest#17](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_17.vb)]  
  
2.  Aggiungere un costruttore che imposta i campi.  
  
     [!code-cs[VSSDKSmartTagTest#18](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_18.cs)]
     [!code-vb[VSSDKSmartTagTest#18](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_18.vb)]  
  
3.  Implementare le proprietà nel modo indicato di seguito.  
  
     [!code-cs[VSSDKSmartTagTest#19](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_19.cs)]
     [!code-vb[VSSDKSmartTagTest#19](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_19.vb)]  
  
4.  Implementare il metodo <xref:Microsoft.VisualStudio.Language.Intellisense.ISmartTagAction.Invoke%2A> sostituendo il testo nell'intervallo con l'equivalente in maiuscole.  
  
     [!code-cs[VSSDKSmartTagTest#20](../misc/codesnippet/CSharp/walkthrough-displaying-smarttags_20.cs)]
     [!code-vb[VSSDKSmartTagTest#20](../misc/codesnippet/VisualBasic/walkthrough-displaying-smarttags_20.vb)]  
  
## Compilazione e testing del codice  
 Per testare questo codice, compilare la soluzione SmartTagTest ed eseguirla nell'istanza sperimentale.  
  
#### Per compilare e testare la soluzione SmartTagTest  
  
1.  Compilare la soluzione.  
  
2.  Quando si esegue questo progetto nel debugger, viene creata una seconda istanza di Visual Studio.  
  
3.  Creare un file di testo e digitare alcune parole.  
  
     Dovrebbe essere visualizzata una linea blu sotto la prima lettera della prima parola del testo.  
  
4.  Spostare il puntatore del mouse sulla linea blu.  
  
     Accanto al puntatore dovrebbe essere visualizzato un pulsante.  
  
5.  Quando si fa clic sul pulsante, dovrebbero essere visualizzate due azioni consigliate, ovvero la conversione inmaiuscole e la conversione inminuscole. Se si fa clic sulla prima azione, tutto il testo nella parola corrente verrà convertito in maiuscole. Se si fa clic sulla seconda azione, tutto il testo nella parola corrente verrà convertito in minuscole.  
  
## Vedere anche  
 [Procedura dettagliata: Collegamento di un tipo di contenuto a un'estensione nome File](../Topic/Walkthrough:%20Linking%20a%20Content%20Type%20to%20a%20File%20Name%20Extension.md)