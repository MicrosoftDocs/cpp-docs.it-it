---
title: Dal Menu file in un'applicazione Database MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- File menu
- database applications [MFC], File menu commands
ms.assetid: 92dafb75-c1b3-4860-80a0-87a83bfc36f2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 51f630f5a3fe1ee5833ac2796ff2acb1841af4c1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="file-menu-in-an-mfc-database-application"></a>Menu File in un'applicazione database MFC
Se si crea un'applicazione database MFC e non utilizzare la serializzazione, come deve interpretare l'apertura, chiusura, salvare e salvare come i comandi del menu File anche se non esistono regole stile per questa domanda, ecco alcuni suggerimenti:  
  
-   Eliminare completamente il comando Apri del menu File.  
  
-   Interpretare il comando Apri come "Apri" e visualizzare all'utente un elenco di origini dati riconosciute dall'applicazione.  
  
-   Interpretare il comando Apri come, ad esempio, "Apri profilo". Mantenere aperto per apertura del file serializzato, ma utilizzare il file per archiviare un documento serializzato contenente informazioni "profilo utente", ad esempio le preferenze dell'utente, inclusi il suo o suo ID di accesso (facoltativamente escludendo la password) e i dati di origine che più utilizzato di recente.  
  
 La creazione guidata applicazione MFC supporta la creazione di un'applicazione senza comandi di menu File relativi al documento. Selezionare il **vista Database senza supporto file** opzione il **il Database supporta** pagina.  
  
 Per interpretare un comando di menu File in modo speciale, è necessario sostituire uno o più gestori di comando, soprattutto per le `CWinApp`-classe derivata. Ad esempio, se si sostituisce completamente `OnFileOpen` (che implementa il `ID_FILE_OPEN` comando) per indicare "aprire il database:"  
  
-   Non chiamare la versione della classe base `OnFileOpen`, dal momento che si sta sostituendo completamente l'implementazione predefinita del framework del comando.  
  
-   Utilizzare invece il gestore per visualizzare una finestra di dialogo elenco di origini dati. È possibile visualizzare una finestra di dialogo chiamando `CDatabase::OpenEx` o `CDatabase::Open` con il parametro **NULL**. Verrà visualizzata la finestra di dialogo ODBC che consente di visualizzare tutte le origini dati disponibili sul computer dell'utente.  
  
-   Poiché le applicazioni di database, in genere, non salvano un intero documento, è opportuno rimuovere il salvataggio e salvare come implementazioni a meno che non si usa un documento serializzato per archiviare le informazioni sul profilo. In caso contrario, è possibile implementare il comando Salva con nome, ad esempio, "eseguire il commit delle transazioni." Vedere [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) per ulteriori informazioni sull'esecuzione dell'override di questi comandi.  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione e Database di Input/Output](../mfc/serialization-serialization-vs-database-input-output.md)

