---
title: "Classe CCommand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CCommand"
  - "CCommand"
  - "ATL.CCommand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCommand (classe)"
ms.assetid: 0760bfc5-b9ee-4aee-8e54-31bd78714d3a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Classe CCommand
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce metodi per impostare ed eseguire un comando.  
  
## Sintassi  
  
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
  
#### Parametri  
 `TAccessor`  
 Il tipo di classe di accesso \(ad esempio `CDynamicParameterAccessor`, `CDynamicStringAccessor` o `CEnumeratorAccessor`\) che si desidera venga utilizzata dal comando.  L'impostazione predefinita è `CNoAccessor`, il quale specifica che la classe non supporta i parametri o le colonne di output.  
  
 `TRowset`  
 Il tipo di classe rowset \(ad esempio `CArrayRowset` o `CNoRowset`\) che si desidera venga utilizzata dal comando.  Il valore predefinito è `CRowset`.  
  
 `TMultiple`  
 Per utilizzare un comando OLE DB che può restituire più risultati, specificare [CMultipleResults](../../data/oledb/cmultipleresults-class.md).  In caso contrario, utilizzare [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md).  Per dettagli, vedere [IMultipleResults](https://msdn.microsoft.com/en-us/library/ms721289.aspx).  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Chiudi](../../data/oledb/ccommand-close.md)|Chiude il comando corrente.|  
|[GetNextResult](../../data/oledb/ccommand-getnextresult.md)|Recupera il risultato successivo durante l'utilizzo di più set di risultati.|  
|[Aprire](../../data/oledb/ccommand-open.md)|Esegue ed eventualmente associa il comando.|  
  
### Metodi ereditati  
  
|||  
|-|-|  
|[Create](../../data/oledb/ccommand-create.md)|Crea un nuovo comando per la sessione specificata, quindi imposta il testo del comando.|  
|[CreateCommand](../../data/oledb/ccommand-createcommand.md)|Crea un nuovo comando.|  
|[GetParameterInfo](../../data/oledb/ccommand-getparameterinfo.md)|Ottiene un elenco di parametri del comando, dei loro nomi e i relativi tipi.|  
|[Preparare](../../data/oledb/ccommand-prepare.md)|Convalida e ottimizza il comando corrente.|  
|[ReleaseCommand](../../data/oledb/ccommand-releasecommand.md)|Rilascia l'accessore di parametro se necessario, quindi rilascia il comando.|  
|[SetParameterInfo](../../data/oledb/ccommand-setparameterinfo.md)|Specifica il tipo nativo di ogni parametro di comando.|  
|[Unprepare](../../data/oledb/ccommand-unprepare.md)|Rimuove il piano corrente di esecuzione dei comandi.|  
  
## Note  
 Utilizzare questa classe quando occorre eseguire un'operazione basata su parametri o eseguire un comando.  Se è sufficiente aprire un rowset semplice, utilizzare invece [CTable](../../data/oledb/ctable-class.md).  
  
 La classe funzione di accesso che si sta utilizzando determina il metodo di associazione parametri e dati.  
  
 Si noti che non è possibile utilizzare le procedure archiviate con il Provider OLE DB per Jet, in quanto quel provider non supporta le procedure archiviate \(nelle stringhe delle query sono ammesse solo costanti\).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)