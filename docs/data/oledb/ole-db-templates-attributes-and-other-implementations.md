---
title: Modelli OLE DB, attributi e altre implementazioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB, implementations
- OLE DB templates, about OLE DB templates
- OLE DB templates
ms.assetid: 0c780c1b-9bba-4788-8c33-8552d9f120ac
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: abdf0565db00b13c932366985c315c88d8d29f9e
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ole-db-templates-attributes-and-other-implementations"></a>Modelli, attributi e altre implementazioni OLE DB
## <a name="atl-ole-db-templates"></a>Modelli OLE DB ATL  
 I modelli OLE DB, che fanno parte di ATL (Active Template Library), semplificano l'utilizzo fornisce classi che implementano molte delle interfacce OLE DB maggiormente utilizzate la tecnologia per database OLE DB ad alte prestazioni. Con questo modello di libreria viene fornito il supporto della procedura guidata per la creazione di applicazioni di base di OLE DB.  
  
 Questa libreria di modelli include due parti:  
  
-   **Modelli Consumer OLE DB** utilizzato per implementare un'applicazione OLE DB (consumer).  
  
-   **Modelli Provider OLE DB** utilizzato per implementare un'applicazione server (provider) OLE DB.  
  
 Per usare i modelli OLE DB è necessario avere una certa familiarità con i modelli C++, COM e le interfacce OLE DB. Se non si ha familiarità con OLE DB, vedere [riferimento per programmatori OLE DB](https://msdn.microsoft.com/en-us/library/ms713643.aspx).  
  
 Per ulteriori informazioni, è possibile:  
  
-   Leggere gli argomenti di [modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md) o [modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).  
  
-   Creare un [consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md) o [provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md).  
  
-   Visualizzare l'elenco di [classi consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) o [classi del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md).  
  
-   Visualizzare l'elenco di [esempi di modelli OLE DB](http://msdn.microsoft.com/en-us/08958863-0b5f-41ad-ae99-fca7440c553c).  
  
-   Vedere [di riferimento per programmatori OLE DB](https://msdn.microsoft.com/en-us/library/ms713643.aspx) (in Windows SDK).  
  
## <a name="ole-db-attributes"></a>Attributi OLE DB  
 Il [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md) forniscono un modo pratico per creare un consumer OLE DB. Gli attributi OLE DB inseriscono il codice in base il [modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) per creare provider e consumer OLE DB di lavoro. Se è necessario specificare funzionalità non supportate dagli attributi, è possibile utilizzare i modelli OLE DB insieme agli attributi nel codice.  
  
## <a name="mfc-ole-db-classes"></a>Classi MFC OLE DB  
 La libreria MFC contiene una classe, [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), che consente di visualizzare i record del database nei controlli. La vista è un modulo connessi direttamente a un `CRowset` dell'oggetto e visualizza i campi del `CRowset` oggetto nei controlli del modello di finestra di dialogo. Fornisce anche un'implementazione predefinita per lo spostamento al primo, ultimo, precedente o successiva di record e un'interfaccia per l'aggiornamento del record attualmente sulla vista. Per altre informazioni, vedere `COleDBRecordView`.  
  
## <a name="ole-db-sdk-interfaces"></a>Interfacce OLE DB SDK  
 Nei casi in cui i modelli OLE DB non supportano la funzionalità di OLE DB, è necessario utilizzare le interfacce OLE DB autonomamente. Per ulteriori informazioni, vedere [riferimento per programmatori OLE DB](https://msdn.microsoft.com/en-us/library/ms713643.aspx) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)