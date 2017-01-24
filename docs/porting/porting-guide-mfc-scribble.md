---
title: "Guida al porting: MFC Scribble | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 8ddb517d-89ba-41a1-ab0d-4d2c6d9047e8
caps.latest.revision: 5
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Guida al porting: MFC Scribble
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento è il primo di una serie di argomenti che illustrano la procedura di aggiornamento a [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)] di progetti Visual C\+\+ creati in versioni precedenti di Visual Studio.  In questi argomenti la procedura di aggiornamento viene presentata tramite esempi, partendo da un progetto molto semplice fino ad arrivare a quelli leggermente più complessi.  In particolare in questo argomento verrà illustrata la procedura di aggiornamento per un progetto specifico, MFC Scribble,  che può fungere da introduzione di base per l'aggiornamento di progetti C\+\+.  
  
 Ogni versione di Visual Studio introduce possibili incompatibilità che possono complicare il passaggio del codice da una versione meno recente a una più recente di Visual Studio.  In alcuni casi le modifiche devono essere apportate nel codice, di conseguenza è necessario ricompilare e aggiornare il codice, mentre in altri devono essere apportate ai file di progetto.  Quando si apre un progetto creato con una versione precedente di Visual Studio, viene chiesto automaticamente se aggiornare un progetto o una soluzione alla versione più recente.  Questi strumenti in genere consentono però di aggiornare solo i file di progetto e non di modificare il codice sorgente.  
  
## MFC Scribble  
 MFC Scribble è un noto esempio incluso in numerose versioni diverse di Visual C\+\+.  Si tratta di una semplice applicazione di disegno che illustra alcune funzionalità di base di MFC.  Ne esistono varie versioni, sia in codice nativo che in codice gestito.  Per questo esempio è stata usata una versione precedente di Scribble in codice nativo inclusa in Visual Studio 2005 e aperta in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)].  
  
 Prima di provare a eseguire l'aggiornamento, è stato eseguito il backup dell'intera soluzione e tutti i relativi contenuti.  In seguito, è stato necessario scegliere il metodo di aggiornamento specifico.  Per soluzioni e progetti più complessi che non sono stati aggiornati da molto tempo, è opportuno eseguire l'aggiornamento a una sola versione di Visual Studio alla volta.  In tal modo è possibile individuare più facilmente la versione di Visual Studio con cui è stato introdotto un certo problema.  Per un progetto semplice vale la pena provare ad aprirlo nella versione più recente di Visual Studio e consentire alla procedura guidata di procedere alla conversione.  Se questo approccio non funziona, è quindi possibile provare ad effettuare l'aggiornamento una versione alla volta, purché siano disponibili le versioni appropriate di Visual Studio.  
  
 Tenere presente che invece di aggiornare i progetti con la procedura guidata, è anche possibile eseguire devenv dalla riga di comando specificando l'opzione `/Upgrade`.  Vedere [\/Upgrade](../Topic/-Upgrade%20\(devenv.exe\).md).  Questo approccio può risultare utile per automatizzare la procedura di aggiornamento per un numero elevato di progetti.  
  
### Passaggio 1.Conversione del file di progetto  
 Quando si apre in Visual Studio 2015 un file di progetto creato in una versione precedente, Visual Studio chiede se si vuole convertire il file di progetto alla versione più recente. Dopo aver confermato la scelta,  viene visualizzata la finestra di dialogo seguente:  
  
 ![Revisione modifiche a progetti e soluzioni](../porting/media/scribbleprojectupgrade.png "ScribbleProjectUpgrade")  
  
 Si è verificato un errore e viene visualizzato un messaggio per informare che la destinazione Itanium non è disponibile e la conversione non verrà eseguita.  
  
  **La piattaforma 'Itanium' non è presente nel progetto.  Tutte le configurazioni e le relative impostazioni di configurazione dei file specifiche della piattaforma verranno ignorate.  Se si desidera convertire questa piattaforma, accertarsi che sia installata in '%vctargetpath%\\platforms\\Itanium'.  Continuare con la conversione del progetto senza la piattaforma?**  All'epoca in cui è stato creato il progetto Scribble precedente, Itanium era un'importante piattaforma di destinazione.  La piattaforma Windows non supporta più Itanium, di conseguenza è stato scelto di continuare senza il supporto della piattaforma Itanium.  
  
 Visual Studio visualizza quindi un report di migrazione che elenca tutti i problemi riscontrati nel vecchio file di progetto.  
  
 ![Report di aggiornamento](../porting/media/scribblemigrationreport.png "ScribbleMigrationReport")  
  
 In questo caso, i problemi erano tutti avvisi e Visual Studio ha apportato le modifiche appropriate nel file di progetto.  La grande differenza per quanto riguarda il progetto è che lo strumento di compilazione è cambiato da vcbuild a msbuild.  Questa modifica è stata introdotta in Visual Studio 2010.  Altre modifiche includono una riorganizzazione della sequenza di elementi nel file di progetto.  Per questo progetto semplice nessuno dei problemi ha richiesto ulteriore attenzione.  
  
### Passaggio 2.Preparazione della compilazione  
 Prima della compilazione è necessario controllare il set di strumenti della piattaforma per conoscere la versione del compilatore usata dal sistema del progetto.  Nella finestra delle proprietà del progetto esaminare la proprietà **Set di strumenti della piattaforma** nella categoria **Generale** in **Proprietà di configurazione**.  Tale proprietà contiene la versione di Visual Studio e il numero di versione dello strumento della piattaforma, che in questo caso è v140 per la versione degli strumenti in [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  Quando si converte un progetto che in origine è stato compilato con Visual C\+\+ 2010, 2012 o 2013, il set di strumenti non viene aggiornato automaticamente per il set di strumenti di [!INCLUDE[cpp_dev14_long](../porting/includes/cpp_dev14_long_md.md)].  Nel caso di Scribble la versione convertita è stata creata per Visual Studio 2005, di conseguenza è stata convertita per l'uso del set di strumenti più recente.  
  
 Quando si esegue la compilazione, il primo problema visualizzato riguarda il codice MBCS.  
  
  **errore MSB8031:**  Il collegamento nel messaggio di errore si riferisce a un argomento sulla deprecazione di MBCS in Visual Studio 2013.  Per impostazione predefinita, l'installazione di MFC in Visual C\+\+ 2013 non include la versione MBCS di MFC,  che però è necessaria per compilare questo progetto nella forma corrente.  È possibile eseguire la migrazione del codice in modo da usare Unicode oppure scaricare e installare la versione MBCS di MFC.  Se si sceglie di scaricare la versione MBCS di MFC, è possibile eliminare l'avviso aggiungendo una definizione per la macro NO\_WARN\_MBCS\_MFC\_DEPRECATION.  
  
 Prima di scaricare la versione MBCS di MFC, leggere l'articolo [Componente aggiuntivo DLL MBCS MFC](../mfc/mfc-mbcs-dll-add-on.md) sulla deprecazione di tale versione e visitare il blog di Visual Studio, quindi fare clic [qui](http://www.microsoft.com/download/details.aspx?id=44930) per scaricarla.  Nella finestra di dialogo delle proprietà del progetto aggiungere NO\_WARN\_MBCS\_MFC\_DEPRECATION all'elenco delle macro predefinite in **Preprocessore** nella categoria **C\/C\+\+**.  
  
 Per il passaggio a Unicode aprire le proprietà del progetto e in **Proprietà di configurazione**, scegliere la sezione **Generale**, quindi individuare la proprietà **Set di caratteri** e modificare l'impostazione corrente **Utilizza set di caratteri multibyte** in **Usa set di caratteri Unicode**.  Per effetto di questa modifica le macro \_UNICODE e UNICODE sono ora definite mentre \_MBCS non lo è, come è possibile verificare nella proprietà **Riga di comando** della categoria **C\/C\+\+** nella finestra di dialogo delle proprietà.  
  
  **\/GS \/analyze\- \/W4 \/Gy \/Zc:wchar\_t \/Zi \/Gm\- \/O2 \/Ob1 \/Fd".  \\Release\\vc140.pdb" \/Zc:inline \/fp:precise \/D "\_AFXDLL" \/D "WIN32" \/D "NDEBUG" \/D "\_WINDOWS" \/D "\_UNICODE" \/D "UNICODE" \/errorReport:prompt \/GF \/WX \/Zc:forScope \/Gd \/Oy \/MD \/Fa".  \\Release\\" \/EHsc \/nologo \/Fo".  \\Release\\" \/Fp".  \\Release\\Scribble.pch"**  Anche se il progetto Scribble non è stato configurato per la compilazione con i caratteri Unicode, è già stato scritto con TCHAR anziché char, di conseguenza non c'è nulla da modificare.  Il progetto viene infatti compilato correttamente con il set di caratteri Unicode.  
  
 C'è però un altro problema.  Il compilatore informa che \_WINNT32\_WINNT non è definito:  
  
  **\_WIN32\_WINNT non definito.  Verrà usato \_WIN32\_WINNT\_MAXVER \(vedere WinSDKVer.h\)**  Si tratta di un avviso, non di un errore, molto comune quando si aggiorna un progetto Visual C\+\+.  Questa è la macro che definisce la versione minima di Windows in cui verrà eseguita l'applicazione.  Se si ignora l'avviso, si accetta il valore predefinito, \_WIN32\_WINNT\_MAXVER, che indica la versione corrente di Windows.  Per una tabella dei valori possibili, vedere [Uso delle intestazioni Windows](https://msdn.microsoft.com/it-it/library/aa383745.aspx).  È ad esempio possibile impostarlo in modo che venga eseguito in qualsiasi versione a partire da Vista.  
  
```  
#define _WIN32_WINNT _WIN32_WINNT_VISTA  
```  
  
 Se il codice usa parti dell'API di Windows che non sono disponibili nella versione di Windows specificata con questa macro, il problema verrà segnalato come errore del compilatore.  Nel caso del codice di Scribble non ci sono errori.  
  
### Passaggio 3.Test e debug  
 Dal momento che non esistono gruppi di test, l'app è stata avviata e ne sono state verificate manualmente le funzionalità tramite l'interfaccia utente.  Non sono stati riscontrati problemi.  
  
### Passaggio 4.Migliorare il codice  
 A questo punto dopo aver eseguito la migrazione a Visual Studio 2015, è possibile apportare alcune modifiche per sfruttare i vantaggi delle nuove funzionalità di C\+\+.  La versione corrente del compilatore di Visual C\+\+ è molto più conforme allo standard C\+\+ delle versioni precedenti. Se quindi si intende apportare alcune modifiche al codice per renderlo più sicuro e garantirne una maggiore portabilità con altri compilatori e sistemi operativi, è opportuno valutare alcuni miglioramenti.  
  
## Passaggi successivi  
 Scribble è un'applicazione desktop Windows piccola e semplice, che non è stato difficile convertire.  Sono molte le app semplici e di piccole dimensioni facilmente convertibili alla nuova versione.  L'aggiornamento richiederà più tempo nel caso di applicazioni più complesse, contenenti molte più righe di codice, codice legacy meno recente che potrebbe non essere al passo con i moderni standard di progettazione, più progetti e librerie, istruzioni di compilazione personalizzate o compilazioni complesse automatizzate tramite script.  Continuare con l'[esempio successivo](../porting/porting-guide-com-spy.md), l'applicazione ATL\/COM denominata COM Spy.  
  
## Vedere anche  
 [Porting e aggiornamento: esempi e case study](../porting/porting-and-upgrading-examples-and-case-studies.md)   
 [Esempio successivo: COM Spy](../porting/porting-guide-com-spy.md)