---
title: Classe CDataConnection | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDataConnection
- ATL.CDataConnection
- CDataConnection
dev_langs:
- C++
helpviewer_keywords:
- CDataConnection class
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a891052b4fa92f6f642cdab89aadf444ec4d8475
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdataconnection-class"></a>Classe CDataConnection
Gestisce la connessione con l'origine dati.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDataConnection  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CDataConnection](../../data/oledb/cdataconnection-cdataconnection.md)|Costruttore. Crea e Inizializza un `CDataConnection` oggetto.|  
|[Copia](../../data/oledb/cdataconnection-copy.md)|Crea una copia di una connessione dati esistente.|  
|[Apri](../../data/oledb/cdataconnection-open.md)|Apre una connessione a un'origine dati utilizzando una stringa di inizializzazione.|  
|[OpenNewSession](../../data/oledb/cdataconnection-opennewsession.md)|Apre una nuova sessione nella connessione corrente.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore BOOL](../../data/oledb/cdataconnection-operator-bool.md)|Determina se la sessione corrente è aperta o non.|  
|[operator bool](../../data/oledb/cdataconnection-operator-bool-ole-db.md)|Determina se la sessione corrente è aperta o non.|  
|[operator CDataSource &](../../data/oledb/cdataconnection-operator-cdatasource-amp.md)|Restituisce un riferimento all'oggetto contenuto `CDataSource` oggetto.|  
|[operator CDataSource *](../../data/oledb/cdataconnection-operator-cdatasource-star.md)|Restituisce un puntatore all'oggetto `CDataSource` contenuto.|  
|[operatore CSession &](../../data/oledb/cdataconnection-operator-csession-amp.md)|Restituisce un riferimento all'oggetto contenuto `CSession` oggetto.|  
|[operatore CSession *](../../data/oledb/cdataconnection-operator-csession-star.md)|Restituisce un puntatore all'oggetto `CSession` contenuto.|  
  
## <a name="remarks"></a>Note  
 `CDataConnection` è una classe utile per la creazione di client in quanto incapsula gli oggetti necessari (origine dati e sessione) e parte del lavoro, che è necessario eseguire quando ci si connette a un'origine dati  
  
 Senza `CDataConnection`, è necessario creare un `CDataSource` dell'oggetto, chiamare relativo [OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md) (metodo), quindi creare un'istanza di un [CSession](../../data/oledb/csession-class.md) dell'oggetto, chiamare il relativo [ Aprire](../../data/oledb/csession-open.md) (metodo), quindi creare un [CCommand](../../data/oledb/ccommand-class.md) oggetto e chiamare il relativo **aprire*** metodi.  
  
 Con `CDataConnection`, è sufficiente creare un oggetto di connessione, passare una stringa di inizializzazione, quindi utilizzare tale connessione per aprire i comandi. Se si prevede di utilizzare più volte la connessione al database, è consigliabile tenere aperta, la connessione e `CDataConnection` fornisce un modo pratico per eseguire questa operazione.  
  
> [!NOTE]
>  Se si sta creando un'applicazione di database che deve gestire più sessioni, è necessario utilizzare [OpenNewSession](../../data/oledb/cdataconnection-opennewsession.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)