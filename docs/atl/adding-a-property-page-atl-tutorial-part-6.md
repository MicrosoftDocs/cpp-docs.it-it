---
title: Aggiunta di una pagina di proprietà (Esercitazione di ATL, parte 6)
ms.custom: get-started-article
ms.date: 09/27/2018
ms.assetid: df80d255-e7ea-49d9-b940-3f012e90cf9b
ms.openlocfilehash: 2c487d1446f5d1050868f2066359e9639f474ba3
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65524692"
---
# <a name="adding-a-property-page-atl-tutorial-part-6"></a>Aggiunta di una pagina di proprietà (Esercitazione di ATL, parte 6)

> [!NOTE] 
> La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

Le pagine delle proprietà vengono implementate come oggetti COM separati, che ne permettono la condivisione se necessario. In questo passaggio verranno eseguite le attività seguenti per aggiungere una pagina delle proprietà al controllo:

- Creazione della risorsa pagina delle proprietà

- Aggiunta di codice per creare e gestire la pagina delle proprietà

- Aggiunta della pagina delle proprietà al controllo

## <a name="creating-the-property-page-resource"></a>Creazione della risorsa pagina delle proprietà

Per aggiungere la pagina delle proprietà al controllo, usare il modello Pagina delle proprietà ATL.

### <a name="to-add-a-property-page"></a>Per aggiungere una pagina delle proprietà

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse su `Polygon`.

1. Scegliere **Aggiungi** > **Nuovo elemento** dal menu di scelta rapida.

1. Nell'elenco dei modelli selezionare **ATL** > **Pagina delle proprietà ATL** e fare clic su **Aggiungi**.

1. Quando viene visualizzata la **Creazione guidata pagina delle proprietà ATL**, immettere *PolyProp* come nome in **Nome breve**.

1. Fare clic su **Stringhe** per aprire la pagina **Stringhe** e immettere **&Polygon** come **Titolo**.

   Il valore di **Titolo** della pagina delle proprietà è la stringa visualizzata nella scheda per la pagina. Il valore di **Stringa doc** è una descrizione usata da una finestra delle proprietà per inserire una riga di stato o una descrizione comando. Si noti che la finestra delle proprietà standard attualmente non usa questa stringa e di conseguenza è possibile lasciarla con il contenuto predefinito. Poiché al momento non si genererà un **file della Guida**, eliminare la voce nella casella di testo.

1. Fare clic su **Fine** perché venga creato l'oggetto pagina delle proprietà.

Vengono creati i file seguenti:

|File|Description|
|----------|-----------------|
|PolyProp.h|Contiene la classe C++ `CPolyProp`, che implementa la pagina delle proprietà.|
|PolyProp.cpp|Include il file PolyProp.h.|
|PolyProp.rgs|Script del Registro di sistema che registra l'oggetto pagina delle proprietà.|

Vengono anche apportate le modifiche seguenti al codice:

- La nuova pagina delle proprietà viene aggiunta alla mappa di voci dell'oggetto in Polygon.cpp.

- La classe `PolyProp` viene aggiunta al file Polygon.idl.

- Il nuovo file di script del Registro di sistema Polyprop.rgs viene aggiunto alla risorsa del progetto.

- Un modello di finestra di dialogo viene aggiunto alla risorsa del progetto per la pagina delle proprietà.

- Le stringhe delle proprietà specificate vengono aggiunte alla tabella delle stringhe delle risorse.

Aggiungere ora i campi che dovranno essere visualizzati nella pagina delle proprietà.

### <a name="to-add-fields-to-the-property-page"></a>Per aggiungere campi alla pagina delle proprietà

1. In **Esplora soluzioni** fare doppio clic sul file di risorse Polygon.rc. Verrà visualizzata la finestra **Visualizzazione risorse**.

1. In **Visualizzazione risorse** espandere il nodo `Dialog` e fare doppio clic su `IDD_POLYPROP`. Si noti che la finestra di dialogo visualizzata è vuota, ad eccezione di un'etichetta che indica di inserire qui i controlli.

1. Selezionare l'etichetta e modificarla in modo che indichi `Sides:` modificando il testo **Didascalia** nella finestra **Proprietà**.

1. Ridimensionare la casella dell'etichetta in base alle dimensioni del testo.

1. Trascinare un elemento **Controllo di modifica** dalla **Casella degli strumenti** a destra dell'etichetta.

1. Infine, modificare il valore di **ID** del controllo di modifica in `IDC_SIDES` usando la finestra **Proprietà**.

Questa operazione completa il processo di creazione della risorsa pagina delle proprietà.

## <a name="adding-code-to-create-and-manage-the-property-page"></a>Aggiunta di codice per creare e gestire la pagina delle proprietà

Ora che è stata creata la risorsa pagina delle proprietà, è necessario scrivere il codice di implementazione.

Prima di tutto, abilitare la classe `CPolyProp` per impostare il numero di lati dell'oggetto quando viene premuto il pulsante **Applica**.

### <a name="to-modify-the-apply-function-to-set-the-number-of-sides"></a>Per modificare la funzione Applica per impostare il numero di lati

1. Sostituire la funzione `Apply` in PolyProp.h con il codice seguente:

    [!code-cpp[NVC_ATL_Windowing#58](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_1.h)]

Poiché a una pagina delle proprietà può essere collegato più di un client per volta, la funzione `Apply` esegue un ciclo e chiama `put_Sides` in ogni client con il valore recuperato dalla casella di modifica. Viene usata la classe [CComQIPtr](../atl/reference/ccomqiptr-class.md), che esegue `QueryInterface` su ogni oggetto per ottenere l'interfaccia `IPolyCtl` dall'interfaccia `IUnknown` (archiviata nella matrice `m_ppUnk`).

Il codice verifica ora che l'impostazione della proprietà `Sides` funzioni effettivamente. In caso contrario, il codice visualizza una finestra di messaggio contenente i dettagli dell'errore dall'interfaccia `IErrorInfo`. In genere, un contenitore richiede un oggetto per l'interfaccia `ISupportErrorInfo` e chiama prima `InterfaceSupportsErrorInfo` per determinare se l'oggetto supporta l'impostazione delle informazioni sugli errori. È possibile ignorare questa attività.

[CComPtr](../atl/reference/ccomptr-class.md) gestisce automaticamente il conteggio dei riferimenti, in modo che non sia necessario chiamare `Release` nell'interfaccia. `CComBSTR` semplifica l'elaborazione delle stringhe BSTR, per evitare di effettuare la chiamata `SysFreeString` finale. È necessario usare una delle diverse classi di conversione delle stringhe in modo da poter convertire la stringa BSTR se necessario (questo è il motivo per cui la macro USES_CONVERSION è all'inizio della funzione).

È anche necessario impostare il flag di stato modificato ma non salvato della pagina delle proprietà per indicare che il pulsante **Applica** deve essere abilitato. Questo si verifica quando l'utente modifica il valore nella casella di modifica **Sides**.

### <a name="to-handle-the-apply-button"></a>Per gestire il pulsante Applica

1. In **Visualizzazione classi** fare clic con il pulsante destro del mouse su `CPolyProp` e scegliere **Proprietà** dal menu di scelta rapida.

1. Nella finestra **Proprietà** fare clic sull'icona **Eventi**.

1. Espandere il nodo `IDC_SIDES` nell'elenco di eventi.

1. Selezionare `EN_CHANGE` e dal menu a discesa a destra fare clic su **\<Aggiungi > OnEnChangeSides**. Verranno aggiunte la dichiarazione del gestore `OnEnChangeSides` a PolyProp.h e l'implementazione del gestore a PolyProp.cpp.

È ora necessario modificare il gestore.

### <a name="to-modify-the-onenchangesides-method"></a>Per modificare il metodo OnEnChangeSides

1. Aggiungere il codice seguente in PolyProp.cpp al metodo `OnEnChangeSides` (eliminando tutto il codice inserito dalla procedura guidata):

    [!code-cpp[NVC_ATL_Windowing#59](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_2.cpp)]

`OnEnChangeSides` verrà chiamato quando viene inviato un messaggio `WM_COMMAND` con la notifica `EN_CHANGE` per il controllo `IDC_SIDES`. `OnEnChangeSides` chiama quindi `SetDirty` e passa TRUE per indicare che la pagina delle proprietà è ora modificata ma non salvata e che il pulsante **Applica** deve essere abilitato.

## <a name="adding-the-property-page-to-the-control"></a>Aggiunta della pagina delle proprietà al controllo

Il modello Pagina delle proprietà ATL e la procedura guidata non aggiungono automaticamente la pagina delle proprietà al controllo, perché il progetto potrebbe includere più controlli. È necessario aggiungere una voce alla mappa delle proprietà del controllo.

### <a name="to-add-the-property-page"></a>Per aggiungere la pagina delle proprietà

1. Aprire PolyCtl.h e aggiungere queste righe alla mappa delle proprietà:

    [!code-cpp[NVC_ATL_Windowing#60](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_3.h)]

La mappa delle proprietà del controllo sarà simile alla seguente:

[!code-cpp[NVC_ATL_Windowing#61](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_4.h)]

È possibile aggiungere una macro `PROP_PAGE` con il CLSID della pagina delle proprietà, ma se si usa la macro `PROP_ENTRY` come mostrato, viene salvato anche il valore della proprietà `Sides` quando viene salvato il controllo.

I tre parametri per la macro sono la descrizione della proprietà, il DISPID della proprietà e il CLSID della pagina delle proprietà che contiene la proprietà. Questo è utile, ad esempio, quando si carica il controllo in Visual Basic e si imposta il numero di lati in fase di progettazione. Poiché il numero di lati viene salvato, quando si ricarica il progetto di Visual Basic verrà ripristinato.

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

Compilare ora il controllo e inserirlo in ActiveX Control Test Container. In **Test Container** scegliere **Oggetto classe PolyCtl** dal menu **Modifica**. Viene visualizzata la pagina delle proprietà con le informazioni aggiunte.

Il pulsante **Applica** è inizialmente disabilitato. Iniziare a digitare un valore nella casella **Sides** e il pulsante **Applica** verrà abilitato. Dopo aver immesso il valore, fare clic sul pulsante **Applica**. Il controllo visualizza le modifiche e il pulsante **Applica** viene disabilitato di nuovo. Provare a immettere un valore non valido. Verrà visualizzata una finestra di messaggio contenente la descrizione dell'errore impostato dalla funzione `put_Sides`.

Si inserirà ora il controllo in una pagina Web.

[Torna al passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md) &#124; [Vai al passaggio 7](../atl/putting-the-control-on-a-web-page-atl-tutorial-part-7.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
