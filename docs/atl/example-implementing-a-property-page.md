---
title: Implementazione di una pagina delle proprietà (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- property pages, implementing
ms.assetid: c30b67fe-ce08-4249-ae29-f3060fa8d61e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 139bdd9076e99139f4da105b4bb2b375689efe15
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32363713"
---
# <a name="example-implementing-a-property-page"></a>Esempio: Implementazione di una pagina delle proprietà
Questo esempio viene illustrato come compilare una pagina delle proprietà che consente di visualizzare le proprietà di (e consente di modificare) le [classi documento](../mfc/document-classes.md) interfaccia.  
  
 L'esempio è basato sul [esempio ATLPages](../visual-cpp-samples.md).  
  
 Per completare questo esempio, si apprenderà come:  
  
- [Aggiungere la classe delle pagine proprietà ATL](#vcconusing_the_atl_object_wizard) utilizzando la finestra di dialogo Aggiungi classe e guidata pagina delle proprietà ATL.  
  
- [Modificare la risorsa finestra di dialogo](#vcconediting_the_dialog_resource) mediante l'aggiunta di nuovi controlli per le proprietà interessanti del **documento** interfaccia.  
  
- [Aggiungere gestori di messaggi](#vcconadding_message_handlers) per mantenere il sito della pagina proprietà informato delle modifiche apportate dall'utente.  
  
-   Aggiungere alcuni `#import` istruzioni e un typedef nel [Housekeeping](#vcconhousekeeping) sezione.  
  
- [Eseguire l'override: SetObjects](#vcconoverriding_ipropertypageimpl_setobjects) per convalidare gli oggetti passati alla pagina delle proprietà.  
  
- [Eseguire l'override IPropertyPageImpl](#vcconoverriding_ipropertypageimpl_activate) per inizializzare l'interfaccia della pagina delle proprietà.  
  
- [Eseguire l'override IPropertyPageImpl](#vcconoverride_ipropertypageimpl_apply) per aggiornare l'oggetto con i valori di proprietà più recenti.  
  
- [Visualizzare la pagina delle proprietà](#vccontesting_the_property_page) mediante la creazione di un semplice oggetto di supporto.  
  
- [Creare una macro](#vcconcreating_a_macro) che testerà la pagina delle proprietà.  
  
##  <a name="vcconusing_the_atl_object_wizard"></a> Aggiunta di classe della pagina delle proprietà ATL  
 Innanzitutto, creare un nuovo progetto ATL per un server DLL denominato `ATLPages7`. A questo punto utilizzare il [guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) per generare una pagina delle proprietà. Assegnare la pagina delle proprietà un **nome breve** di **DocProperties** quindi passare il **stringhe** pagina per impostare gli elementi di proprietà pagina specifici, come illustrato nella tabella seguente.  
  
|Elemento|Valore|  
|----------|-----------|  
|Titolo|TextDocument|  
|Stringa doc|Proprietà di TextDocument VCUE|  
|HelpFile|*\<vuota >*|  
  
 I valori impostati in questa pagina della procedura guidata verranno restituiti per il contenitore della pagina proprietà quando viene chiamata **IPropertyPage:: GetPageInfo**. Cosa accade per le stringhe dopo che dipende dal contenitore, ma in genere verrà utilizzati per identificare la pagina all'utente. Il titolo verrà visualizzato in genere in una scheda sopra la pagina e la stringa Doc potrebbe essere visualizzata in una barra di stato o una descrizione comando (anche se la finestra delle proprietà standard non utilizza questa stringa affatto).  
  
> [!NOTE]
>  Le stringhe impostate in questa sezione vengono archiviate come risorse nel progetto di tipo stringa dalla procedura guidata. È possibile modificare facilmente queste stringhe si utilizza l'editor di risorse, se è necessario modificare queste informazioni dopo il codice per la pagina è stato generato.  
  
 Fare clic su **OK** la procedura guidata per generare la pagina delle proprietà.  
  
##  <a name="vcconediting_the_dialog_resource"></a> La modifica della risorsa finestra di dialogo  
 Ora che è stata generata la pagina delle proprietà, è necessario aggiungere alcuni controlli alla risorsa finestra di dialogo che rappresentano la pagina. Aggiungere una casella di modifica, un controllo di testo statico e una casella di controllo e impostare i relativi ID, come illustrato di seguito:  
  
 ![Modifica di una risorsa finestra di dialogo](../atl/media/ppgresourcelabeled.gif "ppgresourcelabeled")  
  
 Questi controlli verranno utilizzati per visualizzare il nome del file del documento e il relativo stato di sola lettura.  
  
> [!NOTE]
>  La risorsa finestra di dialogo non include i pulsanti di comando o frame, né ha l'aspetto a schede che è possibile che sia previsto. Queste funzionalità sono fornite da un frame della pagina di proprietà, ad esempio quello creato chiamando [OleCreatePropertyFrame](http://msdn.microsoft.com/library/windows/desktop/ms678437).  
  
##  <a name="vcconadding_message_handlers"></a> Aggiunta di gestori messaggi  
 Con i controlli sul posto, è possibile aggiungere i gestori di messaggi per aggiornare lo stato della pagina dirty quando cambia il valore di uno dei controlli:  
  
 [!code-cpp[NVC_ATL_Windowing#73](../atl/codesnippet/cpp/example-implementing-a-property-page_1.h)]  
  
 Questo codice di risposta alle modifiche apportate al controllo di modifica o casella di controllo chiamando [IPropertyPageImpl:: SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty), che informa il sito della pagina che la pagina è stata modificata. In genere il sito della pagina risponderà abilitando o disabilitando un **applica** pulsante frame della pagina delle proprietà.  
  
> [!NOTE]
>  Nelle pagine delle proprietà, potrebbe essere necessario tenere traccia delle esattamente quali proprietà sono state modificate in modo che è possibile evitare l'aggiornamento delle proprietà che non sono state modificate dall'utente. In questo esempio implementa il codice per tenere traccia dei valori originali delle proprietà e confrontarli con i valori correnti dall'interfaccia utente quando è necessario applicare le modifiche.  
  
##  <a name="vcconhousekeeping"></a> Attività di manutenzione  
 A questo punto aggiungere un paio di `#import` istruzioni DocProperties.h in modo che il compilatore viene a conoscenza di **documento** interfaccia:  
  
 [!code-cpp[NVC_ATL_Windowing#74](../atl/codesnippet/cpp/example-implementing-a-property-page_2.h)]  
  
 È necessario anche fare riferimento al `IPropertyPageImpl` classe di base; aggiungere i seguenti `typedef` per il **CDocProperties** classe:  
  
 [!code-cpp[NVC_ATL_Windowing#75](../atl/codesnippet/cpp/example-implementing-a-property-page_3.h)]  
  
##  <a name="vcconoverriding_ipropertypageimpl_setobjects"></a> Si esegue l'override: SetObjects  
 Il primo `IPropertyPageImpl` metodo che è necessario eseguire l'override è [SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects). Di seguito verrà aggiunto il codice per verificare che solo un singolo oggetto è stato passato e che supporti il **documento** interfaccia che si aspetta:  
  
 [!code-cpp[NVC_ATL_Windowing#76](../atl/codesnippet/cpp/example-implementing-a-property-page_4.h)]  
  
> [!NOTE]
>  È opportuno supporta solo un singolo oggetto per questa pagina in quanto si consentirà all'utente di impostare il nome del file dell'oggetto, può esistere solo un file in una qualsiasi posizione.  
  
##  <a name="vcconoverriding_ipropertypageimpl_activate"></a> Si esegue l'override IPropertyPageImpl  
 Il passaggio successivo è per inizializzare la pagina delle proprietà con i valori di proprietà dell'oggetto sottostante quando si crea la pagina.  
  
 In questo caso occorre aggiungere i membri seguenti alla classe, poiché si utilizzeranno inoltre i valori iniziali delle proprietà per il confronto quando gli utenti della pagina di applicare le modifiche:  
  
 [!code-cpp[NVC_ATL_Windowing#77](../atl/codesnippet/cpp/example-implementing-a-property-page_5.h)]  
  
 L'implementazione della classe base di [attiva](../atl/reference/ipropertypageimpl-class.md#activate) metodo è responsabile della creazione nella finestra di dialogo e i relativi controlli, è possibile eseguire l'override di questo metodo, aggiungere la propria inizializzazione dopo la chiamata della classe base:  
  
 [!code-cpp[NVC_ATL_Windowing#78](../atl/codesnippet/cpp/example-implementing-a-property-page_6.h)]  
  
 Questo codice Usa i metodi COM del **documento** interfaccia per ottenere le proprietà che si sono interessati. Viene quindi utilizzato il wrapper dell'API Win32 forniti da [CDialogImpl](../atl/reference/cdialogimpl-class.md) e le relative classi base per visualizzare i valori delle proprietà per l'utente.  
  
##  <a name="vcconoverride_ipropertypageimpl_apply"></a> Si esegue l'override IPropertyPageImpl  
 Quando gli utenti desiderano applicare le modifiche apportate agli oggetti, il sito della pagina proprietà chiamerà il [applica](../atl/reference/ipropertypageimpl-class.md#apply) metodo. Questo è il luogo per eseguire l'inverso del codice in **attiva** , mentre **attiva** accetta valori dall'oggetto e li inserita nella pagina delle proprietà, i controlli **applica** accetta i valori dai controlli nella pagina delle proprietà e li inserisce nell'oggetto.  
  
 [!code-cpp[NVC_ATL_Windowing#79](../atl/codesnippet/cpp/example-implementing-a-property-page_7.h)]  
  
> [!NOTE]
>  La verifica [m_bDirty](../atl/reference/ipropertypageimpl-class.md#m_bdirty) all'inizio di questa implementazione è un controllo iniziale per evitare gli aggiornamenti non necessari degli oggetti se **applica** viene chiamato più volte. Esistono anche controlli in base a ognuno dei valori di proprietà per garantire che solo le modifiche apportate in una chiamata al metodo di **documento**.  
  
> [!NOTE]
> **Documento** espone **FullName** come proprietà di sola lettura. Per aggiornare il nome del file del documento in base alle modifiche apportate alla pagina delle proprietà, è necessario utilizzare il **salvare** per salvare il file con un nome diverso. Di conseguenza, il codice in una pagina delle proprietà non deve limitarsi al recupero o impostazione delle proprietà.  
  
##  <a name="vccontesting_the_property_page"></a> Visualizzare la pagina delle proprietà  
 Per visualizzare questa pagina, è necessario creare un semplice oggetto di supporto. L'oggetto helper fornirà un metodo che semplifica la **OleCreatePropertyFrame** API per la visualizzazione di una singola pagina connessa a un singolo oggetto. Questo supporto sarà progettato in modo che può essere utilizzato da Visual Basic.  
  
 Utilizzare il [la finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md) e [guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md) per generare una nuova classe e usare `Helper` come il nome breve. Una volta creata, aggiungere un metodo come illustrato nella tabella seguente.  
  
|Elemento|Valore|  
|----------|-----------|  
|Nome metodo|`ShowPage`|  
|Parametri|`[in] BSTR bstrCaption, [in] BSTR bstrID, [in] IUnknown* pUnk`|  
  
 Il `bstrCaption` parametro è la didascalia da visualizzare come titolo della finestra di dialogo. Il `bstrID` parametro è una stringa che rappresenta un CLSID o ProgID della pagina delle proprietà da visualizzare. Il `pUnk` parametro sarà il `IUnknown` puntatore dell'oggetto le cui proprietà verranno configurate dalla pagina delle proprietà.  
  
 Implementare il metodo come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_Windowing#80](../atl/codesnippet/cpp/example-implementing-a-property-page_8.cpp)]  
  
##  <a name="vcconcreating_a_macro"></a> Creazione di una Macro  
 Dopo aver creato il progetto, è possibile testare la pagina delle proprietà e l'oggetto helper mediante una semplice macro che è possibile creare ed eseguire nell'ambiente di sviluppo di Visual Studio. Questa macro verrà creato un file di supporto dell'oggetto, quindi chiamare il relativo **ShowPage** utilizzando il ProgID del metodo il **DocProperties** pagina delle proprietà e il **IUnknown** indicatore di misura del documento attualmente attivo nell'editor di Visual Studio. Il codice che necessario per questa macro è illustrato di seguito:  
  
```  
Imports EnvDTE  
Imports System.Diagnostics  
 
Public Module AtlPages  
 
    Public Sub Test()  
    Dim Helper  
    Helper = CreateObject("ATLPages7.Helper.1")  
 
    On Error Resume Next  
    Helper.ShowPage(_ 
    ActiveDocument.Name,
    _ 
 "ATLPages7Lib.DocumentProperties.1",
    _ 
    DTE.ActiveDocument _)  
    End Sub  
 
End Module  
```  
  
 Quando si esegue questa macro, verrà visualizzata la pagina delle proprietà che mostra il nome file e lo stato di sola lettura del documento attualmente attivo. Lo stato di sola lettura del documento riflette solo la possibilità di scrivere il documento nell'ambiente di sviluppo. non influisce l'attributo di sola lettura del file su disco.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../atl/atl-com-property-pages.md)   
 [Esempio ATLPages](../visual-cpp-samples.md)

