---
description: 'Altre informazioni su: registrazione'
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
ms.openlocfilehash: 8254f4b1ab8a005623650794adc8be0bd06cfdff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218121"
---
# <a name="registration"></a>Registrazione

Quando un utente desidera inserire un elemento OLE in un'applicazione, OLE presenta un elenco di tipi di oggetti tra cui scegliere. OLE ottiene questo elenco dal database di registrazione del sistema, che contiene le informazioni fornite da tutte le applicazioni server. Quando un server si registra autonomamente, le voci che inserisce nel database di registrazione del sistema (registro) descrivono ogni tipo di oggetto fornito, le estensioni di file e il percorso a se stesso, tra le altre informazioni.

Il Framework e le librerie di collegamento dinamico (DLL) di sistema OLE utilizzano questo registro per determinare quali tipi di elementi OLE sono disponibili nel sistema. Anche le DLL di sistema OLE utilizzano questo registro per determinare come avviare un'applicazione server quando un oggetto collegato o incorporato viene attivato.

Questo articolo descrive le operazioni che ogni applicazione server deve eseguire quando viene installata e ogni volta che viene eseguita.

Per informazioni dettagliate sul database di registrazione del sistema e il formato dei file reg utilizzati per aggiornarlo, vedere la Guida *di riferimento per programmatori OLE*.

## <a name="server-installation"></a><a name="_core_server_installation"></a> Installazione Server

Quando si installa l'applicazione server per la prima volta, è necessario registrare tutti i tipi di elementi OLE supportati. È anche possibile fare in modo che il server aggiorni il database di registrazione del sistema ogni volta che viene eseguito come applicazione autonoma. In questo modo il database di registrazione viene mantenuto aggiornato se il file eseguibile del server viene spostato.

> [!NOTE]
> Le applicazioni MFC generate dalla creazione guidata applicazione vengono automaticamente registrate quando vengono eseguite come applicazioni autonome.

Se si desidera registrare l'applicazione durante l'installazione, utilizzare il programma RegEdit.exe. Se si include un programma di installazione con l'applicazione, eseguire il programma di installazione "RegEdit/S *appname*. reg". Il flag/S indica un'operazione invisibile all'utente, ovvero non viene visualizzata la finestra di dialogo che segnala il completamento del comando. In caso contrario, indicare all'utente di eseguire RegEdit manualmente.

> [!NOTE]
> Il file reg creato dalla creazione guidata applicazione non include il percorso completo per l'eseguibile. Il programma di installazione deve modificare il file. reg in modo da includere il percorso completo dell'eseguibile o modificare la variabile di ambiente PATH in modo da includere la directory di installazione.

RegEdit unisce il contenuto del file di testo con estensione reg nel database di registrazione. Per verificare il database o per ripristinarlo, utilizzare l'editor del registro di sistema. Prestare attenzione per evitare di eliminare le voci OLE essenziali.

## <a name="server-initialization"></a><a name="_core_server_initialization"></a> Inizializzazione del server

Quando si crea un'applicazione server con la creazione guidata applicazione, la procedura guidata completa automaticamente tutte le attività di inizializzazione. In questa sezione vengono descritte le operazioni che è necessario eseguire se si scrive manualmente un'applicazione server.

Quando un'applicazione server viene avviata da un'applicazione contenitore, le DLL di sistema OLE aggiungono l'opzione "l'opzione/Embedding" alla riga di comando del server. Il comportamento di un'applicazione server varia a seconda che sia stato avviato da un contenitore, quindi la prima operazione che un'applicazione deve eseguire quando viene avviata l'esecuzione è verificare l'opzione "l'opzione/Embedding" o "-Embedding" nella riga di comando. Se questa opzione è disponibile, caricare un set di risorse diverso che mostri il server come attivo sul posto o completamente aperto. Per altre informazioni, vedere [menu e risorse: aggiunte server](../mfc/menus-and-resources-server-additions.md).

L'applicazione server deve chiamare anche la relativa `CWinApp::RunEmbedded` funzione per analizzare la riga di comando. Se restituisce un valore diverso da zero, l'applicazione non deve visualizzare la finestra perché è stata eseguita da un'applicazione contenitore e non come applicazione autonoma. Questa funzione aggiorna la voce del server nel database di registrazione del sistema e chiama la `RegisterAll` funzione membro, eseguendo la registrazione dell'istanza.

Quando l'applicazione server viene avviata, è necessario assicurarsi che sia in grado di eseguire la registrazione dell'istanza. La registrazione dell'istanza informa le DLL di sistema OLE che il server è attivo e pronto a ricevere le richieste dai contenitori. Non aggiunge una voce al database di registrazione. Eseguire la registrazione dell'istanza del server chiamando la `ConnectTemplate` funzione membro definita da `COleTemplateServer` . In questo modo l'oggetto viene connesso `CDocTemplate` all' `COleTemplateServer` oggetto.

La `ConnectTemplate` funzione accetta tre parametri: il *CLSID* del server, un puntatore all' `CDocTemplate` oggetto e un flag che indica se il server supporta più istanze. Un miniserver deve essere in grado di supportare più istanze, ovvero deve essere possibile eseguire simultaneamente più istanze del server, una per ogni contenitore. Di conseguenza, passare **true** per questo flag quando si avvia un miniserver.

Se si scrive un miniserver, per definizione verrà sempre avviato da un contenitore. È comunque necessario analizzare la riga di comando per verificare l'opzione "l'opzione/Embedding". L'assenza di questa opzione nella riga di comando significa che l'utente ha tentato di avviare il miniserver come applicazione autonoma. In tal caso, registrare il server con il database di registrazione del sistema e quindi visualizzare una finestra di messaggio in cui si informa l'utente di avviare il miniserver da un'applicazione contenitore.

## <a name="see-also"></a>Vedi anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Server](../mfc/servers.md)<br/>
[CWinApp:: RunAutomated](../mfc/reference/cwinapp-class.md#runautomated)<br/>
[CWinApp:: RunEmbedded](../mfc/reference/cwinapp-class.md#runembedded)<br/>
[Classe COleTemplateServer](../mfc/reference/coletemplateserver-class.md)
