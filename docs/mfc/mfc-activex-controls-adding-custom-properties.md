---
title: 'Controlli ActiveX MFC: Aggiunta di proprietà personalizzate'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], properties
- properties [MFC], custom
ms.assetid: 85af5167-74c7-427b-b8f3-e0d7b73942e5
ms.openlocfilehash: e02d5523b894f89aa93c8d2765a128920afa2353
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392778"
---
# <a name="mfc-activex-controls-adding-custom-properties"></a>Controlli ActiveX MFC: Aggiunta di proprietà personalizzate

Proprietà personalizzate sono diverse dalle proprietà predefinite in proprietà personalizzate non sono già implementate dal `COleControl` classe. Una proprietà personalizzata viene utilizzata per esporre un determinato stato o l'aspetto di un controllo ActiveX a un programmatore che utilizza il controllo.

Questo articolo viene descritto come aggiungere una proprietà personalizzata del controllo ActiveX tramite l'aggiunta guidata proprietà e vengono illustrate le modifiche del codice risultante. Gli argomenti trattati includono:

- [Tramite l'aggiunta guidata proprietà aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property)

- [Aggiunta guidata proprietà modifiche per le proprietà personalizzate](#_core_classwizard_changes_for_custom_properties)

Proprietà personalizzate sono disponibili quattro tipi di implementazione: Variabile membro, la variabile membro con la notifica, i metodi Get/Set e con parametri.

- Implementazione della variabile membro

   Questa implementazione rappresenta lo stato della proprietà di una variabile membro nella classe del controllo. Usare l'implementazione della variabile membro quando non è importante sapere quando viene modificato il valore della proprietà. Dei tre tipi, questa implementazione viene creata la quantità minima di codice di supporto per la proprietà. È la macro di voce della mappa di invio per l'implementazione di variabile membro [DISP_PROPERTY](../mfc/reference/dispatch-maps.md#disp_property).

- Variabile membro con l'implementazione di notifica

   Questa implementazione è costituito da una variabile membro e una funzione di notifica creata mediante l'aggiunta guidata proprietà. La funzione di notifica viene chiamata automaticamente dal framework dopo la modifica del valore proprietà. Usare la variabile membro con l'implementazione di notifica quando è necessario ricevere una notifica dopo che è stato modificato un valore della proprietà. Questa implementazione richiede più tempo perché è necessaria una chiamata di funzione. La macro di voce della mappa di invio per questa implementazione viene [DISP_PROPERTY_NOTIFY](../mfc/reference/dispatch-maps.md#disp_property_notify).

- Implementazione di metodi Get/Set

   Questa implementazione è costituito da una coppia di funzioni membro nella classe del controllo. L'implementazione di metodi Get/Set chiama automaticamente il recupero del membro funzione quando l'utente del controllo richiede il valore corrente della proprietà e la funzione membro Set quando l'utente del controllo richiede che è possibile modificare la proprietà. Usare questa implementazione quando ti serve per calcolare il valore di una proprietà durante la fase di esecuzione, convalidare un valore passato dall'utente del controllo prima di modificare la proprietà effettiva o implementare un tipo di proprietà o scrittura a sola lettura. La macro di voce della mappa di invio per questa implementazione viene [DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex). La sezione seguente [usando l'aggiunta guidata proprietà aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property), Usa la proprietà personalizzata CircleOffset per illustrare questa implementazione.

- Implementazione con parametri

   Implementazione con parametri è supportata per l'aggiunta guidata proprietà. Una proprietà con parametri (talvolta denominata matrice di proprietà) è utilizzabile per accedere a un set di valori tramite una singola proprietà del controllo. La macro di voce della mappa di invio per questa implementazione è DISP_PROPERTY_PARAM. Per altre informazioni sull'implementazione di questo tipo, vedere [implementazione di una proprietà con parametri](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo di controlli ActiveX: Argomenti avanzati.

##  <a name="_core_using_classwizard_to_add_a_custom_property"></a> Tramite l'aggiunta guidata proprietà per aggiungere una proprietà personalizzata

La procedura seguente illustra come aggiungere una proprietà personalizzata, CircleOffset, che usa l'implementazione di metodi Get/Set. La proprietà personalizzata CircleOffset consente utente del controllo di offset il controllo circle dal centro del rettangolo di delimitazione del controllo. La procedura per aggiungere proprietà personalizzate con un'implementazione diversa da metodi Get/Set è molto simile.

Questa stessa procedura è anche utilizzabile per aggiungere altre proprietà personalizzate desiderato. Sostituire il nome della proprietà personalizzata per il nome della proprietà CircleOffset e sui parametri.

#### <a name="to-add-the-circleoffset-custom-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà personalizzata CircleOffset tramite l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nel **nome della proprietà** , digitare *CircleOffset*.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nel **tipo di proprietà** , quindi selezionare **breve**.

1. Digitare nomi univoci per le funzioni Get e Set o accettare i nomi predefiniti.

9. Scegliere **Fine**.

##  <a name="_core_classwizard_changes_for_custom_properties"></a> Aggiungi modifica di proprietà per le proprietà personalizzate

Quando si aggiunge la proprietà personalizzata CircleOffset, l'aggiunta guidata proprietà apporta le modifiche all'intestazione (. H) e l'implementazione (. File CPP) della classe del controllo.

Le righe seguenti vengono aggiunti ai. File H per dichiarare due funzioni denominate `GetCircleOffset` e `SetCircleOffset`:

[!code-cpp[NVC_MFC_AxUI#25](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_1.h)]

La riga seguente viene aggiunto al controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#26](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_2.idl)]

Questa riga assegna la proprietà CircleOffset un numero ID specifico, impiegato dalla posizione del metodo nell'elenco di metodi e proprietà dell'Aggiunta guidata proprietà.

Inoltre, la riga seguente viene aggiunto alla mappa di invio (nel. File CPP della classe del controllo) per eseguire il mapping della proprietà CircleOffset a due funzioni di gestione del controllo:

[!code-cpp[NVC_MFC_AxUI#27](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_3.cpp)]

Infine, le implementazioni del `GetCircleOffset` e `SetCircleOffset` funzioni vengono aggiunte alla fine della finestra del controllo. File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. Funzione Set in genere contiene codice che deve essere eseguito prima o dopo le modifiche alle proprietà.

[!code-cpp[NVC_MFC_AxUI#28](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_4.cpp)]

Si noti che l'aggiunta guidata proprietà aggiunge automaticamente una chiamata a [SetModifiedFlag](../mfc/reference/colecontrol-class.md#setmodifiedflag), nel corpo della funzione Set. Chiamare questa funzione contrassegna il controllo come modificato. Se un controllo è stato modificato, verrà salvato il nuovo stato quando viene salvato nel contenitore. Questa funzione deve essere chiamata ogni volta che una proprietà, salvata come parte dello stato persistente del controllo, cambia valore.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
