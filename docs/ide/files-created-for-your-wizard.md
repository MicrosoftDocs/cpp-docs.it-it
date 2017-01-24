---
title: "File creati per la procedura guidata | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate personalizzate, eliminazione di file"
  - "creazioni guidate personalizzate, file creati"
  - "file [C++], creati tramite una creazione guidata personalizzata"
  - "icone, eliminazione"
ms.assetid: 7f0e393c-395e-491b-add2-904cf8838e81
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File creati per la procedura guidata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella procedura guidata viene utilizzato il nome specificato nella casella **Nome** della finestra di dialogo **Nuovo progetto** per derivare i nomi di alcuni file e classi.  
  
 Nella [Creazione guidata personalizzata](../ide/custom-wizard.md) vengono aggiunti commenti ai file creati per la procedura guidata.  Viene inoltre creato un file di testo, readMe.txt, nella directory della nuova applicazione.  Nel file vengono illustrati il contenuto e l'utilizzo degli altri nuovi file creati nella Creazione guidata personalizzata.  
  
 Nella tabella che segue sono descritti i file creati nella Creazione guidata personalizzata.  Per ulteriori informazioni sulle modalità di interazione degli elementi chiave per la creazione di una procedura guidata, vedere [Progettazione di una procedura guidata](../ide/designing-a-wizard.md).  
  
|File|Descrizione|  
|----------|-----------------|  
|[Project.vsz](../ide/dot-vsz-file-project-control.md)|File di testo analogo al vecchio formato INI.  Identifica il modulo di gestione della procedura guidata e fornisce contesto e [parametri personalizzati](../ide/custom-parameters-in-the-wizard-dot-vsz-file.md) facoltativi.|  
|[Project.vsdir](../Topic/Adding%20Wizards%20to%20the%20Add%20Item%20and%20New%20Project%20Dialog%20Boxes%20by%20Using%20.Vsdir%20Files.md)|File di testo che consente alla shell di Visual Studio di trovare la procedura guidata e visualizzarla nella finestra di dialogo **Nuovo progetto**.|  
|[File HTML \(facoltativo\)](../ide/html-files.md)|Una procedura guidata può contenere un'interfaccia utente che rappresenta un'interfaccia HTML.  Una procedura guidata senza interfaccia utente non contiene alcun file HTML.<br /><br /> Se una procedura guidata dispone di un'interfaccia utente, ogni singola schermata della procedura guidata è detta *pagina* e in ogni pagina sono specificate funzionalità dell'interfaccia utente.<br /><br /> Il file default.htm definisce la prima pagina della procedura guidata.  Utilizzare la casella di riepilogo **Numero di pagine** di [Impostazioni applicazione, Creazione guidata personalizzata](../ide/application-settings-custom-wizard.md) per specificare le pagine aggiuntive.  Ogni pagina aggiuntiva è definita da un file Page\_*numero\-pagina*.htm, dove *numero\-pagina* è compreso tra 2 e il numero di pagine specificate.|  
|[File script](../ide/jscript-file.md)|Nella Creazione guidata personalizzata viene creato un file JScript, default.js, per ogni procedura guidata creata.  Questo file contiene le funzioni JScript che accedono al Modello procedura guidata, al Modello codice e al Modello a oggetti dell'ambiente di Visual C\+\+ per consentire la personalizzazione della procedura guidata.  È possibile personalizzare e aggiungere funzioni nel file default.js della procedura guidata.<br /><br /> La procedura guidata include inoltre il file [common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md), che contiene le funzioni Jscript utilizzate più frequentemente e che è condiviso tra tutte le procedure guidate, incluse quelle utilizzate in Visual C\+\+ per creare altri tipi di progetti.  Per ulteriori informazioni, vedere [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md).|  
|[Modelli](../ide/template-files.md)|I modelli di una procedura guidata sono una raccolta di file di testo contenenti direttive, analizzate e inserite nella tabella dei simboli, in base alle selezioni effettuate dell'utente della procedura guidata.  I file di testo del modello vengono sottoposti a rendering in base all'input dell'utente, quindi vengono aggiunti al progetto creato dalla procedura guidata.  Le informazioni appropriate vengono ottenute accedendo direttamente alla tabella dei simboli del controllo della procedura guidata.|  
|[Templates.inf](../ide/templates-inf-file.md)|File di testo in cui sono elencati tutti i modelli associati al progetto.|  
|Default.vcxproj|File XML contenente le informazioni sul tipo di progetto.|  
|Sample.txt|File modello che illustra in che modo vengono utilizzate le direttive della procedura guidata.|  
|ReadMe.txt|File modello contenente un riepilogo di ciascun file creato nella Creazione guidata personalizzata.|  
|Immagini \(facoltative\)|È possibile fornire qualsiasi tipo di immagine, quali icone, file GIF e BMP nonché altri formati supportati dal codice HTML, per migliorare l'interfaccia utente della procedura guidata.  Le immagini non sono necessarie in una procedura guidata che non prevede un'interfaccia utente.|  
|Styles.css \(facoltativo\)|File in cui sono definiti gli stili dell'interfaccia utente.  Se la procedura guidata non prevede un'interfaccia utente, non verrà creato alcun file CSS.|  
  
 Se si eliminano file e directory della procedura guidata, sarà necessario eliminare anche i file indicati di seguito dalla directory \\vc7\\vcprojects\\.  Se infatti questi file non vengono eliminati, le icone della procedura guidata non saranno rimosse dalla finestra di dialogo **Nuovo progetto**.  
  
-   *nomeprogetto*.vsz  
  
-   *nomeprogetto*.ico  
  
-   *nomeprogetto*.vsdir  
  
## Vedere anche  
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)