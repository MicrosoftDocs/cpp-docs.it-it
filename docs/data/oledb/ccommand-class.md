---
title: Classe CCommand | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CCommand
- CCommand
- ATL.CCommand
dev_langs: C++
helpviewer_keywords: CCommand class
ms.assetid: 0760bfc5-b9ee-4aee-8e54-31bd78714d3a
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1ad74a5a763c39ce4f2ef765662b8f88ce083732
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ccommand-class"></a>Classe CCommand
Fornisce i metodi per impostare ed eseguire un comando.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   class TAccessor = CNoAccessor,  
   template < typename T > class TRowset = CRowset,  
   class TMultiple = CNoMultipleResults   
>  
class CCommand :   
   public CAccessorRowset <  
      TAccessor,   
      TRowset   
   >,  
   public CCommandBase,  
   public TMultiple  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Tipo di classe di funzioni di accesso (ad esempio `CDynamicParameterAccessor`, `CDynamicStringAccessor` o `CEnumeratorAccessor`) che si desidera venga utilizzata dal comando. L'impostazione predefinita è `CNoAccessor`, che specifica che la classe non supporta parametri o colonne di output.  
  
 `TRowset`  
 Tipo di classe rowset (ad esempio `CArrayRowset` o `CNoRowset`) che si desidera venga utilizzata dal comando. Il valore predefinito è `CRowset`.  
  
 `TMultiple`  
 Per utilizzare un comando OLE DB che può restituire più risultati, specificare [CMultipleResults](../../data/oledb/cmultipleresults-class.md). In caso contrario, utilizzare [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md). Per informazioni dettagliate, vedere [IMultipleResults](https://msdn.microsoft.com/en-us/library/ms721289.aspx).  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Chiudi](../../data/oledb/ccommand-close.md)|Chiude il comando corrente.|  
|[GetNextResult](../../data/oledb/ccommand-getnextresult.md)|Recupera il risultato successivo durante l'utilizzo di più set di risultati.|  
|[Apri](../../data/oledb/ccommand-open.md)|Esegue ed eventualmente associa il comando.|  
  
### <a name="inherited-methods"></a>Metodi ereditati  
  
|||  
|-|-|  
|[Creare](../../data/oledb/ccommand-create.md)|Crea un nuovo comando per la sessione specificata, quindi imposta il testo del comando.|  
|[CreateCommand](../../data/oledb/ccommand-createcommand.md)|Crea un nuovo comando.|  
|[GetParameterInfo](../../data/oledb/ccommand-getparameterinfo.md)|Ottiene un elenco di parametri, i relativi nomi e tipi del comando.|  
|[Preparare](../../data/oledb/ccommand-prepare.md)|Convalida e ottimizza il comando corrente.|  
|[ReleaseCommand](../../data/oledb/ccommand-releasecommand.md)|Rilascia la funzione di accesso parametro se necessario, quindi rilascia il comando.|  
|[Funzione SetParameterInfo](../../data/oledb/ccommand-setparameterinfo.md)|Specifica il tipo nativo di ogni parametro di comando.|  
|[Unprepare](../../data/oledb/ccommand-unprepare.md)|Rimuove il piano di esecuzione corrente dei comandi.|  
  
## <a name="remarks"></a>Note  
 Utilizzare questa classe quando è necessario eseguire un'operazione basata su parametri o eseguire un comando. Se si desidera semplicemente aprire un rowset semplice, utilizzare [CTable](../../data/oledb/ctable-class.md) invece.  
  
 La classe di funzioni di accesso che si sta utilizzando determina il metodo di associazione dei parametri e dei dati.  
  
 Notare che non è possibile utilizzare le stored procedure con il provider OLE BD per Jet, in quanto da questo non supportate. Nelle stringhe delle query sono infatti ammesse solo costanti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)