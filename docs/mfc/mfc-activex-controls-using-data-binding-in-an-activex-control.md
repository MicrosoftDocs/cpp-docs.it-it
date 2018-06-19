---
title: "Controlli ActiveX MFC: Utilizzo dell'associazione di dati in un controllo ActiveX | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: ab5195cc2381e515688182ad73452b07afd06b98
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33353273"
---
# <a name="mfc-activex-controls-using-data-binding-in-an-activex-control"></a>Controlli ActiveX MFC: utilizzo del data binding in un controllo ActiveX
Uno degli usi più potenti di controlli ActiveX è l'associazione di dati, che consente una proprietà del controllo da associare a un campo specifico in un database. Quando un utente modifica i dati della proprietà associata, il controllo avvisa il database e le richieste che è possibile aggiornare i campi di record. Il database quindi notifica il controllo dell'esito positivo o negativo della richiesta.  
  
 Questo articolo descrive il lato dei controlli dell'attività. Implementazione di interazioni di associazione dati con il database è responsabilità del contenitore del controllo. Modalità di gestione delle interazioni del database nel contenitore non rientra nell'ambito di questa documentazione. Nella parte restante di questo articolo è illustrato come preparare il controllo per l'associazione dati.  
  
 ![Diagramma concettuale dei dati di&#45;controllo associato a](../mfc/media/vc374v1.gif "vc374v1")  
Diagramma concettuale di un controllo con associazione a dati  
  
 La `COleControl` classe fornisce due funzioni membro che esegue un processo semplice per implementare l'associazione dati. La prima funzione [BoundPropertyRequestEdit](../mfc/reference/colecontrol-class.md#boundpropertyrequestedit), viene utilizzato per richiedere l'autorizzazione per modificare il valore della proprietà. [BoundPropertyChanged](../mfc/reference/colecontrol-class.md#boundpropertychanged), la seconda funzione, viene chiamato dopo che il valore della proprietà è stato modificato correttamente.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [Creazione di una proprietà associabile predefinita](#vchowcreatingbindablestockproperty)  
  
-   [Creazione di un metodo Get/Set associabile](#vchowcreatingbindablegetsetmethod)  
  
##  <a name="vchowcreatingbindablestockproperty"></a> Creazione di una proprietà associabile predefinita  
 È possibile creare una proprietà predefinita con associazione a dati, anche se è più probabile che si desidera un [metodo get/set associabile](#vchowcreatingbindablegetsetmethod).  
  
> [!NOTE]
>  Proprietà predefinite sono la **associabili** e **requestedit** attributi per impostazione predefinita.  
  
#### <a name="to-add-a-bindable-stock-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà predefinita associabile mediante l'aggiunta guidata proprietà  
  
1.  Avviare un progetto utilizzando il [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).  
  
2.  Pulsante destro del mouse sul nodo interfaccia del controllo.  
  
     Verrà aperto il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
4.  Selezionare una delle voci di **nome della proprietà** elenco a discesa. Ad esempio, è possibile selezionare **testo**.  
  
     Poiché **testo** è una proprietà predefinita, il **associabili** e **requestedit** gli attributi sono già selezionati.  
  
5.  Selezionare le caselle di controllo dal **attributi IDL** scheda: **displaybind** e **defaultbind** per aggiungere gli attributi alla definizione della proprietà del progetto. File IDL. Questi attributi verificare il controllo visibili all'utente e la proprietà predefinita la proprietà associabile predefinita.  
  
 A questo punto, il controllo può visualizzare i dati da un'origine dati, ma l'utente non sarà in grado di aggiornare i campi dati. Se si desidera che il controllo in modo che sia anche in grado di aggiornare i dati, modificare il `OnOcmCommand` [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) funzione per esaminare come indicato di seguito:  
  
 [!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]  
  
 È ora possibile compilare il progetto che verrà registrato il controllo. Quando si inserisce il controllo in una finestra di dialogo di **campo dati** e **origine dati** proprietà verranno aggiunti ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.  
  
##  <a name="vchowcreatingbindablegetsetmethod"></a> Creazione di un metodo Get/Set associabile  
 Oltre a un'associazione a dati get/set (metodo), è inoltre possibile creare un [proprietà predefinita associabile](#vchowcreatingbindablestockproperty).  
  
> [!NOTE]
>  Questa procedura si presuppone che si dispone di un controllo ActiveX progetto che rappresenta una sottoclasse di un controllo Windows.  
  
#### <a name="to-add-a-bindable-getset-method-using-the-add-property-wizard"></a>Per aggiungere un metodo get/set associabile mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  Nel **le impostazioni di controllo** pagina, selezionare una classe di finestra per il controllo per creare una sottoclasse. Ad esempio, è consigliabile per creare una sottoclasse un controllo di modifica.  
  
3.  Caricare il progetto del controllo.  
  
4.  Pulsante destro del mouse sul nodo interfaccia del controllo.  
  
     Verrà aperto il menu di scelta rapida.  
  
5.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
6.  Digitare il nome della proprietà di **nome della proprietà** casella. Utilizzare `MyProp` per questo esempio.  
  
7.  Selezionare un tipo di dati dal **tipo di proprietà** casella di riepilogo a discesa. Utilizzare **breve** per questo esempio.  
  
8.  Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.  
  
9. Selezionare le caselle di controllo seguenti dalla scheda attributi IDL: **associabili**, **requestedit**, **displaybind**, e **defaultbind** da aggiungere gli attributi alla definizione della proprietà del progetto. File IDL. Questi attributi verificare il controllo visibili all'utente e la proprietà predefinita la proprietà associabile predefinita.  
  
10. Scegliere **Fine**.  
  
11. Modificare il corpo del `SetMyProp` funzionare in modo che contenga il codice seguente:  
  
     [!code-cpp[NVC_MFC_AxData#2](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_2.cpp)]  
  
12. Il parametro passato al `BoundPropertyChanged` e `BoundPropertyRequestEdit` funzioni è il dispid della proprietà, ovvero il parametro passato all'attributo ID () per la proprietà di. File IDL.  
  
13. Modificare il [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) funzionare in modo che contenga il codice seguente:  
  
     [!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]  
  
14. Modificare il `OnDraw` funzionare in modo che contenga il codice seguente:  
  
     [!code-cpp[NVC_MFC_AxData#3](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_3.cpp)]  
  
15. Alla sezione pubblica del file di intestazione, file di intestazione per la classe di controllo, aggiungere le seguenti definizioni (costruttori) per le variabili membro:  
  
     [!code-cpp[NVC_MFC_AxData#4](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_4.h)]  
  
16. Verificare la riga seguente l'ultima riga di `DoPropExchange` funzione:  
  
     [!code-cpp[NVC_MFC_AxData#5](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_5.cpp)]  
  
17. Modificare il `OnResetState` funzionare in modo che contenga il codice seguente:  
  
     [!code-cpp[NVC_MFC_AxData#6](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_6.cpp)]  
  
18. Modificare il `GetMyProp` funzionare in modo che contenga il codice seguente:  
  
     [!code-cpp[NVC_MFC_AxData#7](../mfc/codesnippet/cpp/mfc-activex-controls-using-data-binding-in-an-activex-control_7.cpp)]  
  
 È ora possibile compilare il progetto che verrà registrato il controllo. Quando si inserisce il controllo in una finestra di dialogo di **campo dati** e **origine dati** proprietà verranno aggiunti ed è ora possibile selezionare un'origine dati e un campo da visualizzare nel controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   

