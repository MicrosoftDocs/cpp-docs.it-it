---
title: Snapshot | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cb3f2f63d60cd5120479a66eea1fe6bdee91b8ac
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338207"
---
# <a name="snapshot"></a>Snapshot
Uno snapshot è un oggetto recordset che riflette una visualizzazione statica dei dati esistente al momento che della creazione dello snapshot. Quando si apre lo snapshot e spostare in tutti i record, il set di record contiene e i relativi valori non cambiano fino a quando non viene rigenerato lo snapshot chiamando `Requery`.  
  
> [!NOTE]
>  Questo argomento si applica alle classi ODBC MFC. Se si usano le classi DAO MFC invece delle classi ODBC MFC, vedere [CDaoRecordset:: Open](../../mfc/reference/cdaorecordset-class.md#open) per una descrizione di recordset di tipo snapshot.  
  
 È possibile creare snapshot di sola lettura o aggiornabile con le classi di database. A differenza di tipo snapshot, uno snapshot aggiornabile non riflette le modifiche per registrare valori apportati da altri utenti, ma riflette gli aggiornamenti ed eliminazioni effettuate dal programma. I record aggiunti a uno snapshot non vengono visualizzati in base allo snapshot fino a quando non si chiama `Requery`.  
  
> [!TIP]
>  Uno snapshot è un cursore statico di ODBC. I cursori static non ottenere effettivamente una riga di dati fino a quando non si scorre verso tale record. Per garantire che tutti i record vengano recuperati immediatamente, è possibile scorrere fino alla fine del recordset e quindi scorrere fino al primo record che si desidera visualizzare. Si noti tuttavia che lo scorrimento alla fine comporta overhead aggiuntivo e può ridurre le prestazioni.  
  
 Gli snapshot sono estremamente utili quando sono necessari i dati rimangano invariati durante le operazioni, come quando si genera un report o eseguire i calcoli. Anche in questo caso, l'origine dati può far divergere considerevolmente dallo snapshot, pertanto si potrebbe voler ricompilarlo di tanto in tanto.  
  
 Supporto dello snapshot si basa sulla libreria di cursori ODBC, che fornisce i cursori statici e posizionati gli aggiornamenti (necessari per updateability) per qualsiasi driver di livello 1. La libreria di cursori DLL debba essere caricata in memoria per questo supporto. Quando si costruisce una `CDatabase` oggetto e chiamare relativi `OpenEx` funzione membro, è necessario specificare il `CDatabase::useCursorLib` opzione del *dwOptions* parametro. Se si chiama il `Open` funzione membro, la libreria di cursori viene caricato per impostazione predefinita. Se si usa dynaset invece gli snapshot, non si desidera causano la libreria di cursore da caricare.  
  
 Gli snapshot sono disponibili solo se la libreria di cursori ODBC è stata caricata quando il `CDatabase` costruzione dell'oggetto o il driver ODBC in uso supporta i cursori statici.  
  
> [!NOTE]
>  Per alcuni driver ODBC, ovvero i cursori statici, gli snapshot potrebbero non essere aggiornabili. Controllare la documentazione del driver per i tipi di cursore supportati e tipi di concorrenza supportati. Per garantire snapshot aggiornabili, assicurarsi che si tenta di caricare la libreria di cursori in memoria quando crei un `CDatabase` oggetto. Per altre informazioni, vedere [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!NOTE]
>  Se si desidera utilizzare snapshot sia dynaset, è necessario basare tali criteri su due diversi `CDatabase` oggetti, ovvero due diverse connessioni.  
  
 Per altre informazioni sulla condivisione di snapshot di proprietà con tutti i recordset, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per altre informazioni su ODBC e gli snapshot, inclusa la libreria di cursori ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)