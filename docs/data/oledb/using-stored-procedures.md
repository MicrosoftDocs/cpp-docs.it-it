---
title: Utilizzo delle stored procedure
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, Visual C++
- stored procedures, about stored procedures
- OLE DB provider templates, stored procedures
- stored procedures, OLE DB
ms.assetid: 90507e4c-eca2-46c9-ad8c-07e10dc1d41b
ms.openlocfilehash: 2c0c1c71103384439d0b7b94f942e1b5a6d9e651
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536156"
---
# <a name="using-stored-procedures"></a>Utilizzo delle stored procedure

Una stored procedure è un oggetto eseguibile archiviato in un database. Chiama una stored procedure è simile a richiamare un comando SQL. L'uso di stored procedure nell'origine dei dati (anziché l'esecuzione o preparazione di un'istruzione nell'applicazione client) offre diversi vantaggi, tra cui prestazioni più elevate, l'overhead di rete ridotto e miglioramento della coerenza e sull'accuratezza.

Una stored procedure può avere un numero qualsiasi di (incluso zero) input o i parametri di output e può passare un valore restituito. È possibile impostare i valori dei parametro livello di codice come dati specifici valori oppure usano un marcatore di parametro (un punto interrogativo '?').

> [!NOTE]
>  Le stored procedure create con Visual C++ devono essere compilate con CLR SQL Server la `/clr:safe` opzione del compilatore.

Il provider OLE DB per SQL Server (SQLOLEDB) supporta i seguenti meccanismi utilizzati dalle stored procedure per restituire i dati:

- Ogni **seleziona** istruzione nella procedura genera un set di risultati.

- La procedura può restituire dati tramite i parametri di output.

- La procedura può avere un numero intero codice restituito.

> [!NOTE]
> È possibile usare le stored procedure con provider OLE DB per Jet dal momento che il provider non supporta stored procedure. solo le costanti sono consentite nelle stringhe di query.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)