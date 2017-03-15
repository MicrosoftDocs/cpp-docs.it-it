---
title: "Procedura: creazione di una raccolta indipendente dai tipi | Microsoft Docs"
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
  - "classi di raccolte, derivazione da non modello"
  - "classi di raccolte, basate su modello"
  - "classi di raccolte, tipo (protezione)"
  - "serializzazione [C++], classi di raccolte"
  - "SerializeElements (funzione)"
  - "serializzazione di elementi di classi di raccolta"
  - "raccolte indipendenti dai tipi"
ms.assetid: 7230b2db-4283-4083-b098-eb231bf5b89e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Procedura: creazione di una raccolta indipendente dai tipi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come determinare le raccolte indipendenti dai tipi per i tipi di dati personalizzati.  Gli argomenti trattati includono  
  
-   [Utilizzo di classi basate su modelli per garantire l'indipendenza dai tipi](#_core_using_template.2d.based_classes_for_type_safety)  
  
-   [Implementare le funzioni di supporto](#_core_implementing_helper_functions)  
  
-   [Utilizzo di classi di raccolte non template](#_core_using_nontemplate_collection_classes)  
  
 La libreria MFC fornisce type\-safe collections predefinite basate su modelli C\+\+.  Poiché sono modelli, queste classi garantiscono l'indipendenza dai tipi e facilità di utilizzo senza il cast dei tipi e altre operazioni aggiuntive utilizzate quando si utilizza una classe non template per questo scopo.  L'esempio [In COLLECT](../top/visual-cpp-samples.md) di MFC viene illustrato l'utilizzo delle classi di raccolte basate su modelli in un'applicazione MFC.  Utilizzare genere queste classi ogni volta che si scrive nuovo codice delle raccolte.  
  
##  <a name="_core_using_template.2d.based_classes_for_type_safety"></a> Utilizzo di classi basate su modelli per garantire l'indipendenza dai tipi  
  
#### Per utilizzare le classi basate su template  
  
1.  Dichiarare una variabile del tipo della classe di raccolte.  Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFCCollections#7](../mfc/codesnippet/CPP/how-to-make-a-type-safe-collection_1.cpp)]  
  
2.  Chiamare le funzioni membro dell'oggetto Collection.  Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFCCollections#8](../mfc/codesnippet/CPP/how-to-make-a-type-safe-collection_2.cpp)]  
  
3.  Se necessario, implementare [funzioni di supporto](../mfc/reference/collection-class-helpers.md) e [SerializeElements](../Topic/SerializeElements.md).  Per informazioni sull'implementazione di tali funzioni, vedere [Implementare le funzioni di supporto](#_core_implementing_helper_functions).  
  
 In questo esempio viene illustrata la dichiarazione di un elenco di numeri interi.  Il primo parametro nel passaggio 1 è il tipo di dati archiviati come elementi di elenco.  Il secondo parametro specifica al modo in cui i dati devono essere passati ed essere restituiti da funzioni membro della classe di raccolte personalizzata, come **Aggiungi** e `GetAt`.  
  
##  <a name="_core_implementing_helper_functions"></a> Implementare le funzioni di supporto  
 Le classi di raccolte basate su modelli `CArray`, `CList` e funzioni di supporto globali di utilizzo di cinque `CMap` che è possibile personalizzare in base alle necessità della classe di raccolte derivata.  Per informazioni su queste funzioni di supporto, vedere [Supporto di classi collection](../mfc/reference/collection-class-helpers.md) nel *Riferimento MFC*.  L'implementazione della funzione di serializzazione è necessaria per la maggior parte dei utilizzare le classi di raccolte basate su modelli.  
  
###  <a name="_core_serializing_elements"></a> Serializzazione di elementi  
 `CArray`, `CList` e le classi di `CMap` chiamano `SerializeElements` per archiviare gli elementi di una raccolta o per leggerlo da un archivio.  
  
 L'implementazione predefinita della funzione di supporto di `SerializeElements` effettua un bit per bit scritti dagli oggetti all'archivio, o da un bit per bit letti dall'archivio agli oggetti, come se gli oggetti sono archiviati in oppure di recuperare dall'archivio.  Eseguire l'override `SerializeElements` se questa operazione non è adatta.  
  
 Se la raccolta archivia gli oggetti derivati da `CObject` e utilizzare le macro di `IMPLEMENT_SERIAL`implementazione della classe dell'elemento della raccolta, è possibile sfruttare la funzionalità di serializzazione compilata in `CArchive` e in `CObject`:  
  
 [!code-cpp[NVC_MFCCollections#9](../mfc/codesnippet/CPP/how-to-make-a-type-safe-collection_3.cpp)]  
  
 Operatori di overload di inserimento per `CArchive` chiamano `CObject::Serialize` \(o override della funzione\) per ogni oggetto di **CPerson**.  
  
##  <a name="_core_using_nontemplate_collection_classes"></a> Utilizzo di classi di raccolte di non modello  
 MFC supporta inoltre le classi di raccolte introdotte nella versione 1,0 di MFC.  Queste classi non sono basate su modelli.  Può essere utilizzato per contenere i dati dei tipi supportati `CObject*`, **UINT**, `DWORD` e `CString`.  È possibile utilizzare queste raccolte predefinite \(come `CObList`\) per utilizzare le raccolte di tutti gli oggetti derivati da `CObject`.  MFC fornisce anche altre raccolte predefinite per utilizzare i tipi primitivi quali **UINT** e puntatori a void \(`void`\*\).  Generalmente tuttavia, è spesso utile definire le proprie raccolte indipendenti dai tipi per utilizzare gli oggetti di una classe più specifica e delle classi derivate.  Si noti che esegue questa operazione con le classi di raccolte non basate su modelli è più lavoro che utilizzo di classi basate su modelli.  
  
 Esistono due modi per creare type\-safe collections con le raccolte non template:  
  
1.  Utilizzare le raccolte non template, con tipo che esegue il cast se necessario.  Questo è il modo più semplice.  
  
2.  Derivazione da e estendere una raccolta indipendente dai tipi non template.  
  
#### Per utilizzare le raccolte non template con il cast dei tipi  
  
1.  Utilizzare una delle classi non template, come `CWordArray`, direttamente.  
  
     Ad esempio, è possibile creare `CWordArray` e aggiungere tutti i valori a 32 bit a, quindi vengono recuperate.  Non vi è alcuna operazione più eseguire.  È sufficiente utilizzare la funzionalità predefinita.  
  
     È inoltre possibile utilizzare una raccolta predefinita, come `CObList`, per contenere tutti gli oggetti derivati da `CObject`.  Una raccolta di `CObList` viene definita per utilizzare i puntatori a `CObject`.  Quando si recupera un oggetto dall'elenco, potrebbe essere necessario eseguire il cast al tipo appropriato poiché le funzioni di `CObList` restituiscono puntatori a `CObject`.  Ad esempio, se si archiviano gli oggetti di `CPerson` in una raccolta di `CObList`, è necessario eseguire il cast di un elemento recuperato sia un puntatore a un oggetto di `CPerson`.  Nell'esempio viene utilizzata una raccolta di `CObList` per utilizzare gli oggetti di `CPerson` :  
  
     [!code-cpp[NVC_MFCCollections#10](../mfc/codesnippet/CPP/how-to-make-a-type-safe-collection_4.cpp)]  
  
     Questa tecnica di utilizzare un tipo di raccolta predefinito e di eseguire il cast in base alle esigenze può risultare appropriata per molti dei requisiti di raccolta.  Se è necessaria un'ulteriore funzionalità o più l'indipendenza dai tipi, utilizzare una classe basata su modelli, o attenersi alla procedura successiva.  
  
#### Per derivare ed estendere una raccolta indipendente dai tipi non template  
  
1.  Derivare una classe di raccolte da una delle classi predefinite non template.  
  
     Quando si deriva la classe, è possibile aggiungere funzioni wrapper indipendente dai tipi per fornire un'interfaccia indipendente dai tipi alle funzioni esistenti.  
  
     Ad esempio, se derivaste un elenco da `CObList` per utilizzare gli oggetti di `CPerson`, è possibile aggiungere funzioni wrapper `AddHeadPerson` e `GetHeadPerson`, come illustrato di seguito.  
  
     [!code-cpp[NVC_MFCCollections#11](../mfc/codesnippet/CPP/how-to-make-a-type-safe-collection_5.h)]  
  
     Queste funzioni wrapper forniscono una modalità indipendente dai tipi aggiungere e recuperare gli oggetti di `CPerson` dall'elenco derivato.  È possibile vedere che per la funzione di `GetHeadPerson`, è sufficiente si incapsulamento del cast del tipo.  
  
     È inoltre possibile aggiungere la nuova funzionalità definendo nuove funzioni che estendono le funzionalità della raccolta anziché solo eseguendo il wrapping della funzionalità esistente in wrapper indipendente dai tipi.  Ad esempio, l'articolo [Eliminare tutti gli oggetti in una raccolta di oggetti CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md) descrive una funzione per eliminare tutti gli oggetti contenuti in un elenco.  Questa funzione può essere aggiunto alla classe derivata come funzione membro.  
  
## Vedere anche  
 [Raccolte](../mfc/collections.md)