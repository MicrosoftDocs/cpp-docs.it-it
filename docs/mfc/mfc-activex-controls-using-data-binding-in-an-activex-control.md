---
title: "Controlli ActiveX MFC: utilizzo dell&#39;associazione dati in un controllo ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bindable"
  - "requestedit"
  - "defaultbind"
  - "displaybind"
  - "dispid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli con associazione [C++], ActiveX MFC"
  - "controlli [MFC], associazione dati"
  - "associazione dati [C++], MCF (controlli ActiveX)"
  - "controlli con associazione a dati [C++], MCF (controlli ActiveX)"
  - "MFC (controlli ActiveX), associazione dati"
ms.assetid: 476b590a-bf2a-498a-81b7-dd476bd346f1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: utilizzo dell&#39;associazione dati in un controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno degli scopi più importanti dei controlli ActiveX rappresenta l'associazione dati, che consente la proprietà di un controllo su associazione con un campo specifico in un database.  Quando un utente modifica i dati di questa proprietà associata, il controllo notifica al database e richiede che il campo del nuovo record sia aggiornato.  Il database verrà quindi notifica al controllo dell'esito positivo o negativo della richiesta.  
  
 Questo articolo riguarda il lato del controllo dell'attività.  Implementare le interazioni dell'associazione dati con il database è responsabilità del contenitore di controlli.  Come gestire le interazioni del database nel contenitore esula di questa documentazione.  Come preparato il controllo per l'associazione dati è descritto nella parte restante di questo articolo.  
  
 ![Diagramma concettuale di un controllo con associazione a dati](../mfc/media/vc374v1.png "vc374V1")  
Diagramma concettuale di un controllo associato a dati  
  
 La classe di `COleControl` vengono fornite due funzioni membro che semplificano l'associazione dati un processo semplice per implementare.  La prima funzione, [BoundPropertyRequestEdit](../Topic/COleControl::BoundPropertyRequestEdit.md), viene utilizzata per richiedere l'autorizzazione a modificare il valore della proprietà.  [BoundPropertyChanged](../Topic/COleControl::BoundPropertyChanged.md), la seconda funzione, viene chiamato dopo che il valore della proprietà è stata modificata correttamente.  
  
 Questo articolo vengono trattati i seguenti argomenti:  
  
-   [Creare una proprietà predefinita associabile](#vchowcreatingbindablestockproperty)  
  
-   [Creazione di un membro associabile ottenere\/impostare il metodo](#vchowcreatingbindablegetsetmethod)  
  
##  <a name="vchowcreatingbindablestockproperty"></a> Creare una proprietà predefinita associabile  
 È possibile creare una proprietà predefinita con associazione a dati, ma è più probabile che sarà [associabile ottenere\/impostare il metodo](#vchowcreatingbindablegetsetmethod).  
  
> [!NOTE]
>  Le proprietà predefinite presentano gli attributi di **requestedit** e di **bindable** per impostazione predefinita.  
  
#### Per aggiungere una proprietà predefinita associabile tramite Aggiunta guidata proprietà  
  
1.  Inizia un progetto utilizzando [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).  
  
2.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo.  
  
     Verrà visualizzato il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
4.  Selezionare una delle voci dall'elenco a discesa **Proprietà Nome**.  Ad esempio, è possibile selezionare **Testo**.  
  
     Poiché **Testo** è una proprietà predefinita, gli attributi di **requestedit** e di **bindable** già selezionate.  
  
5.  Selezionare le caselle di controllo seguenti dalla scheda di **Attributi IDL** : **displaybind** e **defaultbind** per aggiungere attributi alla definizione della proprietà nel file .IDL del progetto.  Questi attributi rendono il controllo visibili all'utente e consentono alla proprietà predefinita la proprietà associabili predefinita.  
  
 In questa fase, il controllo consente di visualizzare i dati da un'origine dati, ma non sarà possibile aggiornare i campi dati.  Se si desidera che il controllo anche per poter aggiornare i dati, modificare la funzione di `OnOcmCommand`[OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) per essere simile al seguente:  
  
 [!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]  
  
 È ora possibile compilare il progetto, che verrà registrato il controllo.  Quando si inserisce il controllo nella finestra di dialogo, le proprietà di **Origine dati** e di **Campo dati** si saranno aggiunte e sarà possibile selezionare un'origine dati e un campo da visualizzare nel controllo.  
  
##  <a name="vchowcreatingbindablegetsetmethod"></a> Creazione di un membro associabile ottenere\/impostare il metodo  
 Oltre al con associazione a dati ottenere\/impostare il metodo, nonché creare [proprietà predefinita associabile](#vchowcreatingbindablestockproperty).  
  
> [!NOTE]
>  Questa procedura si presuppone un progetto di controllo ActiveX che rappresenta un controllo Windows.  
  
#### Per aggiungere un membro associabile ottenere\/impostare il metodo tramite Aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  Nella pagina di **Impostazioni controllo**, selezionare una classe della finestra per il controllo nella sottoclasse.  Ad esempio, è possibile creare una sottoclasse di un controllo di modifica.  
  
3.  Caricare il progetto del controllo.  
  
4.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo.  
  
     Verrà visualizzato il menu di scelta rapida.  
  
5.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
6.  Digitare il nome della proprietà nella casella di **Nome proprietà**.  Utilizzare `MyProp` per questo esempio.  
  
7.  Selezionare un tipo di dati dall'elenco a discesa **Tipo proprietà**.  Utilizzo **short** per questo esempio.  
  
8.  Per **Implementation Type**, fare clic **Metodi Get\/Set**.  
  
9. Selezionare le caselle di controllo seguenti dalla scheda attributi IDL: **bindable**, **requestedit**, **displaybind** e **defaultbind** per aggiungere attributi alla definizione della proprietà nel file .IDL del progetto.  Questi attributi rendono il controllo visibili all'utente e consentono alla proprietà predefinita la proprietà associabili predefinita.  
  
10. Scegliere **Fine**.  
  
11. Modificare il corpo della funzione di `SetMyProp` in modo che contenga il seguente codice:  
  
     [!code-cpp[NVC_MFC_AxData#2](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_2.cpp)]  
  
12. Il parametro passato alle funzioni di `BoundPropertyRequestEdit` e di `BoundPropertyChanged` è il dispid di proprietà, ovvero il parametro passato all'attributo id \(\) per la proprietà del file .IDL.  
  
13. Modificare la funzione di [OnOcmCommand](../mfc/mfc-activex-controls-subclassing-a-windows-control.md) in modo che contiene il codice seguente:  
  
     [!code-cpp[NVC_MFC_AxData#1](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_1.cpp)]  
  
14. Modificare la funzione di `OnDraw` in modo che contenga il seguente codice:  
  
     [!code-cpp[NVC_MFC_AxData#3](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_3.cpp)]  
  
15. Nella sezione public del file di intestazione il file di intestazione per la classe del controllo, aggiungere le seguenti definizioni \(costruttori\) per le variabili membro:  
  
     [!code-cpp[NVC_MFC_AxData#4](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_4.h)]  
  
16. Rendere alla riga seguente l'ultima riga in `DoPropExchange` lavorare:  
  
     [!code-cpp[NVC_MFC_AxData#5](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_5.cpp)]  
  
17. Modificare la funzione di `OnResetState` in modo che contenga il seguente codice:  
  
     [!code-cpp[NVC_MFC_AxData#6](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_6.cpp)]  
  
18. Modificare la funzione di `GetMyProp` in modo che contenga il seguente codice:  
  
     [!code-cpp[NVC_MFC_AxData#7](../mfc/codesnippet/CPP/mfc-activex-controls-using-data-binding-in-an-activex-control_7.cpp)]  
  
 È ora possibile compilare il progetto, che verrà registrato il controllo.  Quando si inserisce il controllo nella finestra di dialogo, le proprietà di **Origine dati** e di **Campo dati** si saranno aggiunte e sarà possibile selezionare un'origine dati e un campo da visualizzare nel controllo.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli associati a dati \(ADO e RDO\)](../data/ado-rdo/data-bound-controls-ado-and-rdo.md)