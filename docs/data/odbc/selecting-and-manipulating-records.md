---
description: 'Altre informazioni su: selezione e modifica di record'
title: Selezione e modifica di record
ms.date: 05/09/2019
helpviewer_keywords:
- records, selecting
- record selection, MFC ODBC classes
- ODBC recordsets, selecting records
ms.assetid: 7f0b3a4a-9941-4475-a612-9ec8d15b7691
ms.openlocfilehash: 8f4254f85eb8c2e30b5e912890fdc271340df9db
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204303"
---
# <a name="selecting-and-manipulating-records"></a>Selezione e modifica di record

> [!NOTE]
> La Creazione guidata consumer ODBC MFC non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile creare manualmente un consumer.

In genere, quando si selezionano i record da un'origine dati usando un'istruzione SQL **SELECT**, si ottiene un set di risultati, ovvero un set di record da una tabella o una query. Con le classi di database, si usa un oggetto recordset per selezionare e accedere al set di risultati. Si tratta di un oggetto di una classe specifica dell'applicazione che è possibile derivare dalla classe [CRecordset](../../mfc/reference/crecordset-class.md). Quando si definisce una classe recordset, è necessario specificare l'origine dati a cui associarla, la tabella da usare e le colonne della tabella. La Creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) crea una classe con una connessione a un'origine dati specifica. Le procedure guidate scrivono la funzione membro [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql) della classe `CRecordset` per restituire il nome della tabella.

Usando un oggetto [CRecordset](../../mfc/reference/crecordset-class.md) in fase di esecuzione, è possibile:

- Esaminare i campi dati del record corrente.

- Filtrare o ordinare il recordset.

- Personalizzare l'istruzione SQL **SELECT** predefinita.

- Scorrere i record selezionati.

- Aggiungere, aggiornare o eliminare i record (se l'origine dati e il recordset sono aggiornabili).

- Verificare se il recordset consente la ripetizione della query e aggiornare il contenuto del recordset.

Al termine dell'uso dell'oggetto recordset, chiuderlo ed eliminarlo definitivamente. Per altre informazioni sui recordset, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

## <a name="see-also"></a>Vedi anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
