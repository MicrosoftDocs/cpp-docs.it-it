---
title: Utilizzo delle funzioni di accesso manuali
ms.date: 10/24/2018
helpviewer_keywords:
- command handling, OLE DB Templates
- manual accessors
- accessors [C++], manual
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
ms.openlocfilehash: 4a7e2dcde20cdb06a2f4e708149e24ee7144597c
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59028334"
---
# <a name="using-manual-accessors"></a>Utilizzo delle funzioni di accesso manuali

Esistono quattro cose da fare quando si gestisce un comando sconosciuto:

- Determinare i parametri

- Eseguire il comando

- Determinare le colonne di output

- Verificare se esistono più set di righe restituito

Per eseguire queste operazioni con i modelli Consumer OLE DB, usare il `CManualAccessor` classe e seguire questa procedura:

1. Aprire una `CCommand` dell'oggetto con `CManualAccessor` come parametro di modello.

    ```cpp
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;
    ```

1. Eseguire una query della sessione per il `IDBSchemaRowset` interfaccia e utilizzare il set di righe di parametri di procedura. Se il `IDBSchemaRowset` interfaccia non è disponibile, eseguire una query per il `ICommandWithParameters` interfaccia. Chiamare `GetParameterInfo` per informazioni. Se è disponibile alcuna interfaccia, si può presupporre che non sono presenti parametri.

1. Per ogni parametro, chiamare `AddParameterEntry` per aggiungere i parametri e averli configurati.

1. Aprire il set di righe, ma impostare il parametro dell'associazione **false**.

1. Chiamare `GetColumnInfo` per recuperare le colonne di output. Usare `AddBindEntry` per aggiungere la colonna di output per l'associazione.

1. Chiamare `GetNextResult` per determinare se sono disponibili ulteriori set di righe. Ripetere i passaggi da 2 a 5.

Per un esempio di una funzione di accesso manuali, vedere `CDBListView::CallProcedure` nella [DBVIEWER](https://github.com/Microsoft/VCSamples) esempio.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)