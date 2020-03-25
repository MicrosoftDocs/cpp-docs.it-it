---
title: Utilizzo di stored procedure
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, Visual C++
- stored procedures, about stored procedures
- OLE DB provider templates, stored procedures
- stored procedures, OLE DB
ms.assetid: 90507e4c-eca2-46c9-ad8c-07e10dc1d41b
ms.openlocfilehash: a7e97781d245e236c57942db15d61080d6418cfa
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209274"
---
# <a name="using-stored-procedures"></a>Utilizzo di stored procedure

Una stored procedure è un oggetto eseguibile archiviato in un database. La chiamata di un stored procedure è simile alla chiamata di un comando SQL. L'utilizzo di stored procedure sull'origine dati, anziché l'esecuzione o la preparazione di un'istruzione nell'applicazione client, può offrire diversi vantaggi, tra cui prestazioni superiori, riduzione del sovraccarico di rete e maggiore coerenza e accuratezza.

Un stored procedure può includere qualsiasi numero di parametri di input o output (compreso zero) e può passare un valore restituito. È possibile specificare i valori dei parametri del codice rigido come valori di dati specifici o usare un marcatore di parametro (un punto interrogativo '?').

> [!NOTE]
>  Le stored procedure CLR SQL Server create con C++ Visual devono essere compilate con l'opzione del compilatore `/clr:safe`.

Il provider di OLE DB per SQL Server (SQLOLEDB) supporta i meccanismi seguenti usati dalle stored procedure per restituire i dati:

- Ogni istruzione **Select** nella procedura genera un set di risultati.

- La procedura può restituire dati tramite parametri di output.

- La procedura può avere un codice restituito di tipo integer.

> [!NOTE]
> Non è possibile utilizzare stored procedure con il provider OLE DB per Jet perché il provider non supporta le stored procedure. nelle stringhe di query sono consentite solo costanti.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
