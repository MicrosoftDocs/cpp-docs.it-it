---
description: "Altre informazioni su: menu file in un'applicazione di database MFC"
title: Menu File in un'applicazione database MFC
ms.date: 11/04/2016
helpviewer_keywords:
- File menu
- database applications [MFC], File menu commands
ms.assetid: 92dafb75-c1b3-4860-80a0-87a83bfc36f2
ms.openlocfilehash: d8d229ce9c53e7a79044af2de03778574c18e5dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335887"
---
# <a name="file-menu-in-an-mfc-database-application"></a>Menu File in un'applicazione database MFC

Se si crea un'applicazione di database MFC senza usare la serializzazione, in che modo è possibile interpretare i comandi Apri, Chiudi, Salva e Salva con nome nel menu file quando non sono presenti linee guida di stile per questa domanda, di seguito sono riportati alcuni suggerimenti:

- Eliminare completamente il comando Apri del menu file.

- Interpretare il comando Open come "open database" e visualizzare all'utente un elenco di origini dati che l'applicazione riconosce.

- Interpretare il comando aperto come, ad esempio, "Apri profilo". Mantenere aperto per l'apertura di un file serializzato, ma usare il file per archiviare un documento serializzato contenente le informazioni relative al profilo utente, ad esempio le preferenze dell'utente, incluso l'ID di accesso (facoltativamente esclusa la password) e l'origine dati con cui ha lavorato più di recente.

La creazione guidata applicazione MFC supporta la creazione di un'applicazione senza comandi di menu file correlati ai documenti. Selezionare l'opzione **visualizzazione database senza supporto file** nella pagina **supporto database** .

Per interpretare un comando di menu file in modo particolare, è necessario eseguire l'override di uno o più gestori di comandi, principalmente nella `CWinApp` classe derivata da. Ad esempio, se si esegue l'override completo `OnFileOpen` (che implementa il `ID_FILE_OPEN` comando) per indicare "Apri database:"

- Non chiamare la versione della classe base di `OnFileOpen` perché si sostituisce completamente l'implementazione predefinita del Framework del comando.

- Utilizzare invece il gestore per visualizzare una finestra di dialogo che elenca le origini dati. È possibile visualizzare tale finestra di dialogo chiamando `CDatabase::OpenEx` o `CDatabase::Open` con il parametro **null**. Verrà visualizzata una finestra di dialogo ODBC che consente di visualizzare tutte le origini dati disponibili nel computer dell'utente.

- Poiché le applicazioni di database in genere non salvano un intero documento, è possibile che si desideri rimuovere le implementazioni Save e Save come, a meno che non si utilizzi un documento serializzato per archiviare le informazioni sul profilo. In caso contrario, è possibile implementare il comando Save come, ad esempio, "Commit Transaction". Per ulteriori informazioni sull'override di questi comandi, vedere la [Nota tecnica 22](tn022-standard-commands-implementation.md) .

## <a name="see-also"></a>Vedi anche

[Serializzazione: serializzazione e input/output del database](serialization-serialization-vs-database-input-output.md)
