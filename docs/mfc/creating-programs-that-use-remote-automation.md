---
title: "Creazione di programmi che utilizzano l&#39;automazione remota | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Automazione remota, Creazione di programmi"
ms.assetid: 8eb31320-1037-4029-b1f3-fdc9406dbaf1
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creazione di programmi che utilizzano l&#39;automazione remota
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Qualsiasi oggetto ActiveX e ogni controller di automazione, può utilizzare l'automazione remota senza alcuna modifica al codice sorgente, senza la necessità di ricompilazione e senza la necessità di ripetere il collegamento.  Una volta creato un'impostazione che viene eseguito a livello locale \(ovvero nello stesso computer\), è necessario passare da solo alcuni passaggi eseguirlo in modalità remota.  
  
#### Per eseguire l'oggetto di automazione remota  
  
1.  Registrare l'applicazione nel computer client o su computer.  
  
2.  Configurare l'accesso client al server remoto di utilizzo.  
  
3.  Installazione e registrazione dell'applicazione nei computer.  
  
4.  Configurazione del server per consentire l'attivazione remota.  
  
5.  Installare Automation Manager nel server.  
  
6.  Eseguire Automation in server Manager.  
  
7.  Eseguire l'applicazione nei client.  
  
 Il passaggio 1 consente di rendere più facilmente il caricamento e l'esecuzione dell'applicazione server nel computer client, poiché la maggior parte dei server sono di registrare auto.  Se testaste localmente in anticipo l'installazione, questa fase è ancora completa.  Se l'applicazione server non è auto che registra, è possibile farvi situazione.  In caso contrario, è necessario fornire un file di registrazione che l'utente locale può eseguire per eseguire questa operazione.  Se non è in nessuna di queste operazioni, l'utente o un amministratore dovrà modificare il Registro di sistema manualmente, una routine che non è consigliabile per tutti gli utenti ma più avanzati.  
  
 Il passaggio 2 riguarda l'utilizzo di amministrazione \(RAC\) di connessione di automazione remota.  Eseguire l'amministratore di RAC e verificare che nella scheda connessione server è più elevata.  Quindi, trovare la voce per l'oggetto server nel riquadro di **Classi OLE** e fare clic.  Spostare in **Indirizzo di rete** la casella combinata e il nome del server in cui risiede il file eseguibile remoto verrà eseguito.  Ad esempio, è possibile immettere \\\\MyServer di seguito.  Scegliere il protocollo di rete appropriato dall'elenco fornito.  È necessario verificare con l'amministratore di rete per determinare il protocollo è consigliato.  In molti casi, questa verrà TCP\/IP.  Infine, è possibile scegliere un livello di autenticazione.  Nella maggior parte dei casi, questo verrà lasciato come \(nessuno\) o impostazione predefinita.  Ora fare clic con il pulsante destro del mouse sul server nel riquadro di **Classi OLE**.  Ciò produrrà un menu di scelta rapida da cui è possibile selezionare l'operazione locale o remota.  Remoto selezionato.  
  
 Il passaggio 3 include correttamente l'installazione e la registrazione dell'applicazione server nei computer selezionati.  Nuovamente, se l'applicazione è auto che registra, eseguirla anche la registrazione una volta.  
  
 Il passaggio 4 include configurare il server per consentire l'esecuzione remota.  Eseguire l'amministratore di RAC sul server e verificare che nella scheda di **Client Access** ha lo stato attivo.  Scegliere il modello di attivazione desiderata \(in genere **Consenti creazioni da remoto per chiave**.  Se si seleziona questa opzione, è inoltre necessario fare clic sulla casella di controllo **Consenti attivazione da remoto** per impostare il valore della voce del Registro di sistema a "Y "\).  Se si esegue Windows NT o Windows 2000 e si scelgono e remoti di concedere crea l'opzione \(ACL\), è l'opzione modifica di ACL spingendo il pulsante di **Modifica ACL**.  
  
 Per abilitare l'automazione remota al lavoro, quindi è necessario assicurarsi che Automation Manager sia installato e in esecuzione nei computer.  Se non è installato, copiare AUTMGR32.EXE nella directory di sistema di Windows.  Per informazioni sulle operazioni a tale scopo, vedere [Installazione di automazione remota](../mfc/remote-automation-installation.md).  Per avviare l'automazione remota, eseguire Automation Manager.  Viene visualizzata una piccola finestra di stato in cui una serie di messaggi verranno visualizzati.  Una volta che ha avviato, verrà ridotto.  Se si desidera continuare a visualizzare le informazioni sullo stato, fare clic sulla scheda di **Gestore automazione** nella barra delle applicazioni per ripristinare la finestra.  
  
 Il passaggio finale consiste nell'eseguire l'applicazione client nel computer client.  Se la procedura precedente, deve connettersi all'oggetto server ed eseguire esattamente come in locale, anche se un piccolo più lenta.  
  
 Si noti che l'amministratore di RAC anche consente di passare da automazione remota e DCOM \(DCOM, sulle piattaforme che supportano DCOM\) con un solo clic su un pulsante di opzione.  Se si sceglie DCOM, è possibile impostare varie opzioni di configurazione.  Vedere la documentazione di DCOM per ulteriori dettagli.  
  
## Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)   
 [Esecuzione dell'automazione remota con AUTOCLIK e AUTODRIV](../mfc/running-remote-automation-using-autoclik-and-autodriv.md)