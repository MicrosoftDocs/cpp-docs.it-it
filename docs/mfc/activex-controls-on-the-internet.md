---
title: Controlli ActiveX in Internet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [MFC], creating
- ActiveX controls [MFC], Internet
- downloading data with ActiveX controls
- OLE controls [MFC], upgrading to ActiveX
- Internet applications [MFC], ActiveX controls
- networks [MFC], downloading with ActiveX controls
ms.assetid: 7ab943c8-2022-41df-9065-d629b616eeec
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02a4c2e8d9da553ffe14c8d9d061d11d7357c19c
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931977"
---
# <a name="activex-controls-on-the-internet"></a>Controlli ActiveX in Internet
Controlli ActiveX sono la versione aggiornata della specifica del controllo OLE. I controlli sono un'architettura principale per lo sviluppo di componenti software programmabile che possono essere usati in diversi contenitori diversi, inclusi i browser Web compatibile con COM su Internet. Qualsiasi controllo ActiveX può essere un controllo di Internet e aggiungere funzionalità a un documento attivo o far parte di una pagina Web. I controlli in una pagina Web possono comunicare tra loro uso di script.  
  
 Controlli ActiveX non sono limitati a Internet. Un controllo ActiveX anche utilizzabile in un contenitore, fino a quando il controllo supporta le interfacce richieste da tale contenitore.  
  
 **ActiveX (controlli) offrono numerosi vantaggi, tra cui:**  
  
-   Interfacce meno necessarie rispetto ai precedenti controlli OLE.  
  
-   La possibilità di essere privi di finestra e sempre attiva.  
  
 **Affinché sia un controllo ActiveX, è necessario un controllo:**  
  
-   Supporto di `IUnknown` interfaccia.  
  
-   Essere un oggetto COM.  
  
-   Esportare **DLLRegisterServer** e **DLLUnRegisterServer**.  
  
-   Supportare le interfacce aggiuntive necessarie per la funzionalità.  
  
## <a name="making-your-existing-controls-internet-friendly"></a>Effettua i controlli esistenti Internet semplice  
 Progettare un controllo che funzionerà correttamente in un ambiente Internet richiede una riflessione sulla velocità di trasmissione relativamente bassa su Internet. È possibile utilizzare i controlli esistenti; Tuttavia, esistono procedure da eseguire per ridurre le dimensioni del codice e rendere la proprietà del controllo scaricare in modo asincrono.  
  
 Per migliorare le prestazioni dei controlli, seguire questi suggerimenti sulle considerazioni di efficienza:  
  
-   Implementare le tecniche descritte nell'articolo [controlli ActiveX: ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
-   Prendere in considerazione la modalità con cui viene creata un'istanza di un controllo.  
  
-   Asincrono; non tenere di altri programmi.  
  
-   Scaricare i dati in piccoli blocchi.  
  
     Durante il download di flussi di grandi dimensioni, ad esempio le bitmap o dati video, accedere ai dati di un controllo in modo asincrono in collaborazione con il contenitore. Recuperare i dati in modo incrementale o progressivo, magari in collaborazione con altri controlli che possono anche essere il recupero dei dati. Codice può inoltre essere il download in modo asincrono.  
  
-   Scaricare codice e le proprietà in background.  
  
-   Diventano dell'interfaccia utente attiva il più rapidamente possibile.  
  
-   Prendere in considerazione come dati persistenti vengono archiviati sia le proprietà grandi quantità di dati BLOB (ad esempio, un bitmap immagine o dati video).  
  
     I controlli con quantità elevate di dati persistenti, ad esempio le bitmap grandi o i file AVI, richiedono attenzione per il metodo di download. Un documento o una pagina possono diventano visibile appena possibile e consentire all'utente di interagire con la pagina, mentre i controlli recuperano i dati in background.  
  
-   Scrivere routine efficiente per mantenere le dimensioni del codice e la fase di esecuzione.  
  
     I controlli piccoli pulsante e l'etichetta, con solo pochi byte di dati persistenti, sono adatti per l'utilizzo nell'ambiente di Internet e funzionano correttamente all'interno di browser.  
  
-   Prendere in considerazione lo stato di avanzamento viene comunicato al contenitore.  
  
     Notificare al contenitore di stato di avanzamento del download asincrono, nonché quando l'utente può iniziare a interagire con una pagina, una volta completato il download. Il contenitore può visualizzare lo stato di avanzamento (ad esempio la percentuale di completamento) all'utente.  
  
-   Prendere in considerazione come controlli vengono registrati nel computer client.  
  
## <a name="creating-a-new-activex-control"></a>Creare un nuovo controllo ActiveX  
 Quando si crea un nuovo controllo usando la creazione guidata applicazione, è possibile scegliere di abilitare il supporto per i moniker asincroni, nonché altre ottimizzazioni. Per aggiungere il supporto per scaricare le proprietà del controllo in modo asincrono, seguire questi passaggi:  
  
#### <a name="to-create-your-project-using-the-mfc-activex-control-wizard"></a>Per creare il progetto tramite la creazione guidata controllo ActiveX MFC  
  
1.  Fare clic su **New** sul **File** menu.  
  
2.  Selezionare **Creazione guidata controllo ActiveX MFC** da Visual C++ i progetti e denominare il progetto.  
  
3.  Nel **le impostazioni di controllo** pagina, selezionare **carica le proprietà in modo asincrono**. Se si seleziona questa opzione imposta la proprietà stato pronto e l'evento di modifica dello stato pronto per l'utente.  
  
     È inoltre possibile selezionare altre ottimizzazioni, ad esempio **attivazione senza finestra**, descritto in [controlli ActiveX: ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
4.  Scegliere **fine** per creare il progetto.  
  
#### <a name="to-create-a-class-derived-from-cdatapathproperty"></a>Per creare una classe derivata da CDataPathProperty  
  
1.  Creare una classe derivata da `CDataPathProperty`.  
  
2.  In ognuno dei file di origine che comprende il file di intestazione per il controllo, aggiungere il file di intestazione per questa classe prima di esso.  
  
3.  Questa classe, eseguire l'override `OnDataAvailable`. Questa funzione viene chiamata ogni volta che i dati sono disponibili per la visualizzazione. Quando i dati diventano disponibili, è possibile gestire qualsiasi modalità che scelta, ad esempio da progressivamente eseguirne il rendering.  
  
     L'estratto di codice riportato di seguito è un semplice esempio progressivamente visualizzazione dei dati in un controllo di modifica. Si noti l'uso del flag **BSCF_FIRSTDATANOTIFICATION** per cancellare il controllo di modifica.  
  
     [!code-cpp[NVC_MFCActiveXControl#1](../mfc/codesnippet/cpp/activex-controls-on-the-internet_1.cpp)]  
  
     Si noti che è necessario includere AFXCMN. H per utilizzare il `CListCtrl` classe.  
  
4.  Quando il controllo globale stato cambia (ad esempio, da durante il caricamento di inizializzato o un utente interattivo), chiamata `COleControl::InternalSetReadyState`. Se il controllo dispone di proprietà del percorso dati solo uno, è possibile aggiungere codice in **BSCF_LASTDATANOTIFICATION** per notificare al contenitore che è stato completato il download. Ad esempio:  
  
     [!code-cpp[NVC_MFCActiveXControl#2](../mfc/codesnippet/cpp/activex-controls-on-the-internet_2.cpp)]  
  
5.  Eseguire l'override di `OnProgress`. In `OnProgress`, è stato passato un numero che indica l'intervallo massimo senza che sia un numero che mostra la distanza lungo il download corrente. È possibile utilizzare questi numeri per visualizzare lo stato, ad esempio la percentuale di completamento all'utente.  
  
 La procedura seguente aggiunge una proprietà al controllo da usare per la classe appena derivata.  
  
#### <a name="to-add-a-property"></a>Per aggiungere una proprietà  
  
1.  In **Visualizzazione classi**, fare doppio clic su interfaccia di sotto del nodo della libreria e selezionare **Add**, quindi **Aggiungi proprietà**. Verrà avviata il **Aggiunta guidata proprietà**.  
  
2.  Nel **Aggiunta guidata proprietà**, selezionare il **i metodi Set/Get** pulsante di opzione, digitare il **nome della proprietà**, ad esempio, EditControlText e selezionare BSTR come il **Tipo di proprietà**.  
  
3.  Scegliere **Fine**.  
  
4.  Dichiarare una variabile membro del `CDataPathProperty`-classe derivata a classe del controllo ActiveX.  
  
     [!code-cpp[NVC_MFCActiveXControl#3](../mfc/codesnippet/cpp/activex-controls-on-the-internet_3.h)]  
  
5.  Implementare i metodi `Get/Set`. Per `Get`, restituire la stringa. Per `Set`, caricare la proprietà e chiamate `SetModifiedFlag`.  
  
     [!code-cpp[NVC_MFCActiveXControl#4](../mfc/codesnippet/cpp/activex-controls-on-the-internet_4.cpp)]  
  
6.  In [DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange), aggiungere la riga seguente:  
  
     [!code-cpp[NVC_MFCActiveXControl#5](../mfc/codesnippet/cpp/activex-controls-on-the-internet_5.cpp)]  
  
7.  Eseguire l'override [ResetData](../mfc/reference/cdatapathproperty-class.md#resetdata) per notificare la proprietà di reimpostare il controllo tramite l'aggiunta di questa riga:  
  
     [!code-cpp[NVC_MFCActiveXControl#6](../mfc/codesnippet/cpp/activex-controls-on-the-internet_6.cpp)]  
  
## <a name="deciding-whether-to-derive-from-cdatapathproperty-or-ccacheddatapathproperty"></a>Come decidere se per la derivazione da CDataPathProperty o CCachedDataPathProperty  
 Nell'esempio precedente vengono descritti i passaggi per la derivazione di proprietà del controllo da `CDataPathProperty`. Si tratta di una buona scelta se si siano scaricando dati in tempo reale che vengono modificati frequentemente ed per cui non è necessaria mantenere tutti i dati, ma solo il valore corrente. Un esempio è un controllo di quotazioni di borsa.  
  
 È anche possibile derivare da `CCachedDataPathProperty`. In questo caso, viene memorizzato nella cache i dati scaricati in un file di memoria. Si tratta di una buona scelta se si desidera mantenere tutti i dati scaricati, ad esempio, un controllo che progressivamente esegue il rendering di una bitmap. In questo caso, la classe dispone di una variabile membro contenente i dati:  
  
 `CMemFile m_Cache;`  
  
 Nella classe del controllo ActiveX, è possibile utilizzare questo file mappato alla memoria in `OnDraw` per visualizzare i dati. Nel controllo ActiveX `CCachedDataPathProperty`-derivata, eseguire l'override della funzione membro `OnDataAvailable` e invalidare il controllo, dopo la chiamata all'implementazione della classe base.  
  
 [!code-cpp[NVC_MFCActiveXControl#7](../mfc/codesnippet/cpp/activex-controls-on-the-internet_7.cpp)]  
  
## <a name="downloading-data-asynchronously-using-activex-controls"></a>Il download dei dati in modo asincrono utilizzando i controlli ActiveX  
 Il download dei dati in una rete deve essere eseguita in modo asincrono. Il vantaggio di procedere rappresentato dal fatto che se viene trasferita una grande quantità di dati o se la connessione è lenta, il processo di download non verrà bloccata altri processi nel client.  
  
 Moniker asincroni forniscono un modo per scaricare i dati in modo asincrono tramite una rete. Un'operazione di lettura su un moniker asincroni restituisce immediatamente, anche se l'operazione non è stata completata.  
  
 Ad esempio, se sono disponibili 10 byte solo lettura viene chiamato in modo asincrono in un file da 1 KB, lettura non bloccata, ma restituisce con 10 byte attualmente disponibili.  
  
 Implementare [moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md) utilizzando il `CAsyncMonikerFile` classe. Tuttavia, è possono utilizzare i controlli ActiveX di `CDataPathProperty` classe, derivata da `CAsyncMonikerFile`, per facilitare l'implementazione delle proprietà di controllo asincrono.  
  
 L'esempio ASYNDOWN viene illustrato come impostare un ciclo asincrono usando i timer per leggere i dati. ASYNDOWN descritti in dettaglio nell'articolo della Knowledge Base "HOWTO: AsyncDown illustra asincrona Data Download" (Q177244) e può essere scaricato dal Microsoft Download Center. (Per ulteriori informazioni sul download di file da Microsoft Download Center, vedere l'articolo "Modalità per ottenere Microsoft supporto file dai servizi in linea" (Q119591) nella Microsoft Knowledge Base). È possibile trovare articoli della Knowledge Base al [ http://support.microsoft.com/support ](http://support.microsoft.com/support).  
  
 La tecnica di base utilizzata in ASYNDOWN consiste nell'impostare un timer in **CDataPathProperty:: OnDataAvailable** per indicare quando i dati sono disponibili. Quando viene ricevuto il messaggio del timer, l'applicazione legge in blocchi a 128 byte di dati e viene compilato un controllo di modifica. Se i dati non sono disponibili quando il messaggio del timer viene gestito, il timer è stato disattivato. `OnDataAvailable` Attiva il timer se più dati arrivano in un secondo momento.  
  
## <a name="displaying-a-control-on-a-web-page"></a>Visualizzazione di un controllo in una pagina Web  
 Di seguito è riportato un esempio di un tag object e gli attributi per l'inserimento di un controllo in una pagina Web.  
  
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
  
## <a name="updating-an-existing-ole-control-to-use-new-activex-control-features"></a>Aggiornamento di un controllo OLE esistente per l'utilizzo di nuove funzionalità di controllo ActiveX  
 Se il controllo OLE è stato creato con una versione di Visual C++ precedenti alla 4.2, sono presenti passaggi da che eseguire per migliorare le prestazioni e la relativa funzionalità. Per una descrizione dettagliata di queste modifiche, vedere [controlli ActiveX: ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  
  
 Se si aggiunge il supporto della proprietà asincrona a un controllo esistente, è necessario aggiungere la proprietà stato pronto e `ReadyStateChange` evento manualmente. Nel costruttore per il controllo, aggiungere:  
  
 [!code-cpp[NVC_MFCActiveXControl#8](../mfc/codesnippet/cpp/activex-controls-on-the-internet_8.cpp)]  
  
 Si aggiorna lo stato pronto come il codice viene scaricato chiamando [COleControl:: InternalSetReadyState](../mfc/reference/colecontrol-class.md#internalsetreadystate). Un'unica posizione è possibile chiamare `InternalSetReadyState` proviene dalle `OnProgress` eseguire l'override di `CDataPathProperty`-classe derivata.  
  

  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

