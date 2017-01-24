---
title: "Extension Analyzer | Microsoft Docs"
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
  - "VSPackage, analizzatore degli errori di caricamenti"
ms.assetid: 8d2bcc4e-9feb-45a5-8d8e-470346f0d39e
caps.latest.revision: 8
caps.handback.revision: 8
manager: "douge"
---
# Extension Analyzer
**Extension Analyzer** acquisisce e registra gli errori più comuni di caricamento delle estensioni.**Extension Analyzer** viene eseguito nella relativa finestra. L'analizzatore indica il motivo dell'errore e riporta suggerimenti su come risolverlo.  
  
 [Extension Analyzer](http://go.microsoft.com/fwlink/?LinkId=205840) può essere scaricato da Visual Studio Gallery. Gli assembly di **Extension Analyzer** vengono installati in \<*percorso di installazione di Visual Studio*\>\\Common7\\IDE\\PrivateAssemblies\\.  
  
## Browser  
 Dopo aver installato **Extension Analyzer**, scegliere **Extension Analyzer** dal menu **Strumenti** e quindi fare clic su **Browser**. Verrà visualizzata una finestra che elenca tutte le estensioni registrate nel computer. Sono presenti diverse schede per i file VSIX, i pacchetti VSPackage, i file PkgDef e i componenti MEF. È possibile ordinare gli elenchi in base a qualsiasi nome di colonna.  
  
1.  Nella scheda VSIX vengono visualizzate informazioni sulle estensioni VSIX installate. È possibile includere componenti di sistema selezionando la casella di controllo **Show System Components** \(Mostra componenti di sistema\). In questa scheda è possibile passare alle voci di log per i file VSIX, aprire il manifesto VSIX nell'editor XML di Visual Studio e aprire la cartella in cui è installata l'estensione VSIX.  
  
2.  Nella scheda VS Packages \(Pacchetti Visual Studio\) vengono visualizzate informazioni sui pacchetti VSPackage attualmente noti a Visual Studio, indipendentemente dal fatto che siano stati caricati. Queste informazioni includono l'identificatore VSIX, il file con estensione pkgdef e il GUID del pacchetto VSPackage. È possibile includere i pacchetti VSPackage di sistema selezionando la casella di controllo **Show System Components** \(Mostra componenti di sistema\). In questa scheda passare alle voci di log, vedere gli elementi VSIX elencati nella scheda VSIX, vedere il file con estensione pkgdef nella scheda File PkgDef e analizzare il pacchetto VSPackage. I risultati dell'analisi verranno visualizzati nel riquadro **Output**.  
  
3.  Nella scheda PkgDef Files \(File PkgDef\) vengono visualizzate informazioni sui file con estensione pkgdef per le estensioni note a Visual Studio. Queste informazioni includono l'identificatore VSIX e il percorso dell'estensione. È possibile passare al registro o alla scheda VSIX e visualizzare il file con estensione pkgdef nell'editor.  
  
4.  Nella scheda MEF Components \(Componenti MEF\) vengono visualizzate informazioni sui componenti MEF noti a Visual Studio. Queste informazioni includono l'identificatore VSIX e il percorso dell'estensione. È possibile includere componenti di sistema selezionando la casella di controllo **Show System Components** \(Mostra componenti di sistema\). È inoltre possibile passare alla voce VSIX corrispondente, al file con estensione pkgdef e al percorso in cui è stata installata l'estensione.  
  
> [!WARNING]
>  Nel caso in cui si riceva un messaggio che chiede di abilitare la registrazione di Fusion, specificare un percorso per i file di log. Prima di continuare è possibile che venga chiesto di riavviare tutte le istanze di Visual Studio.  
  
## Visualizzatore di log  
 Se si esegue un progetto in cui la registrazione è attivata, è possibile visualizzare i messaggi di registrazione con **Extension Log Viewer** \(Visualizzatore log estensioni\) aggiungendo \/log agli argomenti della riga di comando del progetto. Per altre informazioni, vedere [\/Log](../Topic/-Log%20\(devenv.exe\).md). Nella finestra **Extension Log Viewer** \(Visualizzatore log estensioni\) vengono visualizzati la data, il listener, il tipo di voce \(tipo di messaggio\), il tipo di errore, le informazioni sulla classe\/interfaccia e il messaggio di log. È possibile ordinare e filtrare le informazioni.  
  
## Problemi comuni di caricamento delle estensioni  
 Alcuni dei motivi tipici di un errore di caricamento delle estensioni in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sono:  
  
-   Problemi di dipendenza. Un'estensione può essere stata distribuita in modo che non sia possibile trovare assembly dipendenti.  
  
-   Eccezioni. Quando viene caricato un pacchetto VSPackage, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] chiama il relativo metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.SetSite%2A>. Se questo metodo genera un'eccezione, il pacchetto VSPackage non viene caricato. Il modo migliore per isolare il problema è eseguire il codice SetSite.  
  
-   Registrazione non corretta. Verificare che l'estensione sia firmata in modo appropriato e che il pacchetto VSPackage venga registrato con la chiave pubblica corretta.  
  
## Vedere anche  
 [La gestione di VSPackage](../Topic/Managing%20VSPackages.md)