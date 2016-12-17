---
title: "Example: Implementing a Property Page | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "proprietà (pagine), implementazione"
ms.assetid: c30b67fe-ce08-4249-ae29-f3060fa8d61e
caps.latest.revision: 14
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Example: Implementing a Property Page
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come compilare una pagina delle proprietà visualizzate \(consente di modificare\) le proprietà dell'interfaccia [Classi documento](../mfc/document-classes.md).  Questa interfaccia è esposta da documenti in [Esempi del modello a oggetti dell'ambiente comune](../Topic/Common%20Environment%20Object%20Model%20Examples.md) di Visual Studio \(sebbene la pagina delle proprietà che non si creerà preoccupi da cui gli oggetti modifica e che supportano l'interfaccia corretta\).  
  
 l'esempio è basato su [Esempio ATLPages](../top/visual-cpp-samples.md).  
  
 Per completare questo esempio, sarà:  
  
-   [Aggiungere la classe della pagina delle proprietà ATL](#vcconusing_the_atl_object_wizard) utilizzando la finestra di dialogo della classe aggiunta e della pagina delle proprietà ATL.  
  
-   [Modificare la finestra di dialogo](#vcconediting_the_dialog_resource) aggiungendo nuovi controlli per le proprietà interessanti dell'interfaccia **Documento**.  
  
-   [Aggiungere gestori di messaggi](#vcconadding_message_handlers) al sito della pagina delle proprietà presenti le modifiche apportate dall'utente.  
  
-   Aggiungere alcune istruzioni `#import` e un typedef nella sezione [Governo di cane](#vcconhousekeeping).  
  
-   [Eseguire l'override di IPropertyPageImpl::SetObjects](#vcconoverriding_ipropertypageimpl_setobjects) per convalidare gli oggetti passati alla pagina delle proprietà.  
  
-   [override IPropertyPageImpl::Activate](#vcconoverriding_ipropertypageimpl_activate) per inizializzare l'interfaccia della pagina delle proprietà.  
  
-   [override IPropertyPageImpl::Apply](#vcconoverride_ipropertypageimpl_apply) per aggiornare l'oggetto con gli ultimi valori della proprietà.  
  
-   [Visualizzare la pagina delle proprietà](#vccontesting_the_property_page) creando un oggetto di supporto semplice.  
  
-   [Creare una macro](#vcconcreating_a_macro) che collauderà la pagina delle proprietà.  
  
##  <a name="vcconusing_the_atl_object_wizard"></a> Aggiunta della classe della pagina delle proprietà ATL  
 Innanzitutto, creare un nuovo progetto ATL per un server di DLL denominato `ATLPages7`.  Ora [Procedura guidata della pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) utilizzare per generare una pagina delle proprietà.  Assegnare alla pagina delle proprietà **nome breveDocProperties** quindi l'opzione nella pagina **Strings** agli elementi proprietà\-pagina\- specifici definiti come illustrato nella tabella riportata di seguito.  
  
|Elemento|Valore|  
|--------------|------------|  
|Titolo|TextDocument|  
|Stringa del documento|Proprietà di VCUE TextDocument|  
|File|*\<blank\>*|  
  
 I valori impostate in questa pagina della procedura guidata verrà restituito al contenitore della pagina delle proprietà quando chiama **IPropertyPage::GetPageInfo**.  Ciò che si verifica dopo le stringhe che dipende dal contenitore, ma in genere verranno utilizzati per identificare la pagina all'utente.  Il titolo in genere visualizzato in una scheda sulla pagina e la stringa di documenti possono essere visualizzati in una barra di stato o in una descrizione comando \(sebbene la finestra delle proprietà standard non utilizzare questa stringa alcuno\).  
  
> [!NOTE]
>  Le stringhe impostato qui è archiviato come risorsa di tipo stringa nel progetto tramite la procedura guidata.  È possibile modificare queste stringhe utilizzando l'editor di risorse se è necessario modificare queste informazioni dopo il codice della pagina è stato generato.  
  
 Scegliere **OK** per la procedura guidata deve generare la pagina delle proprietà.  
  
##  <a name="vcconediting_the_dialog_resource"></a> Modificare la risorsa finestra di dialogo  
 Ora che la pagina delle proprietà è stata generata un'eccezione, è necessario aggiungere alcuni controlli alla risorsa finestra di dialogo che rappresenta la pagina.  Aggiungere una casella di modifica, un controllo di testo statico e una casella di controllo e impostare i relativi ID come illustrato di seguito:  
  
 ![Modifica di una risorsa della finestra di dialogo](../atl/media/ppgresourcelabeled.png "PPGResourceLabeled")  
  
 Questi controlli saranno utilizzati per visualizzare il nome file del documento e il relativo stato in sola lettura.  
  
> [!NOTE]
>  La finestra di dialogo non include un frame o i pulsanti di comando, né ha l'aspetto a schede che previsto.  Queste funzionalità fornite da un frame di pagina delle proprietà come quello creato chiamando [OleCreatePropertyFrame](http://msdn.microsoft.com/library/windows/desktop/ms678437).  
  
##  <a name="vcconadding_message_handlers"></a> Gestori di messaggi di aggiunta  
 Con i controlli sul posto, è possibile aggiungere gestori di messaggi per aggiornare lo stato modificato della pagina quando il valore di uno delle modifiche dei comandi:  
  
 [!code-cpp[NVC_ATL_Windowing#73](../atl/codesnippet/CPP/example-implementing-a-property-page_1.h)]  
  
 Questo codice risposta alle modifiche apportate al controllo di modifica o la casella di controllo chiamando [IPropertyPageImpl::SetDirty](../Topic/IPropertyPageImpl::SetDirty.md), che informa il sito della pagina che la pagina è stata modificata.  In genere il sito della pagina risponda abilitazione o disabilitazione di un pulsante **Apply** sul frame di pagina delle proprietà.  
  
> [!NOTE]
>  Nelle rispettive pagine delle proprietà, potrebbe essere necessario tenere traccia con precisione che le proprietà sono state alterate dall'utente in modo da evitare possibile aggiornare le proprietà che non sono state modificate.  Implementazione di questo esempio di codice tenendo traccia dei valori di proprietà originali e confrontandoli con i valori correnti dell'interfaccia utente al momento di applicare le modifiche.  
  
##  <a name="vcconhousekeeping"></a> Governo di cane  
 Aggiungere una coppia di istruzioni `#import` a DocProperties.h in modo che il compilatore sia sull'interfaccia **Documento** :  
  
 [!code-cpp[NVC_ATL_Windowing#74](../atl/codesnippet/CPP/example-implementing-a-property-page_2.h)]  
  
 Sarà inoltre necessario fare riferimento alla classe base `IPropertyPageImpl` ; aggiungere `typedef` seguente alla classe **CDocProperties** :  
  
 [!code-cpp[NVC_ATL_Windowing#75](../atl/codesnippet/CPP/example-implementing-a-property-page_3.h)]  
  
##  <a name="vcconoverriding_ipropertypageimpl_setobjects"></a> Eseguire l'override di IPropertyPageImpl::SetObjects  
 Il primo metodo `IPropertyPageImpl` che è necessario eseguire l'override è [SetObjects](../Topic/IPropertyPageImpl::SetObjects.md).  Di seguito verrà aggiunto il codice per verificare che un solo oggetto venga passato e supporta l'interfaccia **Documento** che si prevede:  
  
 [!code-cpp[NVC_ATL_Windowing#76](../atl/codesnippet/CPP/example-implementing-a-property-page_4.h)]  
  
> [!NOTE]
>  È opportuno supportare un solo oggetto per questa pagina poiché si consentirà all'utente di impostare il nome file dell'oggetto da un solo file esista in una posizione.  
  
##  <a name="vcconoverriding_ipropertypageimpl_activate"></a> Eseguire l'override di IPropertyPageImpl::Activate  
 È necessario inizializzare la pagina delle proprietà con i valori della proprietà dell'oggetto sottostante durante la prima pagina della creazione.  
  
 In questo caso è necessario aggiungere i membri seguenti alla classe poiché si utilizzerà inoltre i valori di proprietà iniziali per il confronto quando gli utenti della pagina applicate le modifiche:  
  
 [!code-cpp[NVC_ATL_Windowing#77](../atl/codesnippet/CPP/example-implementing-a-property-page_5.h)]  
  
 L'implementazione della classe base del metodo [Attiva](../Topic/IPropertyPageImpl::Activate.md) è necessario creare la finestra di dialogo e i comandi, pertanto è possibile eseguire l'override di questo metodo e aggiungere la propria inizializzazione dopo avere definito la classe base:  
  
 [!code-cpp[NVC_ATL_Windowing#78](../atl/codesnippet/CPP/example-implementing-a-property-page_6.h)]  
  
 Questo codice utilizza i metodi COM l'interfaccia **Documento** per ottenere le proprietà desiderate.  Quindi utilizza i wrapper di API Win32 forniti da [CDialogImpl](../atl/reference/cdialogimpl-class.md) e le relative classi base per visualizzare i valori della proprietà all'utente.  
  
##  <a name="vcconoverride_ipropertypageimpl_apply"></a> Eseguire l'override di IPropertyPageImpl::Apply  
 Quando gli utenti desiderano applicare le modifiche a oggetti, il sito della pagina delle proprietà chiamerà il metodo [Applicare](../Topic/IPropertyPageImpl::Apply.md).  Questo è il posto per eseguire l'operazione inversa del codice in **Attiva** — mentre **Attiva** richiesto valori dall'oggetto e li ha spinti i controlli nella pagina delle proprietà, **Apply** accetta valori dai controlli nella pagina delle proprietà e li inserisce nell'oggetto.  
  
 [!code-cpp[NVC_ATL_Windowing#79](../atl/codesnippet/CPP/example-implementing-a-property-page_7.h)]  
  
> [!NOTE]
>  Il controllo su [m\_bDirty](../Topic/IPropertyPageImpl::m_bDirty.md) all'inizio di questa implementazione è un controllo iniziale per evitare che gli aggiornamenti non necessari gli oggetti **Apply** se viene chiamato più volte.  Sono inoltre disponibili controlli su ognuno dei valori della proprietà da assicurarsi che solo le modifiche possono generare una chiamata al metodo a **Documento**.  
  
> [!NOTE]
>  Espone **FullName** di**Documento** come proprietà di sola lettura.  Per aggiornare il nome file del documento in base alle modifiche apportate alla pagina delle proprietà, è necessario utilizzare il metodo **Salva** per salvare il file con un nome diverso.  Pertanto, il codice in una pagina delle proprietà non deve limitarsi a ottenere o a impostare proprietà.  
  
##  <a name="vccontesting_the_property_page"></a> Visualizzare la pagina delle proprietà  
 Per visualizzare questa pagina, è necessario creare un oggetto di supporto semplice.  L'oggetto supporto fornito un metodo che semplifica **OleCreatePropertyFrame** API per la visualizzazione di una singola pagina collegata a un singolo oggetto.  Questo supporto è progettato per consentirne l'utilizzo da Visual Basic.  
  
 Utilizzare [Aggiungere la finestra di dialogo della classe](../ide/add-class-dialog-box.md) e [Procedura guidata semplice ATL](../atl/reference/atl-simple-object-wizard.md) per generare una nuova classe e utilizzare `Helper` come nome breve.  Una volta creato, aggiungere un metodo come illustrato nella tabella riportata di seguito.  
  
|Elemento|Valore|  
|--------------|------------|  
|Nome metodo|`ShowPage`|  
|Parametri|`[in] BSTR bstrCaption, [in] BSTR bstrID, [in] IUnknown* pUnk`|  
  
 Il parametro `bstrCaption` è la didascalia da visualizzare come titolo della finestra di dialogo.  Il parametro `bstrID` è una stringa che rappresenta un CLSID o un ProgID della pagina delle proprietà da visualizzare.  Il parametro `pUnk` sarà il puntatore `IUnknown` dell'oggetto le cui proprietà saranno configurate dalla pagina delle proprietà.  
  
 Implementare il metodo come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_Windowing#80](../atl/codesnippet/CPP/example-implementing-a-property-page_8.cpp)]  
  
##  <a name="vcconcreating_a_macro"></a> Creare una macro  
 Dopo aver compilato il progetto, è possibile testare la pagina delle proprietà e l'oggetto helper utilizzando una macro semplice che è possibile creare e l'ambiente di sviluppo di Visual Studio.  Questa macro viene creato un oggetto di supporto, quindi chiama il metodo **ShowPage** utilizzando il ProgID della pagina delle proprietà **DocProperties** e del puntatore **IUnknown** del documento attivo attualmente \- l'editor di Visual Studio.  Il codice necessario per questa macro viene indicato di seguito:  
  
```  
Imports EnvDTE  
Imports System.Diagnostics  
  
Public Module AtlPages  
  
    Public Sub Test()  
        Dim Helper  
        Helper = CreateObject("ATLPages7.Helper.1")  
  
        On Error Resume Next  
        Helper.ShowPage( _  
            ActiveDocument.Name, _  
            "ATLPages7Lib.DocumentProperties.1", _  
            DTE.ActiveDocument _  
            )  
    End Sub  
  
End Module  
```  
  
 Quando si esegue questa macro, la pagina delle proprietà verrà visualizzato correntemente il nome file e lo stato di sola lettura al documento di testo attivo.  Lo stato di sola lettura del documento riflette solo la possibilità di scrivere nel documento nell'ambiente di sviluppo, non influisce sull'attributo di sola lettura del file su disco.  
  
## Vedere anche  
 [Pagine delle proprietà](../atl/atl-com-property-pages.md)   
 [Esempio ATLPages](../top/visual-cpp-samples.md)