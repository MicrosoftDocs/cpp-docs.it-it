---
title: Utilizzo delle funzioni di accesso manuali
ms.date: 10/24/2018
helpviewer_keywords:
- command handling, OLE DB Templates
- manual accessors
- accessors [C++], manual
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
ms.openlocfilehash: a6c0e5236702229a61a828344ba5d0d288898aee
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209326"
---
# <a name="using-manual-accessors"></a>Utilizzo delle funzioni di accesso manuali

Quando si gestisce un comando sconosciuto, è necessario eseguire quattro operazioni:

- Determinare i parametri

- Eseguire il comando

- Determinare le colonne di output

- Verificare se sono presenti più set di righe restituiti

Per eseguire queste operazioni con i modelli di consumer OLE DB, usare la classe `CManualAccessor` e seguire questa procedura:

1. Aprire un oggetto `CCommand` con `CManualAccessor` come parametro di modello.

    ```cpp
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;
    ```

1. Eseguire una query sulla sessione per l'interfaccia `IDBSchemaRowset` e utilizzare il set di righe dei parametri della procedura. Se l'interfaccia `IDBSchemaRowset` non è disponibile, eseguire una query per l'interfaccia `ICommandWithParameters`. Per informazioni, chiamare `GetParameterInfo`. Se nessuna delle due interfacce è disponibile, è possibile presupporre che non siano presenti parametri.

1. Per ogni parametro, chiamare `AddParameterEntry` per aggiungere i parametri e impostarli.

1. Aprire il set di righe, ma impostare il parametro Bind su **false**.

1. Chiamare `GetColumnInfo` per recuperare le colonne di output. Utilizzare `AddBindEntry` per aggiungere la colonna di output all'associazione.

1. Chiamare `GetNextResult` per determinare se sono disponibili più set di righe. Ripetere i passaggi da 2 a 5.

Per un esempio di una funzione di accesso manuale, vedere `CDBListView::CallProcedure` nell'esempio [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) .

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
