---
description: 'Altre informazioni su: snapshot'
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
ms.openlocfilehash: 33505eb02613f672d09b889a09382ce3b8cf19cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204290"
---
# <a name="snapshot"></a>Snapshot

Uno snapshot è un recordset che riflette una visualizzazione statica dei dati esistenti al momento della creazione dello snapshot. Quando si apre lo snapshot e si passa a tutti i record, il set di record che contiene e i relativi valori non cambiano fino a quando non si ricompila lo snapshot chiamando `Requery` .

> [!NOTE]
> Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC. Se si utilizzano le classi DAO MFC anziché le classi ODBC MFC, vedere [CDaoRecordset:: Open](../../mfc/reference/cdaorecordset-class.md#open) per una descrizione dei recordset di tipo snapshot.

È possibile creare snapshot aggiornabili o di sola lettura con le classi di database. A differenza di un dynaset, uno snapshot aggiornabile non riflette le modifiche ai valori dei record creati da altri utenti, ma riflette gli aggiornamenti e le eliminazioni apportate dal programma. I record aggiunti a uno snapshot non diventano visibili allo snapshot finché non viene chiamato `Requery` .

> [!TIP]
> Uno snapshot è un cursore statico ODBC. I cursori statici non ottengono effettivamente una riga di dati fino a quando non si scorre fino a tale record. Per assicurarsi che tutti i record vengano immediatamente recuperati, è possibile scorrere fino alla fine del recordset e scorrere fino al primo record che si desidera visualizzare. Si noti, tuttavia, che lo scorrimento fino alla fine comporta un sovraccarico aggiuntivo e può ridurre le prestazioni.

Gli snapshot sono particolarmente utili quando è necessario che i dati rimangano corretti durante le operazioni, come durante la generazione di un report o l'esecuzione di calcoli. Anche in questo caso, l'origine dati può divergere notevolmente dallo snapshot, quindi potrebbe essere necessario ricompilarla di tanto in tanto.

Il supporto dello snapshot è basato sulla libreria di cursori ODBC, che fornisce cursori statici e aggiornamenti posizionati (necessari per l'aggiornamento) per qualsiasi driver di livello 1. Per questo supporto è necessario caricare la DLL della libreria di cursori in memoria. Quando si costruisce un `CDatabase` oggetto e si chiama la relativa `OpenEx` funzione membro, è necessario specificare l' `CDatabase::useCursorLib` opzione del parametro *dwOptions* . Se si chiama la `Open` funzione membro, la libreria di cursori viene caricata per impostazione predefinita. Se si utilizzano dynaset anziché gli snapshot, non si desidera che la libreria di cursori venga caricata.

Gli snapshot sono disponibili solo se la libreria di cursori ODBC è stata caricata quando `CDatabase` è stato creato l'oggetto o se il driver ODBC in uso supporta i cursori statici.

> [!NOTE]
> Per alcuni driver ODBC, gli snapshot (cursori statici) potrebbero non essere aggiornabili. Controllare la documentazione del driver per i tipi di cursore supportati e i tipi di concorrenza supportati. Per garantire gli snapshot aggiornabili, assicurarsi di caricare la libreria di cursori in memoria quando si crea un `CDatabase` oggetto. Per ulteriori informazioni, vedere [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!NOTE]
> Se si desidera utilizzare sia snapshot che dynaset, è necessario basarli su due `CDatabase` oggetti diversi (due connessioni diverse).

Per ulteriori informazioni sulla condivisione degli snapshot delle proprietà con tutti i recordset, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per ulteriori informazioni su ODBC e sugli snapshot, inclusa la libreria di cursori ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).

## <a name="see-also"></a>Vedi anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
