---
title: Classe CDynamicAccessor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CDynamicAccessor
- ATL::CDynamicAccessor
- CDynamicAccessor
dev_langs:
- C++
helpviewer_keywords:
- CDynamicAccessor class
ms.assetid: 374b13b7-1f09-457d-9e6b-df260ff4d178
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1f07ceae02c9c243f59f37ea49e77ef3113b5a54
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="cdynamicaccessor-class"></a>Classe CDynamicAccessor
Consente di accedere a un'origine dati quando non si conosce lo schema del database (la struttura sottostante del database).  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDynamicAccessor : public CAccessorBase  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddBindEntry](../../data/oledb/cdynamicaccessor-addbindentry.md)|Aggiunge una voce di binding per le colonne di output quando si esegue l'override di funzione di accesso predefinito.|  
|[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)|Crea e inizializza il `CDynamicAccessor` oggetto.|  
|[Chiudi](../../data/oledb/cdynamicaccessor-close.md)|Separa tutte le colonne, libera la memoria allocata e rilascia il [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) puntatore a interfaccia nella classe.|  
|[GetBookmark](../../data/oledb/cdynamicaccessor-getbookmark.md)|Recupera il segnalibro per la riga corrente.|  
|[GetBlobHandling](../../data/oledb/cdynamicaccessor-getblobhandling.md)|Recupera il BLOB di gestione di valore per la riga corrente.|  
|[GetBlobSizeLimit](../../data/oledb/cdynamicaccessor-getblobsizelimit.md)|Recupera le dimensioni BLOB massime in byte.|  
|[GetColumnCount](../../data/oledb/cdynamicaccessor-getcolumncount.md)|Recupera il numero di colonne nel set di righe.|  
|[GetColumnFlags](../../data/oledb/cdynamicaccessor-getcolumnflags.md)|Recupera le caratteristiche della colonna.|  
|[GetColumnInfo](../../data/oledb/cdynamicaccessor-getcolumninfo.md)|Recupera i metadati della colonna.|  
|[GetColumnName](../../data/oledb/cdynamicaccessor-getcolumnname.md)|Recupera il nome di una colonna specificata.|  
|[GetColumnType](../../data/oledb/cdynamicaccessor-getcolumntype.md)|Recupera il tipo di dati di una colonna specificata.|  
|[GetLength](../../data/oledb/cdynamicaccessor-getlength.md)|Recupera la lunghezza massima possibile di una colonna in byte.|  
|[GetOrdinal](../../data/oledb/cdynamicaccessor-getordinal.md)|Recupera l'indice di colonna specificato un nome di colonna.|  
|[GetStatus](../../data/oledb/cdynamicaccessor-getstatus.md)|Recupera lo stato di una colonna specificata.|  
|[GetValue](../../data/oledb/cdynamicaccessor-getvalue.md)|Recupera i dati dal buffer.|  
|[SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md)|Imposta il BLOB di gestione di valore per la riga corrente.|  
|[SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md)|Imposta le dimensioni BLOB massime in byte.|  
|[SetLength](../../data/oledb/cdynamicaccessor-setlength.md)|Imposta la lunghezza della colonna in byte.|  
|[SetStatus](../../data/oledb/cdynamicaccessor-setstatus.md)|Imposta lo stato di una colonna specificata.|  
|[SetValue](../../data/oledb/cdynamicaccessor-setvalue.md)|Archivia i dati nel buffer.|  
  
## <a name="remarks"></a>Note  
 Utilizzare `CDynamicAccessor` metodi per ottenere informazioni di colonna, ad esempio i nomi delle colonne, numero di colonne, tipo di dati e così via. È quindi possibile utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione.  
  
 Le informazioni di colonna vengono archiviate in un buffer che viene creato e gestito da questa classe. Ottenere dati dal buffer tramite [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md).  
  
 Per informazioni ed esempi di utilizzo delle classi di funzioni di accesso dinamiche, vedere [utilizzando funzioni di accesso dinamiche](../../data/oledb/using-dynamic-accessors.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor (classe)](../../data/oledb/caccessor-class.md)   
 [CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)