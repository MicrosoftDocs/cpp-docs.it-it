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
ms.openlocfilehash: 41ac0180242aea3143a1df2c32dc81fb18cd7dca
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370786"
---
# <a name="mfc-activex-controls-using-data-binding-in-an-activex-control"></a>Controlli ActiveX MFC: utilizzo del data binding in un controllo ActiveX

Uno degli utilizzi più potenti dei controlli ActiveX è l'associazione dati, che consente a una proprietà del controllo di associarsi a un campo specifico in un database. Quando un utente modifica i dati in questa proprietà associata, il controllo notifica al database e richiede l'aggiornamento del campo del record. Il database notifica quindi il controllo dell'esito positivo o negativo della richiesta.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Questo articolo illustra il lato di controllo dell'attività. L'implementazione delle interazioni di associazione dati con il database è responsabilità del contenitore di controlli. La modalità di gestione delle interazioni del database nel contenitore non rientra nell'ambito di questa documentazione. La modalità di preparazione del controllo per l'associazione dati è illustrata nella parte restante di questo articolo.

![Diagramma concettuale di un controllo associato a&#45;datiConceptual diagram of a data&#45;bound control](../mfc/media/vc374v1.gif "Diagramma concettuale di un controllo associato a&#45;datiConceptual diagram of a data&#45;bound control") <br/>
Diagramma concettuale di un controllo associato a datiConceptual Diagram of a Data-Bound Control

La `COleControl` classe fornisce due funzioni membro che rendono l'associazione dati un processo semplice da implementare. La prima funzione, [BoundPropertyRequestEdit](../mfc/reference/colecontrol-class.md#boundpropertyrequestedit), viene utilizzata per richiedere l'autorizzazione per modificare il valore della proprietà. [BoundPropertyChanged](../mfc/reference/colecontrol-class.md#boundpropertychanged), la seconda funzione, viene chiamata dopo che il valore della proprietà è stato modificato correttamente.

Questo articolo include gli argomenti seguenti:

- [Creazione di una proprietà predefinita associabileCreating a Bindable Stock Property](#vchowcreatingbindablestockproperty)

- [Creazione di un metodo Get/Set associabileCreating a Bindable Get/Set Method](#vchowcreatingbindablegetsetmethod)

## <a name="creating-a-bindable-stock-property"></a><a name="vchowcreatingbindablestockproperty"></a>Creazione di una proprietà predefinita associabileCreating a Bindable Stock Property

È possibile creare una proprietà azionaria associata a dati, anche se è più probabile che si desideri un [metodo get/set associabile.](#vchowcreatingbindablegetsetmethod)

> [!NOTE]
> Le proprietà `bindable` stock `requestedit` hanno gli attributi e per impostazione predefinita.

#### <a name="to-add-a-bindable-stock-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà predefinita associabile tramite l'Aggiunta guidata proprietàTo add a bindable stock property using the Add Property Wizard

1. Avviare un progetto utilizzando la [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).

1. Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia per il controllo.

   Si apre il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

1. Selezionare una delle voci dall'elenco a discesa **Nome proprietà.** Ad esempio, è possibile selezionare **Testo**.

   Poiché **Text** è una proprietà predefinita, gli attributi **bindable** e **requestedit** sono già controllati.

1. Selezionare le seguenti caselle di controllo dalla scheda **Attributi IDL:** **displaybind** e **defaultbind** per aggiungere gli attributi alla definizione della proprietà nel file . File IDL. Questi attributi rendono il controllo visibile all'utente e rendono la proprietà predefinita associabile la proprietà associabile predefinita.

A questo punto, il controllo può visualizzare i dati da un'origine dati, ma l'utente non sarà in grado di aggiornare i campi dati. Se si desidera che il controllo sia anche `OnOcmCommand` in grado di aggiornare i dati, modificare la funzione [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) in modo che sia la seguente:

[!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]

È ora possibile compilare il progetto, che registrerà il controllo. Quando si inserisce il controllo in una finestra di dialogo, le proprietà **Campo dati** e **Origine dati** saranno state aggiunte ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.

## <a name="creating-a-bindable-getset-method"></a><a name="vchowcreatingbindablegetsetmethod"></a>Creazione di un metodo Get/Set associabileCreating a Bindable Get/Set Method

Oltre a un metodo get/set associato a dati, è anche possibile creare una [proprietà predefinita associabile.](#vchowcreatingbindablestockproperty)

> [!NOTE]
> In questa procedura si presuppone la creazione di un progetto di controllo ActiveX che sottoclassi di un controllo Windows.

#### <a name="to-add-a-bindable-getset-method-using-the-add-property-wizard"></a>Per aggiungere un metodo get/set associabile tramite l'Aggiunta guidata proprietàTo add a bindable get/set method using the Add Property Wizard

1. Caricare il progetto del controllo.

1. Nella pagina **Impostazioni controllo** selezionare una classe finestra per il controllo da sottoclasse. Ad esempio, è possibile creare una sottoclasse di un controllo EDIT.

1. Caricare il progetto del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia per il controllo.

   Si apre il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

1. Digitare il nome della proprietà nella casella **Nome proprietà.** Utilizzare `MyProp` per questo esempio.

1. Selezionare un tipo di dati dalla casella di riepilogo a discesa **Tipo di proprietà.** Utilizzare **short** per questo esempio.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Selezionare le seguenti caselle di controllo dalla scheda Attributi IDL: **bindable**, **requestedit**, **displaybind**e **defaultbind** per aggiungere gli attributi alla definizione della proprietà nel file . File IDL. Questi attributi rendono il controllo visibile all'utente e rendono la proprietà predefinita associabile la proprietà associabile predefinita.

1. Fare clic su **Fine**.

1. Modificare il corpo `SetMyProp` della funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#2](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_2.cpp)]

1. Il parametro `BoundPropertyChanged` passato `BoundPropertyRequestEdit` alle funzioni e è il dispid della proprietà , ovvero il parametro passato all'attributo id() per la proprietà in . File IDL.

1. Modificare la funzione [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]

1. Modificare `OnDraw` la funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#3](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_3.cpp)]

1. Alla sezione pubblica del file di intestazione il file di intestazione per la classe del controllo, aggiungere le seguenti definizioni (costruttori) per le variabili membro:

   [!code-cpp[NVC_MFC_AxData#4](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_4.h)]

1. Impostare la seguente riga `DoPropExchange` come ultima riga della funzione:

   [!code-cpp[NVC_MFC_AxData#5](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_5.cpp)]

1. Modificare `OnResetState` la funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#6](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_6.cpp)]

1. Modificare `GetMyProp` la funzione in modo che contenga il codice seguente:

   [!code-cpp[NVC_MFC_AxData#7](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_7.cpp)]

È ora possibile compilare il progetto, che registrerà il controllo. Quando si inserisce il controllo in una finestra di dialogo, le proprietà **Campo dati** e **Origine dati** saranno state aggiunte ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
