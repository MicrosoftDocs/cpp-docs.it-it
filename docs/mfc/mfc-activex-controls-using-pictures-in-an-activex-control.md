---
description: 'Ulteriori informazioni su: controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX'
title: 'Controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX'
ms.date: 11/04/2016
f1_keywords:
- LPPICTUREDISP
helpviewer_keywords:
- OnDraw method, MFC ActiveX controls
- MFC ActiveX controls [MFC], pictures
- OnDraw method [MFC]
- OnResetState method [MFC]
- CLSID_CPicturePropPage [MFC]
ms.assetid: 2e49735c-21b9-4442-bb3d-c82ef258eec9
ms.openlocfilehash: 9c9989be7503eb449b969fbbf37d92f26c165131
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133081"
---
# <a name="mfc-activex-controls-using-pictures-in-an-activex-control"></a>Controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX

Questo articolo descrive il tipo di immagine comune e come implementarlo in un controllo ActiveX. Gli argomenti includono:

- [Panoramica delle proprietà immagine personalizzate](#_core_overview_of_custom_picture_properties)

- [Implementazione di una proprietà immagine personalizzata nel controllo ActiveX](#_core_implementing_a_custom_picture_property_in_your_activex_control)

- [Aggiunte al progetto di controllo](#_core_additions_to_your_control_project)

## <a name="overview-of-custom-picture-properties"></a><a name="_core_overview_of_custom_picture_properties"></a> Panoramica delle proprietà immagine personalizzate

Un tipo immagine fa parte di un gruppo di tipi comuni ad alcuni controlli ActiveX. Il tipo immagine gestisce metafile, bitmap o icone e consente all'utente di specificare un'immagine da visualizzare in un controllo ActiveX. Le proprietà immagine personalizzate vengono implementate con un oggetto immagine e le funzioni Get/Set che consentono all'utente del controllo di accedere alla proprietà immagine. Gli utenti del controllo accedono alla proprietà immagine personalizzata usando la scheda delle proprietà delle immagini predefinita.

Oltre al tipo di immagine standard, sono disponibili anche tipi di carattere e colore. Per altre informazioni sull'uso del tipo carattere nel controllo ActiveX, vedere l'articolo [Controlli ActiveX MFC: utilizzo dei tipi di carattere](mfc-activex-controls-using-fonts.md).

Le classi dei controlli ActiveX forniscono numerosi componenti che è possibile usare per implementare la proprietà immagine all'interno del controllo. Questi componenti includono:

- La classe [CPictureHolder](reference/cpictureholder-class.md) .

   Questa classe consente di accedere facilmente all'oggetto immagine e alla funzionalità per l'elemento visualizzato dalla proprietà immagine personalizzata.

- Supporto per le proprietà di tipo **LPPICTUREDISP**, implementate con le funzioni Get/Set.

   L'uso della Visualizzazione classi consente di aggiungere rapidamente una o più proprietà personalizzate che supportano il tipo immagine. Per altre informazioni sull'aggiunta di proprietà del controllo ActiveX con Visualizzazione classi, vedere l'articolo [Controlli ActiveX MFC: proprietà](mfc-activex-controls-properties.md).

- Pagina delle proprietà che gestisce una o più proprietà immagine di un controllo.

   Questa pagina proprietà fa parte di un gruppo di pagine delle proprietà predefinite disponibili per i controlli ActiveX. Per altre informazioni sulle pagine proprietà del controllo ActiveX, vedere l'articolo [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](mfc-activex-controls-using-stock-property-pages.md)

## <a name="implementing-a-custom-picture-property-in-your-activex-control"></a><a name="_core_implementing_a_custom_picture_property_in_your_activex_control"></a> Implementazione di una proprietà immagine personalizzata nel controllo ActiveX

Dopo avere completato i passaggi descritti in questa sezione, il controllo può visualizzare le immagini scelte dall'utente. L'utente può modificare l'immagine visualizzata usando una pagina delle proprietà che mostra l'immagine corrente ed è dotata di un pulsante Sfoglia, che consente all'utente di selezionare varie immagini.

Una proprietà immagine personalizzata viene implementata con un processo simile a quello usato per l'implementazione di altre proprietà; la principale differenza sta nel fatto che la proprietà personalizzata deve supportare un tipo immagine. Dal momento che l'elemento della proprietà immagine deve essere disegnato dal controllo ActiveX, è necessario effettuare una serie di aggiunte e modifiche alla proprietà prima che possa essere implementata completamente.

Per implementare una proprietà immagine personalizzata, è necessario eseguire le operazioni seguenti:

- [Aggiungere codice al progetto di controllo](#_core_additions_to_your_control_project).

   È necessario aggiungere l'ID di una scheda delle proprietà delle immagini predefinita, un membro dati di tipo `CPictureHolder`e una proprietà personalizzata di tipo **LPPICTUREDISP** con un'implementazione Get/Set.

- [Modificare numerose funzioni nella classe del controllo](#_core_modifications_to_your_control_project).

   Queste modifiche verranno apportate a diverse funzioni che sono responsabili del disegno del controllo ActiveX.

## <a name="additions-to-your-control-project"></a><a name="_core_additions_to_your_control_project"></a> Aggiunte al progetto di controllo

Per aggiungere l'ID della pagina delle proprietà immagine standard, inserire la riga seguente dopo la macro BEGIN_PROPPAGEIDS nel file di implementazione del controllo (. CPP):

[!code-cpp[NVC_MFC_AxPic#1](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_1.cpp)]

È anche necessario incrementare di uno il parametro count della macro BEGIN_PROPPAGEIDS. Questa condizione è illustrata dalla riga seguente:

[!code-cpp[NVC_MFC_AxPic#2](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_2.cpp)]

Per aggiungere il membro dati `CPictureHolder` alla classe del controllo, inserire la riga seguente nella sezione protetta della dichiarazione della classe del controllo nel file di intestazione di controllo (H):

[!code-cpp[NVC_MFC_AxPic#3](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_3.h)]

Non è necessario assegnare un nome al membro dati *m_pic*; è sufficiente qualsiasi nome.

Successivamente, aggiungere una proprietà personalizzata che supporta un tipo immagine:

#### <a name="to-add-a-custom-picture-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà immagine personalizzata con l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida scegliere **Aggiungi** e quindi **Aggiungi proprietà**.

1. Nella casella **Nome proprietà** digitare il nome della proprietà. A scopo di esempio, in questa procedura viene usato `ControlPicture` .

1. Nella casella **tipo proprietà** selezionare **IPictureDisp** <strong>\*</strong> per tipo di proprietà.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Digitare nomi univoci per le funzioni Get e Set o accettare i nomi predefiniti (in questo esempio, vengono usati i nomi predefiniti `GetControlPicture` e `SetControlPicture` ).

1. Fare clic su **Fine**.

L'Aggiunta guidata proprietà aggiungere il codice seguente tra i commenti della mappa di invio nel file di intestazione del controllo (H):

[!code-cpp[NVC_MFC_AxPic#4](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_4.h)]

Inoltre, il codice seguente è stato inserito nella mappa di invio del file di implementazione del controllo (CPP):

[!code-cpp[NVC_MFC_AxPic#5](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_5.cpp)]

L'Aggiunta guidata proprietà aggiunge anche le due funzioni stub seguenti al file di implementazione del controllo:

[!code-cpp[NVC_MFC_AxPic#6](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_6.cpp)]

> [!NOTE]
> I nomi di classe e funzione di controllo potrebbero essere diversi dall'esempio precedente.

### <a name="modifications-to-your-control-project"></a><a name="_core_modifications_to_your_control_project"></a> Modifiche al progetto di controllo

Dopo avere apportato le opportune aggiunte al progetto del controllo, è necessario modificare diverse funzioni che interessano il rendering del controllo ActiveX. Queste funzioni, `OnResetState`, `OnDraw`, e le funzioni Get/Set di una proprietà immagine personalizzata, si trovano nel file di implementazione del controllo Si noti che in questo esempio viene chiamata la classe del controllo `CSampleCtrl` , il `CPictureHolder` membro dati viene chiamato *m_pic* e il nome della proprietà immagine personalizzata è `ControlPicture` .

Nella funzione `OnResetState` del controllo, aggiungere la seguente riga facoltativa dopo la chiamata a `COleControl::OnResetState`:

[!code-cpp[NVC_MFC_AxPic#7](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_7.cpp)]

In questo modo verrà impostata un'immagine vuota per il controllo.

Per disegnare l'immagine correttamente, effettuare una chiamata a [CPictureHolder::Render](reference/cpictureholder-class.md#render) nella funzione `OnDraw` del controllo. Modificare la funzione in modo simile all'esempio seguente:

[!code-cpp[NVC_MFC_AxPic#8](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_8.cpp)]

Nella funzione Get della proprietà immagine personalizzata del controllo, aggiungere la riga seguente:

[!code-cpp[NVC_MFC_AxPic#9](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_9.cpp)]

Nella funzione Set della proprietà immagine personalizzata del controllo, aggiungere le righe seguenti:

[!code-cpp[NVC_MFC_AxPic#10](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_10.cpp)]

La proprietà immagine deve essere resa persistente, in modo che le informazioni aggiunte in fase di progettazione siano visualizzate in fase di esecuzione. Aggiungere la riga seguente alla funzione `COleControl`della classe derivata da `DoPropExchange` :

[!code-cpp[NVC_MFC_AxPic#11](codesnippet/cpp/mfc-activex-controls-using-pictures-in-an-activex-control_11.cpp)]

> [!NOTE]
> I nomi di classe e funzione potrebbero essere diversi dall'esempio precedente.

Dopo aver completato le modifiche, ricompilare il progetto per incorporare le nuove funzionalità della proprietà immagine personalizzata e usare Test Container per testare la nuova proprietà. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: uso di tipi di carattere](mfc-activex-controls-using-fonts.md)<br/>
[Controlli ActiveX MFC: pagine delle proprietà](mfc-activex-controls-property-pages.md)
