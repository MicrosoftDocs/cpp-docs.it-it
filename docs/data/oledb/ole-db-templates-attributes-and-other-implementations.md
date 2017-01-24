---
title: "Modelli, attributi e altre implementazioni OLE DB | Microsoft Docs"
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
  - "modelli OLE DB"
  - "modelli OLE DB, informazioni"
  - "OLE DB, implementazioni"
ms.assetid: 0c780c1b-9bba-4788-8c33-8552d9f120ac
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modelli, attributi e altre implementazioni OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Modelli OLE DB ATL  
 I modelli OLE DB, che fanno parte della libreria ATL \(Active Template Library\), semplificano l'utilizzo della tecnologia OLE DB ad alte prestazioni per database tramite classi che implementano molte delle interfacce OLE DB maggiormente utilizzate.  Insieme a questa libreria di modelli è fornito il supporto delle procedure guidate per la creazione di applicazioni iniziali OLE DB.  
  
 La libreria ATL è costituita da due parti:  
  
-   **Modelli consumer OLE DB** Utilizzati per implementare un'applicazione client OLE DB \(consumer\).  
  
-   **Modelli provider OLE DB** Utilizzati per implementare un'applicazione server OLE DB \(provider\).  
  
 Per utilizzare i modelli OLE DB è necessario avere una certa familiarità con i modelli C\+\+, COM e le interfacce OLE DB.  Se non si conosce sufficientemente OLE DB, vedere [OLE DB Programmer's Reference \(Platform SDK\)](https://msdn.microsoft.com/en-us/library/ms713643.aspx) \(informazioni in lingua inglese\).  
  
 Per ulteriori informazioni:  
  
-   Leggere gli argomenti [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md) o [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).  
  
-   Creare un [consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md) o un [provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md).  
  
-   Vedere l'elenco di [classi dei consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) o di [classi dei provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md).  
  
-   Vedere l'elenco di [esempi di modelli OLE DB](http://msdn.microsoft.com/it-it/08958863-0b5f-41ad-ae99-fca7440c553c).  
  
-   Vedere [OLE DB Programmer's Reference](https://msdn.microsoft.com/en-us/library/ms713643.aspx) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
## Attributi OLE DB  
 Gli [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md) offrono una comoda soluzione per creare un consumer OLE DB.  Essi consentono di inserire elementi di codice in base ai [modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) per creare consumer e provider OLE DB funzionali.  Se è necessario specificare funzionalità non supportate dagli attributi, è possibile utilizzare i modelli OLE DB insieme agli attributi all'interno del codice.  
  
## Classi OLE DB MFC  
 La libreria MFC contiene un'unica classe, [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), che visualizza i record del database presenti nei controlli.  Si tratta di una visualizzazione form connessa direttamente a un oggetto `CRowset` che mostra i campi dell'oggetto `CRowset` presenti nei controlli del modello di finestra di dialogo.  La libreria fornisce inoltre un'implementazione predefinita per lo spostamento sul primo, sull'ultimo, sul precedente o sul successivo record e un'interfaccia per l'aggiornamento del record simultaneamente alla visualizzazione.  Per ulteriori informazioni, vedere `COleDBRecordView`.  
  
## Interfacce dell'SDK di OLE DB  
 Nei casi in cui i modelli OLE DB non supportano alcune funzionalità OLE DB, è necessario utilizzare direttamente le interfacce OLE DB.  Per ulteriori informazioni, vedere [ODBC Programmer's Reference](https://msdn.microsoft.com/en-us/library/ms713643.aspx) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
## Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Cenni preliminari sulla programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)