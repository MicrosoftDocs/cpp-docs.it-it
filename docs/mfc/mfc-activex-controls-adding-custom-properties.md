---
title: "Controlli ActiveX MFC: aggiunta di propriet&#224; personalizzate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (controlli ActiveX), proprietà"
  - "proprietà [MFC], personalizzati"
ms.assetid: 85af5167-74c7-427b-b8f3-e0d7b73942e5
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controlli ActiveX MFC: aggiunta di propriet&#224; personalizzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le proprietà personalizzate differiscono dalle proprietà predefinite in quanto le proprietà personalizzate non vengono implementate dalla classe di `COleControl`.  Una proprietà personalizzata viene utilizzata per esporre una condizione o l'aspetto di un controllo ActiveX a un programmatore utilizzando il controllo.  
  
 In questo articolo viene descritto come aggiungere una proprietà personalizzata al controllo ActiveX mediante l'aggiunta guidata proprietà e vengono illustrate le modifiche con estensione codice.  Gli argomenti trattati includono  
  
-   [Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property)  
  
-   [Modifiche dell'Aggiunta guidata proprietà per le proprietà personalizzate](#_core_classwizard_changes_for_custom_properties)  
  
 Le proprietà personalizzate definite nei quattro tipi di implementazione: La variabile membro, variabile membro con la notifica, ottiene o imposta i metodi e dispone di parametri.  
  
-   Implementazione di una variabile membro  
  
     Questa implementazione rappresenta lo stato della proprietà come variabile membro della classe del controllo.  Utilizzare l'implementazione di una variabile membro quando non è importante sapere quando tale valore viene modificato.  I tre tipi, questa implementazione crea la quantità minima di codice di supporto per la proprietà.  La macro di voci della mappa di invio per l'implementazione di una variabile membro è [DISP\_PROPERTY](../Topic/DISP_PROPERTY.md).  
  
-   Variabile membro con l'implementazione di notifica  
  
     Questa implementazione è costituito da una variabile membro e una funzione di notifica creati dall'Aggiunta guidata proprietà.  La funzione di notifica verrà chiamata da parte dopo il valore della proprietà.  Utilizzare la variabile membro con l'implementazione di notifica quando è necessario essere notificati dopo che un valore di proprietà è stato modificato.  Questa implementazione richiede più tempo perché richiede una chiamata di funzione.  La macro di voci della mappa di invio per questa implementazione è [DISP\_PROPERTY\_NOTIFY](../Topic/DISP_PROPERTY_NOTIFY.md).  
  
-   Get\/set l'implementazione di metodi  
  
     Questa implementazione è costituito da una coppia delle funzioni membro della classe del controllo.  L'implementazione di metodi set\/get chiama automaticamente la funzione membro get quando viene richiesta del controllo il valore corrente della proprietà e il membro del gruppo vengono eseguiti quando viene richiesta del controllo apportata alla proprietà.  Utilizzare questa implementazione quando è necessario calcolare il valore di una proprietà in fase di esecuzione, convalidare un valore passato dall'utente del controllo prima della modifica dell'effettiva proprietà, o implementare un tipo di proprietà lettura o scrittura.  La macro di voci della mappa di invio per questa implementazione è [DISP\_PROPERTY\_EX](../Topic/DISP_PROPERTY_EX.md).  La sezione seguente, [Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà personalizzata](#_core_using_classwizard_to_add_a_custom_property), utilizzare la proprietà personalizzata di CircleOffset per illustrare questa implementazione.  
  
-   Implementazione con parametri  
  
     L'implementazione con parametri è supportata dall'Aggiunta guidata proprietà.  Una proprietà con parametri \(talvolta detta matrice di proprietà\) può essere utilizzata per accedere a un set di valori in una singola proprietà del controllo.  La macro di voci della mappa di invio per questa implementazione è `DISP_PROPERTY_PARAM`.  Per ulteriori informazioni sull'implementazione di questo tipo, vedere [Implementare una proprietà con parametri](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveXarticolo: Argomenti avanzati.  
  
##  <a name="_core_using_classwizard_to_add_a_custom_property"></a> Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà personalizzata  
 La procedura riportata di seguito viene illustrato come aggiungere una proprietà personalizzata, CircleOffset, che utilizza l'implementazione di metodi set\/get.  La proprietà personalizzata di CircleOffset consente all'utente del controllo stampa l'offset del cerchio dal centro del rettangolo di delimitazione del controllo.  La procedura per l'aggiunta di proprietà personalizzate con un'implementazione diversa da ottiene o imposta i metodi è molto simile.  
  
 Questa procedura può essere utilizzata per aggiungere altre proprietà personalizzate desiderato.  Sostituire il nome della proprietà personalizzata per il nome della proprietà e i parametri di CircleOffset.  
  
#### Per aggiungere una proprietà personalizzata di CircleOffset mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
     Verrà aperto [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nella casella di **Nome proprietà**, digitare `CircleOffset`.  
  
6.  Per **Implementation Type**, fare clic **Metodi Get\/Set**.  
  
7.  Nella casella di **Tipo proprietà**, **short**selezionato.  
  
8.  I nomi al tipo univoci per il get e set funzioni, o accettare i nomi predefiniti.  
  
9. Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_custom_properties"></a> Modifiche dell'Aggiunta guidata proprietà per le proprietà personalizzate  
 Quando si aggiunge una proprietà personalizzata di CircleOffset, l'aggiunta guidata proprietà apportano modifiche all'intestazione precompilata. H\) e i file di implementazione \(.CPP\) della classe del controllo.  
  
 Le seguenti righe aggiunte al. Il file H per dichiarare due funzioni ha chiamato `GetCircleOffset` e `SetCircleOffset`:  
  
 [!code-cpp[NVC_MFC_AxUI#25](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-properties_1.h)]  
  
 La riga seguente viene aggiunta del file .IDL del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#26](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-properties_2.idl)]  
  
 Questa riga assegnata alla proprietà di CircleOffset un numero ID specifici, ricavato dal percorso del metodo metodi e nell'elenco di proprietà dell'Aggiunta guidata proprietà.  
  
 Inoltre, la riga seguente viene aggiunta alla mappa di divisione \(nel file di .CPP della classe del controllo\) per eseguire il mapping della proprietà di CircleOffset alle funzioni di controllo due:  
  
 [!code-cpp[NVC_MFC_AxUI#27](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-properties_3.cpp)]  
  
 Infine, le implementazioni di `GetCircleOffset` e le funzioni di `SetCircleOffset` vengono aggiunti alla fine del file di .CPP del controllo.  Nella maggior parte dei casi, verrà modificata la funzione Get per restituire il valore della proprietà.  La funzione set generalmente contiene codice che deve essere eseguito before o after la proprietà cambia.  
  
 [!code-cpp[NVC_MFC_AxUI#28](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-properties_4.cpp)]  
  
 Si noti che l'aggiunta guidata proprietà aggiunge automaticamente una chiamata, a [SetModifiedFlag](../Topic/COleControl::SetModifiedFlag.md), al corpo della funzione set.  Chiamando questa funzione contrassegna il controllo come modificato.  Se un controllo è stato modificato, il nuovo stato verrà salvato quando il contenitore viene salvato.  Questa funzione deve essere chiamata ogni volta che una proprietà, salvata come parte dello stato persistente del controllo, il valore di textbox1.text.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)