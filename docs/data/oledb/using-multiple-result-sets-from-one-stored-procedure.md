---
description: 'Ulteriori informazioni su: utilizzo di più set di risultati da una stored procedure'
title: Utilizzo di più set di risultati di un'unica stored procedure
ms.date: 10/24/2018
helpviewer_keywords:
- stored procedures, returning result sets
- multiple result sets
ms.assetid: c450c12c-a76c-4ae4-9675-071a41eeac05
ms.openlocfilehash: 8e6b7a51635caf9ddfd86dddcad0e2a3f94bb7dd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319118"
---
# <a name="using-multiple-result-sets-from-one-stored-procedure"></a>Utilizzo di più set di risultati di un'unica stored procedure

La maggior parte delle stored procedure restituisce più set di risultati. Un stored procedure di questo tipo include in genere una o più istruzioni SELECT. Il consumer deve considerare questa inclusione per gestire tutti i set di risultati.

## <a name="to-handle-multiple-result-sets"></a>Per gestire più set di risultati

1. Creare una `CCommand` classe con `CMultipleResults` come argomento di modello e con la funzione di accesso preferita, in genere una funzione di accesso dinamica o manuale. Se si utilizza un altro tipo di funzione di accesso, potrebbe non essere possibile determinare le colonne di output per ogni set di righe.

1. Eseguire il stored procedure come di consueto e associare le colonne (vedere [come si recuperano i dati?](../../data/oledb/fetching-data.md)).

1. Usare i dati.

1. Chiamare `GetNextResult` sulla `CCommand` classe. Se è disponibile un altro set di righe di risultati, `GetNextResult` restituisce S_OK ed è necessario riassociare le colonne se si utilizza una funzione di accesso manuale. Se `GetNextResult` restituisce un errore, non sono disponibili ulteriori set di risultati.

## <a name="see-also"></a>Vedi anche

[Utilizzo di stored procedure](../../data/oledb/using-stored-procedures.md)
