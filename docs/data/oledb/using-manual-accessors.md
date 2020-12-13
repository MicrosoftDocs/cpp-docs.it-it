---
description: 'Altre informazioni su: uso delle funzioni di accesso manuali'
title: Utilizzo delle funzioni di accesso manuali
ms.date: 10/24/2018
helpviewer_keywords:
- command handling, OLE DB Templates
- manual accessors
- accessors [C++], manual
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
ms.openlocfilehash: 73363be83e06a3eeced114dc90c65f82601a4a16
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332470"
---
# <a name="using-manual-accessors"></a>Utilizzo delle funzioni di accesso manuali

Quando si gestisce un comando sconosciuto, è necessario eseguire quattro operazioni:

- Determinare i parametri

- Eseguire il comando

- Determinare le colonne di output

- Verificare se sono presenti più set di righe restituiti

Per eseguire queste operazioni con i modelli di consumer OLE DB, utilizzare la `CManualAccessor` classe e attenersi alla seguente procedura:

1. Aprire un `CCommand` oggetto con `CManualAccessor` come parametro di modello.

    ```cpp
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;
    ```

1. Eseguire una query sulla sessione per l' `IDBSchemaRowset` interfaccia e utilizzare il set di righe parametri procedura. Se l' `IDBSchemaRowset` interfaccia non è disponibile, eseguire una query per l' `ICommandWithParameters` interfaccia. Chiamare `GetParameterInfo` per ottenere informazioni. Se nessuna delle due interfacce è disponibile, è possibile presupporre che non siano presenti parametri.

1. Per ogni parametro, chiamare `AddParameterEntry` per aggiungere i parametri e impostarli.

1. Aprire il set di righe, ma impostare il parametro Bind su **`false`** .

1. Chiamare `GetColumnInfo` per recuperare le colonne di output. Utilizzare `AddBindEntry` per aggiungere la colonna di output all'associazione.

1. Chiamare `GetNextResult` per determinare se sono disponibili più set di righe. Ripetere i passaggi da 2 a 5.

Per un esempio di funzione di accesso manuale, vedere `CDBListView::CallProcedure` nell'esempio [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) .

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
