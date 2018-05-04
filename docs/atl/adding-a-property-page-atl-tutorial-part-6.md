---
title: Aggiunta di una pagina delle proprietà (ATL esercitazione, parte 6) | Documenti Microsoft
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: df80d255-e7ea-49d9-b940-3f012e90cf9b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf7f0383697fbc1e23e179936a2616d1d236b5f2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="adding-a-property-page-atl-tutorial-part-6"></a>Aggiunta di una pagina di proprietà (Esercitazione di ATL, parte 6)
Pagine delle proprietà vengono implementate come oggetti COM separati, che consentono loro di condivisione, se necessario. In questo passaggio si eseguiranno le attività seguenti per aggiungere una pagina delle proprietà al controllo:  
  
-   Creazione della risorsa di pagina delle proprietà  
  
-   Aggiungere il codice per creare e gestire la pagina delle proprietà  
  
-   Aggiunta alla pagina delle proprietà al controllo  
  
## <a name="creating-the-property-page-resource"></a>Creazione della risorsa di pagina delle proprietà  
 Per aggiungere una pagina delle proprietà al controllo, utilizzare la creazione guidata classe aggiungere ATL.  
  
#### <a name="to-add-a-property-page"></a>Per aggiungere una pagina delle proprietà  
  
1.  In Esplora soluzioni fare doppio clic su poligono.  
  
2.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi classe**.  
  
3.  Nell'elenco dei modelli, selezionare **pagina delle proprietà ATL** e fare clic su **Aggiungi**.  
  
4.  Creazione guidata pagina delle proprietà ATL visualizzata immettere `PolyProp` come il **breve** nome.  
  
5.  Fare clic su **stringhe** per aprire la **stringhe** pagina e immettere **& poligono** come il **titolo**.  
  
     Il **titolo** della proprietà di pagina è la stringa visualizzata nella scheda della pagina. Il **stringa Doc** è una descrizione che viene utilizzato un frame di proprietà per inserire in un suggerimento di riga o lo strumento di stato. Si noti che la finestra delle proprietà standard attualmente non utilizza questa stringa, quindi è possibile lasciarla con il contenuto predefinito. Non genererà un **file della Guida** al momento, quindi eliminare la voce nella casella di testo.  
  
6.  Fare clic su **fine**, e verrà creato l'oggetto pagina delle proprietà.  
  
 Vengono creati i tre file seguenti:  
  
|File|Descrizione|  
|----------|-----------------|  
|Polyprop. H|Contiene la classe C++ `CPolyProp`, che implementa la pagina delle proprietà.|  
|PolyProp|Include il file Polyprop.|  
|Polyprop. rgs|Lo script del Registro di sistema che registra l'oggetto pagina delle proprietà.|  
  
 Vengono eseguite anche le modifiche al codice seguente:  
  
-   La nuova pagina delle proprietà viene aggiunto alla mappa oggetto voce Polygon.  
  
-   La `PolyProp` classe viene aggiunto al file Polygon.  
  
-   Il nuovo file di script del Registro di sistema Polyprop. RGS viene aggiunto alla risorsa del progetto.  
  
-   Un modello di finestra di dialogo viene aggiunto alla risorsa del progetto per la pagina delle proprietà.  
  
-   Le stringhe di proprietà specificato vengono aggiunti alla tabella di stringhe di risorsa.  
  
 Aggiungere i campi che si desidera visualizzare nella pagina delle proprietà.  
  
#### <a name="to-add-fields-to-the-property-page"></a>Per aggiungere campi alla pagina delle proprietà  
  
1.  In Esplora soluzioni fare doppio clic sul file di risorse Polygon. Verrà aperta una visualizzazione di risorse.  
  
2.  In visualizzazione di risorse, espandere il nodo della finestra di dialogo e fare doppio clic su IDD_POLYPROP. Si noti che la finestra di dialogo visualizzata è vuota, ad eccezione di un'etichetta che viene chiesto di inserire qui i controlli.  
  
3.  Selezionare l'etichetta e modificarlo per leggere `Sides:` modificando il **didascalia** testo il **proprietà** finestra.  
  
4.  Ridimensionare la casella di etichetta in modo da adattarlo le dimensioni del testo.  
  
5.  Trascinare un controllo di modifica dalla casella degli strumenti a destra dell'etichetta.  
  
6.  Infine, modificare il **ID** del controllo di modifica per `IDC_SIDES` utilizzando la finestra Proprietà.  
  
 In questo passaggio si completa il processo di creazione della risorsa pagina delle proprietà.  
  
## <a name="adding-code-to-create-and-manage-the-property-page"></a>Aggiungere il codice per creare e gestire la pagina delle proprietà  
 Ora che è stato creato la risorsa pagina delle proprietà, è necessario scrivere il codice di implementazione.  
  
 Innanzitutto, abilitare il `CPolyProp` classe per impostare il numero dei lati dell'oggetto quando il **applica** pressione del pulsante.  
  
#### <a name="to-modify-the-apply-function-to-set-the-number-of-sides"></a>Per modificare la funzione Apply per impostare il numero dei lati  
  
1.  Sostituire il `Apply` funzione PolyProp con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#58](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_1.h)]  
  
 Una pagina delle proprietà può avere più di un client connessi contemporaneamente, pertanto la `Apply` funzione esegue un ciclo e chiama `put_Sides` in ogni client con il valore recuperato dalla casella di modifica. Si utilizza il [CComQIPtr](../atl/reference/ccomqiptr-class.md) (classe), che esegue il `QueryInterface` su ogni oggetto per ottenere il `IPolyCtl` interfaccia dal **IUnknown** interfaccia (archiviati nel `m_ppUnk` matrice).  
  
 Nel codice viene controllato l'impostazione di `Sides` proprietà effettivamente utilizzato. In caso contrario, il codice visualizza una finestra di messaggio, la visualizzazione dei dettagli di errore dal **IErrorInfo** interfaccia. In genere, un contenitore richiede un oggetto per il **ISupportErrorInfo** interfaccia e chiama `InterfaceSupportsErrorInfo` prima, per determinare se l'oggetto supporta l'impostazione delle informazioni di errore. È possibile ignorare questa attività.  
  
 [Istanze CComPtr](../atl/reference/ccomptr-class.md) consente di gestendo automaticamente il conteggio dei riferimenti, pertanto non è necessario chiamare `Release` sull'interfaccia. `CComBSTR` Consente di con `BSTR` elaborare, quindi non è necessario eseguire finale `SysFreeString` chiamare. È inoltre utilizzare una delle varie classi di conversione di stringhe, pertanto è possibile convertire il `BSTR` eventualmente (perché il `USES_CONVERSION` macro è all'inizio della funzione).  
  
 È inoltre necessario impostare flag dirty della pagina delle proprietà per indicare che il **applica** pulsante deve essere attivato. Questo errore si verifica quando l'utente modifica il valore di **lati** casella di modifica.  
  
#### <a name="to-handle-the-apply-button"></a>Per gestire il pulsante Applica  
  
1.  In visualizzazione classi, fare doppio clic su CPolyProp e fare clic su **proprietà** nel menu di scelta rapida.  
  
2.  Nella finestra Proprietà fare clic su di **eventi** icona.  
  
3.  Espandere il `IDC_SIDES` nodo nell'elenco di eventi.  
  
4.  Selezionare `EN_CHANGE`, dal menu di riepilogo a discesa a destra, fare clic su  **\<Aggiungi > OnEnChangeSides**. Il `OnEnChangeSides` verrà aggiunto al PolyProp e l'implementazione del gestore da PolyProp dichiarazione del gestore.  
  
 Successivamente, si modificherà il gestore.  
  
#### <a name="to-modify-the-onenchangesides-method"></a>Per modificare il metodo OnEnChangeSides  
  
1.  Aggiungere il codice seguente in PolyProp per il `OnEnChangeSides` (metodo) (l'eliminazione di qualsiasi codice che la procedura guidata inserita):  
  
     [!code-cpp[NVC_ATL_Windowing#59](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_2.cpp)]  
  
 `OnEnChangeSides` verrà chiamato quando un **WM_COMMAND** messaggio viene inviato con il **EN_CHANGE** notifica per il `IDC_SIDES` controllo. `OnEnChangeSides` quindi chiama `SetDirty` e passa `TRUE` per indicare la proprietà verrà pagina dirty e la **applica** pulsante deve essere abilitato.  
  
## <a name="adding-the-property-page-to-the-control"></a>Aggiunta alla pagina delle proprietà al controllo  
 La creazione guidata classe aggiungere ATL e guidata pagina delle proprietà ATL non aggiungere la pagina delle proprietà al controllo automaticamente, perché nel progetto potrebbe essere più controlli. È necessario aggiungere una voce per il mapping di proprietà del controllo.  
  
#### <a name="to-add-the-property-page"></a>Per aggiungere la pagina delle proprietà  
  
1.  Aprire PolyCtl. H e aggiungere questa riga per il mapping di proprietà:  
  
     [!code-cpp[NVC_ATL_Windowing#60](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_3.h)]  
  
 Mapping di proprietà del controllo è ora simile al seguente:  
  
 [!code-cpp[NVC_ATL_Windowing#61](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_4.h)]  
  
 Qualora siano stati aggiunti un `PROP_PAGE` (macro) con il CLSID della pagina delle proprietà, ma se si utilizza il `PROP_ENTRY` (macro), come illustrato, il `Sides` valore della proprietà viene salvato anche quando il controllo viene salvato.  
  
 I tre parametri per la macro sono la descrizione della proprietà, il DISPID della proprietà e il CLSID della pagina delle proprietà con la proprietà su di esso. Ciò è utile se, ad esempio, si carica il controllo in Visual Basic e impostare il numero di lati in fase di progettazione. Poiché il numero dei lati verrà salvato, quando si ricarica il progetto di Visual Basic, verrà ripristinato il numero di lati.  
  
## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo  
 Ora di compilazione che controllano e inserirlo in ActiveX Control Test Container. Nel contenitore di Test, nel **modifica** menu, fare clic su **PolyCtl Class Object**. Verrà visualizzata la pagina delle proprietà. Fare clic su di **poligono** scheda.  
  
 Il **applica** pulsante inizialmente è disabilitato. Iniziare a digitare un valore nel **lati** casella e **applica** pulsante viene abilitato. Dopo aver immesso il valore, fare clic su di **applica** pulsante. Le modifiche di visualizzazione del controllo e **applica** pulsante nuovo è disabilitato. Provare a immettere un valore non valido. Verrà visualizzato un messaggio contenente la descrizione dell'errore che compreso il `put_Sides` (funzione).  
  
 Successivamente, si passerà il controllo in una pagina Web.  
  
 [Al passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md) &#124; [al passaggio 7](../atl/putting-the-control-on-a-web-page-atl-tutorial-part-7.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

