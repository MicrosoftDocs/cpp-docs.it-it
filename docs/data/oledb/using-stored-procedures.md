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
ms.openlocfilehash: 436c796b24b0fa498f2b3f45e848392635b22a34
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376032"
---
# <a name="using-stored-procedures"></a>Utilizzo delle stored procedure

Una stored procedure è un oggetto eseguibile archiviato in un database. La chiamata a una stored procedure è simile alla chiamata di un comando SQL. L'utilizzo di stored procedure nell'origine dati (invece di eseguire o preparare un'istruzione nell'applicazione client) può offrire diversi vantaggi, tra cui prestazioni più elevate, overhead di rete ridotto e maggiore coerenza e precisione.

Una stored procedure può avere un numero qualsiasi di (incluso zero) parametri di input o di output e può passare un valore restituito. È possibile codificare i valori dei parametri come valori di dati specifici o utilizzare un indicatore di parametro (un punto interrogativo '?').

> [!NOTE]
> È necessario `/clr:safe` che le stored procedure di SQL Server CLR create utilizzando Visual C.

Il provider OLE DB per SQL Server (SQLOLEDB) supporta i meccanismi seguenti utilizzati dalle stored procedure per restituire i dati:

- Ogni istruzione **SELECT** nella procedura genera un set di risultati.

- La procedura può restituire dati tramite parametri di output.

- La procedura può avere un codice restituito di tipo integer.

> [!NOTE]
> Non è possibile utilizzare stored procedure con il provider OLE DB per Jet perché tale provider non supporta stored procedure. nelle stringhe di query sono consentite solo costanti.

## <a name="see-also"></a>Vedere anche

[Utilizzo dei modelli consumer OLE DBWorking with OLE DB Consumer Templates](../../data/oledb/working-with-ole-db-consumer-templates.md)
