---
title: Problemi di progettazione dell'architettura OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB, application design considerations
ms.assetid: 8caa7d99-d2bb-42c9-8884-74f228bb6ecc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2b0a5c568a774d0aed05d702454664e653989401
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43676836"
---
# <a name="ole-db-architectural-design-issues"></a>Problemi di progettazione dell'architettura OLE DB
È necessario tenere presente quanto segue prima di avviare l'applicazione OLE DB:  
  
 **Quale implementazione di programmazione si userà per scrivere un'applicazione OLE DB?**  
 Microsoft offre varie librerie per ottenere questo risultato: una libreria di modelli OLE DB, OLE DB attributi e le interfacce OLE DB non elaborate in OLE DB SDK. Inoltre, sono disponibili procedure guidate che consentono scrivere un programma. Queste implementazioni sono descritte nel [modelli OLE DB, attributi e altre implementazioni](../../data/oledb/ole-db-templates-attributes-and-other-implementations.md).  
  
 **È necessario scrivere un provider personalizzato?**  
 La maggior parte degli sviluppatori non sono necessario scrivere il proprio provider. Microsoft offre diversi provider. Quando si crea una connessione dati (ad esempio, quando si aggiunge un utente al progetto mediante la creazione guidata Consumer OLE DB ATL), il **proprietà di Data Link** nella finestra di dialogo sono elencati tutti i provider disponibili registrati nel sistema. Se uno di questi provider è appropriato per la propria applicazione di accesso archivio e i dati dei dati, la cosa più semplice da fare è utilizzare uno di questi. Tuttavia, se l'archivio dati non rientra una di queste categorie, è necessario creare un provider personalizzato. Per informazioni sulla creazione di provider, vedere [modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).  
  
 **Quale livello di supporto è necessario per l'utente?**  
 Alcuni utenti possono essere molto semplice; mentre altre possono essere molto complesse. La funzionalità degli oggetti OLE DB specificata dalle proprietà. Quando si usa la creazione guidata Consumer OLE DB ATL per creare un utente o la creazione guidata Provider di Database per creare un provider, imposta le proprietà dell'oggetto appropriato per l'utente per offrirti un set standard di funzionalità. Tuttavia, se le classi consumer o provider generato dalla procedura guidata non supportano tutto ciò che occorre eseguire, è necessario fare riferimento alle interfacce di tali classi nel [libreria di modelli OLE DB](../../data/oledb/ole-db-templates.md). Queste interfacce includono le interfacce OLE DB non elaborate, che fornisce l'implementazione aggiuntiva per rendere più semplice utilizzarle per l'utente.  
  
 Ad esempio, se si desidera aggiornare i dati in un set di righe, ma sia dimenticato di specificare quando è stato creato l'utente con la procedura guidata, è possibile specificare le funzionalità al termine dell'attività, impostando il `DBPROP_IRowsetChange` e `DBPROP_UPDATABILITY` le proprietà dell'oggetto comando. Quindi, quando viene creato il set di righe, ha la `IRowsetChange` interfaccia.  
  
 **Si dispone di codice precedenti utilizzando un'altra tecnologia di accesso ai dati (ADO, ODBC o DAO)?**  
 Date le possibili combinazioni di tecnologie (ad esempio usando i componenti di ADO con i componenti OLE DB e la migrazione di codice ODBC e OLE DB), che copre tutte le situazioni esula dall'ambito della documentazione di Visual C++. Molti articoli che trattano diversi scenari, tuttavia, sono disponibili nei seguenti siti Web Microsoft:  
  
-   [Guida e supporto tecnico Microsoft](https://support.microsoft.com/)  
  
-   [Panoramica di Microsoft Data Access articoli tecnici](https://msdn.microsoft.com/en-us/library/ms810811.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)