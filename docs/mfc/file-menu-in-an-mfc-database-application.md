---
title: "Menu File in un&#39;applicazione database MFC | Microsoft Docs"
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
  - "File (menu)"
  - "applicazioni database [C++], comandi menu File"
ms.assetid: 92dafb75-c1b3-4860-80a0-87a83bfc36f2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Menu File in un&#39;applicazione database MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si crea un'applicazione di database MFC e non si utilizza la serializzazione, come è necessario interpretare il pulsante apri, Close, salva e salva come comandi del menu File?  Mentre non sono presenti le linee guida di stile per questo problema, di seguito sono riportati alcuni suggerimenti:  
  
-   Eliminare il comando apri del menu File completamente.  
  
-   Interpretazione il comando apri come "database aperto" e visualizzare all'utente un elenco di origini dati che l'applicazione riconosce.  
  
-   Interpretazione il comando apri come, ad esempio, "aprire il profilo". Mantenere apri per aprire un file serializzato, ma utilizza il file per l'archiviazione serializzato che contiene le informazioni "profilo utente", ad esempio le preferenze dell'utente, inclusi il relativo ID di accesso \(eventualmente a parte la password\) e l'origine dati o l'utente ha recentemente utilizzato.  
  
 La Creazione guidata applicazione MFC supporta creare un'applicazione senza comandi relative ai documenti il menu File.  Selezionare l'opzione **Vista database senza supporto file** nella pagina di **Supporto database**.  
  
 Per interpretare un comando del menu File in modo speciale, è necessario eseguire l'override di uno o più gestori comandi, principalmente nel `CWinApp`\- classe derivata.  Ad esempio, se eseguire completamente l'override `OnFileOpen` \(che implementa il comando di `ID_FILE_OPEN` \) per indicare "il database aperto: "  
  
-   Non chiamare la versione della classe base di `OnFileOpen`, poiché completamente si sta sostituendo l'implementazione predefinita del framework di comando.  
  
-   Utilizzare il gestore anziché per visualizzare le origini dati di un elenco della finestra di dialogo.  È possibile visualizzare tale finestra di dialogo chiamando `CDatabase::OpenEx` o `CDatabase::Open` con il parametro **NULL**.  Verrà aperta una finestra di dialogo ODBC visualizzate tutte le origini dati disponibili nel computer dell'utente.  
  
-   Poiché le applicazioni di database in genere non vengono però un intero documento, è possibile rimuovere salva e salva come implementazioni a meno che non si utilizzi un documento serializzato per archiviare le informazioni sul profilo.  In caso contrario, è possibile implementare il comando salva come, ad esempio, "transazione di commit." Vedere [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) per ulteriori informazioni sull'override questi controlli.  
  
## Vedere anche  
 [Serializzazione: serializzazione e input\/output del database](../mfc/serialization-serialization-vs-database-input-output.md)