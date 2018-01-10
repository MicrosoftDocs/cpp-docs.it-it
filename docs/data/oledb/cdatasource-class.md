---
title: Classe CDataSource | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CDataSource
- ATL::CDataSource
- CDataSource
dev_langs: C++
helpviewer_keywords: CDataSource class
ms.assetid: 99bf862c-9d5c-4117-9501-aa0e2672085c
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a8f5a7b4c09400ad31be0b8b403899c5e8401afa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdatasource-class"></a>Classe CDataSource
Corrisponde a un oggetto di origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDataSource  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Chiudi](../../data/oledb/cdatasource-close.md)|Chiude la connessione.|  
|[GetInitializationString](../../data/oledb/cdatasource-getinitializationstring.md)|Recupera la stringa di inizializzazione dell'origine dati che è attualmente aperto.|  
|[GetProperties](../../data/oledb/cdatasource-getproperties.md)|Ottiene i valori delle proprietà attualmente impostata per l'origine dati connessa.|  
|[GetProperty](../../data/oledb/cdatasource-getproperty.md)|Ottiene il valore di una singola proprietà attualmente impostata per l'origine dati connessa.|  
|[Apri](../../data/oledb/cdatasource-open.md)|Crea una connessione a un provider (origine dati) utilizzando un **CLSID**, **ProgID**, o un `CEnumerator` moniker fornito dal chiamante.|  
|[OpenFromFileName](../../data/oledb/cdatasource-openfromfilename.md)|Apre un'origine dati da un file specificato dal nome file fornito dall'utente.|  
|[OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md)|Apre l'origine dati specificata da una stringa di inizializzazione.|  
|[OpenWithPromptFileName](../../data/oledb/cdatasource-openwithpromptfilename.md)|Consente all'utente di selezionare un file di collegamento dati creato in precedenza per aprire l'origine dati corrispondente.|  
|[OpenWithServiceComponents](../../data/oledb/cdatasource-openwithservicecomponents.md)|Apre un oggetto di origine dati utilizzando la finestra di dialogo collegamenti dati.|  
  
## <a name="remarks"></a>Note  
 È possibile creare una o più sessioni di database per una singola connessione. Queste sessioni vengono rappresentate da `CSession`. È necessario chiamare [CDataSource:: Open](../../data/oledb/cdatasource-open.md) per aprire la connessione prima di creare una sessione con `CSession::Open`.  
  
 Per un esempio di come utilizzare `CDataSource`, vedere il [CatDB](../../visual-cpp-samples.md) esempio.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)