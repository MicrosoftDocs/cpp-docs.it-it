---
title: "Architettura della pagina di iniziale | Microsoft Docs"
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
  - "architettura della pagina di iniziale"
  - "XAML della pagina di iniziale"
ms.assetid: f94afe27-0be3-47d9-8e17-b0fd429017bd
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Architettura della pagina di iniziale
In questo documento vengono descritte l'architettura della finestra degli strumenti della pagina iniziale inclusa in Visual Studio.  È possibile utilizzare queste informazioni per aggiungere o modificare gli elementi della pagina iniziale senza modificarne la struttura sottostante.  
  
 La pagina iniziale di Visual Studio è scritta in \(WPF\) Windows Presentation Foundation eXtensible Application Markup Language \(XAML\).  Per ulteriori informazioni sul markup XAML, vedere [Cenni preliminari su XAML \(WPF\)](../Topic/XAML%20Overview%20\(WPF\).md).  
  
## Struttura della pagina  
 La pagina iniziale è costituito da un elemento di <xref:System.Windows.Controls.Image> e due elementi di <xref:System.Windows.Controls.Grid> in un elemento di `Grid`di primo livello.  L'elemento di `Image` estende la parte superiore della finestra degli strumenti e contiene il logo di Visual Studio.  Nel logo, l'elemento sinistro di `Grid`contiene i pulsanti di comando per i nuovi progetti, l'elenco di **progetti recenti** e uno per le opzioni di pagina iniziale.  L'elemento di `Grid`di destra contiene un elemento di <xref:System.Windows.Controls.TabControl> che include una scheda di **Iniziare** , una scheda di **istruzione e risorse** e una scheda di **Novità** .  Una colonna centrale è definita tra gli elementi sinistro e destro di `Grid`, ma non contiene e viene utilizzata solo come spazio vuoto.  
  
### Corpo della finestra  
 Lo sfondo della finestra degli strumenti sono rappresentati dall'elemento di primo livello di `Grid`.  La larghezza delle colonne chiave sono definite in questo caso, nell'elemento di `ColumnDefinitions` .  L'altezza di un'immagine del logo è impostata nell'elemento di `RowDefinitions` .  
  
 Le definizioni e le definizioni delle colonne di riga sono archiviate nelle matrici in base zero.  Per inserire un elemento in una griglia, impostare gli attributi di `Grid.Row` e di `Grid.Column` in base agli indici di <xref:System.Windows.Controls.ColumnDefinition> e di elementi corrispondenti di <xref:System.Windows.Controls.RowDefinition> .  
  
### Un'immagine del logo  
 Il logo di Visual Studio che occupa la prima riga della griglia di primo livello \(`Grid.Row="0"`\) come elemento di `Image` .  Per visualizzare un'immagine diverso, scegliere l'attributo di `Source` dell'elemento di `Image` un file di immagine diverso.  Per rimuovere l'immagine, eliminare l'elemento di `Image` e impostare l'attributo di `height` dell'elemento di primo livello corrispondente di `RowDefinition` a `0` \(zero\) per nascondere la riga superiore della griglia.  
  
### colonna sinistra  
 La colonna di sinistra della pagina iniziale è rappresentata da un elemento di `Grid`a `Grid.Column="0"` e a `Grid.Row="1"`.  Questo elemento contiene le definizioni di tre righe, che ospitano la griglia dei pulsanti di comando, la griglia recente di progetti e un elemento di `StackPanel` per visualizzare le opzioni di Visual Studio.  
  
 È possibile aggiungere un elemento nella griglia aggiungendolo a una delle righe esistenti o aggiungere una nuova definizione di riga.  Quando si definisce una nuova riga, è necessario incrementare i valori di `Grid.Row` di tutti gli elementi presenti nella nuova riga.  
  
### Colonna centrale  
 La colonna centrale è un spazio vuoto e non contiene elementi.  Per aggiungere un elemento alla colonna centrale, inserirla a `Grid.Column="1"` e a `Grid.Row="1"`.  Assicurarsi modificare l'attributo di `Width` della definizione di colonna in base alla modifica.  
  
### Colonna destra  
 La colonna destra contiene un elemento di `Grid` a `Grid.Column="1"` e a `Grid.Row="1"`.  La griglia contiene un elemento di `TabControl` con tre schede.  
  
 È possibile aggiungere una scheda aggiunta di un elemento di <xref:System.Windows.Controls.TabItem> al controllo Struttura a schede, come [Procedura dettagliata: Aggiunta di XAML personalizzato nella pagina iniziale](../Topic/Walkthrough:%20Adding%20Custom%20XAML%20to%20the%20Start%20Page.md)illustrato in alternativa, è possibile modificare o rimuovere schede esistenti.  Le schede visualizzati da sinistra a destra nell'\(UI\) interfaccia utente nello stesso ordine in cui appaiono longitudinali nel markup.  
  
 Se si aggiunge un elemento a destra griglia della colonna all'esterno del controllo Struttura a schede, è consigliabile definire una nuova riga o colonna della griglia per assicurarsi che venga visualizzato come previsto.  
  
## Vedere anche  
 [Personalizzazione della pagina iniziale](../Topic/Customizing%20the%20Start%20Page%20for%20Visual%20Studio.md)   
 [Procedure consigliate per la pagina iniziale](../misc/start-page-best-practices.md)   
 [Distribuzione di pagine iniziali personalizzate](../Topic/Deploying%20Custom%20Start%20Pages.md)