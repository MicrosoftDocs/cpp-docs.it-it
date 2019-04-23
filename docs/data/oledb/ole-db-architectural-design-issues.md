---
title: Problemi di progettazione dell'architettura OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- OLE DB, application design considerations
ms.assetid: 8caa7d99-d2bb-42c9-8884-74f228bb6ecc
ms.openlocfilehash: 2f0a7a114c671e17d8f95280ab00ed93570e8609
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59037672"
---
# <a name="ole-db-architectural-design-issues"></a>Problemi di progettazione dell'architettura OLE DB

Tenere presente quanto segue prima di avviare l'applicazione OLE DB:

## <a name="what-programming-implementation-will-you-use-to-write-your-ole-db-application"></a>Quale implementazione di programmazione si userà per scrivere un'applicazione OLE DB?

Microsoft offre varie librerie per portare a termine questa attività: una libreria di modelli OLE DB, OLE DB attributi e le interfacce OLE DB non elaborate in OLE DB SDK. Inoltre, sono disponibili procedure guidate che consentono scrivere un programma. Queste implementazioni sono descritte nel [modelli OLE DB, attributi e altre implementazioni](../../data/oledb/ole-db-templates-attributes-and-other-implementations.md).

## <a name="do-you-need-to-write-your-own-provider"></a>È necessario scrivere un provider personalizzato?

La maggior parte degli sviluppatori non necessario scrivere il proprio provider. Microsoft offre diversi provider. Quando si crea una connessione dati (ad esempio, quando si aggiunge un utente al progetto utilizzando il **Creazione guidata Consumer OLE DB ATL**), il **proprietà di Data Link** nella finestra di dialogo sono elencati tutti i provider disponibili registrati nel sistema. Se uno dei provider è appropriato per la propria applicazione di accesso archivio e i dati dei dati, la cosa più semplice da fare consiste nell'utilizzare uno di questi. Tuttavia, se l'archivio dati non si adatta a una di queste categorie, è necessario creare un provider personalizzato. Per informazioni sulla creazione di provider, vedere [modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).

## <a name="what-level-of-support-do-you-need-for-your-consumer"></a>Quale livello di supporto è necessario per l'utente?

Alcuni utenti possono essere complessi. mentre altre possono essere complesse. La funzionalità degli oggetti OLE DB specificata dalle proprietà. Quando si usa la **Creazione guidata Consumer OLE DB ATL** per creare un consumer o il **Creazione guidata Provider** per creare un provider, imposta le proprietà dell'oggetto appropriato per l'utente per offrirti un set standard di funzionalità. Tuttavia, se le classi generate dalla procedura guidata, consumer o provider non supportano tutte le informazioni necessarie per eseguire, è necessario fare riferimento alle interfacce di tali classi nel [libreria di modelli OLE DB](../../data/oledb/ole-db-templates.md). Queste interfacce includono le interfacce OLE DB non elaborate, che fornisce l'implementazione aggiuntiva per rendere più semplice utilizzarle per l'utente.

Ad esempio, se si desidera aggiornare i dati in un set di righe, ma sia dimenticato di specificare quando è stato creato l'utente con la procedura guidata, è possibile specificare le funzionalità al termine dell'attività, impostando il `DBPROP_IRowsetChange` e `DBPROP_UPDATABILITY` le proprietà dell'oggetto comando. Quindi, quando viene creato il set di righe, ha la `IRowsetChange` interfaccia.

## <a name="do-you-have-older-code-using-another-data-access-technology-ado-odbc-or-dao"></a>Si dispone di codice precedenti utilizzando un'altra tecnologia di accesso ai dati (ADO, ODBC o DAO)?

Date le possibili combinazioni di tecnologie (ad esempio usando i componenti di ADO con i componenti OLE DB e la migrazione di codice ODBC e OLE DB), che copre tutte le situazioni esula dall'ambito della documentazione di Visual C++. Tuttavia, molti articoli che trattano diversi scenari di sono disponibili nei siti web Microsoft seguenti:

- [Guida e supporto tecnico Microsoft](https://support.microsoft.com/)

- [Panoramica di Microsoft Data Access articoli tecnici](https://msdn.microsoft.com/library/ms810811.aspx)

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)
