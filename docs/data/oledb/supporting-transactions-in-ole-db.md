---
title: Supporto delle transazioni in OLE DB
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB consumer templates [C++], transaction support
- transactions [C++], OLE DB support for
- nested transactions [C++]
- OLE DB [C++], transaction support
- databases [C++], transactions
- distributed transactions [C++]
ms.assetid: 3d72e583-ad38-42ff-8f11-e2166d60a5a7
ms.openlocfilehash: e7ec4f69b4bba497446c94afb94cb5a1d648f7c7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209547"
---
# <a name="supporting-transactions-in-ole-db"></a>Supporto delle transazioni in OLE DB

Una [transazione](../../data/transactions-mfc-data-access.md) è un modo per raggruppare, o batch, una serie di aggiornamenti a un'origine dati, in modo che tutti abbiano esito positivo e ne venga eseguito il commit in una sola volta o (se uno di essi non riesce) ne viene eseguito il commit e viene eseguito il rollback dell'intera transazione. Questo processo garantisce l'integrità del risultato nell'origine dati.

OLE DB supporta le transazioni con i tre metodi seguenti:

- [ITransactionLocal:: StartTransaction](/previous-versions/windows/desktop/ms709786(v=vs.85))

- [ITransaction:: commit](/previous-versions/windows/desktop/ms713008(v=vs.85))

- [ITransaction:: Abort](/previous-versions/windows/desktop/ms709833(v=vs.85))

## <a name="relationship-of-sessions-and-transactions"></a>Relazione tra sessioni e transazioni

Un singolo oggetto origine dati può creare uno o più oggetti sessione, ognuno dei quali può essere all'interno o all'esterno dell'ambito di una transazione in un determinato momento.

Quando una sessione non immette una transazione, viene immediatamente eseguito il commit di tutte le operazioni eseguite all'interno di tale sessione nell'archivio dati per ogni chiamata al metodo. Questa operazione viene a volte definita modalità autocommit o modalità implicita.

Quando una sessione entra in una transazione, tutte le operazioni eseguite all'interno di tale sessione nell'archivio dati fanno parte di tale transazione e ne viene eseguito il commit o l'interruzione come singola unità. Questa operazione viene a volte definita modalità con commit manuale.

Il supporto delle transazioni è specifico del provider. Se il provider che si sta utilizzando supporta le transazioni, un oggetto sessione che supporta `ITransaction` e `ITransactionLocal` può immettere una transazione (non nidificata). La classe OLE DB Templates [CSession](../../data/oledb/csession-class.md) supporta queste interfacce ed è il metodo consigliato per implementare il supporto delle C++transazioni in Visual.

## <a name="starting-and-ending-the-transaction"></a>Inizio e fine della transazione

È possibile chiamare i metodi `StartTransaction`, `Commit`e `Abort` nell'oggetto set di righe del consumer.

Chiamando `ITransactionLocal::StartTransaction` viene avviata una nuova transazione locale. Quando si avvia la transazione, tutte le modifiche richieste dalle operazioni successive non vengono applicate all'archivio dati fino a quando non si esegue il commit della transazione.

La chiamata di `ITransaction::Commit` o `ITransaction::Abort` termina la transazione. `Commit` comporta l'applicazione di tutte le modifiche all'interno dell'ambito della transazione all'archivio dati. `Abort` provoca l'annullamento di tutte le modifiche all'interno dell'ambito della transazione e l'archivio dati rimane nello stato in cui si trovava prima dell'avvio della transazione.

## <a name="nested-transactions"></a>Transazioni nidificate

Una [transazione nidificata](/previous-versions/windows/desktop/ms716985(v=vs.85)) si verifica quando si avvia una nuova transazione locale quando una transazione attiva esiste già nella sessione. La nuova transazione viene avviata come transazione nidificata sotto la transazione corrente. Se il provider non supporta le transazioni nidificate, chiamando `StartTransaction` quando esiste già una transazione attiva nella sessione restituisce XACT_E_XTIONEXISTS.

## <a name="distributed-transactions"></a>Transazioni distribuite

Una transazione distribuita è una transazione che aggiorna i dati distribuiti; ovvero i dati in più di un sistema di rete. Se si desidera supportare le transazioni in un sistema distribuito, è necessario utilizzare il .NET Framework anziché il supporto di OLE DB Transaction.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
