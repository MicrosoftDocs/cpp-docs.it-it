---
title: "Utilizzo delle funzioni di accesso manuali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di accesso [C++], manuali"
  - "comandi (gestione), modelli OLE DB"
  - "funzioni di accesso manuali"
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo delle funzioni di accesso manuali
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si gestisce un comando sconosciuto è necessario eseguire quattro operazioni:  
  
-   Determinare i parametri  
  
-   Eseguire il comando  
  
-   Determinare le colonne di output  
  
-   Verificare se sono disponibili più rowset  
  
 Per eseguire queste operazioni con i modelli consumer OLE DB, utilizzare la classe `CManualAccessor` e attenersi alla seguente procedura:  
  
1.  Aprire un oggetto `CCommand` con `CManualAccessor` come parametro del modello.  
  
    ```  
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;  
    ```  
  
2.  Eseguire una query sulla sessione per cercare l'interfaccia **IDBSchemaRowset** e utilizzare il rowset dei parametri della routine.  Se l'interfaccia **IDBSchemaRowset** non è disponibile, eseguire una query per trovare l'interfaccia `ICommandWithParameters`.  Chiamare `GetParameterInfo` per ottenere informazioni.  Se entrambe le interfacce non sono disponibili, si presume che non esistano parametri.  
  
3.  Per ogni parametro chiamare `AddParameterEntry` per aggiungerlo e impostarlo.  
  
4.  Aprire il rowset, ma impostare il parametro dell'associazione su **false**.  
  
5.  Chiamare `GetColumnInfo` per recuperare le colonne di output.  Utilizzare `AddBindEntry` per aggiungere le colonne di output all'associazione.  
  
6.  Chiamare `GetNextResult` per determinare se sono disponibili più rowset.  Ripetere i passaggi da 2 a 5.  
  
 Per un esempio di funzione di accesso manuale, vedere **CDBListView::CallProcedure** nell'esempio [DBVIEWER](http://msdn.microsoft.com/it-it/07620f99-c347-4d09-9ebc-2459e8049832).  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)