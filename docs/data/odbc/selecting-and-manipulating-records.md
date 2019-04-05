---
title: Selezione e modifica di record
ms.date: 11/04/2016
helpviewer_keywords:
- records, selecting
- record selection, MFC ODBC classes
- ODBC recordsets, selecting records
ms.assetid: 7f0b3a4a-9941-4475-a612-9ec8d15b7691
ms.openlocfilehash: fa8b63dab24c921804c474df73f6b6da192a4cd8
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027491"
---
# <a name="selecting-and-manipulating-records"></a>Selezione e modifica di record

In genere quando si selezionano i record da un'origine dati usando un linguaggio SQL **seleziona** istruzione, si ottiene un set di risultati, ovvero un set di record da una tabella o una query. Con le classi di database, si usa un oggetto recordset per selezionare e accedere al set di risultati. Si tratta di un oggetto di una classe specifica dell'applicazione che è possibile derivare dalla classe [CRecordset](../../mfc/reference/crecordset-class.md). Quando si definisce una classe recordset, specificare l'origine dati a cui associare la tabella da usare e le colonne della tabella. La creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) Crea una classe con una connessione a un'origine dati specifica. Le procedure guidate di scrivono la [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql) funzione membro di classe `CRecordset` per restituire il nome della tabella. Per altre informazioni sull'uso di procedure guidate per creare classi di recordset, vedere [supporto di Database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md) e [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).

Usando un [CRecordset](../../mfc/reference/crecordset-class.md) dell'oggetto in fase di esecuzione, è possibile:

- Esaminare i campi dati del record corrente.

- Filtrare o ordinare il recordset.

- Personalizzare l'impostazione predefinita SQL **seleziona** istruzione.

- Scorrere i record selezionati.

- Aggiungere, aggiornare o eliminare i record (se l'origine dati e set di record sono aggiornabili).

- Verificare se il set di record consente rieseguendo la query e aggiornare il contenuto.

Al termine dell'utilizzo dell'oggetto recordset, chiudere ed eliminarla definitivamente. Per altre informazioni sugli oggetti Recordset, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)