---
title: "Controlli ActiveX in Internet | Microsoft Docs"
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
  - "ActiveX (controlli) [C++], creazione"
  - "ActiveX (controlli) [C++], Internet"
  - "download di dati con controlli ActiveX"
  - "applicazioni Internet [C++], controlli ActiveX"
  - "reti [C++], download con controlli ActiveX"
  - "controlli OLE [C++], aggiornamento ad ActiveX"
ms.assetid: 7ab943c8-2022-41df-9065-d629b616eeec
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Controlli ActiveX in Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli ActiveX sono la versione aggiornata della specifica di controlli OLE.  I controlli vengono un'architettura primaria per sviluppare componenti software programmabili che possono essere utilizzati in diversi contenitori diversi, inclusi i Web browser rimozione informati su internet.  Qualsiasi controllo ActiveX può essere un controllo internet e può aggiungere la funzionalità a un documento attivo o fa parte di una pagina Web.  I controlli in una pagina Web possono comunicare utilizzando lo script.  
  
 I controlli ActiveX non sono limitati a internet.  Un controllo ActiveX può essere utilizzato in qualsiasi contenitore, purché il controllo supporta le interfacce richieste da tale contenitore.  
  
 **I controlli ActiveX presentano vari vantaggi, tra cui:**  
  
-   Meno interfacce obbligatorie che i controlli OLE precedenti.  
  
-   La possibilità di essere privi di finestra e sempre attivo sul posto.  
  
 **Per essere un controllo ActiveX, un controllo deve:**  
  
-   Supporta l'interfaccia di **IUnknown**.  
  
-   Sia un oggetto COM.  
  
-   Esportazione **DLLRegisterServer**  e **DLLUnRegisterServer**.  
  
-   Interfacce aggiuntive in base alle necessità di funzionalità.  
  
## Rendere i controlli esistenti ma descrittive  
 Progettare un controllo che funzionerà correttamente in un ambiente internet richiede una considerazione per i velociti di trasmissione relativamente basso in internet.  È possibile utilizzare i controlli esistenti; tuttavia, esistono misure che è necessario eseguire per rendere la dimensione del codice più piccola e fare le proprietà del controllo scaricare in modo asincrono.  
  
 Per migliorare le prestazioni dei controlli, attenersi ai suggerimenti sulle considerazioni di efficienza:  
  
-   Implementare le tecniche descritte nell'articolo [Controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
-   Si consideri ad esempio un controllo viene creata un'istanza.  
  
-   Sia asincrono; non bug altri programmi.  
  
-   Scaricare i dati in piccoli blocchi.  
  
     Quando si scaricano i corsi d'acqua grandi quali bitmap o dati visualizzati, accedere ai dati del controllo in modo asincrono in collaborazione con il contenitore.  Recuperare i dati in modo incrementale o sequenze, procedendo in modo cooperativo con altri controlli che è possibile recuperare i dati.  Il codice può inoltre possibile scaricare in modo asincrono.  
  
-   Codice e proprietà di download in background.  
  
-   Attivo diventano user\-interface il più velocemente possibile.  
  
-   Considerare come dati persistenti sono memorizzati, le proprietà di grandi dimensioni dati BLOB \(ad esempio un'immagine bitmap o dati visualizzati\).  
  
     I controlli con quantità significative di dati persistenti, ad esempio le grandi bitmap o file di AVI, richiedono l'attenzione attenzione a scaricare il metodo.  Un documento o una pagina può diventare visibile il più presto e consente all'utente di interagire con la pagina mentre i controlli recuperano i dati in background.  
  
-   Scrivere le routine efficienti per mantenere la dimensione e in fase di esecuzione del codice.  
  
     Il pulsante piccoli e controlli label, con solo alcuni byte di dati persistenti, sono adatti per l'utilizzo nell'ambiente internet e funzionano correttamente i browser interno.  
  
-   Si consideri lo stato di avanzamento riceve una notifica al contenitore.  
  
     Notifica al contenitore dello stato di avanzamento del download asincrono, anche quando l'utente può iniziare per interagire con una pagina e quando il download è completo.  Il contenitore consente di visualizzare lo stato di avanzamento \(come percentuale di completamento\) all'utente.  
  
-   Considerare come i controlli vengono registrati nel computer client.  
  
## Creare un nuovo controllo ActiveX  
 Quando si crea un nuovo controllo mediante la creazione guidata applicazione, è possibile abilitare il supporto per i moniker asincroni e ad altre ottimizzazioni.  Per aggiungere supporto per le proprietà del controllo del download asincrono, attenersi alla seguente procedura:  
  
#### Per creare il progetto mediante la Creazione guidata controllo ActiveX MFC  
  
1.  Scegliere `New` dal menu di **File**.  
  
2.  **Creazione guidata controllo ActiveX MFC** Selezionato dai progetti Visual C\+\+ e assegnare al progetto.  
  
3.  Nella pagina di **Impostazioni controllo**, **Caricamento asincrono delle proprietà**selezionato.  Selezionando questa opzione imposta la proprietà state pronto e l'evento di modifica dello stato pronto per l'utente.  
  
     È inoltre possibile selezionare altre ottimizzazioni, come **Attivazione senza finestra**, come descritto in [Controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
4.  Scegliere **Fine** per creare il progetto.  
  
#### Per creare una classe derivata da CDataPathProperty  
  
1.  Creare una classe derivata da `CDataPathProperty`.  
  
2.  In ognuno dei file di origine incluso il file di intestazione per il controllo, aggiungere il file di intestazione per questa classe che precede.  
  
3.  In questa classe, eseguire l'override `OnDataAvailable`.  Questa funzione viene chiamata ogni volta che i dati siano disponibili per la visualizzazione.  Mentre i dati diventano disponibili, è possibile gestirlo in qualsiasi modo scelto, ad esempio progressivamente eseguendola il rendering.  
  
     La separazione di codice che segue è un esempio semplice progressivamente di visualizzazione dei dati in un controllo di modifica.  Si noti l'utilizzo di flag **BSCF\_FIRSTDATANOTIFICATION** rimuovere il controllo di modifica.  
  
     [!code-cpp[NVC_MFCActiveXControl#1](../mfc/codesnippet/CPP/activex-controls-on-the-internet_1.cpp)]  
  
     Si noti che è necessario importare AFXCMN.H per utilizzare la classe di `CListCtrl`.  
  
4.  Quando lo stato viene modificato globali del controllo, ad esempio da caricare all'inizializzazione o dall'utente interattivo\), chiamata `COleControl::InternalSetReadyState`.  Se il controllo è presente una sola proprietà del percorso dei dati, è possibile aggiungere codice a **BSCF\_LASTDATANOTIFICATION** per notificare al contenitore che il download è completo.  Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFCActiveXControl#2](../mfc/codesnippet/CPP/activex-controls-on-the-internet_2.cpp)]  
  
5.  Eseguire l'override di `OnProgress`.  In `OnProgress`, viene passato un numero che mostri l'intervallo massimo e un numero che mostra fino a che punto lungo il download corrente.  È possibile utilizzare questi numeri per visualizzare lo stato come percentuale di completamento all'utente.  
  
 La procedura descritta di seguito consente di aggiungere una proprietà al controllo per utilizzare la classe derivata appena.  
  
#### Per aggiungere una proprietà  
  
1.  In **Visualizzazione classi**, fare clic con il pulsante destro del mouse sull'interfaccia sotto il nodo della libreria e selezionare **Aggiungi**, quindi **Aggiungi proprietà**.  Verrà avviata **Aggiunta guidata proprietà**.  
  
2.  In **Aggiunta guidata proprietà**, selezionare il pulsante di opzione **Imposta\/Ottieni metodi**, digitare **Nome proprietà**, ad esempio, EditControlText e selezionare la stringa BSTR come **Tipo proprietà**.  
  
3.  Scegliere **Fine**.  
  
4.  Dichiarare una variabile membro del `CDataPathProperty`\- classe derivata alla classe di controlli ActiveX.  
  
     [!code-cpp[NVC_MFCActiveXControl#3](../mfc/codesnippet/CPP/activex-controls-on-the-internet_3.h)]  
  
5.  Implementare i metodi di **Get\/Set**.  Per **Leggi**, restituire la stringa.  Per `Set`, caricare la proprietà e chiamare `SetModifiedFlag`.  
  
     [!code-cpp[NVC_MFCActiveXControl#4](../mfc/codesnippet/CPP/activex-controls-on-the-internet_4.cpp)]  
  
6.  In [DoPropExchange](../Topic/COleControl::DoPropExchange.md), aggiungere la riga seguente:  
  
     [!code-cpp[NVC_MFCActiveXControl#5](../mfc/codesnippet/CPP/activex-controls-on-the-internet_5.cpp)]  
  
7.  Override [ResetData](../Topic/CDataPathProperty::ResetData.md) per notificare alla proprietà per reimpostare il controllo aggiungendo la seguente riga:  
  
     [!code-cpp[NVC_MFCActiveXControl#6](../mfc/codesnippet/CPP/activex-controls-on-the-internet_6.cpp)]  
  
## Decidere se derivare da CDataPathProperty o da CCachedDataPathProperty  
 Nell'esempio precedente vengono descritti i passaggi per derivare la proprietà del controllo da `CDataPathProperty`.  Questa è una scelta ottimale se si scaricano i dati in tempo reale che modificano spesso e per il quale non è necessario mantenere tutti i dati, ma solo il valore corrente.  Un esempio è un controllo stock ticker.  
  
 È anche possibile derivare da `CCachedDataPathProperty`.  In questo caso, i dati scaricati vengono memorizzati nella cache in un file di memoria.  Questa è una scelta ottimale se è necessario mantenere tutti i dati scaricati ad esempio, un controllo che esegue il rendering progressivamente un'immagine bitmap.  In questo caso, la classe dispone di una variabile membro che contiene i dati:  
  
 `CMemFile m_Cache;`  
  
 Nella classe del controllo ActiveX, è possibile utilizzare questo file mappati in memoria `OnDraw` per visualizzare i dati.  Nel controllo ActiveX `CCachedDataPathProperty`\- classe derivata, eseguire l'override della funzione membro `OnDataAvailable` e invalidare il controllo, dopo la chiamata l'implementazione della classe base.  
  
 [!code-cpp[NVC_MFCActiveXControl#7](../mfc/codesnippet/CPP/activex-controls-on-the-internet_7.cpp)]  
  
## Download asincrono di dati tramite i controlli ActiveX  
 I dati di download su una rete devono essere eseguiti in modo asincrono.  Il vantaggio di questa operazione è che un quantità di dati vengano spostati o la connessione troppo lenta, il processo di download non bloccherà altri processi nel client.  
  
 I moniker asincroni consentono di scaricare i dati in modo asincrono su una rete.  Un'operazione di lettura restituzione asincroni di un moniker immediatamente, anche se l'operazione non è stata completata.  
  
 Ad esempio, se solo 10 byte sono disponibili e leggono viene chiamato in modo asincrono in un file 1K, lettura non vengono bloccati, ma restituisce con i 10 byte attualmente disponibili.  
  
 [moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md) implementate utilizzando la classe di `CAsyncMonikerFile`.  Tuttavia, i controlli ActiveX è possibile utilizzare la classe di `CDataPathProperty`, derivata da `CAsyncMonikerFile`, per facilitare l'implementazione delle proprietà del controllo asincrone.  
  
 L'esempio di ASYNDOWN viene illustrato come configurare un ciclo asincrono utilizzando i timer per leggere i dati.  ASYNDOWN viene descritto dettagliatamente nell'articolo della Knowledge Base "HOWTO: AsyncDown viene illustrato il download asincrono di dati" \(Q177244\) ed è disponibile per il download dall'Area download Microsoft. \(Per ulteriori informazioni sui file scaricati dall'Area download Microsoft, vedere l'articolo "come ottenere i file di supporto tecnico Microsoft servizi online" \(Q119591\) nella Microsoft Knowledge Base\). Gli articoli della Knowledge Base sono disponibili nel CD\-ROM di MSDN Library o all'indirizzo [http:\/\/support.microsoft.com\/support](http://support.microsoft.com/support).  
  
 La tecnica di base utilizzata in ASYNDOWN consiste nell'impostare un timer in **CDataPathProperty::OnDataAvailable** per indicare quando i dati sono disponibili.  Quando il messaggio del timer è ricevuto, l'applicazione lettura di 128 blocchi di byte di dati e riempire un controllo di modifica.  Se i dati non sono disponibili quando il messaggio del timer è gestito, il timer è disabilitato.  `OnDataAvailable` consente il timer se più dati arrivano successivamente.  
  
## Visualizzazione del controllo in una pagina Web  
 Di seguito è riportato un esempio di un tag e attributi dell'oggetto per l'inserimento del controllo in una pagina Web.  
  
 `<OBJECT`  
  
 `CLASSID="clsid:FC25B780-75BE-11CF-8B01-444553540000"`  
  
 `CODEBASE="/ie/download/activex/iechart.ocx"`  
  
 `ID=chart1`  
  
 `WIDTH=400`  
  
 `HEIGHT=200`  
  
 `ALIGN=center`  
  
 `HSPACE=0`  
  
 `VSPACE=0`  
  
 `>`  
  
 `<PARAM NAME="BackColor" value="#ffffff">`  
  
 `<PARAM NAME="ForeColor" value="#0000ff">`  
  
 `<PARAM NAME="url" VALUE="/ie/controls/chart/mychart.txt">`  
  
 `</OBJECT>`  
  
## Aggiornare un controllo OLE esistente per utilizzare le nuove funzionalità del controllo ActiveX  
 Se il controllo OLE è stato creato con una versione di Visual C\+\+ precedenti alla 4,2, esistono misure che è possibile utilizzare per migliorare le prestazioni e migliorarne le funzionalità.  Per una descrizione dettagliata di queste modifiche, vedere [Controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
 Se si aggiunge il supporto asincrono della proprietà a un controllo esistente, è necessario aggiungere la proprietà state pronto e l'evento di `ReadyStateChange` manualmente.  Nel costruttore del controllo, aggiungere:  
  
 [!code-cpp[NVC_MFCActiveXControl#8](../mfc/codesnippet/CPP/activex-controls-on-the-internet_8.cpp)]  
  
 Aggiornare lo stato pronto ad esempio il codice viene scaricato chiamando [COleControl::InternalSetReadyState](../Topic/COleControl::InternalSetReadyState.md).  Un punto che è possibile chiamare `InternalSetReadyState` proviene da un override di `CDataPathProperty`\- classe derivata di `OnProgress`.  
  
 Quindi, seguire i passaggi in [Creare un nuovo controllo ActiveX](#_core_how_do_i_create_a_new_activex_control.3f).  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)