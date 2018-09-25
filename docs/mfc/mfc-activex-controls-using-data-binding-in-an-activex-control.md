---
title: "Controlli ActiveX MFC: Utilizzo dell'associazione dati in un controllo ActiveX | Microsoft Docs"
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- bindable
- requestedit
- defaultbind
- displaybind
- dispid
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], data binding
- data binding [MFC], MFC ActiveX controls
- data-bound controls [MFC], MFC ActiveX controls
- controls [MFC], data binding
- bound controls [MFC], MFC ActiveX
ms.assetid: 476b590a-bf2a-498a-81b7-dd476bd346f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9ecd2cea655536ab12751a169793273c27b7d8f7
ms.sourcegitcommit: 92c568e9466ffd7346a4120c478c9bdea61c8756
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2018
ms.locfileid: "47029567"
---
# <a name="mfc-activex-controls-using-data-binding-in-an-activex-control"></a>Controlli ActiveX MFC: utilizzo del data binding in un controllo ActiveX

Uno degli usi più potenti di controlli ActiveX è l'associazione dati, che consente a una proprietà del controllo da associare a un campo specifico in un database. Quando un utente modifica i dati in questa proprietà associata, il controllo lo notifica database e richiede che il campo record aggiornato. Il database di notifica quindi il controllo dell'esito positivo o negativo della richiesta.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).

Questo articolo illustra la parte di controllo dell'attività. Implementazione di interazioni di associazione dati con il database è responsabilità del contenitore del controllo. Come è gestire le interazioni del database nel contenitore esula dall'ambito di questa documentazione. Nella parte restante di questo articolo viene spiegato come si prepara il controllo per il data binding.

![Diagramma concettuale di dati&#45;controllo associato a](../mfc/media/vc374v1.gif "vc374v1") diagramma concettuale di un controllo con associazione a dati

Il `COleControl` classe fornisce due funzioni membro che rendono un processo semplice per implementare tale associazione. La prima funzione [BoundPropertyRequestEdit](../mfc/reference/colecontrol-class.md#boundpropertyrequestedit), viene usato per richiedere l'autorizzazione per modificare il valore della proprietà. [BoundPropertyChanged](../mfc/reference/colecontrol-class.md#boundpropertychanged), la seconda funzione, viene chiamato dopo che il valore della proprietà è stato modificato correttamente.

Questo articolo illustra gli argomenti seguenti:

- [Creazione di una proprietà associabile predefinita](#vchowcreatingbindablestockproperty)

- [Creazione di un metodo Get/Set associabile](#vchowcreatingbindablegetsetmethod)

##  <a name="vchowcreatingbindablestockproperty"></a> Creazione di una proprietà associabile predefinita

È possibile creare una proprietà predefinita con associazione a dati, anche se è più probabile che sarà necessario un [metodo get/set associabile](#vchowcreatingbindablegetsetmethod).

> [!NOTE]
>  Proprietà predefinite sono le `bindable` e `requestedit` attributi per impostazione predefinita.

#### <a name="to-add-a-bindable-stock-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà associabile predefinita usando l'aggiunta guidata proprietà

1. Avviare un progetto usando il [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).

1. Fare clic sul nodo interfaccia del controllo.

     Verrà aperto il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.

1. Selezionare una delle voci dal **nome della proprietà** elenco a discesa. Ad esempio, è possibile selezionare **testo**.

     In quanto **testo** una proprietà predefinita, il **associabile** e **requestedit** gli attributi sono già selezionati.

1. Selezionare le caselle di controllo dal **attributi IDL** tab: **displaybind** e **defaultbind** per aggiungere gli attributi per la definizione della proprietà del progetto. File IDL. Questi attributi rendere visibili all'utente il controllo e verificare la proprietà predefinita della proprietà associabile predefinita.

A questo punto, il controllo può visualizzare i dati da un'origine dati, ma l'utente non sarà in grado di aggiornare i campi dati. Se si desidera che il controllo in modo che sia anche in grado di aggiornare i dati, modificare il `OnOcmCommand` [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) funzione per la ricerca come segue:

[!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]

È ora possibile compilare il progetto che verrà registrato il controllo. Quando si inserisce il controllo in una finestra di dialogo, il **Datové** e **Zdroj dat** proprietà saranno state aggiunte ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.

##  <a name="vchowcreatingbindablegetsetmethod"></a> Creazione di un metodo Get/Set associabile

Oltre ai dati con associazione a get/set (metodo), è anche possibile creare un [associabile proprietà predefinite](#vchowcreatingbindablestockproperty).

> [!NOTE]
>  Questa procedura si presuppone un controllo ActiveX che rappresenti le sottoclassi di progetto un controllo di Windows.

#### <a name="to-add-a-bindable-getset-method-using-the-add-property-wizard"></a>Per aggiungere un metodo get/set associabile mediante l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. Nel **le impostazioni di controllo** pagina, selezionare una classe della finestra per il controllo per creare una sottoclasse. Ad esempio, è possibile per creare una sottoclasse un controllo di modifica.

1. Caricare il progetto del controllo.

1. Fare clic sul nodo interfaccia del controllo.

     Verrà aperto il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.

1. Digitare il nome della proprietà di **nome della proprietà** casella. Usare `MyProp` per questo esempio.

1. Selezionare un tipo di dati dal **tipo di proprietà** casella di riepilogo a discesa. Uso **breve** per questo esempio.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

9. Selezionare le caselle di controllo seguenti dalla scheda attributi IDL: **associabile**, **requestedit**, **displaybind**, e **defaultbind** da aggiungere gli attributi per la definizione della proprietà del progetto. File IDL. Questi attributi rendere visibili all'utente il controllo e verificare la proprietà predefinita della proprietà associabile predefinita.

10. Scegliere **Fine**.

11. Modificare il corpo del `SetMyProp` funzionare in modo che contenga il codice seguente:

     [!code-cpp[NVC_MFC_AxData#2](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_2.cpp)]

12. Il parametro passato al `BoundPropertyChanged` e `BoundPropertyRequestEdit` funzioni è il dispid della proprietà, che corrisponde al parametro passato all'attributo ID () per la proprietà nel. File IDL.

13. Modificare il [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) funzionare in modo che contenga il codice seguente:

     [!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]

14. Modificare il `OnDraw` funzionare in modo che contenga il codice seguente:

     [!code-cpp[NVC_MFC_AxData#3](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_3.cpp)]

15. Nella sezione pubblica del file di intestazione, il file di intestazione per la classe del controllo, aggiungere le definizioni seguenti (costruttori) per le variabili membro:

     [!code-cpp[NVC_MFC_AxData#4](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_4.h)]

16. Rendere la riga seguente l'ultima riga il `DoPropExchange` funzione:

     [!code-cpp[NVC_MFC_AxData#5](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_5.cpp)]

17. Modificare il `OnResetState` funzionare in modo che contenga il codice seguente:

     [!code-cpp[NVC_MFC_AxData#6](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_6.cpp)]

18. Modificare il `GetMyProp` funzionare in modo che contenga il codice seguente:

     [!code-cpp[NVC_MFC_AxData#7](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_7.cpp)]

È ora possibile compilare il progetto che verrà registrato il controllo. Quando si inserisce il controllo in una finestra di dialogo, il **Datové** e **Zdroj dat** proprietà saranno state aggiunte ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

