---
title: Panoramica della programmazione con OLE DB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Universal Data Access
- OLE DB, about OLE DB
ms.assetid: a5a69730-2793-4277-a67d-6f3c8edab6df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: fdeca20ad97a09f9d5862fa43be680a2f907405f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33106193"
---
# <a name="ole-db-programming-overview"></a>Cenni preliminari sulla programmazione con OLE DB
OLE DB è una tecnologia per database ad alte prestazioni, basato su COM. Fornisce un modo comune per accedere ai dati indipendentemente dal formato in cui è archiviato. In una tipica situazione aziendale, una grande quantità di informazioni viene archiviata all'esterno dei database aziendali. Queste informazioni viene trovate nel file System (come FAT o NTFS), i file indicizzati in modo sequenziale, database personali (ad esempio l'accesso), fogli di calcolo (ad esempio Excel), applicazioni per la pianificazione di progetto (ad esempio di progetto) e posta elettronica (ad esempio Outlook). OLE DB consente di accedere a qualsiasi tipo di archivio dati nello stesso modo, purché l'archivio dati è un provider OLE DB.
  
 OLE DB consente di sviluppare applicazioni che accedono a diverse origini dati, se sono DBMS o meno. OLE DB consente accesso universale usando le interfacce COM che supportano la funzionalità DBMS appropriata per una determinata origine dati. Consente di ridurre la duplicazione non necessaria dei servizi e ottimizzata non solo tra origini dati, ma anche tra le altre applicazioni di interoperabilità COM.  
  
## <a name="benefits-of-com"></a>Vantaggi di COM  
 Si tratta in cui è disponibile in COM. OLE DB è un set di interfacce COM. Per l'accesso ai dati tramite un set di interfacce uniforme, è possibile organizzare un database in una matrice di componenti che interagiscono.  
  
 In base alla specifica di COM, OLE DB definisce una raccolta estendibile e facilmente gestibile di interfacce che forniscono e includono funzionalità DBMS coerenti e riutilizzabili. Queste interfacce definiscono i limiti dei componenti DBMS come contenitori di riga, processori di query e i coordinatori di transazione, che consentono un accesso uniforme transazionale per diverse origini di informazioni.  
 
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Modelli OLE DB](../../data/oledb/ole-db-templates.md)