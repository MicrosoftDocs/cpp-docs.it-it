---
title: Aggiunta di una pagina di proprietà (Esercitazione di ATL, parte 6)
ms.custom: get-started-article
ms.date: 09/27/2018
ms.assetid: df80d255-e7ea-49d9-b940-3f012e90cf9b
ms.openlocfilehash: 9287b7a15e3653212ed6a5428cdfe5a530ececc3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62198513"
---
# <a name="adding-a-property-page-atl-tutorial-part-6"></a>Aggiunta di una pagina di proprietà (Esercitazione di ATL, parte 6)

Pagine delle proprietà vengono implementate come oggetti COM distinti, che consentono loro di essere condivisi se necessario. In questo passaggio, si eseguiranno le attività seguenti per aggiungere una pagina delle proprietà al controllo:

- Creazione della risorsa di pagina proprietà

- Aggiunta di codice per creare e gestire la pagina delle proprietà

- Aggiunta alla pagina delle proprietà al controllo

## <a name="creating-the-property-page-resource"></a>Creazione della risorsa di pagina proprietà

Per aggiungere una pagina delle proprietà al controllo, usare il modello di pagina delle proprietà ATL.

### <a name="to-add-a-property-page"></a>Per aggiungere una pagina delle proprietà

1. Nelle **Esplora soluzioni**, fare doppio clic su `Polygon`.

1. Nel menu di scelta rapida, fare clic su **Add** > **nuovo elemento**.

1. Nell'elenco dei modelli, selezionare **ATL** > **pagina delle proprietà ATL** e fare clic su **Aggiungi**.

1. Quando la **Creazione guidata pagina delle proprietà ATL** viene visualizzata, immettere *PolyProp* come il **breve** nome.

1. Fare clic su **stringhe** per aprire il **stringhe** pagina e immettere **& poligono** come il **titolo**.

   Il **titolo** della proprietà pagina è la stringa visualizzata nella scheda per la pagina. Il **stringa Doc** è una descrizione che usa una finestra delle proprietà da inserire in un suggerimento di riga o lo strumento di stato. Si noti che il frame di proprietà standard attualmente non usare questa stringa, in modo da lasciare l'impostazione con il contenuto predefinito. Non genererà una **file della Guida** al momento, quindi eliminare la voce nella casella di testo.

1. Fare clic su **fine**, e verrà creato l'oggetto pagina delle proprietà.

Vengono creati i tre file seguenti:

|File|Descrizione|
|----------|-----------------|
|PolyProp|Contiene la classe C++ `CPolyProp`, che implementa la pagina delle proprietà.|
|PolyProp.cpp|Include il file Polyprop.|
|PolyProp.rgs|Lo script del Registro di sistema che registra l'oggetto pagina delle proprietà.|

Vengono eseguite anche le modifiche al codice seguente:

- La nuova pagina delle proprietà viene aggiunto alla mappa di voce dell'oggetto in Polygon.

- Il `PolyProp` viene aggiunta la classe nel file Polygon. idl.

- Il nuovo file di script del Registro di sistema Polyprop. RGS viene aggiunto alla risorsa del progetto.

- Un modello di finestra di dialogo viene aggiunto alla risorsa di progetto per la pagina delle proprietà.

- Le stringhe di proprietà specificato vengono aggiunti alla tabella di stringhe di risorse.

Aggiungere ora i campi che si desidera visualizzare nella pagina delle proprietà.

### <a name="to-add-fields-to-the-property-page"></a>Per aggiungere campi alla pagina delle proprietà

1. Nelle **Esplora soluzioni**, fare doppio clic sul file di risorse Polygon. Si aprirà **visualizzazione risorse**.

1. Nelle **visualizzazione di risorse**, espandere il `Dialog` nodo e fare doppio clic `IDD_POLYPROP`. Si noti che la finestra di dialogo visualizzata è vuota, ad eccezione di etichetta che indica all'utente di inserire qui i controlli.

1. Selezionare l'etichetta e modificarlo per leggere `Sides:` modificando il **didascalia** testo nel **proprietà** finestra.

1. Ridimensionare la casella dell'etichetta in modo che quest'ultima rientri le dimensioni del testo.

1. Trascinare un' **MaskedEdit** dal **della casella degli strumenti** a destra dell'etichetta.

1. Infine, modificare il **ID** del controllo di modifica a `IDC_SIDES` utilizzando le **proprietà** finestra.

In questo passaggio si completa il processo di creazione della risorsa di pagina delle proprietà.

## <a name="adding-code-to-create-and-manage-the-property-page"></a>Aggiunta di codice per creare e gestire la pagina delle proprietà

Dopo avere creato la risorsa di pagina delle proprietà, è necessario scrivere il codice di implementazione.

Abilitare prima la `CPolyProp` classe per impostare il numero di lati dell'oggetto quando il **applica** pulsante viene premuto.

### <a name="to-modify-the-apply-function-to-set-the-number-of-sides"></a>Per modificare la funzione Apply per impostare il numero di lati

1. Sostituire il `Apply` funzione in PolyProp con il codice seguente:

    [!code-cpp[NVC_ATL_Windowing#58](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_1.h)]

Una pagina delle proprietà può avere più di un client collegato alla volta, in modo che il `Apply` funzione esegue un loop e chiama `put_Sides` in ogni client con il valore recuperato dalla casella di modifica. Si usa la [CComQIPtr](../atl/reference/ccomqiptr-class.md) (classe), che esegue il `QueryInterface` su ogni oggetto per ottenere il `IPolyCtl` interfaccia dal `IUnknown` interfaccia (archiviati nel `m_ppUnk` matrice).

Il codice verifica ora che l'impostazione di `Sides` proprietà realmente usati. In caso contrario, il codice visualizza una finestra di messaggio contenente i dettagli dell'errore dal `IErrorInfo` interfaccia. In genere, un contenitore richiede un oggetto per il `ISupportErrorInfo` interfaccia e le chiamate `InterfaceSupportsErrorInfo` prima, per determinare se l'oggetto supporta l'impostazione delle informazioni di errore. È possibile ignorare questa attività.

[CComPtr](../atl/reference/ccomptr-class.md) aiuta gestendo automaticamente il conteggio dei riferimenti, pertanto non è necessario chiamare `Release` sull'interfaccia. `CComBSTR` Consente l'elaborazione BSTR, pertanto non è necessario eseguire l'elemento finale `SysFreeString` chiamare. Utilizziamo inoltre una delle varie classi di conversione di stringhe, pertanto è possibile convertire la stringa BSTR se necessario (questo è il motivo per cui la macro USES_CONVERSION è all'inizio della funzione).

È inoltre necessario impostare flag modificato della pagina delle proprietà per indicare che il **applica** pulsante deve essere abilitato. Ciò si verifica quando l'utente modifica il valore di **lati** casella di modifica.

### <a name="to-handle-the-apply-button"></a>Per gestire il pulsante Applica

1. Nelle **Visualizzazione classi**, fare doppio clic su `CPolyProp` e fare clic su **proprietà** menu di scelta rapida.

1. Nel **delle proprietà** finestra, fare clic sul **eventi** icona.

1. Espandere il `IDC_SIDES` nodo nell'elenco di eventi.

1. Selezionare `EN_CHANGE`, dal menu a discesa a destra, fare clic su  **\<Aggiungi > OnEnChangeSides**. Il `OnEnChangeSides` verrà aggiunto al PolyProp e l'implementazione del gestore da PolyProp dichiarazione del gestore.

Successivamente, si modificherà il gestore.

### <a name="to-modify-the-onenchangesides-method"></a>Per modificare il metodo OnEnChangeSides

1. Aggiungere il codice seguente in PolyProp al `OnEnChangeSides` metodo (l'eliminazione di qualsiasi codice che la procedura guidata inserita):

    [!code-cpp[NVC_ATL_Windowing#59](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_2.cpp)]

`OnEnChangeSides` verrà chiamato quando un `WM_COMMAND` messaggio viene inviato con il `EN_CHANGE` notifica per il `IDC_SIDES` controllo. `OnEnChangeSides` quindi chiama `SetDirty` e passa TRUE per indicare la pagina delle proprietà è stata modificata e il **applica** pulsante deve essere abilitato.

## <a name="adding-the-property-page-to-the-control"></a>Aggiunta alla pagina delle proprietà al controllo

Il modello di pagina delle proprietà ATL e procedura guidata non aggiungere la pagina delle proprietà per il controllo per l'utente automaticamente, perché potrebbero esserci più controlli nel progetto. È necessario aggiungere una voce alla mappa del controllo proprietà.

### <a name="to-add-the-property-page"></a>Per aggiungere la pagina delle proprietà

1. Aprire PolyCtl. H e aggiungere le righe seguenti per il mapping di proprietà:

    [!code-cpp[NVC_ATL_Windowing#60](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_3.h)]

Mappa delle proprietà del controllo sarà simile al seguente:

[!code-cpp[NVC_ATL_Windowing#61](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_4.h)]

Potrebbe aver aggiunto un `PROP_PAGE` macro con il CLSID della pagina delle proprietà, ma se si usa la `PROP_ENTRY` macro come illustrato, la `Sides` valore della proprietà viene salvato anche quando il controllo viene salvato.

I tre parametri per la macro sono la descrizione della proprietà, il DISPID della proprietà e il CLSID della pagina delle proprietà che dispone della proprietà su di esso. Ciò è utile se, ad esempio, si carica il controllo in Visual Basic e imposta il numero di lati in fase di progettazione. Poiché il numero di lati viene salvato, quando si ricarica il progetto di Visual Basic, verrà ripristinato il numero di lati.

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

A questo punto compilare tale controllo e la inserisce nella ActiveX Control Test Container. In **Test Container**via le **modificare** dal menu fare clic su **oggetto della classe PolyCtl**. Viene visualizzata la pagina delle proprietà con le informazioni aggiunte.

Il **applica** pulsante verrà inizialmente disabilitato. Iniziare a digitare un valore nel **lati** finestra e il **applica** pulsante viene abilitato. Dopo aver immesso il valore, fare clic sui **applica** pulsante. Visualizzazione del controllo cambia e il **applica** pulsante nuovo è disabilitato. Provare a immettere un valore non valido. Si noterà una finestra di messaggio contenente la descrizione dell'errore impostato dal `put_Sides` (funzione).

Successivamente, si inserirà il controllo in una pagina Web.

[Tornare al passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md) &#124; [al passaggio 7](../atl/putting-the-control-on-a-web-page-atl-tutorial-part-7.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
