---
title: Implementazione di una raccolta basata sulla libreria Standard C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: ICollectionOnSTLImpl interface
ms.assetid: 6d49f819-1957-4813-b074-3f12c494d8ca
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 21ca1d07a39950c5d5de83ed6e3a09c12c775d4d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="implementing-a-c-standard-library-based-collection"></a>Implementazione di una raccolta basata sulla libreria Standard C++
ATL fornisce il `ICollectionOnSTLImpl` interfaccia che consente di implementare rapidamente le interfacce di raccolta basata sulla libreria Standard C++ per gli oggetti. Per comprendere il funzionamento di questa classe, verrà illustrato un semplice esempio (sotto) che utilizza questa classe per implementare una raccolta di sola lettura per i client di automazione.  
  
 Il codice di esempio è tratto di [esempio ATLCollections](../visual-cpp-samples.md).  
  
 Per completare questa procedura, è possibile:  
  
-   [Generare un nuovo oggetto semplice](#vccongenerating_an_object).  
  
-   [Modificare il file IDL](#vcconedit_the_idl) per l'interfaccia generato.  
  
-   [Creazione di cinque typedef](#vcconstorage_and_exposure_typedefs) che descrive la modalità in cui vengono archiviati gli elementi della raccolta e come vengono esposti ai client tramite interfacce COM.  
  
-   [Creare due typedef per la copia di classi di criteri](#vcconcopy_classes).  
  
-   [Creazione di TypeDef per le implementazioni dell'enumeratore e raccolta](#vcconenumeration_and_collection).  
  
-   [Modificare il codice C++ generato dalla procedura guidata per l'utilizzo di typedef raccolta](#vcconedit_the_generated_code).  
  
-   [Aggiungere il codice per popolare la raccolta](#vcconpopulate_the_collection).  
  
##  <a name="vccongenerating_an_object"></a>Generazione di un nuovo oggetto semplice  
 Creare un nuovo progetto, assicurandosi che la casella di attributi con le impostazioni dell'applicazione sia deselezionata. Utilizzare la finestra di dialogo Aggiungi classe di ATL e guidata oggetto semplice per generare un semplice oggetto chiamato `Words`. Assicurarsi che un'interfaccia duale chiamato `IWords` viene generato. Oggetti della classe generata verranno utilizzati per rappresentare una raccolta di parole (stringhe).  
  
##  <a name="vcconedit_the_idl"></a>Modifica del File IDL  
 A questo punto, aprire il file IDL e aggiungere le tre proprietà necessarie per trasformare `IWords` in un'interfaccia di raccolta di sola lettura, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#24](../atl/codesnippet/cpp/implementing-an-stl-based-collection_1.idl)]  
  
 Questo è il formato standard per un'interfaccia di raccolta di sola lettura progettata con client di automazione. I commenti numerati in questa definizione di interfaccia corrispondano per i seguenti commenti:  
  
1.  Le interfacce di raccolta sono in genere duali perché accede ai client di automazione di `_NewEnum` proprietà tramite **IDispatch:: Invoke**. Tuttavia, i client di automazione possono accedere ai metodi rimanenti mediante vtable, le interfacce duali sono preferibili a quelle dispatch.  
  
2.  Se un'interfaccia duale o interfaccia dispatch verrà esteso non in fase di esecuzione (ovvero, se non sono forniti ulteriori metodi o proprietà tramite **IDispatch:: Invoke**), è necessario applicare il **nonextensible** attributo la definizione. Questo attributo consente ai client di automazione eseguire una verifica completa del codice in fase di compilazione. In questo caso, l'interfaccia non deve essere esteso.  
  
3.  Il DISPID corretto è importante se si desidera che i client di automazione per poter utilizzare questa proprietà. (Si noti che sia presente un solo carattere di sottolineatura in **DISPID_NEWENUM**.)  
  
4.  È possibile specificare qualsiasi valore per il DISPID del **elemento** proprietà. Tuttavia, **elemento** utilizza in genere **DISPID_VALUE** per rendere la proprietà predefinita della raccolta. In questo modo i client di automazione fare riferimento alla proprietà senza nome viene assegnato in modo esplicito.  
  
5.  Il tipo di dati utilizzato per il valore restituito di **elemento** proprietà è di tipo dell'elemento archiviato nella raccolta come client COM. L'interfaccia restituisce stringhe, è necessario utilizzare il tipo di stringa COM standard, `BSTR`. È possibile archiviare i dati in un formato diverso internamente come si vedrà a breve.  
  
6.  Il valore utilizzato per il DISPID del **conteggio** proprietà è completamente arbitrario. Non vi è alcun DISPID standard per questa proprietà.  
  
##  <a name="vcconstorage_and_exposure_typedefs"></a>Creazione di TypeDef per l'archiviazione e l'esposizione  
 Dopo aver definita l'interfaccia di raccolta, è necessario decidere come verranno archiviati i dati e come i dati verranno esposti tramite l'enumeratore.  
  
 È possibile specificare le risposte a queste domande sotto forma di un numero di typedef, che è possibile aggiungere nella parte superiore del file di intestazione per la classe appena creata:  
  
 [!code-cpp[NVC_ATL_COM#25](../atl/codesnippet/cpp/implementing-an-stl-based-collection_2.h)]  
  
 In questo caso, verranno archiviati i dati come un **std:: Vector** di **std:: String**s. **std:: Vector** è una classe contenitore della libreria Standard C++ che si comporta come una matrice gestita. **std:: String** è una classe di stringa della libreria Standard C++. Queste classi rendono più facile da usare con una raccolta di stringhe.  
  
 Poiché il supporto di Visual Basic è fondamentale per il successo di questa interfaccia, l'enumeratore restituito dal `_NewEnum` proprietà deve supportare il **IEnumVARIANT** interfaccia. Si tratta dell'interfaccia di enumeratore solo riconosciuta da Visual Basic.  
  
##  <a name="vcconcopy_classes"></a>Creazione di TypeDef per classi di criteri di copia  
 Il typedef creati finora forniscono tutte le informazioni necessarie per creare ulteriori TypeDef per le classi di copia che verranno utilizzate per l'enumeratore e la raccolta:  
  
 [!code-cpp[NVC_ATL_COM#26](../atl/codesnippet/cpp/implementing-an-stl-based-collection_3.h)]  
  
 In questo esempio, è possibile utilizzare l'oggetto personalizzato `GenericCopy` classe definita in VCUE_Copy. h e VCUE_CopyString. h dal [ATLCollections](../visual-cpp-samples.md) esempio. È possibile utilizzare questa classe in altro codice, ma potrebbe essere necessario definire ulteriori specializzazioni di `GenericCopy` per supportare i tipi di dati utilizzati nelle proprie raccolte. Per ulteriori informazioni, vedere [classi di criteri di copia ATL](../atl/atl-copy-policy-classes.md).  
  
##  <a name="vcconenumeration_and_collection"></a>Creazione di TypeDef per la raccolta e di enumerazione  
 Ora tutti i parametri di modello necessari per il `CComEnumOnSTL` e `ICollectionOnSTLImpl` classi per questo caso sono state fornite in forma di typedef. Per semplificare l'utilizzo di specializzazioni, creare due typedef aggiuntivi, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#27](../atl/codesnippet/cpp/implementing-an-stl-based-collection_4.h)]  
  
 Ora `CollectionType` è un sinonimo per una specializzazione di `ICollectionOnSTLImpl` che implementa il `IWords` interfaccia definita in precedenza e fornisce un enumeratore che supporta **IEnumVARIANT**.  
  
##  <a name="vcconedit_the_generated_code"></a>La modifica del codice generato dalla procedura guidata  
 Ora è necessario derivare `CWords` dall'implementazione dell'interfaccia rappresentata la `CollectionType` typedef anziché `IWords`, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#28](../atl/codesnippet/cpp/implementing-an-stl-based-collection_5.h)]  
  
##  <a name="vcconpopulate_the_collection"></a>Aggiungere il codice per popolare la raccolta  
 L'unico elemento che rimane è quello di popolare il vettore con i dati. In questo semplice esempio, è possibile aggiungere alcune parole all'insieme nel costruttore della classe:  
  
 [!code-cpp[NVC_ATL_COM#29](../atl/codesnippet/cpp/implementing-an-stl-based-collection_6.h)]  
  
 A questo punto, è possibile testare il codice con il client di propria scelta.  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)   
 [Nell'esempio ATLCollections](../visual-cpp-samples.md)   
 [Classi di criteri di copia ATL](../atl/atl-copy-policy-classes.md)

