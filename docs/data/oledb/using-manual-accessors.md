---
title: Usare funzioni di accesso manuali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- command handling, OLE DB Templates
- manual accessors
- accessors [C++], manual
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c732bcf45f2dfbd4927366670aed6bfbdcfb4721
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43679987"
---
# <a name="using-manual-accessors"></a>Utilizzo delle funzioni di accesso manuali
Esistono quattro cose da fare quando si gestisce un comando sconosciuto:  
  
-   Determinare i parametri  
  
-   Eseguire il comando  
  
-   Determinare le colonne di output  
  
-   Verificare se esistono più set di righe restituito  
  
 Per eseguire questa operazione con i modelli Consumer OLE DB, usare il `CManualAccessor` classe e seguire questa procedura:  
  
1.  Aprire una `CCommand` dell'oggetto con `CManualAccessor` come parametro di modello.  
  
    ```cpp  
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;  
    ```  
  
2.  Eseguire una query della sessione per il `IDBSchemaRowset` interfaccia e utilizzare il set di righe di parametri di procedura. Se il `IDBSchemaRowset` interfaccia non è disponibile, eseguire una query per il `ICommandWithParameters` interfaccia. Chiamare `GetParameterInfo` per informazioni. Se è disponibile alcuna interfaccia, si può presupporre che non sono presenti parametri.  
  
3.  Per ogni parametro, chiamare `AddParameterEntry` per aggiungere i parametri e averli configurati.  
  
4.  Aprire il set di righe, ma impostare il parametro dell'associazione **false**.  
  
5.  Chiamare `GetColumnInfo` per recuperare le colonne di output. Usare `AddBindEntry` per aggiungere la colonna di output per l'associazione.  
  
6.  Chiamare `GetNextResult` per determinare se sono disponibili ulteriori set di righe. Ripetere i passaggi da 2 a 5.  
  
 Per un esempio di una funzione di accesso manuali, vedere `CDBListView::CallProcedure` nella [DBVIEWER](https://github.com/Microsoft/VCSamples) esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)