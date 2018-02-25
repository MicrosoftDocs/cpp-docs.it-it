---
title: Supporto delle transazioni in OLE DB | Documenti Microsoft
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
- OLE DB consumer templates [C++], transaction support
- transactions [C++], OLE DB support for
- nested transactions [C++]
- OLE DB [C++], transaction support
- databases [C++], transactions
- distributed transactions [C++]
ms.assetid: 3d72e583-ad38-42ff-8f11-e2166d60a5a7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 84849b2d9bfd899a0ffd8a5d8eafe12f91a4adce
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="supporting-transactions-in-ole-db"></a>Supporto delle transazioni in OLE DB
Oggetto [transazione](../../data/transactions-mfc-data-access.md) è un modo per raggruppare o batch, una serie di aggiornamenti a un'origine dati in modo che tutti esito positivo e viene eseguito il commit in una sola volta oppure (se uno di essi ha esito negativo) non viene eseguito il commit e viene eseguito il rollback dell'intera transazione. Questo processo assicura l'integrità del risultato nell'origine dati.  
  
 OLE DB supporta le transazioni con i tre metodi seguenti:  
  
-   [ITransactionLocal::StartTransaction](https://msdn.microsoft.com/en-us/library/ms709786.aspx)  
  
-   [ITransaction::Commit](https://msdn.microsoft.com/en-us/library/ms713008.aspx)  
  
-   [ITransaction::Abort](https://msdn.microsoft.com/en-us/library/ms709833.aspx)  
  
## <a name="relationship-of-sessions-and-transactions"></a>Relazione tra le sessioni e transazioni  
 Un singolo oggetto origine dati è possibile creare uno o più oggetti di sessione, ognuno dei quali può trovarsi all'interno o all'esterno dell'ambito di una transazione in un determinato momento.  
  
 Quando una sessione non immette una transazione, tutte le operazioni eseguite all'interno di tale sessione sull'archivio dati vengano immediatamente eseguito il commit in ogni chiamata al metodo. (Questo è talvolta detta modalità autocommit o implicite.)  
  
 Quando una sessione accede una transazione, tutte le operazioni eseguite all'interno di tale sessione sull'archivio dati fa parte di tale transazione vengano eseguito il commit e interromperle come unità singola. (Questo è talvolta detta modalità di commit manuale.)  
  
 Supporto delle transazioni è specifico del provider. Se il provider in uso supporta le transazioni, un oggetto di sessione che supporta **ITransaction** e **ITransactionLocal** possibile immettere una semplice (vale a dire non annidati) delle transazioni. La classe di modelli OLE DB [CSession](../../data/oledb/csession-class.md) supporta queste interfacce ed è lo strumento consigliato per implementare il supporto delle transazioni in Visual C++.  
  
## <a name="starting-and-ending-the-transaction"></a>Inizio e fine della transazione  
 Chiamare il `StartTransaction`, **Commit**, e **Abort** metodi nell'oggetto set di righe del consumer.  
  
 La chiamata **ITransactionLocal:: StartTransaction** avvia una nuova transazione locale. Quando si avvia la transazione, le modifiche apportate dalle operazioni successive non vengono effettivamente applicate all'archivio dati fino a quando non si esegue il commit della transazione.  
  
 La chiamata **ITransaction:: commit** o **ITransaction:: Abort** termina la transazione. **Eseguire il commit** tutte le modifiche all'interno dell'ambito della transazione da applicare all'archivio dati. **Interrompere** cause tutte le modifiche all'interno dell'ambito della transazione deve essere annullato e l'archivio dati viene lasciato nello stato avevano prima dell'avvio della transazione.  
  
## <a name="nested-transactions"></a>Transazioni nidificate  
 Oggetto [transazione annidata](https://msdn.microsoft.com/en-us/library/ms716985.aspx) si verifica quando si avvia una nuova transazione locale quando esiste già una transazione attiva nella sessione. La nuova transazione viene avviata come una transazione nidificata rispetto alla transazione corrente. Se il provider non supporta le transazioni nidificate, la chiamata `StartTransaction` quando è già presente una transazione attiva nella sessione restituisce **XACT_E_XTIONEXISTS**.  
  
## <a name="distributed-transactions"></a>Transazioni distribuite  
 Una transazione distribuita è una transazione che aggiorna i dati distribuiti; ovvero, i dati in più computer in rete. Se si desidera supportare le transazioni in un sistema distribuito, è necessario utilizzare .NET Framework anziché il supporto delle transazioni di OLE DB.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)