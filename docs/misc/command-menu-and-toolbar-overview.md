---
title: "Panoramica di comandi, menu e barre degli strumenti | Microsoft Docs"
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
  - "concetti di base sui menu [Visual Studio SDK]"
  - "concetti di base sulle barre degli strumenti [Visual Studio SDK]"
ms.assetid: cbdaceaa-7dd3-4a56-aea6-b759e48d83d6
caps.latest.revision: 19
caps.handback.revision: 19
manager: "douge"
---
# Panoramica di comandi, menu e barre degli strumenti
Menu e barre degli strumenti offrono agli utenti un pratico metodo grafico per l'accesso ai comandi nel pacchetto VSPackage. I comandi sono funzioni che eseguono attività, ad esempio la stampa di un documento, l'aggiornamento di una visualizzazione o la creazione di un nuovo file. Menu e barre degli strumenti sono pratici metodi grafici per presentare i comandi agli utenti. In genere, i comandi correlati sono raggruppati nello stesso menu o sulla stessa barra degli strumenti.  
  
-   I menu vengono in genere visualizzati come stringhe di una sola parola raggruppate su una riga nella parte superiore dell'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) o in una finestra degli strumenti. I menu possono essere visualizzati anche come risultato di un evento di clic con il pulsante destro del mouse e in tal caso vengono definiti menu di scelta rapida. Quando si fa clic su di essi, i menu si espandono per visualizzare uno o più comandi. Facendo clic sui comandi è possibile eseguire attività oppure aprire sottomenu che contengono altri comandi. Alcuni nomi di menu molto noti sono File, Modifica, Visualizza e Finestra. Per altre informazioni, vedere [Estensione menu e comandi](../Topic/Extending%20Menus%20and%20Commands.md).  
  
-   Le barre degli strumenti sono in genere righe di pulsanti e altri controlli, ad esempio caselle combinate, caselle di riepilogo, caselle di testo e controller di menu. Tutti i controlli delle barre degli strumenti sono associati a comandi. Quando si fa clic su un pulsante della barra degli strumenti, viene attivato il comando associato. I pulsanti della barra degli strumenti hanno in genere icone che suggeriscono i comandi sottostanti, ad esempio una stampante per un comando Stampa. In un controllo elenco a discesa, ogni elemento nell'elenco è associato a un comando diverso. Un controller di menu è un oggetto ibrido in cui un lato del controllo è un pulsante della barra degli strumenti e l'altro lato è una freccia rivolta verso il basso che visualizza altri comandi quando si fa clic su di essa. Per altre informazioni, vedere [Procedura: Creare barre degli strumenti per le finestre degli strumenti](../misc/how-to-create-toolbars-for-tool-windows.md) e [Aggiunta di icone ai comandi di Menu](../Topic/Adding%20Icons%20to%20Menu%20Commands.md).  
  
-   Quando si crea un comando, è anche necessario creare un gestore eventi per esso. Il gestore eventi determina quando il comando è visibile o abilitato, consente di modificarne il testo e garantisce che il comando risponda in modo appropriato \("routing"\) quando attivato. Nella maggior parte dei casi, l'IDE gestisce i comandi usando l'interfaccia <xref:Microsoft.VisualStudio.OLE.Interop.IOleCommandTarget>. I comandi [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] eseguono il routing in modo gerarchico, a partire dal contesto del comando più interno, in base alla selezione locale, e procedendo verso il contesto più esterno, in base alla selezione globale. I comandi aggiunti al menu principale sono immediatamente disponibili per lo scripting. Per altre informazioni, vedere [Confronto tra oggetti MenuCommand e OleMenuCommand](../misc/menucommands-vs-olemenucommands.md) e [Selezione oggetti di contesto](../Topic/Selection%20Context%20Objects.md).  
  
 Per definire nuovi menu e barre degli strumenti, è necessario descriverli in un file VSCT \(Visual Studio Command Table\). Il modello di pacchetto di Visual Studio crea automaticamente questo file, insieme agli elementi necessari per supportare qualsiasi comando, barra degli strumenti ed editor selezionato nel modello. In alternativa, è possibile scrivere il proprio file VSCT usando il linguaggio XML Schema descritto qui: [Riferimento allo Schema XML VSCT](../Topic/VSCT%20XML%20Schema%20Reference.md).  
  
 Per altre informazioni sull'uso di file VSCT, vedere [Tabella di comandi di Visual Studio \(. File Vsct\)](../Topic/Visual%20Studio%20Command%20Table%20\(.Vsct\)%20Files.md) oppure provare a eseguire una delle procedure in [Procedure dettagliate per gli elementi dell'interfaccia utente](../misc/walkthroughs-for-user-interface-elements.md).  
  
 Per una panoramica più dettagliata di menu e barre degli strumenti, vedere [Progettazione di comando](../Topic/Command%20Design.md).  
  
## Vedere anche  
 [Estensione menu e comandi](../Topic/Extending%20Menus%20and%20Commands.md)   
 [I comandi, menu e barre degli strumenti](../Topic/Commands,%20Menus,%20and%20Toolbars.md)   
 [Package VS](../Topic/VSPackages.md)