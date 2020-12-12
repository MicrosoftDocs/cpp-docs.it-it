---
description: 'Altre informazioni su: uso delle stored procedure'
title: Utilizzo delle stored procedure
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, Visual C++
- stored procedures, about stored procedures
- OLE DB provider templates, stored procedures
- stored procedures, OLE DB
ms.assetid: 90507e4c-eca2-46c9-ad8c-07e10dc1d41b
ms.openlocfilehash: 6bd7dbd3980eb4bfe0fbca71d86af080128d3309
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319105"
---
# <a name="using-stored-procedures"></a>Utilizzo delle stored procedure

Una stored procedure è un oggetto eseguibile archiviato in un database. La chiamata di un stored procedure è simile alla chiamata di un comando SQL. L'utilizzo di stored procedure sull'origine dati, anziché l'esecuzione o la preparazione di un'istruzione nell'applicazione client, può offrire diversi vantaggi, tra cui prestazioni superiori, riduzione del sovraccarico di rete e maggiore coerenza e accuratezza.

Un stored procedure può includere qualsiasi numero di parametri di input o output (compreso zero) e può passare un valore restituito. È possibile specificare i valori dei parametri del codice rigido come valori di dati specifici o usare un marcatore di parametro (un punto interrogativo '?').

> [!NOTE]
> Le stored procedure CLR SQL Server create con Visual C++ devono essere compilate con l' `/clr:safe` opzione del compilatore.

Il provider di OLE DB per SQL Server (SQLOLEDB) supporta i meccanismi seguenti usati dalle stored procedure per restituire i dati:

- Ogni istruzione **Select** nella procedura genera un set di risultati.

- La procedura può restituire dati tramite parametri di output.

- La procedura può avere un codice restituito di tipo integer.

> [!NOTE]
> Non è possibile utilizzare stored procedure con il provider OLE DB per Jet perché il provider non supporta le stored procedure. nelle stringhe di query sono consentite solo costanti.

## <a name="see-also"></a>Vedi anche

[Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
