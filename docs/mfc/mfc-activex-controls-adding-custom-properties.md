---
title: 'Controlli ActiveX MFC: aggiunta di proprietà personalizzate'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], properties
- properties [MFC], custom
ms.assetid: 85af5167-74c7-427b-b8f3-e0d7b73942e5
ms.openlocfilehash: 00f7a879582bca562ce626fe224206094fd19bc7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364696"
---
# <a name="mfc-activex-controls-adding-custom-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà personalizzate

Le proprietà personalizzate differiscono dalle proprietà predefinite in `COleControl` quanto le proprietà personalizzate non sono già implementate dalla classe. Una proprietà personalizzata viene utilizzata per esporre un determinato stato o aspetto di un controllo ActiveX a un programmatore che utilizza il controllo.

In questo articolo viene descritto come aggiungere una proprietà personalizzata al controllo ActiveX utilizzando l'Aggiunta guidata proprietà e vengono illustrate le modifiche al codice risultanti. Gli argomenti includono:

- [Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property)

- [Modifiche dell'Aggiunta guidata proprietà per le proprietà personalizzate](#_core_classwizard_changes_for_custom_properties)

Le proprietà personalizzate sono disponibili in quattro tipi di implementazione: Variabile membro, Variabile membro con notifica, Metodi Get/Set e Con parametri.

- Implementazione delle variabili membro

   Questa implementazione rappresenta lo stato della proprietà come variabile membro nella classe del controllo. Utilizzare l'implementazione della variabile membro quando non è importante sapere quando il valore della proprietà viene modificato. Dei tre tipi, questa implementazione crea la quantità minima di codice di supporto per la proprietà. La macro di voce della mappa di invio per l'implementazione della variabile membro è [DISP_PROPERTY](../mfc/reference/dispatch-maps.md#disp_property).

- Variabile membro con implementazione di notificaMember Variable with Notification Implementation

   Questa implementazione è costituita da una variabile membro e da una funzione di notifica creata dall'Aggiunta guidata proprietà. La funzione di notifica viene chiamata automaticamente dal framework dopo la modifica del valore della proprietà. Utilizzare la variabile membro con l'implementazione di notifica quando è necessario ricevere una notifica dopo la modifica del valore di una proprietà. Questa implementazione richiede più tempo perché richiede una chiamata di funzione. La macro di voce della mappa di invio per questa implementazione è [DISP_PROPERTY_NOTIFY](../mfc/reference/dispatch-maps.md#disp_property_notify).

- Implementazione dei metodi Get/Set

   Questa implementazione è costituita da una coppia di funzioni membro nella classe del controllo. L'implementazione di metodi Get/Set chiama automaticamente la funzione membro Get quando l'utente del controllo richiede il valore corrente della proprietà e la funzione membro Set quando l'utente del controllo richiede che la proprietà venga modificata. Utilizzare questa implementazione quando è necessario calcolare il valore di una proprietà in fase di esecuzione, convalidare un valore passato dall'utente del controllo prima di modificare la proprietà effettiva o implementare un tipo di proprietà di sola lettura o di sola scrittura. La macro di voce della mappa di invio per questa implementazione è [DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex). Nella sezione seguente, [utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property), viene utilizzata la proprietà personalizzata CircleOffset per illustrare questa implementazione.

- Implementazione con parametriParameterized Implementation

   L'implementazione con parametri è supportata dall'Aggiunta guidata proprietà. Una proprietà con parametri (talvolta denominata matrice di proprietà) può essere utilizzata per accedere a un set di valori tramite una singola proprietà del controllo. La macro di voce della mappa di invio per questa implementazione è DISP_PROPERTY_PARAM. Per altre informazioni sull'implementazione di questo tipo, vedere [Implementazione](../mfc/mfc-activex-controls-advanced-topics.md) di una proprietà con parametri nell'articolo Controlli ActiveX: argomenti avanzati.

## <a name="using-the-add-property-wizard-to-add-a-custom-property"></a><a name="_core_using_classwizard_to_add_a_custom_property"></a>Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà personalizzata

Nella procedura seguente viene illustrata l'aggiunta di una proprietà personalizzata, CircleOffset, che usa l'implementazione dei metodi Get/Set.The following procedure demonstrates adding a custom property, CircleOffset, which uses the Get/Set Methods implementation. La proprietà personalizzata CircleOffset consente all'utente del controllo di spostare il cerchio dal centro del rettangolo di delimitazione del controllo. La procedura per l'aggiunta di proprietà personalizzate con un'implementazione diversa dai metodi Get/Set è molto simile.

Questa stessa procedura può essere utilizzata anche per aggiungere altre proprietà personalizzate desiderate. Sostituire il nome della proprietà personalizzata con il nome e i parametri della proprietà CircleOffset.

#### <a name="to-add-the-circleoffset-custom-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà personalizzata CircleOffset mediante l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

   Verrà visualizzata [l'Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nella casella **Nome proprietà** digitare *CircleOffset*.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nella casella **Tipo di proprietà** selezionare **short**.

1. Digitare nomi univoci per le funzioni Get e Set oppure accettare i nomi predefiniti.

1. Fare clic su **Fine**.

## <a name="add-property-wizard-changes-for-custom-properties"></a><a name="_core_classwizard_changes_for_custom_properties"></a>Modifiche dell'Aggiunta guidata proprietà per le proprietà personalizzate

Quando si aggiunge la proprietà personalizzata CircleOffset, l'Aggiunta guidata proprietà apporta modifiche all'intestazione (. H) e l'attuazione (. CPP) della classe di controllo.

Le seguenti righe vengono aggiunte al file . H per dichiarare due `GetCircleOffset` `SetCircleOffset`funzioni chiamate e :

[!code-cpp[NVC_MFC_AxUI#25](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_1.h)]

La riga seguente viene aggiunta al controllo . File IDL:

[!code-cpp[NVC_MFC_AxUI#26](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_2.idl)]

Questa riga assegna la proprietà CircleOffset a un numero ID specifico, preso dalla posizione del metodo nell'elenco dei metodi e delle proprietà dell'Aggiunta guidata proprietà.

Inoltre, la riga seguente viene aggiunta alla mappa di invio (nel file . CPP della classe del controllo) per eseguire il mapping della proprietà CircleOffset alle due funzioni di gestione del controllo:

[!code-cpp[NVC_MFC_AxUI#27](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_3.cpp)]

Infine, le implementazioni `GetCircleOffset` `SetCircleOffset` delle funzioni e vengono aggiunte alla fine del controllo. File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. La funzione Set contiene in genere codice che deve essere eseguito prima o dopo le modifiche alle proprietà.

[!code-cpp[NVC_MFC_AxUI#28](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_4.cpp)]

Si noti che l'Aggiunta guidata proprietà aggiunge automaticamente una chiamata a [SetModifiedFlag](../mfc/reference/colecontrol-class.md#setmodifiedflag), al corpo della funzione Set . La chiamata a questa funzione contrassegna il controllo come modificato. Se un controllo è stato modificato, il nuovo stato verrà salvato quando il contenitore viene salvato. Questa funzione deve essere chiamata ogni volta che una proprietà, salvata come parte dello stato persistente del controllo, cambia valore.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
