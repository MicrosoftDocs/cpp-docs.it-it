---
title: Controlli ActiveX in Internet
ms.date: 09/12/2018
helpviewer_keywords:
- ActiveX controls [MFC], creating
- ActiveX controls [MFC], Internet
- downloading data with ActiveX controls
- OLE controls [MFC], upgrading to ActiveX
- Internet applications [MFC], ActiveX controls
- networks [MFC], downloading with ActiveX controls
ms.assetid: 7ab943c8-2022-41df-9065-d629b616eeec
ms.openlocfilehash: c019c922a5690d4ead861c40bed3c0c1c76cea28
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394842"
---
# <a name="activex-controls-on-the-internet"></a>Controlli ActiveX in Internet

Controlli ActiveX sono la versione aggiornata della specifica del controllo OLE.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni, vedere [controlli ActiveX](activex-controls.md).

I controlli sono un'architettura principale per lo sviluppo di componenti software programmabile che possono essere usati in diversi contenitori diversi, inclusi i browser Web compatibile con COM su Internet. Qualsiasi controllo ActiveX può essere un controllo di Internet e aggiungere le proprie funzionalità a un documento attivo o far parte di una pagina Web. I controlli in una pagina Web possono comunicare tra loro gli script.

Controlli ActiveX non sono limitati a Internet. Un controllo ActiveX è anche utilizzabile in tutti i contenitori, purché il controllo supporta le interfacce richieste da tale contenitore.

**I controlli ActiveX presentano diversi vantaggi, tra cui:**

- Interfacce meno richieste rispetto ai precedenti controlli OLE.

- La possibilità di essere privi di finestra e sempre sul posto attivo.

**Per poter essere un controllo ActiveX, è necessario un controllo:**

- Supporto di `IUnknown` interfaccia.

- Essere un oggetto COM.

- Esportare **DLLRegisterServer** e **DLLUnRegisterServer**.

- Supporta le interfacce aggiuntive in base alle esigenze per la funzionalità.

## <a name="making-your-existing-controls-internet-friendly"></a>Trasformazione facile integrazione con Internet dei controlli esistenti

Progettazione di un controllo che funzionerà correttamente in un ambiente Internet richiede una riflessione sulla velocità di trasmissione relativamente basso in Internet. È possibile usare i controlli esistenti; Tuttavia, esistono passaggi da eseguire per ridurne le dimensioni del codice e rendere la proprietà del controllo di download in modo asincrono.

Per migliorare le prestazioni dei controlli, seguire questi suggerimenti sulle considerazioni di efficienza:

- Implementare le tecniche descritte nell'articolo [controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).

- Prendere in considerazione la modalità con cui viene creata un'istanza di un controllo.

- Asincrono; non includere modo altri programmi.

- Scaricare i dati in piccoli blocchi.

   Quando si scaricano i flussi di grandi dimensioni, ad esempio le bitmap o dati video, accedere ai dati di un controllo in modo asincrono in collaborazione con il contenitore. Recuperare i dati in maniera graduale o incrementale, magari in collaborazione con altri controlli che possono anche essere il recupero dei dati. Codice può essere scaricato anche in modo asincrono.

- Scaricare il codice e le proprietà in background.

- Acquisire l'interfaccia utente attivo nel minor tempo.

- Prendere in considerazione come si archiviano dati persistenti sia le proprietà grandi quantità di dati BLOB (ad esempio una bitmap immagini o video i dati).

   I controlli con grandi quantità di dati persistenti, ad esempio le bitmap grandi o i file AVI, richiedono attenzione durante il metodo di download. Un documento o una pagina possono diventano visibile appena possibile e consentire all'utente di interagire con la pagina, mentre i controlli di recuperano i dati in background.

- Scrivere efficienti routine per mantenere la dimensione del codice e la fase di esecuzione.

   Controlli pulsante e un'etichetta piccole, con solo pochi byte di dati persistenti, sono adatti per l'uso nell'ambiente Internet e funzionano correttamente all'interno di browser.

- Prendere in considerazione lo stato di avanzamento viene comunicato al contenitore.

   Notificare al contenitore di stato di avanzamento del download asincrono, tra cui quando l'utente può iniziare a interagire con una pagina e una volta completato il download. Il contenitore può visualizzare lo stato di avanzamento (ad esempio, la percentuale di completamento) all'utente.

- Prendere in considerazione come i controlli vengono registrati nel computer client.

## <a name="creating-a-new-activex-control"></a>Creare un nuovo controllo ActiveX

Quando si crea un nuovo controllo tramite la creazione guidata applicazione, è possibile scegliere di abilitare il supporto per i moniker asincroni, nonché altre ottimizzazioni. Per aggiungere il supporto per scaricare le proprietà del controllo in modo asincrono, seguire questa procedura:

#### <a name="to-create-your-project-using-the-mfc-activex-control-wizard"></a>Per creare il progetto tramite la creazione guidata controllo ActiveX MFC

1. Fare clic su **New** nel **File** menu.

1. Selezionare **Creazione guidata controllo ActiveX MFC** da Visual C++ i progetti e denominare il progetto.

1. Nel **le impostazioni di controllo** pagina, selezionare **carica le proprietà in modo asincrono**. Se si seleziona questa opzione imposta la proprietà stato pronto e l'evento di stato pronto modificato automaticamente.

   È anche possibile selezionare altre ottimizzazioni, ad esempio **attivazione senza finestra**, descritta in [controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).

1. Scegli **fine** per creare il progetto.

#### <a name="to-create-a-class-derived-from-cdatapathproperty"></a>Per creare una classe derivata da CDataPathProperty

1. Creare una classe derivata da `CDataPathProperty`.

1. In ognuno dei file di origine che include il file di intestazione per il controllo, aggiungere il file di intestazione per questa classe prima di esso.

1. In questa classe, eseguire l'override `OnDataAvailable`. Questa funzione viene chiamata ogni volta che sono disponibili per la visualizzazione dei dati. Quando i dati diventano disponibili, è possibile gestirla nel modo preferito, ad esempio per eseguirne il rendering progressivo.

   L'estratto di codice riportato di seguito è un esempio semplice di progressivamente la visualizzazione dei dati in un controllo di modifica. Si noti l'uso del flag **BSCF_FIRSTDATANOTIFICATION** per cancellare il controllo di modifica.

   [!code-cpp[NVC_MFCActiveXControl#1](../mfc/codesnippet/cpp/activex-controls-on-the-internet_1.cpp)]

   Si noti che è necessario includere AFXCMN. H per usare il `CListCtrl` classe.

1. Quando il controllo generale di stato cambia (ad esempio, dal caricamento a inizializzato o un utente interattivo), chiamata `COleControl::InternalSetReadyState`. Se il controllo dispone di proprietà del percorso dati solo una, è possibile aggiungere codice sul **BSCF_LASTDATANOTIFICATION** per notificare al contenitore che è stato completato il download. Ad esempio:

   [!code-cpp[NVC_MFCActiveXControl#2](../mfc/codesnippet/cpp/activex-controls-on-the-internet_2.cpp)]

1. Eseguire l'override di `OnProgress`. In `OnProgress`, è stato passato un numero che indica l'intervallo massimo e un numero visualizzato fino a quando trova il download corrente sia. È possibile usare questi numeri per visualizzare lo stato, ad esempio la percentuale di completamento per l'utente.

La procedura seguente aggiunge una proprietà al controllo da usare per la classe derivata solo.

#### <a name="to-add-a-property"></a>Per aggiungere una proprietà

1. Nelle **Visualizzazione classi**, fare doppio clic su interfaccia di sotto del nodo della libreria e selezionare **Add**, quindi **Aggiungi proprietà**. Verrà avviata il **Aggiunta guidata proprietà**.

1. Nel **Aggiunta guidata proprietà**, selezionare la **i metodi Set/Get** pulsante di opzione, digitare il **nome proprietà**, ad esempio, EditControlText e BSTR selezionare come il **Tipo di proprietà**.

1. Scegliere **Fine**.

1. Dichiarare una variabile membro del `CDataPathProperty`-classe derivata per la classe del controllo ActiveX.

   [!code-cpp[NVC_MFCActiveXControl#3](../mfc/codesnippet/cpp/activex-controls-on-the-internet_3.h)]

1. Implementare i metodi `Get/Set`. Per `Get`, restituire la stringa. Per la `Set`, caricare le proprietà e chiamate `SetModifiedFlag`.

   [!code-cpp[NVC_MFCActiveXControl#4](../mfc/codesnippet/cpp/activex-controls-on-the-internet_4.cpp)]

1. Nelle [DoPropExchange](../mfc/reference/colecontrol-class.md#dopropexchange), aggiungere la riga seguente:

   [!code-cpp[NVC_MFCActiveXControl#5](../mfc/codesnippet/cpp/activex-controls-on-the-internet_5.cpp)]

1. Eseguire l'override [ResetData](../mfc/reference/cdatapathproperty-class.md#resetdata) per notificare la proprietà da reimpostare il relativo controllo aggiungendo questa riga:

   [!code-cpp[NVC_MFCActiveXControl#6](../mfc/codesnippet/cpp/activex-controls-on-the-internet_6.cpp)]

## <a name="deciding-whether-to-derive-from-cdatapathproperty-or-ccacheddatapathproperty"></a>Decidere se derivano da CDataPathProperty o CCachedDataPathProperty

Nell'esempio precedente vengono descritti i passaggi per la derivazione di proprietà del controllo da `CDataPathProperty`. Si tratta di un'ottima scelta se si scaricano i dati in tempo reale che cambia di frequente, e per cui non è necessaria mantenere tutti i dati, ma solo il valore corrente. Un esempio è un controllo stock ticker.

È anche possibile derivare da `CCachedDataPathProperty`. In questo caso, viene memorizzato nella cache i dati scaricati in un file di memoria. Si tratta di un'ottima scelta se è necessario mantenere tutti i dati scaricati, ad esempio, un controllo che esegue progressivamente il rendering di una bitmap. In questo caso, la classe dispone di una variabile membro contenente i dati:

`CMemFile m_Cache;`

Nella classe del controllo ActiveX, è possibile usare questo file mappato alla memoria in `OnDraw` per visualizzare i dati. Nel controllo ActiveX `CCachedDataPathProperty`-classe derivata esegue l'override della funzione membro `OnDataAvailable` e invalidare il controllo, dopo la chiamata dell'implementazione della classe base.

[!code-cpp[NVC_MFCActiveXControl#7](../mfc/codesnippet/cpp/activex-controls-on-the-internet_7.cpp)]

## <a name="downloading-data-asynchronously-using-activex-controls"></a>Download dei dati in modo asincrono usando i controlli ActiveX

Download dei dati attraverso una rete deve essere eseguito in modo asincrono. Il vantaggio di tale operazione è così che se viene trasferita una grande quantità di dati o se la connessione è lenta, il processo di download non blocca altri processi nel client.

Moniker asincroni consentono di scaricare i dati in modo asincrono tramite una rete. Un'operazione di lettura su un moniker asincrono restituisce immediatamente, anche se l'operazione non è stata completata.

Ad esempio, se sono disponibili 10 byte solo lettura viene chiamato in modo asincrono in un file da 1 KB, lettura non blocca, ma restituisce con 10 byte attualmente disponibili.

Si implementa [moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md) usando il `CAsyncMonikerFile` classe. Tuttavia, è possono usare i controlli ActiveX il `CDataPathProperty` classe che deriva da `CAsyncMonikerFile`, per implementare le proprietà di controllo asincrono.

## <a name="displaying-a-control-on-a-web-page"></a>Visualizzazione di un controllo in una pagina Web

Ecco un esempio di un tag object e gli attributi per l'inserimento di un controllo in una pagina Web.

```xml
<OBJECT
  CLASSID="clsid:FC25B780-75BE-11CF-8B01-444553540000"
  CODEBASE="/ie/download/activex/iechart.ocx"
  ID=chart1
  WIDTH=400
  HEIGHT=200
  ALIGN=center
  HSPACE=0
  VSPACE=0>
  <PARAM NAME="BackColor" value="#ffffff"/>
  <PARAM NAME="ForeColor" value="#0000ff"/>
  <PARAM NAME="url" VALUE="/ie/controls/chart/mychart.txt"/>
</OBJECT>
```

## <a name="updating-an-existing-ole-control-to-use-new-activex-control-features"></a>L'aggiornamento di un controllo OLE esistente per utilizzare nuove funzionalità di controllo ActiveX

Se il controllo OLE è stato creato con una versione di Visual C++ precedenti alla 4.2, ci sono passaggi che consentono di migliorare le prestazioni e la relativa funzionalità. Per una descrizione dettagliata di queste modifiche, vedere [controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).

Se si aggiunge il supporto asincrono della proprietà a un controllo esistente, è necessario aggiungere la proprietà stato pronto e `ReadyStateChange` evento manualmente. Nel costruttore per il controllo, aggiungere:

[!code-cpp[NVC_MFCActiveXControl#8](../mfc/codesnippet/cpp/activex-controls-on-the-internet_8.cpp)]

Si aggiornerà lo stato di pronto quando viene scaricato il codice chiamando [COleControl:: InternalSetReadyState](../mfc/reference/colecontrol-class.md#internalsetreadystate). Un'unica posizione è possibile chiamare `InternalSetReadyState` proviene il `OnProgress` eseguire l'override di `CDataPathProperty`-classe derivata.

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)
