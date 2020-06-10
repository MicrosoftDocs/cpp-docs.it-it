---
title: 'Controlli ActiveX MFC: utilizzo del data binding in un controllo ActiveX'
ms.date: 11/19/2018
f1_keywords:
- bindable
- requestedit
- defaultbind
- displaybind
- dispid
helpviewer_keywords:
- MFC ActiveX controls [MFC], data binding
- data binding [MFC], MFC ActiveX controls
- data-bound controls [MFC], MFC ActiveX controls
- controls [MFC], data binding
- bound controls [MFC], MFC ActiveX
ms.assetid: 476b590a-bf2a-498a-81b7-dd476bd346f1
ms.openlocfilehash: 3f16ea3ad77c676695a9d5ca6e2deb10637de455
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621188"
---
# <a name="mfc-activex-controls-using-data-binding-in-an-activex-control"></a>Controlli ActiveX MFC: utilizzo del data binding in un controllo ActiveX

Uno degli usi più potenti dei controlli ActiveX è data binding, che consente a una proprietà del controllo di eseguire l'associazione con un campo specifico in un database. Quando un utente modifica i dati in questa proprietà associata, il controllo Invia una notifica al database e richiede che il campo del record venga aggiornato. Il database informa quindi il controllo dell'esito positivo o negativo della richiesta.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Questo articolo illustra il lato controllo dell'attività. L'implementazione del data binding interazioni con il database è responsabilità del contenitore del controllo. La modalità di gestione delle interazioni del database nel contenitore esula dall'ambito di questa documentazione. La modalità di preparazione del controllo per data binding è illustrata nella parte restante di questo articolo.

![Diagramma concettuale di un controllo associato&#45;dati](../mfc/media/vc374v1.gif "Diagramma concettuale di un controllo associato&#45;dati") <br/>
Diagramma concettuale di un controllo con associazione a dati

La `COleControl` classe fornisce due funzioni membro che rendono Data Binding un processo semplice da implementare. La prima funzione, [BoundPropertyRequestEdit](reference/colecontrol-class.md#boundpropertyrequestedit), viene utilizzata per richiedere l'autorizzazione per la modifica del valore della proprietà. [BoundPropertyChanged](reference/colecontrol-class.md#boundpropertychanged), la seconda funzione, viene chiamato dopo che il valore della proprietà è stato modificato correttamente.

Questo articolo include gli argomenti seguenti:

- [Creazione di una proprietà azionaria associabile](#vchowcreatingbindablestockproperty)

- [Creazione di un metodo Get/Set associabile](#vchowcreatingbindablegetsetmethod)

## <a name="creating-a-bindable-stock-property"></a><a name="vchowcreatingbindablestockproperty"></a>Creazione di una proprietà azionaria associabile

È possibile creare una proprietà di azione associata ai dati, anche se è più probabile che si desideri un [metodo Get/Set associabile](#vchowcreatingbindablegetsetmethod).

> [!NOTE]
> Per impostazione predefinita, le proprietà predefinite hanno gli `bindable` `requestedit` attributi e.

#### <a name="to-add-a-bindable-stock-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà azionaria associabile mediante l'aggiunta guidata proprietà

1. Avviare un progetto utilizzando la [creazione guidata controllo ActiveX MFC](reference/mfc-activex-control-wizard.md).

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia per il controllo.

   Verrà visualizzato il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

1. Selezionare una delle voci nell'elenco a discesa **nome proprietà** . È ad esempio possibile selezionare **testo**.

   Poiché il **testo** è una proprietà predefinita, gli attributi **associabili** e **requestedit** sono già selezionati.

1. Selezionare le caselle di controllo seguenti dalla scheda **attributi IDL** : **displaybind** e **defaultbind** per aggiungere gli attributi alla definizione di proprietà nell'oggetto del progetto. File IDL. Questi attributi rendono visibile il controllo all'utente e rendono la proprietà di magazzino la proprietà associabile predefinita.

A questo punto, il controllo può visualizzare i dati di un'origine dati, ma l'utente non sarà in grado di aggiornare i campi dati. Se si vuole che il controllo sia in grado di aggiornare anche i dati, modificare la `OnOcmCommand` funzione [OnOcmCommand](mfc-activex-controls-subclassing-a-windows-control.md) in modo che sia simile alla seguente:

[!code-cpp[NVC_MFC_AxData#1](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]

È ora possibile compilare il progetto, che registrerà il controllo. Quando si inserisce il controllo in una finestra di dialogo, il **campo dati** e le proprietà dell' **origine dati** verranno aggiunti ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.

## <a name="creating-a-bindable-getset-method"></a><a name="vchowcreatingbindablegetsetmethod"></a>Creazione di un metodo Get/Set associabile

Oltre a un metodo get/set associato ai dati, è anche possibile creare una [proprietà azionaria associabile](#vchowcreatingbindablestockproperty).

> [!NOTE]
> In questa procedura si presuppone che sia presente un progetto di controllo ActiveX che esegue una sottoclasse di un controllo Windows.

#### <a name="to-add-a-bindable-getset-method-using-the-add-property-wizard"></a>Per aggiungere un metodo Get/Set associabile mediante l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. Nella pagina **Impostazioni controllo** selezionare una classe della finestra per il controllo per la sottoclasse. Ad esempio, è possibile creare una sottoclasse di un controllo di modifica.

1. Caricare il progetto del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia per il controllo.

   Verrà visualizzato il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

1. Digitare il nome della proprietà nella casella **nome proprietà** . Usare `MyProp` per questo esempio.

1. Selezionare un tipo di dati nella casella di riepilogo a discesa **tipo di proprietà** . Usare **short** per questo esempio.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Selezionare le caselle di controllo seguenti dalla scheda attributi IDL: **Bindable**, **requestedit**, **displaybind**e **defaultbind** per aggiungere gli attributi alla definizione di proprietà nell'oggetto del progetto. File IDL. Questi attributi rendono visibile il controllo all'utente e rendono la proprietà di magazzino la proprietà associabile predefinita.

1. Fare clic su **Fine**.

1. Modificare il corpo della `SetMyProp` funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#2](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_2.cpp)]

1. Il parametro passato alle `BoundPropertyChanged` funzioni e `BoundPropertyRequestEdit` è il DISPID della proprietà, ovvero il parametro passato all'attributo ID () per la proprietà in. File IDL.

1. Modificare la funzione [OnOcmCommand](mfc-activex-controls-subclassing-a-windows-control.md) in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#1](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]

1. Modificare la `OnDraw` funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#3](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_3.cpp)]

1. Alla sezione pubblica del file di intestazione del file di intestazione per la classe del controllo, aggiungere le seguenti definizioni (costruttori) per le variabili membro:

   [!code-cpp[NVC_MFC_AxData#4](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_4.h)]

1. Rendere la riga seguente l'ultima riga della `DoPropExchange` funzione:

   [!code-cpp[NVC_MFC_AxData#5](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_5.cpp)]

1. Modificare la `OnResetState` funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#6](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_6.cpp)]

1. Modificare la `GetMyProp` funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#7](codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_7.cpp)]

È ora possibile compilare il progetto, che registrerà il controllo. Quando si inserisce il controllo in una finestra di dialogo, il **campo dati** e le proprietà dell' **origine dati** verranno aggiunti ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
