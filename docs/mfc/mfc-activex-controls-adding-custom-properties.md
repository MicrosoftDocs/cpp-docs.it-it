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
ms.openlocfilehash: 7facc4c712d070cffe9be5f07a236b2b04b972e9
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931915"
---
# <a name="mfc-activex-controls-adding-custom-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà personalizzate
Proprietà personalizzate sono diverse dalle proprietà predefinite in proprietà personalizzate non sono già implementate dal `COleControl` classe. Una proprietà personalizzata viene utilizzata per esporre un determinato stato o l'aspetto di un controllo ActiveX a un programmatore che utilizza il controllo.  
  
 In questo articolo viene descritto come aggiungere una proprietà personalizzata per il controllo ActiveX utilizzando l'aggiunta guidata proprietà e vengono illustrate le modifiche al codice risultante. Gli argomenti trattati includono:  
  
-   [Tramite l'aggiunta guidata proprietà aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property)  
  
-   [Aggiunta guidata proprietà modifiche per le proprietà personalizzate](#_core_classwizard_changes_for_custom_properties)  
  
 Proprietà personalizzate sono disponibili quattro tipi dell'implementazione: variabile membro, come variabile membro con notifica, i metodi Get/Set e parametri.  
  
-   Implementazione di variabile membro  
  
     Questa implementazione rappresenta lo stato della proprietà di una variabile membro nella classe del controllo. Usare l'implementazione variabile membro quando non è importante sapere quando cambia il valore della proprietà. Tra i tre tipi, questa implementazione crea la quantità minima di codice di supporto per la proprietà. La macro di voce della mappa di invio per l'implementazione di variabile membro viene [DISP_PROPERTY](../mfc/reference/dispatch-maps.md#disp_property).  
  
-   Variabile membro con implementazione di notifica  
  
     Questa implementazione è costituito da una variabile membro e una funzione di notifica creata mediante l'aggiunta guidata proprietà. La funzione di notifica viene chiamata automaticamente dal framework dopo la modifica al valore di proprietà. Utilizzare la variabile membro con implementazione di notifica quando è necessario ricevere una notifica quando un valore della proprietà modificata. Questa implementazione richiede più tempo perché richiede una chiamata di funzione. La macro di voce della mappa di invio per questa implementazione viene [DISP_PROPERTY_NOTIFY](../mfc/reference/dispatch-maps.md#disp_property_notify).  
  
-   Implementazione di metodi get e Set  
  
     Questa implementazione è costituito da una coppia di funzioni membro nella classe del controllo. L'implementazione di metodi Get/Set chiama automaticamente il recupero del membro funzione quando l'utente del controllo richiede il valore corrente della proprietà e la funzione membro Set quando l'utente del controllo richiede che la proprietà vengano modificate. Utilizzare questa implementazione quando è necessario per calcolare il valore di una proprietà in fase di esecuzione, di convalidare un valore passato dall'utente del controllo prima di modificare la proprietà effettiva o implementare un tipo di proprietà o scrittura a sola lettura. La macro di voce della mappa di invio per questa implementazione viene [DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex). La sezione seguente [mediante l'aggiunta guidata proprietà aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property), Usa la proprietà personalizzata CircleOffset per illustrare questa implementazione.  
  
-   Implementazione con parametri  
  
     Implementazione con parametri è supportata per l'aggiunta guidata proprietà. Una proprietà con parametri, talvolta denominata matrice di proprietà, è utilizzabile per accedere a un set di valori tramite una singola proprietà del controllo. La macro di voce della mappa di invio per questa implementazione è DISP_PROPERTY_PARAM. Per ulteriori informazioni sull'implementazione di questo tipo, vedere [implementazione di una proprietà con parametri](../mfc/mfc-activex-controls-advanced-topics.md) nell'articolo di controlli ActiveX: argomenti avanzati.  
  
##  <a name="_core_using_classwizard_to_add_a_custom_property"></a> Tramite l'aggiunta guidata proprietà per aggiungere una proprietà personalizzata  
 La procedura seguente illustra come aggiungere una proprietà personalizzata, CircleOffset, che usa l'implementazione di metodi Get/Set. La proprietà personalizzata CircleOffset consente utente del controllo di offset il cerchio dal centro del rettangolo di delimitazione del controllo. La procedura per aggiungere proprietà personalizzate con un'implementazione diversa da metodi Get/Set è molto simile.  
  
 Questa stessa procedura può anche essere consente di aggiungere altre proprietà personalizzate che si desidera. Sostituire con il nome della proprietà personalizzata per i parametri e il nome della proprietà CircleOffset.  
  
#### <a name="to-add-the-circleoffset-custom-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà personalizzata CircleOffset mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nel **nome della proprietà** , digitare *CircleOffset*.  
  
6.  Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.  
  
7.  Nel **tipo di proprietà** , quindi selezionare **breve**.  
  
8.  Digitare nomi univoci per le funzioni Get e Set o accettare i nomi predefiniti.  
  
9. Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_custom_properties"></a> Aggiunta guidata proprietà viene modificato per le proprietà personalizzate  
 Quando si aggiunge la proprietà personalizzata CircleOffset, l'aggiunta guidata proprietà apporta le modifiche all'intestazione (. H) e l'implementazione (. File CPP) della classe del controllo.  
  
 Le righe seguenti vengono aggiunti per il. File H per dichiarare due funzioni denominate `GetCircleOffset` e `SetCircleOffset`:  
  
 [!code-cpp[NVC_MFC_AxUI#25](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_1.h)]  
  
 La riga seguente viene aggiunto al controllo del codice. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#26](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_2.idl)]  
  
 Questa riga assegna la proprietà CircleOffset un numero ID specifico, ricavato dalla posizione del metodo nell'elenco di proprietà e metodi di aggiunta guidata proprietà.  
  
 Inoltre, la riga seguente viene aggiunto alla mappa di invio (nel. I file CPP della classe del controllo) per eseguire il mapping della proprietà CircleOffset a due funzioni di gestione del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#27](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_3.cpp)]  
  
 Infine, le implementazioni del `GetCircleOffset` e `SetCircleOffset` funzioni vengono aggiunte alla fine del controllo. File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. La funzione Set conterrà in genere codice che deve essere eseguito prima o dopo le modifiche alle proprietà.  
  
 [!code-cpp[NVC_MFC_AxUI#28](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-properties_4.cpp)]  
  
 Si noti che l'aggiunta guidata proprietà aggiunge automaticamente una chiamata a [SetModifiedFlag](../mfc/reference/colecontrol-class.md#setmodifiedflag), nel corpo della funzione Set. Chiamare questa funzione contrassegna il controllo come modificata. Se un controllo è stato modificato, il nuovo stato verrà salvato quando viene salvato il contenitore. Questa funzione deve essere chiamata ogni volta che una proprietà, salvata come parte dello stato persistente del controllo, cambia valore.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)
