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
ms.openlocfilehash: f06a6f6f71e922163fd95c59836c50b88b05ed3a
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616483"
---
# <a name="activex-controls-on-the-internet"></a>Controlli ActiveX in Internet

I controlli ActiveX sono la versione aggiornata della specifica del controllo OLE.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni, vedere [controlli ActiveX](activex-controls.md).

I controlli sono un'architettura primaria per lo sviluppo di componenti software programmabili che possono essere utilizzati in una vasta gamma di contenitori diversi, inclusi i Web browser compatibili con COM in Internet. Qualsiasi controllo ActiveX può essere un controllo Internet e può aggiungere la funzionalità a un documento attivo o far parte di una pagina Web. I controlli in una pagina Web possono comunicare tra loro tramite lo scripting.

I controlli ActiveX non sono limitati a Internet. Un controllo ActiveX può essere usato anche in qualsiasi contenitore, purché il controllo supporti le interfacce richieste da tale contenitore.

**I controlli ActiveX presentano diversi vantaggi, tra cui:**

- Meno interfacce obbligatorie rispetto ai controlli OLE precedenti.

- La possibilità di essere senza finestra e sempre attiva sul posto.

**Per essere un controllo ActiveX, un controllo deve:**

- Supportare l' `IUnknown` interfaccia.

- Essere un oggetto COM.

- Esportare **DllRegisterServer** e **DllUnregisterServer**.

- Supportare le interfacce aggiuntive necessarie per la funzionalità.

## <a name="making-your-existing-controls-internet-friendly"></a>Rendere i controlli esistenti intuitivi per Internet

La progettazione di un controllo che funzioni correttamente in un ambiente Internet richiede la considerazione della velocità di trasmissione relativamente bassa su Internet. È possibile usare i controlli esistenti. Tuttavia, è necessario eseguire alcune operazioni per ridurre le dimensioni del codice e rendere le proprietà del controllo scaricate in modo asincrono.

Per migliorare le prestazioni dei controlli, seguire questi suggerimenti sulle considerazioni sull'efficienza:

- Implementare le tecniche descritte nell'articolo [controlli ActiveX: ottimizzazione](mfc-activex-controls-optimization.md).

- Considerare la modalità di creazione di un'istanza di un controllo.

- Essere asincrono; non tenere altri programmi.

- Scaricare i dati in blocchi di piccole dimensioni.

   Quando si scaricano flussi di grandi dimensioni, ad esempio bitmap o dati video, è possibile accedere in modo asincrono ai dati di un controllo in collaborazione con il contenitore. Recuperare i dati in modo incrementale o progressivo, lavorando in modo cooperativo con altri controlli che potrebbero anche recuperare i dati. Il codice può anche essere scaricato in modo asincrono.

- Scaricare il codice e le proprietà in background.

- Diventa l'interfaccia utente attiva il più rapidamente possibile.

- Valutare il modo in cui vengono archiviati i dati persistenti, sia le proprietà sia i BLOB di dati di grandi dimensioni, ad esempio un'immagine bitmap o dati video.

   I controlli con quantità significative di dati persistenti, ad esempio bitmap di grandi dimensioni o file AVI, richiedono attenzione al download del metodo. Un documento o una pagina può essere visibile il prima possibile e consentire all'utente di interagire con la pagina mentre i controlli recuperano i dati in background.

- Scrivere routine efficienti per ridurre le dimensioni del codice e il tempo di esecuzione.

   I controlli pulsante e etichetta piccoli, con solo pochi byte di dati persistenti, sono adatti per l'uso nell'ambiente Internet e funzionano correttamente all'interno dei browser.

- Tenere presente che lo stato di avanzamento viene comunicato al contenitore.

   Inviare una notifica al contenitore dello stato di avanzamento nel download asincrono, ad esempio quando l'utente può iniziare a interagire con una pagina e al termine del download. Il contenitore può visualizzare lo stato di avanzamento, ad esempio la percentuale di completamento, per l'utente.

- Considerare la modalità di registrazione dei controlli nel computer client.

## <a name="creating-a-new-activex-control"></a>Creazione di un nuovo controllo ActiveX

Quando si crea un nuovo controllo utilizzando la creazione guidata applicazione, è possibile scegliere di abilitare il supporto per moniker asincroni e altre ottimizzazioni. Per aggiungere il supporto per scaricare le proprietà del controllo in modo asincrono, attenersi alla procedura seguente:

#### <a name="to-create-your-project-using-the-mfc-activex-control-wizard"></a>Per creare il progetto utilizzando la creazione guidata controllo ActiveX MFC

1. Scegliere **nuovo** dal menu **file** .

1. Selezionare **creazione guidata controllo ActiveX MFC** dai progetti di Visual Studio C++ e assegnare un nome al progetto.

1. Nella pagina **Impostazioni controllo** selezionare Carica le **Proprietà in modo asincrono**. Se si seleziona questa opzione, la proprietà stato pronto e l'evento di modifica stato pronto vengono impostate.

   È anche possibile selezionare altre ottimizzazioni, ad esempio l' **attivazione senza finestra**, descritta in [controlli ActiveX: ottimizzazione](mfc-activex-controls-optimization.md).

1. Scegliere **fine** per creare il progetto.

#### <a name="to-create-a-class-derived-from-cdatapathproperty"></a>Per creare una classe derivata da CDataPathProperty

1. Creare una classe derivata da `CDataPathProperty` .

1. In ogni file di origine che include il file di intestazione per il controllo, aggiungere il file di intestazione per questa classe prima.

1. In questa classe, eseguire l'override di `OnDataAvailable` . Questa funzione viene chiamata ogni volta che i dati sono disponibili per la visualizzazione. Man mano che i dati diventano disponibili, è possibile gestirli nel modo desiderato, ad esempio eseguendone progressivamente il rendering.

   L'Estratto di codice seguente è un semplice esempio di visualizzazione progressiva dei dati in un controllo di modifica. Si noti l'uso di flag **BSCF_FIRSTDATANOTIFICATION** per cancellare il controllo di modifica.

   [!code-cpp[NVC_MFCActiveXControl#1](codesnippet/cpp/activex-controls-on-the-internet_1.cpp)]

   Si noti che è necessario includere AFXCMN. H per usare la `CListCtrl` classe.

1. Quando si modifica lo stato generale del controllo, ad esempio dal caricamento a Initialized o User Interactive, chiamare `COleControl::InternalSetReadyState` . Se il controllo ha una sola proprietà del percorso dati, è possibile aggiungere il codice **BSCF_LASTDATANOTIFICATION** per notificare al contenitore che il download è stato completato. Ad esempio:

   [!code-cpp[NVC_MFCActiveXControl#2](codesnippet/cpp/activex-controls-on-the-internet_2.cpp)]

1. Eseguire l'override di `OnProgress`. In viene `OnProgress` passato un numero che mostra l'intervallo massimo e un numero che indica la distanza del download corrente. È possibile utilizzare questi numeri per visualizzare lo stato, ad esempio la percentuale di completamento dell'utente.

La procedura successiva aggiunge una proprietà al controllo per usare la classe appena derivata.

#### <a name="to-add-a-property"></a>Per aggiungere una proprietà

1. In **Visualizzazione classi**fare clic con il pulsante destro del mouse sull'interfaccia sotto il nodo libreria e scegliere **Aggiungi**, quindi **Aggiungi proprietà**. Verrà avviata l' **Aggiunta guidata proprietà**.

1. Nella **procedura guidata Aggiungi proprietà**selezionare il pulsante di opzione **imposta/Ottieni metodi** , digitare il **nome della proprietà**, ad esempio EditControlText, e selezionare BSTR come **tipo di proprietà**.

1. Fare clic su **Fine**.

1. Dichiarare una variabile membro della `CDataPathProperty` classe derivata da alla classe del controllo ActiveX.

   [!code-cpp[NVC_MFCActiveXControl#3](codesnippet/cpp/activex-controls-on-the-internet_3.h)]

1. Implementare i metodi `Get/Set`. Per `Get` , restituire la stringa. Per `Set` , caricare la proprietà e chiamare `SetModifiedFlag` .

   [!code-cpp[NVC_MFCActiveXControl#4](codesnippet/cpp/activex-controls-on-the-internet_4.cpp)]

1. In [DoPropExchange](reference/colecontrol-class.md#dopropexchange)aggiungere la riga seguente:

   [!code-cpp[NVC_MFCActiveXControl#5](codesnippet/cpp/activex-controls-on-the-internet_5.cpp)]

1. Eseguire l'override di [ResetData](reference/cdatapathproperty-class.md#resetdata) per notificare alla proprietà la reimpostazione del controllo aggiungendo questa riga:

   [!code-cpp[NVC_MFCActiveXControl#6](codesnippet/cpp/activex-controls-on-the-internet_6.cpp)]

## <a name="deciding-whether-to-derive-from-cdatapathproperty-or-ccacheddatapathproperty"></a>Decidere se derivare da CDataPathProperty o CCachedDataPathProperty

Nell'esempio precedente vengono descritti i passaggi per la derivazione della proprietà del controllo da `CDataPathProperty` . Si tratta di una scelta ottimale se si scaricano dati in tempo reale che cambiano di frequente e per i quali non è necessario memorizzare tutti i dati, ma solo il valore corrente. Un esempio è un controllo del titolo di borsa.

È anche possibile derivare da `CCachedDataPathProperty` . In questo caso, i dati scaricati vengono memorizzati nella cache in un file di memoria. Si tratta di una scelta ottimale se è necessario contenere tutti i dati scaricati, ad esempio un controllo che esegue progressivamente il rendering di una bitmap. In questo caso, la classe ha una variabile membro contenente i dati:

`CMemFile m_Cache;`

Nella classe del controllo ActiveX, è possibile utilizzare questo file con mapping di memoria in `OnDraw` per visualizzare i dati. Nella classe derivata dal controllo ActiveX `CCachedDataPathProperty` eseguire l'override della funzione membro `OnDataAvailable` e invalidare il controllo, dopo aver chiamato l'implementazione della classe di base.

[!code-cpp[NVC_MFCActiveXControl#7](codesnippet/cpp/activex-controls-on-the-internet_7.cpp)]

## <a name="downloading-data-asynchronously-using-activex-controls"></a>Download asincrono dei dati tramite i controlli ActiveX

Il download dei dati in una rete deve essere eseguito in modo asincrono. Il vantaggio di questa operazione è che se si trasferisce una grande quantità di dati o se la connessione è lenta, il processo di download non bloccherà altri processi nel client.

I moniker asincroni consentono di scaricare i dati in modo asincrono in una rete. Un'operazione di lettura su un moniker asincrono restituisce immediatamente un valore, anche se l'operazione non è stata completata.

Se, ad esempio, sono disponibili solo 10 byte e la lettura viene chiamata in modo asincrono in un file con estensione 1K, Read non blocca, ma restituisce con i 10 byte attualmente disponibili.

Si implementano [moniker asincroni](asynchronous-monikers-on-the-internet.md) usando la `CAsyncMonikerFile` classe. Tuttavia, i controlli ActiveX possono utilizzare la `CDataPathProperty` classe, derivata da `CAsyncMonikerFile` , per consentire l'implementazione delle proprietà del controllo asincrono.

## <a name="displaying-a-control-on-a-web-page"></a>Visualizzazione di un controllo in una pagina Web

Di seguito è riportato un esempio di tag oggetto e attributi per l'inserimento di un controllo in una pagina Web.

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

## <a name="updating-an-existing-ole-control-to-use-new-activex-control-features"></a>Aggiornamento di un controllo OLE esistente per l'utilizzo delle nuove funzionalità di controllo ActiveX

Se il controllo OLE è stato creato con una versione di Visual C++ precedente alla 4,2, è possibile eseguire alcune operazioni per migliorarne le prestazioni e migliorarne le funzionalità. Per una descrizione dettagliata di queste modifiche, vedere [controlli ActiveX: ottimizzazione](mfc-activex-controls-optimization.md).

Se si aggiunge il supporto di proprietà asincrone a un controllo esistente, sarà necessario aggiungere la proprietà stato pronto e l' `ReadyStateChange` evento. Nel costruttore del controllo aggiungere:

[!code-cpp[NVC_MFCActiveXControl#8](codesnippet/cpp/activex-controls-on-the-internet_8.cpp)]

Lo stato pronto verrà aggiornato durante il download del codice chiamando [COleControl:: InternalSetReadyState](reference/colecontrol-class.md#internalsetreadystate). Un'unica posizione che è possibile chiamare `InternalSetReadyState` è dall' `OnProgress` override della `CDataPathProperty` classe derivata da.

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](mfc-internet-programming-tasks.md)<br/>
[Nozioni fondamentali sulla programmazione Internet MFC](mfc-internet-programming-basics.md)
