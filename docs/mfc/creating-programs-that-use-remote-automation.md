---
title: Creazione di programmi che utilizzano l'automazione remota | Documenti Microsoft
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
- Remote Automation, creating programs
ms.assetid: 8eb31320-1037-4029-b1f3-fdc9406dbaf1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 86a9b9f4dccaaa3a97366dffb11955d3b148aff5
ms.sourcegitcommit: fa7a6dccddce3747389c91277a53e296f905305c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="creating-programs-that-use-remote-automation"></a>Creazione di programmi che utilizzano l'automazione remota
Qualsiasi oggetto di automazione e i controller di automazione, è in grado di utilizzare l'automazione remota senza apportare modifiche al codice sorgente, senza la necessità di ricompilazione e senza la necessità di ricollegamento. Quando si usa una configurazione che funziona in locale (ovvero, nello stesso computer), è necessario eseguire solo alcuni passaggi per eseguirlo in modalità remota.  
  
#### <a name="to-execute-the-remote-automation-object"></a>Eseguire l'oggetto di automazione remota  
  
1.  Registrare l'applicazione nel computer client o nei computer.  
  
2.  Configurare l'accesso client per l'utilizzo di server remoto.  
  
3.  Installare e registrare l'applicazione nel computer server o nei computer.  
  
4.  Configurare il server per consentire l'attivazione remota.  
  
5.  Installare Gestione automazione sui computer server.  
  
6.  Gestione di automazione per l'esecuzione nei server.  
  
7.  Eseguire l'applicazione sui computer client.  
  
 Passaggio 1 viene effettuato più facilmente da caricare ed eseguire l'applicazione server nel computer client, come la maggior parte dei server sono registrazione automatica. Se si esegue il programma di installazione in locale prima dell'operazione, questa fase è già completata. Se l'applicazione server non è registrazione automatica, si consiglia di effettuare questa operazione. In caso contrario, è necessario fornire un file di registrazione che l'utente locale è possibile eseguire per eseguire questo passaggio. Se nessuna di queste operazioni, utente o un amministratore sarà necessario modificare il Registro di sistema manualmente, una routine che non è consigliata per tutti gli utenti più avanzati.  
  
 Passaggio 2 prevede l'utilizzo della gestione connessione di automazione remota (RAC). Eseguire RAC Manager e verificare che la scheda di connessione del server è più in alto. Successivamente, individuare la voce per l'oggetto server nel **classi OLE** riquadro e fare clic su di esso. Quindi spostare il **indirizzo di rete** combinata e immettere il nome del computer server in cui verrà eseguito il file eseguibile remoto. Ad esempio, è possibile immettere \\\MyServer qui. Scegliere quindi il protocollo di rete appropriata dall'elenco fornito. Potrebbe essere necessario rivolgersi all'amministratore di rete per determinare quale protocollo è consigliato. In molti casi, questo sarà TCP/IP. Infine, è consigliabile scegliere un livello di autenticazione. Nella maggior parte dei casi, questo sarà left come (nessuno) o Default. Fare ora il server di **classi OLE** riquadro. Questa sintassi produrrà un menu di scelta rapida da cui è possibile selezionare l'operazione locale o remoto. Selezionare quello remoto.  
  
 Passaggio 3 comporta correttamente l'installazione e registrazione dell'applicazione server nel computer server selezionato o nel computer. Anche se l'applicazione è registrazione automatica, eseguirlo una volta per registrarla.  
  
 Passaggio 4 prevede la configurazione del server per consentire l'esecuzione in modalità remota. Eseguire RAC Manager nel computer server e verificare che il **accesso Client** scheda ha lo stato attivo. Scegliere il modello di attivazione desiderato (in genere **consentire remoto Crea chiave**. Se si sceglie questa opzione, è necessario scegliere il **Consenti attivazione remota** casella di controllo per impostare il valore della voce del Registro di sistema da 'Y'). Se si sceglie l'opzione Consenti creazione remota (ACL), è inoltre possibile modificare l'elenco ACL trasferendo il **Modifica ACL** pulsante.  
  
 Per consentire l'automazione remota lavorare, è necessario verificare che il gestore di automazione sia installato e in esecuzione nel computer server o nei computer. Se non è installato, copiare AUTMGR32. EXE nella directory di sistema di Windows. Per informazioni su come eseguire questa operazione, vedere [installazione automazione remota](../mfc/remote-automation-installation.md). Per avviare l'automazione remota, eseguire la gestione di automazione. Visualizzerà una piccola finestra di stato in cui verrà visualizzato un numero di messaggi. Una volta avviata, si ridurrà automaticamente. Se si desidera continuare a visualizzare informazioni sullo stato, è possibile scegliere di **Gestione automazione** scheda nella barra delle applicazioni per ripristinare la finestra.  
  
 Il passaggio finale consiste nell'eseguire l'applicazione client nel computer client. Se è stata seguita la procedura descritta sopra, deve connettersi per l'oggetto server ed eseguire con le stesse in locale, sebbene un po' più lentamente.  
  
 Si noti che il gestore RAC consente inoltre di alternare l'automazione remota e DCOM (su queste piattaforme che supportano DCOM DCOM) con un solo clic di un pulsante di opzione. Se si sceglie DCOM, è possibile impostare varie altre opzioni di configurazione. Vedere la documentazione di DCOM per altri dettagli.  
  
## <a name="see-also"></a>Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)   
 [Esecuzione dell'automazione remota con AUTOCLIK e AUTODRIV](../mfc/running-remote-automation-using-autoclik-and-autodriv.md)

