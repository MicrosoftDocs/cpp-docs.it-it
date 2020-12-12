---
description: 'Altre informazioni su: controlli ActiveX MFC: aggiunta di proprietà personalizzate'
title: 'Controlli ActiveX MFC: aggiunta di proprietà personalizzate'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], properties
- properties [MFC], custom
ms.assetid: 85af5167-74c7-427b-b8f3-e0d7b73942e5
ms.openlocfilehash: efae1c7cedc2202a2a40974393be881466442b84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202938"
---
# <a name="mfc-activex-controls-adding-custom-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà personalizzate

Le proprietà personalizzate sono diverse dalle proprietà predefinite in quanto le proprietà personalizzate non sono già implementate dalla `COleControl` classe. Una proprietà personalizzata viene utilizzata per esporre un determinato stato o aspetto di un controllo ActiveX a un programmatore che utilizza il controllo.

Questo articolo descrive come aggiungere una proprietà personalizzata al controllo ActiveX usando l'aggiunta guidata proprietà e illustra le modifiche del codice risultante. Gli argomenti includono:

- [Utilizzo dell'aggiunta guidata proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property)

- [Aggiunta guidata proprietà modifiche per le proprietà personalizzate](#_core_classwizard_changes_for_custom_properties)

Le proprietà personalizzate sono disponibili in quattro tipi di implementazione: variabile membro, variabile membro con notifica, metodi get/set e parametri.

- Implementazione della variabile membro

   Questa implementazione rappresenta lo stato della proprietà come variabile membro nella classe del controllo. Usare l'implementazione della variabile membro quando non è importante capire quando cambia il valore della proprietà. Dei tre tipi, questa implementazione crea il minor numero di codice di supporto per la proprietà. La macro della voce della mappa di invio per l'implementazione della variabile membro è [DISP_PROPERTY](reference/dispatch-maps.md#disp_property).

- Variabile membro con implementazione di notifica

   Questa implementazione è costituita da una variabile membro e da una funzione di notifica creata dall'aggiunta guidata proprietà. La funzione di notifica viene chiamata automaticamente dal Framework dopo la modifica del valore della proprietà. Usare la variabile membro con l'implementazione di notifica quando è necessario ricevere una notifica dopo che il valore di una proprietà è stato modificato. Questa implementazione richiede più tempo perché richiede una chiamata di funzione. La macro di immissione della mappa di invio per questa implementazione è [DISP_PROPERTY_NOTIFY](reference/dispatch-maps.md#disp_property_notify).

- Implementazione di metodi get/set

   Questa implementazione è costituita da una coppia di funzioni membro nella classe del controllo. L'implementazione dei metodi get/set chiama automaticamente la funzione membro get quando l'utente del controllo richiede il valore corrente della proprietà e la funzione membro set quando l'utente del controllo richiede la modifica della proprietà. Usare questa implementazione quando è necessario calcolare il valore di una proprietà in fase di esecuzione, convalidare un valore passato dall'utente del controllo prima di modificare la proprietà effettiva oppure implementare un tipo di proprietà di sola lettura o di sola scrittura. La macro di immissione della mappa di invio per questa implementazione è [DISP_PROPERTY_EX](reference/dispatch-maps.md#disp_property_ex). La sezione seguente, [usando la procedura guidata Aggiungi proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property), usa la proprietà personalizzata CircleOffset per illustrare questa implementazione.

- Implementazione con parametri

   L'implementazione con parametri è supportata dalla procedura guidata Aggiungi proprietà. Una proprietà con parametri (talvolta denominata matrice di proprietà) può essere usata per accedere a un set di valori tramite una singola proprietà del controllo. La macro di immissione della mappa di invio per questa implementazione è DISP_PROPERTY_PARAM. Per ulteriori informazioni sull'implementazione di questo tipo, vedere [implementazione di una proprietà con parametri](mfc-activex-controls-advanced-topics.md) nell'articolo controlli ActiveX: argomenti avanzati.

## <a name="using-the-add-property-wizard-to-add-a-custom-property"></a><a name="_core_using_classwizard_to_add_a_custom_property"></a> Utilizzo dell'aggiunta guidata proprietà per aggiungere una proprietà personalizzata

Nella procedura seguente viene illustrata l'aggiunta di una proprietà personalizzata, CircleOffset, che utilizza l'implementazione dei metodi get/set. La proprietà personalizzata CircleOffset consente all'utente del controllo di sfalsare il cerchio dal centro del rettangolo di delimitazione del controllo. La procedura per l'aggiunta di proprietà personalizzate con un'implementazione diversa dai metodi get/set è molto simile.

Questa stessa procedura può essere utilizzata anche per aggiungere altre proprietà personalizzate desiderate. Sostituire il nome della proprietà personalizzata con il nome della proprietà CircleOffset e i parametri.

#### <a name="to-add-the-circleoffset-custom-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà personalizzata CircleOffset utilizzando l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata l' [Aggiunta guidata proprietà](../ide/adding-a-property-visual-cpp.md#names-add-property-wizard).

1. Nella casella **nome proprietà** digitare *CircleOffset*.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nella casella **tipo proprietà** selezionare **`short`** .

1. Digitare nomi univoci per le funzioni Get e set o accettare i nomi predefiniti.

1. Fare clic su **Fine**.

## <a name="add-property-wizard-changes-for-custom-properties"></a><a name="_core_classwizard_changes_for_custom_properties"></a> Aggiunta guidata proprietà modifiche per le proprietà personalizzate

Quando si aggiunge la proprietà personalizzata CircleOffset, l'aggiunta guidata proprietà apporta modifiche all'intestazione. H) e l'implementazione di (. CPP) file della classe del controllo.

Vengono aggiunte le righe seguenti a. File H per dichiarare due funzioni denominate `GetCircleOffset` e `SetCircleOffset` :

[!code-cpp[NVC_MFC_AxUI#25](codesnippet/cpp/mfc-activex-controls-adding-custom-properties_1.h)]

La riga seguente viene aggiunta all'oggetto del controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#26](codesnippet/cpp/mfc-activex-controls-adding-custom-properties_2.idl)]

Questa riga assegna alla proprietà CircleOffset un numero ID specifico, tratto dalla posizione del metodo nell'elenco dei metodi e delle proprietà dell'aggiunta guidata proprietà.

Viene inoltre aggiunta la riga seguente alla mappa di invio (in. File CPP della classe del controllo) per eseguire il mapping della proprietà CircleOffset alle due funzioni del gestore del controllo:

[!code-cpp[NVC_MFC_AxUI#27](codesnippet/cpp/mfc-activex-controls-adding-custom-properties_3.cpp)]

Infine, le implementazioni delle `GetCircleOffset` funzioni e `SetCircleOffset` vengono aggiunte alla fine dell'oggetto del controllo. File CPP. Nella maggior parte dei casi, la funzione Get viene modificata in modo da restituire il valore della proprietà. La funzione set conterrà in genere il codice che deve essere eseguito prima o dopo la modifica della proprietà.

[!code-cpp[NVC_MFC_AxUI#28](codesnippet/cpp/mfc-activex-controls-adding-custom-properties_4.cpp)]

Si noti che l'aggiunta guidata proprietà aggiunge automaticamente una chiamata, a [SetModifiedFlag](reference/colecontrol-class.md#setmodifiedflag), al corpo della funzione set. La chiamata di questa funzione contrassegna il controllo come modificato. Se un controllo è stato modificato, il nuovo stato verrà salvato quando il contenitore viene salvato. Questa funzione deve essere chiamata ogni volta che una proprietà, salvata come parte dello stato persistente del controllo, modifica il valore.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: Proprietà](mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](mfc-activex-controls-methods.md)<br/>
[COleControl (classe)](reference/colecontrol-class.md)
