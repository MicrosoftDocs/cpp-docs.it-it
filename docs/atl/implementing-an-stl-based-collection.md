---
title: "Implementing an STL-Based Collection | Microsoft Docs"
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
  - "ICollectionOnSTLImpl interface"
ms.assetid: 6d49f819-1957-4813-b074-3f12c494d8ca
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Implementing an STL-Based Collection
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ATL fornisce l'interfaccia `ICollectionOnSTLImpl` per consentire di distribuire rapidamente le interfacce di raccolte basate di \(STL\) della libreria di modelli standard negli oggetti.  Per comprendere il funzionamento di questa classe, si funzioneranno con un semplice esempio \(in\) che utilizza questa classe implementare i client di automazione operazioni su una raccolta di sola lettura.  
  
 Il codice di esempio proviene da [Esempio ATLCollections](../top/visual-cpp-samples.md).  
  
 Per completare questa procedura, è necessario:  
  
-   [Creare un nuovo oggetto semplice](#vccongenerating_an_object).  
  
-   [Modificare il file IDL](#vcconedit_the_idl) per l'interfaccia generata un'eccezione.  
  
-   [Creare cinque typedef](#vcconstorage_and_exposure_typedefs) che viene descritto come gli elementi della raccolta vengono archiviati e come verranno esposti ai client tramite le interfacce COM.  
  
-   [Creare due typedef per le classi criteri di copia](#vcconcopy_classes).  
  
-   [Creare i typedef per le implementazioni di raccolta e dell'enumeratore](#vcconenumeration_and_collection).  
  
-   [Modificare il codice C\+\+ generato mediante procedura guidata per utilizzare il typedef di raccolta](#vcconedit_the_generated_code).  
  
-   [Aggiungere il codice per popolare la raccolta](#vcconpopulate_the_collection).  
  
##  <a name="vccongenerating_an_object"></a> Generazione dell'oggetto semplice nuovo  
 Creare un nuovo progetto, garantendo l'installazione della casella di attributi nelle impostazioni dell'applicazione sia deselezionata.  Utilizzare ATL aggiunge la finestra di dialogo della classe e aggiungere la procedura guidata semplice dell'oggetto per generare un oggetto semplice denominato `Words`.  Assicurarsi che un'interfaccia duale chiamata `IWords` venga generata un'eccezione.  Gli oggetti della classe generata verranno utilizzati per rappresentare una raccolta di parole ovvero stringhe\).  
  
##  <a name="vcconedit_the_idl"></a> Modificare il file IDL  
 Ora, aprire il file IDL e aggiungere le tre proprietà necessarie per trasformare `IWords` in un'interfaccia di raccolta di sola lettura, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#24](../atl/codesnippet/CPP/implementing-an-stl-based-collection_1.idl)]  
  
 È il formato standard per un'interfaccia di raccolta di sola lettura progettata con i client di automazione di base.  I commenti numerate nella definizione di interfaccia corrispondono ai commenti di seguito:  
  
1.  Le interfacce di raccolta sono generalmente doppie poiché i client di automazione accede alla proprietà `_NewEnum` via **IDispatch::Invoke**.  Tuttavia, i client di automazione possono accedere ai metodi rimanenti tramite il puntatore vtable, pertanto le interfacce duali sono preferibili le interfacce dispatch.  
  
2.  Se un'interfaccia duale o un'interfaccia dispatch non viene estesa in fase di esecuzione \(ovvero non forniscono metodi aggiuntivi o le proprietà mediante **IDispatch::Invoke**\), è necessario applicare l'attributo **nonextensible** alla definizione.  Questo attributo consente ai client di automazione per eseguire la verifica di codice completo in fase di compilazione.  In questo caso, l'interfaccia non deve essere estesa.  
  
3.  Il DISPID corretto è importante se si desidera che i client di automazione per poter utilizzare questa proprietà.  Notare che esiste solo un carattere di sottolineatura in **DISPID\_NEWENUM**\).  
  
4.  È possibile specificare qualsiasi valore come il DISPID della proprietà **Elemento**.  Tuttavia, **Elemento** utilizza in genere **DISPID\_VALUE** per selezionarla nella proprietà predefinita della raccolta.  Ciò consente ai client di automazione fanno riferimento a proprietà senza denominarla in modo esplicito.  
  
5.  Il tipo di dati utilizzato per il valore restituito della proprietà **Elemento** è il tipo di elemento archiviato nella libreria per quanto i client COM.  L'interfaccia restituisce le stringhe, pertanto è necessario utilizzare COM standard si insieme il tipo, `BSTR`.  È possibile archiviare dati in un formato diverso internamente come illustrato in precedenza.  
  
6.  Il valore utilizzato per il DISPID della proprietà **Conteggio** è completamente arbitrario.  Non esiste alcun DISPID standard per questa proprietà.  
  
##  <a name="vcconstorage_and_exposure_typedefs"></a> Creare i typedef per l'archiviazione e rischi  
 Una volta che l'interfaccia di raccolta è definita, è necessario decidere come i dati verranno archiviati e sui dati saranno esposti tramite enumeratore.  
  
 Risposte alle domande possono essere fornite sotto forma di una serie di typedef, che è possibile aggiungere nella parte superiore del file di intestazione per la classe appena creata:  
  
 [!code-cpp[NVC_ATL_COM#25](../atl/codesnippet/CPP/implementing-an-stl-based-collection_2.h)]  
  
 In questo caso, verranno memorizzati i dati come **std::vectorstd::string**S.  **std::vector** è una classe di contenitori STL che si comporta come una matrice gestita.  **std::string** è la classe della stringa della libreria C\+\+ standard.  Queste classi semplificano l'utilizzo di una raccolta di stringhe.  
  
 Poiché il supporto in Visual Basic è vitale al termine di questa interfaccia, l'enumeratore restituito dalla proprietà `_NewEnum` deve supportare l'interfaccia **IEnumVARIANT**.  Questo è l'unico l'enumeratore capita da Visual Basic.  
  
##  <a name="vcconcopy_classes"></a> Creare i typedef per le classi criteri di copia  
 I typedef creata fino forniscono tutte le informazioni è necessario creare ulteriori typedef per le classi di copia che verranno utilizzate dall'enumeratore e dalla raccolta:  
  
 [!code-cpp[NVC_ATL_COM#26](../atl/codesnippet/CPP/implementing-an-stl-based-collection_3.h)]  
  
 In questo esempio, è possibile utilizzare la classe `GenericCopy` personalizzate definita in VCUE\_Copy.h e VCUE\_CopyString.hesempio [ATLCollections](../top/visual-cpp-samples.md).  È possibile utilizzare la classe in un altro codice, ma è necessario definire ulteriori specializzazioni `GenericCopy` per supportare i tipi di dati utilizzati nelle proprie raccolte.  Per ulteriori informazioni, vedere [Classi criteri di copia ATL](../atl/atl-copy-policy-classes.md).  
  
##  <a name="vcconenumeration_and_collection"></a> Creare i typedef per l'enumerazione e raccolta  
 Ora tutti i parametri di modello necessari per specializzare le classi `ICollectionOnSTLImpl` e `CComEnumOnSTL` per questa situazione sono stati forniti sotto forma di typedef.  Per semplificare l'utilizzo delle specializzazioni, creare due nuovi typedef come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#27](../atl/codesnippet/CPP/implementing-an-stl-based-collection_4.h)]  
  
 Ora `CollectionType` è sinonimo di una specializzazione `ICollectionOnSTLImpl` che implementa l'interfaccia `IWords` definita in precedenza e fornisce un enumeratore che supporta **IEnumVARIANT**.  
  
##  <a name="vcconedit_the_generated_code"></a> Modificare il codice generato dalla creazione guidata  
 Ora è necessario derivare `CWords` dall'interfaccia rappresentata dal typedef `CollectionType` anziché `IWords`, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#28](../atl/codesnippet/CPP/implementing-an-stl-based-collection_5.h)]  
  
##  <a name="vcconpopulate_the_collection"></a> Aggiunta di codice per popolare la raccolta  
 L'unica differenza che rimane è di popolare il vettore con i dati.  In questo esempio, è possibile aggiungere alcune parole alla raccolta nel costruttore della classe:  
  
 [!code-cpp[NVC_ATL_COM#29](../atl/codesnippet/CPP/implementing-an-stl-based-collection_6.h)]  
  
 A questo punto, è possibile testare il codice con il client scelto.  
  
## Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)   
 [Esempio ATLCollections](../top/visual-cpp-samples.md)   
 [ATL Copy Policy Classes](../atl/atl-copy-policy-classes.md)