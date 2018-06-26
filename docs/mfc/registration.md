---
title: Registrazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6d51589d9261d497c4c1f9185bd90b889e46eb34
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930690"
---
# <a name="registration"></a>Registrazione
Quando un utente vuole inserire un elemento OLE in un'applicazione, OLE viene presentato un elenco di tipi di oggetti da selezionare. Tale elenco viene dal database di registrazione del sistema, che contiene le informazioni fornite da tutte le applicazioni server. Quando si registra un server, le voci di che tale client inserisce nel database di registrazione del sistema (registro) descrivere ogni tipo di oggetto che fornisce, file estensioni e il percorso a se stesso, tra le altre informazioni.  
  
 Il framework e le librerie a collegamento dinamico sistema OLE (DLL) utilizzano il Registro di sistema per determinare quali tipi di elementi OLE sono disponibili nel sistema. Il sistema OLE DLL utilizzare inoltre il Registro di sistema per determinare la modalità avviare un'applicazione server quando viene attivato un oggetto collegato o incorporato.  
  
 Questo articolo viene descritto ciò che ogni applicazione server deve eseguire quando viene installato e ogni volta che viene eseguita.  
  
 Per informazioni dettagliate relative al database di registrazione di sistema e il formato dei file con estensione reg utilizzato per l'aggiornamento, vedere la *riferimento per programmatori OLE*.  
  
##  <a name="_core_server_installation"></a> Installazione del server  
 Quando si installa prima l'applicazione server, consigliabile registrare tutti i tipi di elementi OLE che supporta. È anche possibile che server aggiornare il database di registrazione di sistema ogni volta che viene eseguita come applicazione autonoma. In questo modo, il database di registrazione aggiornata se il file eseguibile del server viene spostato.  
  
> [!NOTE]
>  MFC (applicazioni) generate dalla creazione guidata applicazione automaticamente effettuano la registrazione quando vengono eseguiti come applicazioni autonome.  
  
 Se si desidera registrare l'applicazione durante l'installazione, utilizzare il programma RegEdit.exe. Se si include un programma di installazione con l'applicazione, avere eseguito il programma di installazione "RegEdit /S *NomeApp*reg". (Il flag /S indica un'operazione automatica, vale a dire, non visualizzare la finestra di dialogo reporting corretto completamento del comando). In caso contrario, chiedere all'utente di eseguire RegEdit manualmente.  
  
> [!NOTE]
>  Il file con estensione reg creato dalla procedura guidata dell'applicazione non include il percorso completo del file eseguibile. Il programma di installazione è necessario modificare il file con estensione reg per includere il percorso completo del file eseguibile o modificare la variabile di ambiente PATH per includere la directory di installazione.  
  
 RegEdit unisce il contenuto del file di testo con estensione reg nel database di registrazione. Per verificare che il database o per il ripristino, utilizzare l'editor del Registro di sistema. Prestare attenzione per evitare l'eliminazione di voci OLE fondamentali.  
  
##  <a name="_core_server_initialization"></a> Inizializzazione del server  
 Quando si crea un'applicazione server con la creazione guidata applicazione, la procedura guidata viene completato tutte le attività di inizializzazione per l'utente automaticamente. Questa sezione vengono descritte le operazioni da eseguire se si scrive un'applicazione server manualmente.  
  
 Quando un'applicazione server viene avviata da un'applicazione contenitore, l'opzione "/ incorporamento" DLL del sistema OL aggiungere alla riga di comando del server. Comportamento di un'applicazione server varia a seconda se è stata avviata da un contenitore, pertanto la prima cosa, un'applicazione deve quando inizia l'esecuzione è check per la "/ incorporamento" o "-incorporamento" opzione nella riga di comando. Se questa opzione è presente, caricare un set diverso di risorse che mostrano il server come un attivo sul posto o completamente aperto. Per altre informazioni, vedere [menu e risorse: aggiunte di Server](../mfc/menus-and-resources-server-additions.md).  
  
 L'applicazione server deve anche chiamare il relativo `CWinApp::RunEmbedded` funzione per analizzare la riga di comando. Se viene restituito un valore diverso da zero, l'applicazione non deve presentare la relativa finestra perché è stato eseguito da un'applicazione contenitore, non come applicazione autonoma. Questa funzione Aggiorna la voce del server nel database di registrazione di sistema e le chiamate di `RegisterAll` funzione membro per eseguire la registrazione dell'istanza.  
  
 Quando viene avviato l'applicazione server, è necessario assicurarsi che è possibile effettuare la registrazione dell'istanza. La registrazione dell'istanza informa DLL del sistema OL che il server sia attivo e pronto a ricevere le richieste dai contenitori. Non aggiunge una voce al database di registrazione. Eseguire la registrazione dell'istanza del server chiamando il `ConnectTemplate` funzione membro definita mediante `COleTemplateServer`. Questo si connette il `CDocTemplate` dell'oggetto per il `COleTemplateServer` oggetto.  
  
 Il `ConnectTemplate` funzione accetta tre parametri: il server *CLSID*, un puntatore al `CDocTemplate` oggetto e un flag che indica se il server supporta più istanze. Un server ridotto deve essere in grado di supportare più istanze, vale a dire, deve essere possibile per più istanze del server di eseguire contemporaneamente, uno per ogni contenitore. Di conseguenza, passare **TRUE** per questo flag durante l'avvio di un server ridotto.  
  
 Se si sta scrivendo un server ridotto, per definizione che deve sempre essere avviato da un contenitore. Si consiglia di analizzare la riga di comando da controllare per l'opzione "/ incorporamento". L'assenza di questa opzione nella riga di comando indica che l'utente ha tentato di avviare il server ridotto come applicazione autonoma. In questo caso, registrare il server con il database di sistema di registrazione e quindi visualizzare una finestra di messaggio che informa l'utente per avviare il server ridotto da un'applicazione contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Server](../mfc/servers.md)   
 [CWinApp::RunAutomated](../mfc/reference/cwinapp-class.md#runautomated)   
 [CWinApp::RunEmbedded](../mfc/reference/cwinapp-class.md#runembedded)   
 [Classe COleTemplateServer](../mfc/reference/coletemplateserver-class.md)
