---
title: "Aggiornamento di progetti personalizzati | Microsoft Docs"
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
  - "aggiornamenti dei sistemi del progetto"
  - "progetti [Visual Studio SDK], aggiornamento"
  - "aggiornamenti del sistema del progetto [Visual Studio]"
ms.assetid: 262ada44-7689-44d8-bacb-9c6d33834d4e
caps.latest.revision: 11
caps.handback.revision: 11
manager: "douge"
---
# Aggiornamento di progetti personalizzati
Se si modificano le informazioni rese persistenti nel file di progetto tra diverse versioni di Visual Studio del prodotto, è necessario supportare l'aggiornamento del file di progetto dalla versione precedente a quella nuova. Per supportare l'aggiornamento che consente di partecipare alla **Conversione guidata di Visual Studio**, implementare l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory>. Questa interfaccia contiene l'unico meccanismo disponibile per l'aggiornamento della copia. L'aggiornamento del progetto viene eseguito all'apertura di una parte della soluzione. L'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> è implementata dalla factory del progetto o almeno deve poter essere ottenuta dalla factory del progetto.  
  
 Il meccanismo precedente che usa l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> è ancora supportato, ma concettualmente aggiorna il sistema del progetto come parte del progetto aperto. L'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> viene pertanto chiamata dall'ambiente [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] anche se è chiamata o implementata l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory>. Questo approccio consente di usare <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> per implementare solo le parti della copia e del progetto dell'aggiornamento e delegare il resto del lavoro da eseguire sul posto \(possibilmente nella nuova posizione\) tramite l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>.  
  
 Per un esempio di implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>, vedere [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
 Con gli aggiornamenti di progetti si verificano i seguenti scenari:  
  
-   Se il file è di un formato più recente rispetto a quelli supportati dal progetto, deve restituire un errore che segnala il problema. Questo comportamento presuppone che la versione precedente del prodotto, ad esempio Visual Studio .NET 2003, includa il codice per verificare la versione.  
  
-   Se è specificato il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> nel metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A>, l'aggiornamento verrà implementato come un aggiornamento sul posto prima dell'apertura del progetto.  
  
-   Se è specificato il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> nel metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A>, l'aggiornamento viene implementato come un aggiornamento della copia.  
  
-   Se è specificato il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> nella chiamata <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A>, all'utente è stato richiesto dall'ambiente di aggiornare il file di progetto come un aggiornamento sul posto, dopo l'apertura del progetto. Ad esempio, l'ambiente richiede all'utente di eseguire l'aggiornamento all'apertura di una versione precedente della soluzione.  
  
-   Se non è specificato il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> nella chiamata <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A>, è necessario richiedere all'utente di aggiornare il file di progetto.  
  
     Di seguito è riportato un esempio di messaggio di richiesta dell'aggiornamento:  
  
     "Il progetto '%1' è stato creato con una versione precedente di Visual Studio. Se si apre il progetto con la versione in uso, potrebbe risultare impossibile aprirlo con le versioni precedenti di Visual Studio. Continuare e aprire il progetto?"  
  
### Per implementare IVsProjectUpgradeViaFactory  
  
1.  Implementare il metodo dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory>, in particolare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> nell'implementazione della factory del progetto, o rendere le implementazioni richiamabili dall'implementazione della factory del progetto.  
  
2.  Se si vuole eseguire un aggiornamento sul posto come parte dell'apertura della soluzione, specificare il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> come parametro `VSPUVF_FLAGS` nell'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A>.  
  
3.  Se si vuole eseguire un aggiornamento sul posto come parte dell'apertura della soluzione, specificare il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> come parametro `VSPUVF_FLAGS` nell'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A>.  
  
4.  Per entrambi i passaggi 2 e 3, le operazioni per l'aggiornamento effettivo dei file tramite <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2> possono essere implementate come descritto di seguito nella sezione "Implementazione di `IVsProjectUpgade`" oppure è possibile delegare l'aggiornamento effettivo dei file a <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>.  
  
5.  Usare i metodi di <xref:Microsoft.VisualStudio.Shell.Interop.IVsUpgradeLogger> per inviare i messaggi relativi all'aggiornamento per l'utente tramite la Migrazione guidata di Visual Studio.  
  
6.  L'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsFileUpgrade> viene usata per implementare qualsiasi tipo di aggiornamento dei file che deve essere eseguito come parte dell'aggiornamento del progetto. Questa interfaccia non viene chiamata da <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory>, ma viene fornita come meccanismo per aggiornare i file che fanno parte del sistema del progetto, ma di cui il sistema del progetto principale potrebbe non essere direttamente a conoscenza. Questa situazione può ad esempio verificarsi se i file e le proprietà relativi al compilatore non vengono gestiti dallo stesso team di sviluppo che gestisce il resto del sistema del progetto.  
  
## Implementazione di IVsProjectUpgrade  
 Se il sistema del progetto implementa solo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>, non può partecipare alla **Conversione guidata di Visual Studio**. Tuttavia, anche se si implementa l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory>, è comunque possibile delegare l'aggiornamento dei file all'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>.  
  
#### Per implementare IVsProjectUpgrade  
  
1.  Quando un utente tenta di aprire un progetto, il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> è chiamato dall'ambiente dopo che il progetto viene aperto e prima che qualsiasi altra azione dell'utente possa essere eseguita sul progetto. Se all'utente era già stato richiesto di aggiornare la soluzione, viene passato il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> nel parametro `grfUpgradeFlags`. Se l'utente apre direttamente un progetto, ad esempio usando il comando **Aggiungi progetto esistente**, il flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> non viene passato e il progetto deve richiedere all'utente di eseguire l'aggiornamento.  
  
2.  In risposta alla chiamata <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A>, il progetto deve valutare se il file di progetto deve essere aggiornato. Se il progetto non deve aggiornare il tipo di progetto a una nuova versione, può semplicemente restituire il flag <xref:Microsoft.VisualStudio.VSConstants.S_OK>.  
  
3.  Se il progetto deve aggiornare il tipo di progetto a una nuova versione, deve determinare se il file di progetto può essere modificato chiamando il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> e passando un valore <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags> per il parametro `rgfQueryEdit`. Il progetto deve quindi eseguire le operazioni seguenti:  
  
    -   Se il valore `VSQueryEditResult` restituito nel parametro `pfEditCanceled` è <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult>, l'aggiornamento può continuare perché è possibile eseguire la scrittura del file di progetto.  
  
    -   Se il valore `VSQueryEditResult` restituito nel parametro `pfEditCanceled` è <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> e il valore `VSQueryEditResult` ha il bit <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> impostato, <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> deve restituire un errore, perché gli utenti devono risolvere autonomamente il problema di autorizzazioni. Il progetto deve quindi eseguire le operazioni seguenti:  
  
         Segnalare l'errore all'utente chiamando <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.ReportErrorInfo%2A> e restituire il codice di errore <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes> a <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>.  
  
    -   Se il valore `VSQueryEditResult` è <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> e il valore `VSQueryEditResultFlags` ha il bit <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> impostato, il file di progetto deve essere estratto chiamando <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> \(<xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>, <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>,...\).  
  
4.  Se la chiamata <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> sul file di progetto determina l'estrazione del file e il recupero della versione più recente, il progetto viene scaricato e ricaricato. Il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> viene chiamato nuovamente dopo la creazione di un'altra istanza del progetto. In questa seconda chiamata, il file di progetto può essere scritto sul disco. È consigliabile che il progetto salvi una copia del file di progetto nel formato precedente con un'estensione OLD, apporti le modifiche necessarie per l'aggiornamento e salvi il file di progetto nel nuovo formato. Anche in questo caso, se qualsiasi parte del processo di aggiornamento non riesce, il metodo deve indicare l'errore restituendo <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes>. Questo determina lo scaricamento del progetto da Esplora soluzioni.  
  
     È importante comprendere l'intero processo che si verifica nell'ambiente qualora la chiamata al metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> \(che specifica un valore di ReportOnly\) restituisca i flag <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> e <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags>.  
  
5.  L'utente tenta di aprire il file di progetto.  
  
6.  L'ambiente chiama l'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CanCreateProject%2A>.  
  
7.  Se <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CanCreateProject%2A> restituisce `true`, l'ambiente chiama l'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CanCreateProject%2A>.  
  
8.  L'ambiente chiama l'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IPersistFileFormat.Load%2A> per aprire il file e inizializzare l'oggetto di progetto, ad esempio Project1.  
  
9. L'ambiente chiama l'implementazione di `IVsProjectUpgrade::UpgradeProject` per determinare se il file di progetto deve essere aggiornato.  
  
10. Si chiama <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> e si passa un valore <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags> per il parametro `rgfQueryEdit`.  
  
11. L'ambiente restituisce <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> per `VSQueryEditResult` e il bit <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> è impostato in `VSQueryEditResultFlags`.  
  
12. L'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> chiama `IVsQueryEditQuerySave::QueryEditFiles` \(<xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>, <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>\).  
  
 Questa chiamata può causare l'estrazione di una nuova copia del file di progetto e il recupero della versione più recente, nonché rendere necessario ricaricare il file di progetto. A questo punto, può verificarsi una delle due situazioni seguenti:  
  
-   Se si gestisce autonomamente il ricaricamento del progetto, l'ambiente chiama l'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPersistHierarchyItem2.ReloadItem%2A> \(VSITEMID\_ROOT\). Quando si riceve questa chiamata, ricaricare la prima istanza del progetto \(Project1\) e continuare l'aggiornamento del file di progetto. L'ambiente è consapevole del fatto che si gestisce autonomamente il ricaricamento del progetto se si restituisce `true` per <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.GetProperty%2A> \(<xref:Microsoft.VisualStudio.Shell.Interop.__VSHPROPID>\).  
  
-   Se non si gestisce autonomamente il ricaricamento del progetto, si restituisce `false` per <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.GetProperty%2A> \(<xref:Microsoft.VisualStudio.Shell.Interop.__VSHPROPID>\). In questo caso, prima che venga restituito <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A>\(<xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>, <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>\), l'ambiente crea un'altra nuova istanza del progetto, ad esempio Project2, come segue:  
  
    1.  L'ambiente chiama <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.Close%2A> sul primo oggetto di progetto, Project1, impostando così questo oggetto nello stato inattivo.  
  
    2.  L'ambiente chiama l'implementazione di `IVsProjectFactory::CreateProject` per creare una seconda istanza del progetto, Project2.  
  
    3.  L'ambiente chiama l'implementazione di `IPersistFileFormat::Load` per aprire il file e inizializzare il secondo oggetto di progetto, Project2.  
  
    4.  L'ambiente chiama `IVsProjectUpgrade::UpgradeProject` una seconda volta per determinare se l'oggetto di progetto deve essere aggiornato. Tuttavia, questa chiamata viene eseguita su una nuova, seconda, istanza del progetto, Project2. Si tratta del progetto aperto nella soluzione.  
  
        > [!NOTE]
        >  Nel caso il primo progetto, Project1, sia impostato nello stato inattivo, è necessario restituire <xref:Microsoft.VisualStudio.VSConstants.S_OK> dalla prima chiamata nell'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A>. Vedere [Basic Project](http://msdn.microsoft.com/it-it/385fd2a3-d9f1-4808-87c2-a3f05a91fc36) per un'implementazione di `IVsProjectUpgrade::UpgradeProject`.  
  
    5.  Si chiama <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> e si passa un valore <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags> per il parametro `rgfQueryEdit`.  
  
    6.  L'ambiente restituisce <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> e l'aggiornamento può continuare perché è possibile eseguire la scrittura del file di progetto.  
  
 Se non è possibile eseguire l'aggiornamento, restituire <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes> da `IVsProjectUpgrade::UpgradeProject`. Se non è necessario eseguire l'aggiornamento o si sceglie di non eseguirlo, gestire la chiamata `IVsProjectUpgrade::UpgradeProject` come un'operazione che non produce effetti. Se si restituisce <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes>, viene aggiunto un nodo segnaposto alla soluzione per il progetto.  
  
## Vedere anche  
 [Visual Studio Conversion Wizard](http://msdn.microsoft.com/it-it/4acfd30e-c192-4184-a86f-2da5e4c3d83c)   
 [Aggiornamento degli elementi di progetto](../misc/upgrading-project-items.md)   
 [Progetti](../Topic/Projects.md)