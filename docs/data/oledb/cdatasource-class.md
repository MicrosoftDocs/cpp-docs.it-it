---
title: "Classe CDataSource | Microsoft Docs"
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
  - "ATL.CDataSource"
  - "ATL::CDataSource"
  - "CDataSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataSource (classe)"
ms.assetid: 99bf862c-9d5c-4117-9501-aa0e2672085c
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDataSource
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Corrisponde a un oggetto origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati.  
  
## Sintassi  
  
```  
class CDataSource  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Chiudi](../../data/oledb/cdatasource-close.md)|Chiude la connessione.|  
|[GetInitializationString](../../data/oledb/cdatasource-getinitializationstring.md)|Recuperare la stringa dell'inizializzazione dell'origine dati attualmente aperta.|  
|[GetProperties](../../data/oledb/cdatasource-getproperties.md)|Ottiene i valori delle proprietà già impostate per l'origine dati collegata.|  
|[GetProperty](../../data/oledb/cdatasource-getproperty.md)|Ottiene il valore di una singola proprietà attualmente impostata per l'origine dati collegata.|  
|[Aprire](../../data/oledb/cdatasource-open.md)|Crea una connessione a un provider \(origine dati\) utilizzando **CLSID**, **ProgID**, o un moniker di `CEnumerator` fornito dal chiamante.|  
|[OpenFromFileName](../../data/oledb/cdatasource-openfromfilename.md)|Aprire un'origine dati da un file specificato dal nome file fornito dall'utente.|  
|[OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md)|Aprire l'origine dati specificata da una stringa di inizializzazione.|  
|[OpenWithPromptFileName](../../data/oledb/cdatasource-openwithpromptfilename.md)|Consente di selezionare un file creato in precedenza data link per aprire l'origine dati corrispondente.|  
|[OpenWithServiceComponents](../../data/oledb/cdatasource-openwithservicecomponents.md)|Apre un oggetto origine dati utilizzando la finestra di dialogo data link.|  
  
## Note  
 Una o più sessioni di database possono essere create per una sola connessione.  Queste sessioni vengono rappresentate da `CSession`.  È necessario chiamare [CDataSource::Open](../../data/oledb/cdatasource-open.md) per aprire la connessione prima di creare una sessione di `CSession::Open`.  
  
 Per un esempio di come utilizzare `CDataSource`, vedere l'esempio di [CatDB](../../top/visual-cpp-samples.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)