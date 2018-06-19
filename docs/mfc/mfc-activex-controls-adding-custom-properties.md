---
title: 'Controlli ActiveX MFC: Aggiunta di proprietà personalizzate | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], properties
- properties [MFC], custom
ms.assetid: 85af5167-74c7-427b-b8f3-e0d7b73942e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fc3aa3f7aa8b6f4abf28c12a11f75540f59238e4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33352425"
---
# <a name="mfc-activex-controls-adding-custom-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà personalizzate
Proprietà personalizzate sono diverse dalle proprietà predefinite in proprietà personalizzate non sono già implementate dalla `COleControl` classe. Una proprietà personalizzata viene utilizzata per esporre un determinato stato o aspetto di un controllo ActiveX a un programmatore che utilizza il controllo.  
  
 In questo articolo viene descritto come aggiungere una proprietà personalizzata per il controllo ActiveX utilizzando l'aggiunta guidata proprietà e vengono illustrate le modifiche al codice risultante. Gli argomenti trattati includono:  
  
-   [Tramite l'aggiunta guidata proprietà aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property)  
  
-   [Aggiunta guidata proprietà modifiche per le proprietà personalizzate](#_core_classwizard_changes_for_custom_properties)  
  
 Proprietà personalizzate sono disponibili quattro tipi di implementazione: variabile membro, come variabile membro con notifica, i metodi Get e Set e con parametri.  
  
-   Implementazione di variabile membro  
  
     Questa implementazione rappresenta lo stato della proprietà di una variabile membro nella classe del controllo. Usare l'implementazione di variabile membro quando non è importante sapere quando si modifica il valore della proprietà. I tipi di questa implementazione crea la quantità minima di codice di supporto per la proprietà. La macro di voce della mappa di invio per l'implementazione come variabile membro è [DISP_PROPERTY](../mfc/reference/dispatch-maps.md#disp_property).  
  
-   Variabile membro con l'implementazione di notifica  
  
     Questa implementazione è costituito da una variabile membro e una funzione di notifica creata mediante l'aggiunta guidata proprietà. La funzione di notifica viene chiamata automaticamente dal framework dopo la modifica del valore di proprietà. Utilizzare la variabile membro con l'implementazione di notifica quando è necessario ricevere una notifica dopo aver modificato un valore della proprietà. Questa implementazione richiede più tempo perché richiede una chiamata di funzione. La macro di voce della mappa di invio per questa implementazione è [DISP_PROPERTY_NOTIFY](../mfc/reference/dispatch-maps.md#disp_property_notify).  
  
-   Implementazione di metodi get e Set  
  
     Questa implementazione è costituito da una coppia di funzioni membro nella classe del controllo. L'implementazione di metodi Get/Set chiama automaticamente il recupero del membro funzione quando l'utente del controllo richiede il valore corrente della proprietà e la funzione membro Set quando l'utente del controllo richiede che la proprietà deve essere modificata. Utilizzare questa implementazione, quando è necessario per calcolare il valore di una proprietà in fase di esecuzione, di convalidare un valore passato dall'utente del controllo prima di modificare la proprietà effettiva o implementare un tipo di proprietà o scrittura a sola lettura. La macro di voce della mappa di invio per questa implementazione è [DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex). La sezione seguente, [mediante l'aggiunta guidata proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property), Usa la proprietà personalizzata CircleOffset per illustrare questa implementazione.  
  
-   Implementazione con parametri  
  
     Implementazione con parametri è supportata per l'aggiunta guidata proprietà. Una proprietà con parametri (talvolta denominata matrice di proprietà) consente di accedere a un set di valori tramite una singola proprietà del controllo. La macro di voce della mappa di invio per questa implementazione è `DISP_PROPERTY_PARAM`. Per ulteriori informazioni sull'implementazione di questo tipo, vedere [implementazione di una proprietà con parametri](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo controlli ActiveX: argomenti avanzati.  
  
##  <a name="_core_using_classwizard_to_add_a_custom_property"></a> Tramite l'aggiunta guidata proprietà per aggiungere una proprietà personalizzata  
 La procedura seguente viene illustrato come aggiungere una proprietà personalizzata, CircleOffset, che utilizza l'implementazione di metodi Get/Set. La proprietà personalizzata CircleOffset consente all'offset il cerchio dal centro del rettangolo di delimitazione del controllo utente del controllo. La procedura per aggiungere proprietà personalizzate con un'implementazione diversa da metodi Get/Set è molto simile.  
  
 Questa stessa procedura consente inoltre di aggiungere altre proprietà personalizzate che si desidera. Sostituire il nome della proprietà personalizzata per i parametri e il nome della proprietà CircleOffset.  
  
#### <a name="to-add-the-circleoffset-custom-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà personalizzata CircleOffset mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nel **nome della proprietà** digitare `CircleOffset`.  
  
6.  Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.  
  
7.  Nel **tipo di proprietà** , quindi selezionare **breve**.  
  
8.  Digitare nomi univoci per le funzioni Get e Set o accettare i nomi predefiniti.  
  
9. Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_custom_properties"></a> Aggiunta guidata proprietà viene modificato per le proprietà personalizzate  
 Quando si aggiunge la proprietà personalizzata CircleOffset, l'aggiunta guidata proprietà apporta modifiche all'intestazione (. H) e l'implementazione (. File CPP) della classe del controllo.  
  
 Le righe seguenti vengono aggiunti per il. File H per dichiarare due funzioni denominate `GetCircleOffset` e `SetCircleOffset`:  
  
 [!code-cpp[NVC_MFC_AxUI#25](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_1.h)]  
  
 La riga seguente viene aggiunto al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#26](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_2.idl)]  
  
 Questa riga assegna la proprietà CircleOffset un numero di ID, determinato dalla posizione del metodo nell'elenco di proprietà e metodi di aggiunta guidata proprietà.  
  
 Inoltre, la riga seguente viene aggiunto alla mappa di invio (nel. I file CPP della classe del controllo) per eseguire il mapping di proprietà CircleOffset alle due funzioni di gestione del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#27](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_3.cpp)]  
  
 Infine, le implementazioni del `GetCircleOffset` e `SetCircleOffset` funzioni vengono aggiunte alla fine della finestra del controllo. File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. La funzione Set in genere contiene codice che deve essere eseguito prima o dopo le modifiche alle proprietà.  
  
 [!code-cpp[NVC_MFC_AxUI#28](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_4.cpp)]  
  
 Si noti che l'aggiunta guidata proprietà aggiunge automaticamente una chiamata a [SetModifiedFlag](../mfc/reference/colecontrol-class.md#setmodifiedflag), nel corpo della funzione Set. Chiamare questa funzione contrassegna il controllo come modificata. Se un controllo è stato modificato, quando viene salvato il contenitore verrà salvato il nuovo stato. Questa funzione deve essere chiamata ogni volta che un valore della proprietà, salvati come parte dello stato persistente del controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)
