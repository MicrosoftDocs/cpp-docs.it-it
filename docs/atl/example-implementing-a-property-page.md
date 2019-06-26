---
title: Implementazione di una pagina delle proprietà (ATL)
ms.date: 05/09/2019
helpviewer_keywords:
- property pages, implementing
ms.assetid: c30b67fe-ce08-4249-ae29-f3060fa8d61e
ms.openlocfilehash: 1f2c0387cd0a78ad0179e251654d2fa82b1eef13
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707092"
---
# <a name="example-implementing-a-property-page"></a>Esempio: Implementazione di una pagina delle proprietà

::: moniker range="vs-2019"

La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Questo esempio mostra come creare una pagina delle proprietà che permette di visualizzare (e modificare) le proprietà dell'interfaccia [Classi documento](../mfc/document-classes.md).

Questo esempio è basato sull'[esempio ATLPages](../overview/visual-cpp-samples.md).

Per completare questo esempio, è necessario eseguire queste operazioni:

- [Aggiungere la classe della pagina delle proprietà ATL](#vcconusing_the_atl_object_wizard) usando la finestra di dialogo Aggiungi classe nella Creazione guidata pagina delle proprietà ATL.

- [Modificare la risorsa finestra di dialogo](#vcconediting_the_dialog_resource) aggiungendo nuovi controlli per le proprietà interessanti dell'interfaccia `Document`.

- [Aggiungere gestori di messaggi](#vcconadding_message_handlers) per mantenere il sito della pagina delle proprietà al corrente delle modifiche apportate dall'utente.

- Aggiungere alcune istruzioni `#import` e un typedef nella sezione [Gestione](#vcconhousekeeping).

- [Eseguire l'override di IPropertyPageImpl::SetObjects](#vcconoverriding_ipropertypageimpl_setobjects) per convalidare gli oggetti passati alla pagina delle proprietà.

- [Eseguire l'override di IPropertyPageImpl::Activate](#vcconoverriding_ipropertypageimpl_activate) per inizializzare l'interfaccia della pagina delle proprietà.

- [Eseguire l'override di IPropertyPageImpl::Apply](#vcconoverride_ipropertypageimpl_apply) per aggiornare l'oggetto con i valori più recenti delle proprietà.

- [Visualizzare la pagina delle proprietà](#vccontesting_the_property_page) creando un semplice oggetto helper.

- [Creare una macro](#vcconcreating_a_macro) che testerà la pagina delle proprietà.

##  <a name="vcconusing_the_atl_object_wizard"></a> Aggiunta della classe della pagina delle proprietà ATL

Prima di tutto, creare un nuovo progetto ATL per un server DLL denominato `ATLPages7`. Usare ora la [Creazione guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) per generare una pagina delle proprietà. In **Nome breve** assegnare alla pagina delle proprietà il nome **DocProperties**, quindi passare alla pagina **Stringhe** per impostare gli elementi specifici della pagina delle proprietà come mostrato nella tabella seguente.

|Elemento|Value|
|----------|-----------|
|Titolo|TextDocument|
|Doc String|Proprietà VCUE TextDocument|
|Helpfile|*\<vuoto>*|

I valori impostati in questa pagina della procedura guidata verranno restituiti al contenitore della pagina delle proprietà quando chiama `IPropertyPage::GetPageInfo`. Ciò che succede alle stringhe dopo questo momento dipende dal contenitore, ma in genere vengono usate per identificare la pagina per l'utente. Il titolo verrà visualizzato in genere in una scheda sopra la pagina e la stringa doc può essere visualizzata in una barra di stato o una descrizione comando (anche se la finestra delle proprietà standard non usa affatto questa stringa).

> [!NOTE]
>  Le stringhe impostate qui vengono archiviate come risorse stringa nel progetto dalla procedura guidata. È possibile modificare facilmente queste stringhe usando l'editor di risorse, se è necessario modificare queste informazioni dopo la generazione del codice per la pagina.

Fare clic su **OK** in modo che la procedura guidata generi la pagina delle proprietà.

##  <a name="vcconediting_the_dialog_resource"></a> Modifica della risorsa finestra di dialogo

Ora che è stata generata la pagina delle proprietà, è necessario aggiungere alcuni controlli alla risorsa finestra di dialogo che rappresenta la pagina. Aggiungere una casella di modifica, un controllo di testo statico e una casella di controllo e impostarne gli ID, come mostrato di seguito:

![Modifica di una risorsa finestra di dialogo](../atl/media/ppgresourcelabeled.gif "Modifica di una risorsa finestra di dialogo")

Questi controlli verranno usati per visualizzare il nome file del documento e il relativo stato di sola lettura.

> [!NOTE]
>  La risorsa finestra di dialogo non include un frame o comandi di pulsanti, né ha l'aspetto a schede che ci si potrebbe aspettare. Queste funzionalità vengono fornite da una finestra della pagina delle proprietà, ad esempio quella creata chiamando [OleCreatePropertyFrame](/windows/desktop/api/olectl/nf-olectl-olecreatepropertyframe).

##  <a name="vcconadding_message_handlers"></a> Aggiunta di gestori di messaggi

Dopo aver predisposto i controlli, è possibile aggiungere gestori di messaggi per aggiornare lo stato modificato ma non salvato della pagina quando il valore di uno dei controlli cambia:

[!code-cpp[NVC_ATL_Windowing#73](../atl/codesnippet/cpp/example-implementing-a-property-page_1.h)]

Questo codice risponde alle modifiche apportate al controllo di modifica o alla casella di controllo chiamando [IPropertyPageImpl::SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty), che indica al sito della pagina che la pagina è stata modificata. In genere il sito della pagina risponderà abilitando o disabilitando un pulsante **Applica** nella finestra della pagina proprietà.

> [!NOTE]
>  Nelle pagine delle proprietà può essere necessario tenere traccia esattamente delle proprietà modificate dall'utente, in modo da evitare l'aggiornamento di proprietà che non sono state modificate. Questo esempio implementa il codice per tenere traccia dei valori originali delle proprietà e confrontarli con i valori correnti dell'interfaccia utente al momento di applicare le modifiche.

##  <a name="vcconhousekeeping"></a> Gestione

Aggiungere ora un paio di istruzioni `#import` a DocProperties.h in modo che il compilatore riconosca l'interfaccia `Document`:

[!code-cpp[NVC_ATL_Windowing#74](../atl/codesnippet/cpp/example-implementing-a-property-page_2.h)]

Sarà necessario anche fare riferimento alla classe base `IPropertyPageImpl`. Aggiungere il **typedef** seguente alla classe `CDocProperties`:

[!code-cpp[NVC_ATL_Windowing#75](../atl/codesnippet/cpp/example-implementing-a-property-page_3.h)]

##  <a name="vcconoverriding_ipropertypageimpl_setobjects"></a> Override di IPropertyPageImpl::SetObjects

Il primo metodo `IPropertyPageImpl` di cui è necessario eseguire l'override è [SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects). Qui verrà aggiunto il codice per verificare che sia stato passato un solo oggetto e che questo supporti l'interfaccia `Document` prevista:

[!code-cpp[NVC_ATL_Windowing#76](../atl/codesnippet/cpp/example-implementing-a-property-page_4.h)]

> [!NOTE]
>  È logico supportare un solo oggetto per questa pagina perché si permetterà all'utente di impostare il nome file dell'oggetto e può essere presente un solo file in ognuna delle posizioni.

##  <a name="vcconoverriding_ipropertypageimpl_activate"></a> Override di IPropertyPageImpl::Activate

Il passaggio successivo consiste nell'inizializzare la pagina delle proprietà con valori di proprietà dell'oggetto sottostante, quando la pagina viene creata per la prima volta.

In questo caso, è necessario aggiungere i membri seguenti alla classe, in quanto si useranno anche i valori di proprietà iniziali per il confronto quando gli utenti della pagina applicheranno le proprie modifiche:

[!code-cpp[NVC_ATL_Windowing#77](../atl/codesnippet/cpp/example-implementing-a-property-page_5.h)]

L'implementazione della classe base del metodo [Activate](../atl/reference/ipropertypageimpl-class.md#activate) è responsabile della creazione della finestra di dialogo e dei relativi controlli e di conseguenza è possibile eseguire l'override di questo metodo e aggiungere la propria inizializzazione dopo la chiamata della classe base:

[!code-cpp[NVC_ATL_Windowing#78](../atl/codesnippet/cpp/example-implementing-a-property-page_6.h)]

Questo codice usa i metodi COM dell'interfaccia `Document` per ottenere le proprietà desiderate. Usa quindi i wrapper API Win32 forniti da [CDialogImpl](../atl/reference/cdialogimpl-class.md) e le relative classi base per visualizzare i valori delle proprietà all'utente.

##  <a name="vcconoverride_ipropertypageimpl_apply"></a> Override di IPropertyPageImpl::Apply

Quando gli utenti vogliono applicare modifiche agli oggetti, il sito della pagina delle proprietà chiama il metodo [Apply](../atl/reference/ipropertypageimpl-class.md#apply). È qui che è necessario eseguire l'operazione opposta del codice in `Activate`: mentre `Activate` ha usato i valori dall'oggetto per eseguirne il push nei controlli nella pagina delle proprietà, `Apply` usa i valori dai controlli nella pagina delle proprietà per eseguirne il push nell'oggetto.

[!code-cpp[NVC_ATL_Windowing#79](../atl/codesnippet/cpp/example-implementing-a-property-page_7.h)]

> [!NOTE]
>  Il controllo rispetto a [m_bDirty](../atl/reference/ipropertypageimpl-class.md#m_bdirty) all'inizio di questa implementazione è un controllo iniziale per evitare aggiornamenti non necessari degli oggetti se `Apply` viene chiamato più volte. Sono inoltre disponibili controlli riguardo a ognuno dei valori di proprietà per garantire che solo le modifiche generino una chiamata del metodo a `Document`.

> [!NOTE]
> `Document` espone `FullName` come proprietà di sola lettura. Per aggiornare il nome file del documento in base alle modifiche apportate alla pagina delle proprietà, è necessario usare il metodo `Save` per salvare il file con un nome diverso. Di conseguenza, il codice in una pagina delle proprietà non deve limitarsi a ottenere o impostare le proprietà.

##  <a name="vccontesting_the_property_page"></a> Visualizzazione della pagina delle proprietà

Per visualizzare questa pagina, è necessario creare un semplice oggetto helper. L'oggetto helper fornirà un metodo che semplifica l'API `OleCreatePropertyFrame` per la visualizzazione di una singola pagina connessa a un singolo oggetto. Questo helper verrà progettato perché possa essere usato da Visual Basic.

Usare la [finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md) e la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md) per generare una nuova classe e usare `Helper` come nome breve. Una volta creata la classe, aggiungere un metodo come mostrato nella tabella seguente.

|Elemento|Value|
|----------|-----------|
|Nome metodo|`ShowPage`|
|Parametri|`[in] BSTR bstrCaption, [in] BSTR bstrID, [in] IUnknown* pUnk`|

Il parametro *bstrCaption* è la didascalia da visualizzare come titolo della finestra di dialogo. Il parametro *bstrID* è una stringa che rappresenta un valore CLSID o ProgID della pagina delle proprietà da visualizzare. Il parametro *pUnk* sarà il puntatore `IUnknown` dell'oggetto le cui proprietà verranno configurate dalla pagina delle proprietà.

Implementare il metodo come mostrato di seguito:

[!code-cpp[NVC_ATL_Windowing#80](../atl/codesnippet/cpp/example-implementing-a-property-page_8.cpp)]

##  <a name="vcconcreating_a_macro"></a> Creazione di una macro

Dopo avere compilato il progetto, è possibile testare la pagina delle proprietà e l'oggetto helper tramite una semplice macro che può essere creata ed eseguita nell'ambiente di sviluppo di Visual Studio. Questa macro creerà un oggetto helper, quindi chiamerà il relativo metodo `ShowPage` tramite il valore ProgID della pagina delle proprietà **DocProperties** e il puntatore `IUnknown` del documento attualmente attivo nell'editor di Visual Studio. Il codice necessario per questa macro viene mostrato di seguito:

```vb
Imports EnvDTE
Imports System.Diagnostics

Public Module AtlPages

Public Sub Test()
    Dim Helper
    Helper = CreateObject("ATLPages7.Helper.1")

    On Error Resume Next
    Helper.ShowPage( ActiveDocument.Name, "ATLPages7Lib.DocumentProperties.1", DTE.ActiveDocument )
End Sub

End Module
```

Quando si esegue questa macro, verrà visualizzata la pagina delle proprietà che mostra il nome file e lo stato di sola lettura del documento di testo attualmente attivo. Lo stato di sola lettura del documento riflette solo la possibilità di scrivere nel documento nell'ambiente di sviluppo, ma non influisce sull'attributo di sola lettura del file su disco.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../atl/atl-com-property-pages.md)<br/>
[Esempio ATLPages](../overview/visual-cpp-samples.md)
