---
title: Supporto delle transazioni in OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 10/24/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumer templates [C++], transaction support
- transactions [C++], OLE DB support for
- nested transactions [C++]
- OLE DB [C++], transaction support
- databases [C++], transactions
- distributed transactions [C++]
ms.assetid: 3d72e583-ad38-42ff-8f11-e2166d60a5a7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 658313ddaf29e67c7be5c83dbc38c3b5da95eba9
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055385"
---
# <a name="supporting-transactions-in-ole-db"></a>Supporto delle transazioni in OLE DB

Oggetto [transazione](../../data/transactions-mfc-data-access.md) è un modo per raggruppare o batch, una serie di aggiornamenti a un'origine dati in modo che tutti esito positivo e viene eseguito il commit in una sola volta oppure (se uno di questi ha esito negativo) non viene eseguito il commit e viene eseguito il rollback dell'intera transazione. Questo processo garantisce l'integrità del risultato nell'origine dati.

OLE DB supporta le transazioni con tre metodi seguenti:

- [ITransactionLocal:: StartTransaction](/previous-versions/windows/desktop/ms709786)

- [ITransaction::Commit](/previous-versions/windows/desktop/ms713008)

- [ITransaction:: Abort](/previous-versions/windows/desktop/ms709833)

## <a name="relationship-of-sessions-and-transactions"></a>Relazione tra le sessioni e transazioni

Un singolo oggetto origine dati è possibile creare uno o più oggetti di sessione, ognuno dei quali può essere all'interno o all'esterno dell'ambito di una transazione in un determinato momento.

Quando una sessione non immette una transazione, tutte le operazioni eseguite all'interno di tale sessione sull'archivio dati vengano immediatamente eseguito il commit in ogni chiamata al metodo. (Ciò è talvolta detta modalità autocommit o implicite.)

Quando una sessione entra in una transazione, i tutte le operazioni eseguite all'interno di tale sessione sull'archivio dati fa parte di tale transazione e viene eseguito il commit o interrotta come singola unità. (Ciò viene talvolta come modalità di commit manuale.)

Supporto delle transazioni è specifico del provider. Se il provider in uso supporta le transazioni, un oggetto di sessione che supporta `ITransaction` e `ITransactionLocal` possibile immettere una transazione (non annidati). La classe di modelli OLE DB [CSession](../../data/oledb/csession-class.md) supporta queste interfacce ed è il metodo consigliato per implementare il supporto delle transazioni in Visual C++.

## <a name="starting-and-ending-the-transaction"></a>Inizio e fine della transazione

Si chiama il `StartTransaction`, `Commit`, e `Abort` metodi nell'oggetto set di righe del consumer.

La chiamata a `ITransactionLocal::StartTransaction` avvia una nuova transazione locale. Quando si avvia la transazione, le modifiche apportate dalle operazioni successive non vengono applicate all'archivio dati fino a quando non si esegue il commit della transazione.

La chiamata `ITransaction::Commit` o `ITransaction::Abort` termina la transazione. `Commit` fa sì che tutte le modifiche apportate all'interno dell'ambito della transazione da applicare all'archivio dati. `Abort` cause tutte le modifiche apportate all'interno dell'ambito della transazione deve essere annullata e l'archivio dati viene lasciato nello stato avevano prima dell'avvio della transazione.

## <a name="nested-transactions"></a>Transazioni nidificate

Oggetto [transazione nidificata](/previous-versions/windows/desktop/ms716985) si verifica quando si avvia una nuova transazione locale quando esiste già una transazione attiva nella sessione. La nuova transazione viene avviata come una transazione nidificata di sotto della transazione corrente. Se il provider non supporta le transazioni nidificate, la chiamata `StartTransaction` quando è già presente una transazione attiva nella sessione restituisce XACT_E_XTIONEXISTS.

## <a name="distributed-transactions"></a>Transazioni distribuite

Una transazione distribuita è una transazione che aggiorna i dati distribuiti; vale a dire i dati in più di un sistema di computer in rete. Se si desidera supportare le transazioni in un sistema distribuito, è consigliabile usare .NET Framework anziché il supporto delle transazioni OLE DB.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)