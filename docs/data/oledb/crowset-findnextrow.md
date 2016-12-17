---
title: "CRowset::FindNextRow | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CRowset.FindNextRow"
  - "CRowset<TAccessor>.FindNextRow"
  - "ATL::CRowset::FindNextRow"
  - "CRowset::FindNextRow"
  - "CRowset<TAccessor>::FindNextRow"
  - "CRowset.FindNextRow"
  - "ATL.CRowset<TAccessor>.FindNextRow"
  - "ATL::CRowset<TAccessor>::FindNextRow"
  - "FindNextRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FindNextRow (metodo)"
ms.assetid: 36484df9-3625-4f15-bf69-db73a8d91c55
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::FindNextRow
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trova la riga corrispondente seguente dopo il segnalibro specificato.  
  
## Sintassi  
  
```  
  
      HRESULT FindNextRow(   
   DBCOMPAREOP op,   
   BYTE* pData,   
   DBTYPE wType,   
   DBLENGTH nLength,   
   BYTE bPrecision,   
   BYTE bScale,   
   BOOL bSkipCurrent = TRUE,   
   CBookmarkBase* pBookmark = NULL    
) throw( );  
```  
  
#### Parametri  
 `op`  
 \[in\] L'operazione da utilizzare per confrontare i valori della riga.  Per i valori, vedere [IRowsetFind::FindNextRow](https://msdn.microsoft.com/en-us/library/ms723091.aspx).  
  
 `pData`  
 \[in\] Un puntatore al valore da confrontare.  
  
 `wType`  
 \[in\] Indica il tipo di dati della parte di valore del buffer.  Per informazioni sugli indicatori di tipo, vedere [Tipi di dati](https://msdn.microsoft.com/en-us/library/ms723969.aspx) in *OLE DB Programmer's Reference* in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nLength`  
 \[in\] La lunghezza, in byte, della struttura dei dati di tipo consumer allocata per il valore dei dati.  Per informazioni dettagliate, vedere la descrizione di **cbMaxLen** in [Strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in *OLE DB Programmer's Reference.*  
  
 `bPrecision`  
 \[in\] La massima precisione utilizzata quando si ottengono dei dati.  Va utilizzato solo se `wType` è `DBTYPE_NUMERIC`.  Per ulteriori informazioni, vedere [Conversioni che coinvolgono DBTYPE\_NUMERIC o DBTYPE\_DECIMAL](https://msdn.microsoft.com/en-us/library/ms719714.aspx) in *OLE DB Programmer's Reference*.  
  
 `bScale`  
 \[in\] La scala utilizzata quando si ottengono dei dati.  Va utilizzato solo se `wType` è `DBTYPE_NUMERIC` o **DBTYPE\_DECIMAL**.  Per ulteriori informazioni, vedere [Conversioni che coinvolgono DBTYPE\_NUMERIC o DBTYPE\_DECIMAL](https://msdn.microsoft.com/en-us/library/ms719714.aspx) in *OLE DB Programmer's Reference*.  
  
 *bSkipCurrent*  
 \[in\] Il numero di righe dal segnalibro da cui iniziare la ricerca.  
  
 `pBookmark`  
 \[in\] Il segnalibro per la posizione da cui iniziare la ricerca.  
  
## Valore restituito  
 Un `HRESULT` standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa **IRowsetFind**, che potrebbe non essere supportata da tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario impostare **DBPROP\_IRowsetScroll** a `VARIANT_TRUE` prima di chiamare **Apri** nella tabella o comando contenente il rowset.  
  
 Per informazioni sull'utilizzo dei segnalibri nei consumer, vedere [Utilizzo dei segnalibri](../../data/oledb/using-bookmarks.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx)