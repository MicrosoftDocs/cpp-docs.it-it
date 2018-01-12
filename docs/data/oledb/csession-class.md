---
title: Classe CSession | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CSession
- ATL::CSession
- ATL.CSession
dev_langs: C++
helpviewer_keywords: CSession class
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d8b6bb75d12b4ab96c3a44c74f4487eb8a70efc6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="csession-class"></a>Classe CSession
Rappresenta una sessione di accesso singolo database.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSession  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Interruzione](../../data/oledb/csession-abort.md)|Annulla (termina) della transazione.|  
|[Chiudi](../../data/oledb/csession-close.md)|Chiude la sessione.|  
|[Eseguire il commit](../../data/oledb/csession-commit.md)|Il commit della transazione.|  
|[GetTransactionInfo](../../data/oledb/csession-gettransactioninfo.md)|Restituisce le informazioni relative a una transazione.|  
|[Apri](../../data/oledb/csession-open.md)|Apre una nuova sessione per l'oggetto origine dati.|  
|[StartTransaction](../../data/oledb/csession-starttransaction.md)|Inizia una nuova transazione per questa sessione.|  
  
## <a name="remarks"></a>Note  
 Una o più sessioni possono essere associate a ogni connessione del provider (origine dati), che è rappresentato da un [CDataSource](../../data/oledb/cdatasource-class.md) oggetto. Per creare un nuovo `CSession` per un `CDataSource`, chiamare [CSession:: Open](../../data/oledb/csession-open.md). Per iniziare una transazione di database, `CSession` fornisce il `StartTransaction` metodo. Una volta che viene avviata una transazione, è possibile eseguire il commit utilizzando il **Commit** metodo, o annullare l'operazione utilizzando il **Abort** metodo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CatDB](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)