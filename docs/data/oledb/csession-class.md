---
title: "Classe CSession | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CSession"
  - "ATL::CSession"
  - "ATL.CSession"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSession (classe)"
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CSession
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una singola sessione di accesso al database.  
  
## Sintassi  
  
```  
class CSession  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Abort](../../data/oledb/csession-abort.md)|Annulla \(termina\) la transazione.|  
|[Chiudi](../../data/oledb/csession-close.md)|Chiudere la sessione.|  
|[Esegui commit](../../data/oledb/csession-commit.md)|Consente di eseguire il commit della transazione.|  
|[GetTransactionInfo](../../data/oledb/csession-gettransactioninfo.md)|Restituisce le informazioni relative a una transazione.|  
|[Aprire](../../data/oledb/csession-open.md)|Verrà aperta una nuova sessione per l'oggetto origine dati.|  
|[StartTransaction](../../data/oledb/csession-starttransaction.md)|Inizia una nuova transazione per questa sessione.|  
  
## Note  
 Una o più sessioni possono essere associate a ogni connessione del provider \(origine dati, che è rappresentata da un oggetto di [CDataSource](../../data/oledb/cdatasource-class.md).  Per creare un nuovo `CSession` per `CDataSource`, chiamare [CSession::Open](../../data/oledb/csession-open.md).  Per avviare una transazione di database, `CSession` fornisce il metodo di `StartTransaction`.  Quando la transazione viene avviata, è possibile applicare a utilizzando il metodo di **Commit**, o annullilo utilizzando il metodo di **Interrompi**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [CatDB](../../top/visual-cpp-samples.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)