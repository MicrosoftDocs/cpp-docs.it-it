---
title: Utilizzo di funzioni di accesso manuali | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- command handling, OLE DB Templates
- manual accessors
- accessors [C++], manual
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e7d6bd8f0228103e4899e6bc24f6d67af0f3fdb4
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="using-manual-accessors"></a>Utilizzo delle funzioni di accesso manuali
Esistono quattro operazioni possibili quando si gestisce un comando sconosciuto:  
  
-   Determinare i parametri  
  
-   Eseguire il comando  
  
-   Determinare le colonne di output  
  
-   Vedere se sono presenti più set di righe restituito  
  
 Per eseguire questa operazione con i modelli Consumer OLE DB, utilizzare la `CManualAccessor` classe e di eseguire la procedura seguente:  
  
1.  Aprire un `CCommand` con `CManualAccessor` come parametro di modello.  
  
    ```  
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;  
    ```  
  
2.  La sessione per eseguire una query di **IDBSchemaRowset** l'interfaccia e utilizzare il set di righe di parametri di stored procedure. Se il **IDBSchemaRowset** interfaccia non è disponibile, eseguire una query per il `ICommandWithParameters` interfaccia. Chiamare `GetParameterInfo` per informazioni. Se nessuna interfaccia è disponibile, si presume che non sono presenti parametri.  
  
3.  Per ogni parametro, chiamare `AddParameterEntry` per aggiungere i parametri e impostarle.  
  
4.  Aprire il set di righe, ma impostare il parametro dell'associazione **false**.  
  
5.  Chiamare `GetColumnInfo` per recuperare le colonne di output. Utilizzare `AddBindEntry` per aggiungere la colonna di output per l'associazione.  
  
6.  Chiamare `GetNextResult` per determinare se sono disponibili ulteriori set di righe. Ripetere i passaggi da 2 a 5.  
  
 Per un esempio di una funzione di accesso manuale, vedere **CDBListView:: CallProcedure** nel [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)