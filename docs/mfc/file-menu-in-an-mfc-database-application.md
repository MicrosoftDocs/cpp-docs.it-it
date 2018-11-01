---
title: Menu File in un'applicazione database MFC
ms.date: 11/04/2016
helpviewer_keywords:
- File menu
- database applications [MFC], File menu commands
ms.assetid: 92dafb75-c1b3-4860-80a0-87a83bfc36f2
ms.openlocfilehash: ce56dd5f04312ae9e7b7f747ce81cb704f3d085d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50629203"
---
# <a name="file-menu-in-an-mfc-database-application"></a>Menu File in un'applicazione database MFC

Se si crea un'applicazione database MFC e non utilizzare la serializzazione, come deve interpretare l'apertura, chiusura, salvare e salvare come i comandi del menu File mentre non sono presenti alcun linee guida di stile per questa domanda, ecco alcuni suggerimenti:

- Eliminare interamente comando Apri del menu File.

- Interpretare il comando Apri come "database aperto" e visualizzare all'utente un elenco delle origini dei dati riconosciuto dall'applicazione.

- Interpretare il comando Apri come, ad esempio, "Apri profilo" Mantieni aperto per l'apertura di un file serializzato, ma usare il file per archiviare un documento serializzato che contiene le informazioni di "profilo utente", ad esempio le preferenze dell'utente, inclusa la sua o l'ID di accesso (esclusi, facoltativamente, la password) e i dati di origine che potrà più utilizzato di recente.

La creazione guidata applicazione MFC supporta la creazione di un'applicazione senza comandi di menu File relativi al documento. Selezionare il **vista senza supporto per file di Database** opzione il **supportano Database** pagina.

Per interpretare un comando di menu File in modo speciale, è necessario sostituire uno o più gestori comando, soprattutto il `CWinApp`-classe derivata. Ad esempio, se si esegue l'override completamente `OnFileOpen` (che implementa il `ID_FILE_OPEN` comando) per indicare "database aperto:"

- Non chiamare la versione della classe base `OnFileOpen`, dal momento che si sta sostituendo completamente l'implementazione predefinita del framework del comando.

- Usare invece il gestore per visualizzare una finestra di dialogo elenca le origini dati. È possibile visualizzare una finestra di dialogo chiamando `CDatabase::OpenEx` oppure `CDatabase::Open` con il parametro **NULL**. Verrà visualizzata una finestra di dialogo ODBC che visualizza tutte le origini dati disponibili nel computer dell'utente.

- Poiché le applicazioni di database in genere non salvano un intero documento, è opportuno rimuovere il salvataggio e salvare come implementazioni se non si usa un documento serializzato per archiviare le informazioni del profilo. In caso contrario, è possibile implementare il comando Salva con nome, ad esempio, "eseguire il commit delle transazioni." Visualizzare [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) per altre informazioni sulla sostituzione di questi comandi.

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione e Input/Output del database](../mfc/serialization-serialization-vs-database-input-output.md)

