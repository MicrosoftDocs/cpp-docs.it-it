---
title: Connessione a un'origine dei dati
ms.date: 11/04/2016
helpviewer_keywords:
- database connections [C++], ODBC
- ODBC connections [C++], using
- connections [C++], data source
- databases [C++], connecting to
- data sources [C++], connecting to
- ODBC data sources [C++], connections
- database connections [C++], MFC ODBC classes
ms.assetid: ef6c8c98-5979-43a8-9fb5-5bb06fc59f36
ms.openlocfilehash: 712910aca2622f2678b8b9d06b18a2fdbf9157e4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213343"
---
# <a name="connecting-to-a-data-source"></a>Connessione a un'origine dei dati

Un'origine dati ODBC è un set di dati specifico, le informazioni necessarie per accedere a tali dati e il percorso dell'origine dati, che può essere descritto utilizzando un nome dell'origine dati. Dal punto di vista del programma, l'origine dati include i dati, il sistema DBMS, la rete (se presente) e ODBC.

Per accedere ai dati forniti da un'origine dati, il programma deve prima stabilire una connessione all'origine dati. Tutti gli accessi ai dati vengono gestiti tramite tale connessione.

Le connessioni all'origine dati sono incapsulate dalla classe [CDatabase](../../mfc/reference/cdatabase-class.md). Quando un oggetto `CDatabase` è connesso a un'origine dati, è possibile:

- Creare [Recordset](../../mfc/reference/crecordset-class.md), che selezionano i record da tabelle o query.

- Gestire le [transazioni](../../data/odbc/transaction-odbc.md), suddividere in batch gli aggiornamenti in modo che tutti vengano sottoposti a commit contemporaneamente nell'origine dati (oppure viene eseguito il rollback dell'intera transazione, in modo che l'origine dati sia invariata), se l'origine dati supporta il livello di transazioni richiesto.

- Eseguire direttamente istruzioni [SQL](../../data/odbc/sql.md) .

Quando si termina l'utilizzo di una connessione all'origine dati, è possibile chiudere l'oggetto `CDatabase` ed eliminarlo o riutilizzarlo per una nuova connessione. Per ulteriori informazioni sulle connessioni all'origine dati, vedere [origine dati (ODBC)](../../data/odbc/data-source-odbc.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
