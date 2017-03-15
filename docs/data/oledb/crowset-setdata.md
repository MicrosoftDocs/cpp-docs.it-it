---
title: "CRowset::SetData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CRowset<TAccessor>.SetData"
  - "SetData"
  - "ATL::CRowset::SetData"
  - "CRowset<TAccessor>.SetData"
  - "CRowset::SetData"
  - "ATL.CRowset.SetData"
  - "CRowset.SetData"
  - "CRowset<TAccessor>::SetData"
  - "ATL::CRowset<TAccessor>::SetData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetData (metodo)"
ms.assetid: 68125142-8510-4132-9393-e39efd39c784
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::SetData
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta i valori dei dati in una o più colonne di una riga.  
  
## Sintassi  
  
```  
  
      HRESULT SetData( ) const throw( );   
HRESULT SetData(  
   int nAccessor   
) const throw( );  
```  
  
#### Parametri  
 `nAccessor`  
 \[in\] numero della funzione di accesso da utilizzare per accedere ai dati.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Per il form di `SetData` che non accetta argomenti, tutte le funzioni di accesso vengono utilizzate per aggiornare.  In genere chiamato **SetData** per impostare i valori dei dati in colonne in una riga, le chiamate [Aggiorna](../../data/oledb/crowset-update.md) per trasmettere le modifiche.  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetChange`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetChange** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
 L'operazione dell'impostazione potrebbe non riuscire se una o più colonne non siano modificabili.  Modificare la mappa dei cursori per risolvere questo problema.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::Update](../../data/oledb/crowset-update.md)