---
title: Snapshot
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC cursor library [ODBC], snapshots
- cursors [ODBC], static
- recordsets, snapshots
- snapshots, support in ODBC
- static cursors
- ODBC recordsets, snapshots
- cursor library [ODBC], snapshots
- snapshots
ms.assetid: b5293a52-0657-43e9-bd71-fe3785b21c7e
ms.openlocfilehash: e487b5abcc5eee4e3f4b1941100980eac4a040c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366912"
---
# <a name="snapshot"></a>Snapshot

Uno snapshot è un recordset che riflette una visualizzazione statica dei dati esistenti al momento della creazione dello snapshot. Quando si apre lo snapshot e si passa a tutti i record, il set di `Requery`record in esso contenuto e i relativi valori non cambiano fino a quando non si ricompila lo snapshot chiamando .

> [!NOTE]
> Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC anziché le classi ODBC MFC, vedere [CDaoRecordset::Open](../../mfc/reference/cdaorecordset-class.md#open) per una descrizione dei recordset di tipo snapshot.

È possibile creare snapshot aggiornabili o di sola lettura con le classi di database. A differenza di un dynaset, uno snapshot aggiornabile non riflette le modifiche ai valori dei record apportate da altri utenti, ma riflette gli aggiornamenti e le eliminazioni apportate dal programma. I record aggiunti a uno snapshot non diventano visibili allo snapshot fino a quando non si chiama `Requery`.

> [!TIP]
> Uno snapshot è un cursore statico ODBC. I cursori statici non ottengono effettivamente una riga di dati fino a quando non si scorre fino a tale record. Per assicurarsi che tutti i record vengano recuperati immediatamente, è possibile scorrere fino alla fine del recordset e quindi scorrere fino al primo record che si desidera visualizzare. Si noti, tuttavia, che lo scorrimento fino alla fine comporta un sovraccarico aggiuntivo e può ridurre le prestazioni.

Gli snapshot sono particolarmente utili quando è necessario che i dati rimangano fissi durante le operazioni, come quando si genera un report o si eseguono calcoli. Anche così, l'origine dati può divergere notevolmente dallo snapshot, pertanto potrebbe essere necessario ricostruirlo di tanto in tanto.

Il supporto degli snapshot è basato sulla libreria di cursori ODBC, che fornisce cursori statici e aggiornamenti posizionati (necessari per l'aggiornabilità) per qualsiasi driver di livello 1. La DLL della libreria di cursori deve essere caricata in memoria per questo supporto. Quando si `CDatabase` costruisce un `OpenEx` oggetto e si chiama `CDatabase::useCursorLib` la relativa funzione membro, è necessario specificare l'opzione del parametro *dwOptions.* Se si `Open` chiama la funzione membro, la libreria di cursori viene caricata per impostazione predefinita. Se si utilizzano dynaset anziché snapshot, non si desidera caricare la libreria di cursori.

Gli snapshot sono disponibili solo se la `CDatabase` libreria di cursori ODBC è stata caricata quando l'oggetto è stato costruito o il driver ODBC in uso supporta i cursori statici.

> [!NOTE]
> Per alcuni driver ODBC, gli snapshot (cursori statici) potrebbero non essere aggiornabili. Controllare la documentazione del driver per i tipi di cursore supportati e i tipi di concorrenza che supportano. Per garantire istantanee aggiornabili, assicurarsi di caricare la `CDatabase` libreria di cursori in memoria quando si crea un oggetto. Per ulteriori informazioni, vedere [ODBC: la libreria](../../data/odbc/odbc-the-odbc-cursor-library.md)di cursori ODBC .

> [!NOTE]
> Se si desidera utilizzare sia snapshot che dynaset, è `CDatabase` necessario basarli su due oggetti diversi (due connessioni diverse).

Per ulteriori informazioni sulla condivisione degli snapshot delle proprietà con tutti i recordset, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per ulteriori informazioni su ODBC e sugli snapshot, inclusa la libreria di cursori ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
