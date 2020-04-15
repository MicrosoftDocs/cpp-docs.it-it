---
title: Registrazione
ms.date: 11/04/2016
helpviewer_keywords:
- servers [MFC], initializing
- initializing servers [MFC]
- OLE, registration
- installing servers [MFC]
- registry [MFC], OLE item database
- registration databases [MFC]
- servers [MFC], installing
- OLE server applications [MFC], registering servers
ms.assetid: 991d5684-72c1-4f9e-a09a-9184ed12bbb9
ms.openlocfilehash: 82411e53620e92eff3484f7d3f7955030fd439ac
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372834"
---
# <a name="registration"></a>Registrazione

Quando un utente desidera inserire un elemento OLE in un'applicazione, OLE presenta un elenco di tipi di oggetto tra cui scegliere. OLE ottiene questo elenco dal database di registrazione del sistema, che contiene le informazioni fornite da tutte le applicazioni server. Quando un server si registra, le voci che inserisce nel database di registrazione del sistema (il Registro di sistema) descrivono ogni tipo di oggetto che fornisce, estensioni di file e il percorso a se stesso, tra le altre informazioni.

Il framework e le librerie a collegamento dinamico (DLL) del sistema OLE utilizzano questo Registro di sistema per determinare i tipi di elementi OLE disponibili nel sistema. Le DLL di sistema OLE utilizzano anche questo Registro di sistema per determinare come avviare un'applicazione server quando viene attivato un oggetto collegato o incorporato.

In questo articolo vengono descritte le operazioni che ogni applicazione server deve eseguire quando viene installata e ogni volta che viene eseguita.

Per informazioni dettagliate sul database di registrazione del sistema e sul formato dei file reg utilizzati per aggiornarlo, vedere *OLE Programmer's Reference*.

## <a name="server-installation"></a><a name="_core_server_installation"></a>Installazione server

Quando si installa per la prima volta l'applicazione server, è necessario registrare tutti i tipi di elementi OLE supportati. È inoltre possibile fare in modo che il server aggiorni il database di registrazione del sistema ogni volta che viene eseguito come applicazione autonoma. In questo modo il database di registrazione viene aggiornato se il file eseguibile del server viene spostato.

> [!NOTE]
> Le applicazioni MFC generate dalla creazione guidata applicazione si registrano automaticamente quando vengono eseguite come applicazioni autonome.

Se si desidera registrare l'applicazione durante l'installazione, utilizzare il programma RegEdit.exe. Se si include un programma di installazione con l'applicazione, fare in modo che il programma di installazione eseri 'RegEdit /S *nomeapp*.reg". Il flag /S indica un'operazione invisibile all'utente, ovvero non visualizza la finestra di dialogo che segnala il completamento corretto del comando. In caso contrario, indicare all'utente di eseguire RegEdit manualmente.

> [!NOTE]
> Il file reg creato dalla creazione guidata applicazione non include il percorso completo dell'eseguibile. Il programma di installazione deve modificare il file reg per includere il percorso completo dell'eseguibile o modificare la variabile di ambiente PATH per includere la directory di installazione.

RegEdit unisce il contenuto del file di testo reg nel database di registrazione. Per verificare il database o per ripristinarlo, utilizzare l'editor del Registro di sistema. Prestare attenzione a evitare di eliminare le voci OLE essenziali.

## <a name="server-initialization"></a><a name="_core_server_initialization"></a>Inizializzazione server

Quando si crea un'applicazione server con la creazione guidata applicazione, la procedura guidata completa automaticamente tutte le attività di inizializzazione. In questa sezione vengono descritte le operazioni da eseguire se si scrive manualmente un'applicazione server.

Quando un'applicazione server viene avviata da un'applicazione contenitore, le DLL di sistema OLE aggiungono l'opzione "/Embedding" alla riga di comando del server. Il comportamento di un'applicazione server varia a seconda che sia stato avviato da un contenitore, pertanto la prima cosa che un'applicazione deve fare quando inizia l'esecuzione è controllare l'opzione "/Embedding" o "-Embedding" nella riga di comando. Se questa opzione esiste, caricare un set di risorse diverso che mostra il server come attivo sul posto o completamente aperto. Per ulteriori informazioni, vedere [Menu e risorse: Aggiunte server](../mfc/menus-and-resources-server-additions.md).

L'applicazione server deve `CWinApp::RunEmbedded` chiamare anche la funzione per analizzare la riga di comando. Se restituisce un valore diverso da zero, l'applicazione non deve visualizzare la finestra perché è stata eseguita da un'applicazione contenitore, non come applicazione autonoma. Questa funzione aggiorna la voce del server nel `RegisterAll` database di registrazione del sistema e chiama automaticamente la funzione membro, eseguendo la registrazione dell'istanza.

Quando l'applicazione server viene avviata, è necessario assicurarsi che possa eseguire la registrazione dell'istanza. La registrazione dell'istanza informa le DLL di sistema OLE che il server è attivo e pronto a ricevere richieste dai contenitori. Non aggiunge una voce al database di registrazione. Eseguire la registrazione dell'istanza `ConnectTemplate` del server `COleTemplateServer`chiamando la funzione membro definita da . In questo `CDocTemplate` modo l'oggetto viene connesso all'oggetto. `COleTemplateServer`

La `ConnectTemplate` funzione accetta tre parametri: il *CLSID*del `CDocTemplate` server , un puntatore all'oggetto e un flag che indica se il server supporta più istanze. Un miniserver deve essere in grado di supportare più istanze, ovvero deve essere possibile eseguire contemporaneamente più istanze del server, una per ogni contenitore. Di conseguenza, passare **TRUE** per questo flag quando si avvia un miniserver.

Se si scrive un miniserver, per definizione verrà sempre avviato da un contenitore. È comunque necessario analizzare la riga di comando per verificare l'opzione "/Embedding". L'assenza di questa opzione nella riga di comando significa che l'utente ha tentato di avviare il miniserver come applicazione autonoma. In questo caso, registrare il server con il database di registrazione del sistema e quindi visualizzare una finestra di messaggio che informa l'utente di avviare il miniserver da un'applicazione contenitore.

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Server](../mfc/servers.md)<br/>
[CWinApp::RunAutomated](../mfc/reference/cwinapp-class.md#runautomated)<br/>
[CWinApp::RunEmbedded](../mfc/reference/cwinapp-class.md#runembedded)<br/>
[Classe COleTemplateServer](../mfc/reference/coletemplateserver-class.md)
