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
ms.openlocfilehash: 0bc606acfba26d27d0ab36045e4772593e760e98
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57272168"
---
# <a name="registration"></a>Registrazione

Quando un utente vuole inserire un elemento OLE in un'applicazione, OLE presenta un elenco dei tipi di oggetto cui scegliere. Tale elenco viene dal database di registrazione del sistema, che contiene le informazioni fornite da tutte le applicazioni server. Quando si registra un server, le voci che inserisce nel database di sistema di registrazione (il Registro di sistema) descrivono ogni tipo di oggetto che fornisce, il file delle estensioni e il percorso a se stesso, tra le altre informazioni.

Il framework e librerie a collegamento dinamico il sistema OLE (DLL) usano questo registro di sistema per determinare quali tipi di elementi OLE sono disponibili nel sistema. Il sistema OLE DLL Usa anche questo registro di sistema per determinare la modalità avviare un'applicazione server quando viene attivato un oggetto collegato o incorporato.

Questo articolo descrive ciò che ogni applicazione server deve eseguire quando viene installato e ogni volta che viene eseguita.

Per informazioni dettagliate sui database di registrazione del sistema e il formato dei file con estensione reg utilizzati per eseguirne l'aggiornamento, vedere la *riferimento per programmatori OLE*.

##  <a name="_core_server_installation"></a> Installazione del server

Quando si installa prima l'applicazione server, è necessario registrare tutti i tipi di elementi OLE che supporta. È anche possibile avere server aggiornare il database di registrazione di sistema ogni volta che viene eseguito come un'applicazione autonoma. In questo modo, il database di registrazione aggiornata se il file eseguibile del server viene spostato.

> [!NOTE]
>  Le applicazioni MFC generate automaticamente dalla creazione guidata applicazione, si registrano quando vengono eseguiti come applicazioni autonome.

Se si vuole registrare l'applicazione durante l'installazione, utilizzare il programma RegEdit.exe. Se si include un programma di installazione con l'applicazione, sono il programma di installazione eseguire "RegEdit /S *NomeApp*reg". (Il flag /S indica operazione invisibile all'utente, vale a dire, non visualizza la finestra di dialogo Segnalazione corretto completamento del comando). In caso contrario, chiedere all'utente per eseguire RegEdit manualmente.

> [!NOTE]
>  Il file con estensione reg creato dalla procedura guidata dell'applicazione non include il percorso completo del file eseguibile. Il programma di installazione è necessario modificare il file. reg per includere il percorso completo del file eseguibile o modificare la variabile di ambiente PATH per includere la directory di installazione.

RegEdit unisce il contenuto del file di testo con estensione reg in database di registrazione. Per verificare che il database o per il ripristino, utilizzare l'editor del Registro di sistema. Prestare attenzione per evitare l'eliminazione di voci OLE essenziali.

##  <a name="_core_server_initialization"></a> Inizializzazione del server

Quando si crea un'applicazione server con la creazione guidata applicazione, la procedura guidata completa automaticamente automaticamente tutte le attività di inizializzazione. Questa sezione descrive le operazioni da eseguire se si scrive un'applicazione server manualmente.

Quando un'applicazione server viene avviata da un'applicazione contenitore, le DLL di sistema OLE aggiungere l'opzione "/ incorporamento" alla riga di comando del server. Comportamento delle applicazioni server varia a seconda se è stata avviata da un contenitore, in modo che la prima cosa un'applicazione deve eseguire quando si inizia l'esecuzione è cercare la "/ incorporamento" o "-incorporamento" opzione della riga di comando. Se questa opzione è presente, caricare un set diverso di risorse che illustrano il server come un attivo sul posto o completamente aperto. Per altre informazioni, vedere [menu e risorse: Aggiunte di server](../mfc/menus-and-resources-server-additions.md).

L'applicazione server deve anche chiamare relativo `CWinApp::RunEmbedded` funzione per analizzare la riga di comando. Se viene restituito un valore diverso da zero, l'applicazione non deve visualizzare la finestra è stato eseguito da un'applicazione contenitore, non come un'applicazione autonoma. Questa funzione Aggiorna la voce del server nel database di registrazione di sistema e le chiamate di `RegisterAll` funzione membro per eseguire la registrazione delle istanze.

All'avvio dell'applicazione server, è necessario assicurarsi che è possibile effettuare la registrazione dell'istanza. La registrazione dell'istanza segnala le DLL di sistema OLE che il server sia attiva e pronta a ricevere le richieste dai contenitori. Non aggiunge una voce per il database di registrazione. Eseguire la registrazione dell'istanza del server chiamando il `ConnectTemplate` funzione membro definita da `COleTemplateServer`. Questo si connette il `CDocTemplate` dell'oggetto per il `COleTemplateServer` oggetto.

Il `ConnectTemplate` funzione accetta tre parametri: il server *CLSID*, un puntatore al `CDocTemplate` oggetto e un flag che indica se il server supporta più istanze. Un server ridotto deve essere in grado di supportare più istanze, vale a dire, deve essere possibile per più istanze del server per l'esecuzione simultanea, uno per ogni contenitore. Di conseguenza, passare **TRUE** per questo flag quando si avvia un server ridotto.

Se si sta scrivendo un server ridotto, per definizione, questa verrà sempre avviata da un contenitore. Si consiglia di analizzare la riga di comando da controllare per l'opzione "/ incorporamento". L'assenza di questa opzione nella riga di comando indica che l'utente ha tentato di avviare il server ridotto come applicazione autonoma. In questo caso, registrare il server con il database di sistema di registrazione e quindi visualizzare una finestra di messaggio che informa l'utente per avviare il server ridotto da un'applicazione contenitore.

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Server](../mfc/servers.md)<br/>
[CWinApp::RunAutomated](../mfc/reference/cwinapp-class.md#runautomated)<br/>
[CWinApp::RunEmbedded](../mfc/reference/cwinapp-class.md#runembedded)<br/>
[Classe COleTemplateServer](../mfc/reference/coletemplateserver-class.md)
