---
title: "Classe CDataConnection | Microsoft Docs"
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
  - "ATL::CDataConnection"
  - "ATL.CDataConnection"
  - "CDataConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataConnection (classe)"
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDataConnection
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce la connessione con l'origine dati.  
  
## Sintassi  
  
```  
class CDataConnection  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CDataConnection](../../data/oledb/cdataconnection-cdataconnection.md)|Costruttore.  Crea un'istanza e inizializza un oggetto di `CDataConnection`.|  
|[Copia](../../data/oledb/cdataconnection-copy.md)|Crea una copia di una connessione dati esistente.|  
|[Aprire](../../data/oledb/cdataconnection-open.md)|Aprire una connessione a un'origine dati tramite una stringa di inizializzazione.|  
|[OpenNewSession](../../data/oledb/cdataconnection-opennewsession.md)|Verrà aperta una nuova sessione della connessione corrente.|  
  
### Operatori  
  
|||  
|-|-|  
|[BOOL dell'operatore](../../data/oledb/cdataconnection-operator-bool.md)|Determina se la sessione corrente è public o meno.|  
|[bool dell'operatore](../../data/oledb/cdataconnection-operator-bool-ole-db.md)|Determina se la sessione corrente è public o meno.|  
|[operatore CDataSource&](../../data/oledb/cdataconnection-operator-cdatasource-amp.md)|Restituisce un riferimento all'oggetto contenuto di `CDataSource`.|  
|[operatore CDataSource\*](../../data/oledb/cdataconnection-operator-cdatasource-star.md)|Restituisce un puntatore all'oggetto contenuto di `CDataSource`.|  
|[operatore CSession&](../../data/oledb/cdataconnection-operator-csession-amp.md)|Restituisce un riferimento all'oggetto contenuto di `CSession`.|  
|[operatore CSession\*](../../data/oledb/cdataconnection-operator-csession-star.md)|Restituisce un puntatore all'oggetto contenuto di `CSession`.|  
  
## Note  
 `CDataConnection` è una classe utile per creare i client che incapsula gli oggetti necessari \(origine dati e passare\) e parte del lavoro da eseguire durante la connessione a un'origine dati  
  
 Senza `CDataConnection`, è necessario creare un oggetto di `CDataSource`, chiamarne il metodo di [OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md), pertanto per creare un'istanza di un oggetto di [CSession](../../data/oledb/csession-class.md), chiamarne il metodo di [Apri](../../data/oledb/csession-open.md), pertanto per creare un oggetto di [CCommand](../../data/oledb/ccommand-class.md) e chiamarne il **Apri**\* metodi.  
  
 Con `CDataConnection`, è sufficiente creare un oggetto connessione, gli si passa una stringa di inizializzazione, quindi utilizzare la connessione ai controlli aperti.  Se si intende utilizzare la connessione al database ripetutamente, è consigliabile proteggere la connessione aperta e `CDataConnection` fornisce un modo pratico per eseguire questa operazione.  
  
> [!NOTE]
>  Se si crea un'applicazione di database che deve gestire sessioni contemporaneamente, sarà necessario utilizzare [OpenNewSession](../../data/oledb/cdataconnection-opennewsession.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)