---
title: Implementazione di una pagina delle proprietà (ATL)
ms.date: 11/19/2018
helpviewer_keywords:
- property pages, implementing
ms.assetid: c30b67fe-ce08-4249-ae29-f3060fa8d61e
ms.openlocfilehash: a76a0f49e8b0ec7458b781785cd5030d2c523f0b
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52176471"
---
# <a name="example-implementing-a-property-page"></a>Esempio: Implementazione di una pagina delle proprietà

In questo esempio viene illustrato come creare una pagina delle proprietà che consente di visualizzare e consente di modificare, le proprietà del [classi documento](../mfc/document-classes.md) interfaccia.

L'esempio si basa sul [esempio ATLPages](../visual-cpp-samples.md).

Per completare questo esempio, si apprenderà come:

- [Aggiungere la classe di pagina delle proprietà ATL](#vcconusing_the_atl_object_wizard) usando la finestra di dialogo Aggiungi classe e guidata pagina delle proprietà ATL.

- [Modificare la risorsa finestra di dialogo](#vcconediting_the_dialog_resource) mediante l'aggiunta di nuovi controlli per le proprietà interessanti del `Document` interfaccia.

- [Aggiungere gestori di messaggi](#vcconadding_message_handlers) per mantenere il sito della pagina proprietà informato delle modifiche apportate dall'utente.

- Aggiungere alcuni `#import` istruzioni e un typedef nel [Housekeeping](#vcconhousekeeping) sezione.

- [Eseguire l'override: SetObjects](#vcconoverriding_ipropertypageimpl_setobjects) per convalidare gli oggetti passati alla pagina delle proprietà.

- [Eseguire l'override IPropertyPageImpl](#vcconoverriding_ipropertypageimpl_activate) per inizializzare l'interfaccia della pagina delle proprietà.

- [Eseguire l'override IPropertyPageImpl](#vcconoverride_ipropertypageimpl_apply) per aggiornare l'oggetto con i valori delle proprietà più recenti.

- [Visualizzare la pagina delle proprietà](#vccontesting_the_property_page) mediante la creazione di un oggetto di supporto semplice.

- [Creare una macro](#vcconcreating_a_macro) che testerà la pagina delle proprietà.

##  <a name="vcconusing_the_atl_object_wizard"></a> Aggiunta la classe di pagina delle proprietà ATL

In primo luogo, creare un nuovo progetto ATL per un server DLL denominato `ATLPages7`. A questo punto usare il [Creazione guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) per generare una pagina delle proprietà. Assegnare la pagina delle proprietà un **nome breve** dei **DocProperties** quindi passare al **stringhe** pagina per impostare gli elementi specifici della pagina-proprietà come illustrato nella tabella seguente.

|Elemento|Valore|
|----------|-----------|
|Titolo|TextDocument|
|Stringa doc|Proprietà TextDocument VCUE|
|HelpFile|*\<vuoto >*|

I valori impostati in questa pagina della procedura guidata verranno restituiti per il contenitore della pagina proprietà quando chiama `IPropertyPage::GetPageInfo`. Cosa accade alle stringhe dopo che è dipendente per il contenitore, ma in genere verranno usati per identificare la pagina all'utente. Il titolo verrà visualizzato in genere in una scheda sopra la pagina e la stringa Doc potrebbe essere visualizzata in una barra di stato o una descrizione comando (anche se il frame di proprietà standard non usa questa stringa affatto).

> [!NOTE]
>  Le stringhe di questa pagina vengono archiviate come risorse nel progetto di tipo stringa dalla procedura guidata. È possibile modificare facilmente queste stringhe si utilizza l'editor di risorse, se è necessario modificare queste informazioni dopo la generazione di codice della pagina.

Fare clic su **OK** in modo che la procedura guidata generi la pagina delle proprietà.

##  <a name="vcconediting_the_dialog_resource"></a> La modifica della risorsa finestra di dialogo

Ora che è stata generata la pagina delle proprietà, è necessario aggiungere alcuni controlli per la risorsa finestra di dialogo che rappresenta la pagina. Aggiungere una casella di modifica, un controllo testo statico e una casella di controllo e impostare i relativi ID, come illustrato di seguito:

![Modifica di una risorsa finestra di dialogo](../atl/media/ppgresourcelabeled.gif "risorsa finestra di dialogo di modifica")

Questi controlli verranno utilizzati per visualizzare il nome del file di documento e il relativo stato di sola lettura.

> [!NOTE]
>  La risorsa finestra di dialogo non include un frame o comandi di pulsanti, e non ha l'aspetto a schede che potrebbe prevedere. Queste funzionalità sono fornite da un frame della pagina di proprietà, ad esempio quello creato chiamando [OleCreatePropertyFrame](/windows/desktop/api/olectl/nf-olectl-olecreatepropertyframe).

##  <a name="vcconadding_message_handlers"></a> Aggiunta di gestori di messaggi

Con i controlli attivati, è possibile aggiungere gestori di messaggi per aggiornare lo stato della pagina dirty quando cambia il valore di uno dei controlli:

[!code-cpp[NVC_ATL_Windowing#73](../atl/codesnippet/cpp/example-implementing-a-property-page_1.h)]

Questo codice di risposta alle modifiche apportate a una casella di controllo o il controllo di modifica chiamando [IPropertyPageImpl:: SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty), che informa il sito della pagina che la pagina è stato modificato. In genere il sito della pagina risponderà abilitando o disabilitando un **applica** pulsante nel frame della pagina proprietà.

> [!NOTE]
>  Nelle proprie pagine delle proprietà, è necessario tenere traccia di esattamente quali proprietà sono state modificate in modo da evitare l'aggiornamento delle proprietà che non sono state modificate dall'utente. In questo esempio implementa tale codice per tenere traccia dei valori originali delle proprietà e il confronto con i valori correnti dall'interfaccia utente al momento per applicare le modifiche.

##  <a name="vcconhousekeeping"></a> Attività di manutenzione

A questo punto aggiungere un paio di `#import` istruzioni DocProperties.h in modo che il compilatore conosce il `Document` interfaccia:

[!code-cpp[NVC_ATL_Windowing#74](../atl/codesnippet/cpp/example-implementing-a-property-page_2.h)]

È necessario anche fare riferimento al `IPropertyPageImpl` classe di base, aggiungere quanto segue **typedef** per il `CDocProperties` classe:

[!code-cpp[NVC_ATL_Windowing#75](../atl/codesnippet/cpp/example-implementing-a-property-page_3.h)]

##  <a name="vcconoverriding_ipropertypageimpl_setobjects"></a> Si esegue l'override: SetObjects

Il primo `IPropertyPageImpl` metodo che è necessario eseguire l'override viene [SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects). Di seguito si aggiungerà codice per verificare che è stato passato un singolo oggetto e il supporto di `Document` interfaccia che si aspetta:

[!code-cpp[NVC_ATL_Windowing#76](../atl/codesnippet/cpp/example-implementing-a-property-page_4.h)]

> [!NOTE]
>  È opportuno supporta solo un singolo oggetto per questa pagina perché si consentirà all'utente di impostare il nome del file dell'oggetto, ovvero in una qualsiasi località può esistere un solo file.

##  <a name="vcconoverriding_ipropertypageimpl_activate"></a> Si esegue l'override IPropertyPageImpl

Il passaggio successivo consiste nell'inizializzare la pagina delle proprietà con i valori delle proprietà dell'oggetto sottostante, quando la pagina viene inizialmente creata.

In questo caso si devono aggiungere i membri seguenti alla classe, poiché anche userai i valori iniziali delle proprietà per il confronto quando gli utenti della pagina si applicano le modifiche:

[!code-cpp[NVC_ATL_Windowing#77](../atl/codesnippet/cpp/example-implementing-a-property-page_5.h)]

L'implementazione della classe base di [Activate](../atl/reference/ipropertypageimpl-class.md#activate) metodo è responsabile della creazione nella finestra di dialogo e i relativi controlli, è possibile eseguire l'override di questo metodo, aggiungere la propria inizializzazione dopo la chiamata la classe di base:

[!code-cpp[NVC_ATL_Windowing#78](../atl/codesnippet/cpp/example-implementing-a-property-page_6.h)]

Questo codice Usa i metodi COM del `Document` interfaccia per ottenere le proprietà che si sono interessati. Usa quindi i wrapper di API Win32 disql [CDialogImpl](../atl/reference/cdialogimpl-class.md) e le relative classi base per visualizzare i valori delle proprietà per l'utente.

##  <a name="vcconoverride_ipropertypageimpl_apply"></a> Si esegue l'override IPropertyPageImpl

Quando gli utenti desiderano applicare le modifiche apportate agli oggetti, il sito della pagina proprietà chiama il [applica](../atl/reference/ipropertypageimpl-class.md#apply) (metodo). Questo è il posto per eseguire l'operazione inversa del codice nel `Activate` , mentre `Activate` impiegati i valori dall'oggetto e li inserito nei controlli nella pagina delle proprietà, `Apply` accetta valori compresi tra i controlli nella pagina delle proprietà e ne effettua il push nel oggetto.

[!code-cpp[NVC_ATL_Windowing#79](../atl/codesnippet/cpp/example-implementing-a-property-page_7.h)]

> [!NOTE]
>  Il controllo a fronte [m_bDirty](../atl/reference/ipropertypageimpl-class.md#m_bdirty) all'inizio di questa implementazione viene eseguito un controllo iniziale per evitare gli aggiornamenti non necessari degli oggetti se `Apply` viene chiamato più volte. Sono inoltre presenti controlli a fronte della ognuno dei valori di proprietà per assicurarsi che solo le modifiche generino una chiamata al metodo il `Document`.

> [!NOTE]
> `Document` espone `FullName` come proprietà di sola lettura. Per aggiornare il nome del file del documento in base alle modifiche apportate alla pagina delle proprietà, è necessario utilizzare il `Save` metodo per salvare il file con un nome diverso. Di conseguenza, il codice in una pagina delle proprietà non deve limitarsi al recupero o l'impostazione delle proprietà.

##  <a name="vccontesting_the_property_page"></a> Visualizzare la pagina delle proprietà

Per visualizzare questa pagina, è necessario creare un oggetto di supporto semplice. L'oggetto helper fornirà un metodo che semplifica la `OleCreatePropertyFrame` API per la visualizzazione di una singola pagina connesso a un singolo oggetto. Questo supporto sarà progettato in modo che può essere utilizzato da Visual Basic.

Usare la [finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md) e il [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md) per generare una nuova classe e usare `Helper` come il nome breve. Una volta creata, aggiungere un metodo come illustrato nella tabella seguente.

|Elemento|Valore|
|----------|-----------|
|Nome metodo|`ShowPage`|
|Parametri|`[in] BSTR bstrCaption, [in] BSTR bstrID, [in] IUnknown* pUnk`|

Il *bstrCaption* parametro rappresenta la didascalia da visualizzare come titolo della finestra di dialogo. Il *bstrID* parametro è una stringa che rappresenta un CLSID o ProgID della pagina delle proprietà da visualizzare. Il *pUnk* parametro sarà il `IUnknown` puntatore dell'oggetto le cui proprietà verranno configurate dalla pagina delle proprietà.

Implementare il metodo come illustrato di seguito:

[!code-cpp[NVC_ATL_Windowing#80](../atl/codesnippet/cpp/example-implementing-a-property-page_8.cpp)]

##  <a name="vcconcreating_a_macro"></a> Creazione di una Macro

Dopo avere compilato il progetto, è possibile testare la pagina delle proprietà e l'oggetto helper mediante una semplice macro che è possibile creare ed eseguire nell'ambiente di sviluppo Visual Studio. Questa macro verrà creato un file di supporto dell'oggetto, quindi chiamare relativi `ShowPage` metodo tramite valore ProgID del **DocProperties** pagina delle proprietà e il `IUnknown` puntatore del documento attualmente attivo nell'editor di Visual Studio. Il codice che necessario per questa macro è illustrato di seguito:

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

Quando si esegue questa macro, verrà visualizzata sulla pagina delle proprietà che mostra il nome file e lo stato di sola lettura del documento di testo attualmente attivo. Lo stato di sola lettura del documento riflette solo la possibilità di scrivere il documento nell'ambiente di sviluppo. tale operazione non influisce sull'attributo di sola lettura del file su disco.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../atl/atl-com-property-pages.md)<br/>
[Esempio ATLPages](../visual-cpp-samples.md)
