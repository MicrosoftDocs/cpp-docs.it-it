---
title: 'CRowset:: FindNextRow | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CRowset.FindNextRow
- CRowset<TAccessor>.FindNextRow
- ATL::CRowset::FindNextRow
- CRowset::FindNextRow
- CRowset<TAccessor>::FindNextRow
- CRowset.FindNextRow
- ATL.CRowset<TAccessor>.FindNextRow
- ATL::CRowset<TAccessor>::FindNextRow
- FindNextRow
dev_langs:
- C++
helpviewer_keywords:
- FindNextRow method
ms.assetid: 36484df9-3625-4f15-bf69-db73a8d91c55
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4afc1db20970102ecddb9031f4f1b7a8f6906cf4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098222"
---
# <a name="crowsetfindnextrow"></a>CRowset::FindNextRow
Trova la riga corrispondente successiva dopo il segnalibro specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT FindNextRow(DBCOMPAREOP op,   
  BYTE* pData,   
   DBTYPE wType,   
   DBLENGTH nLength,   
   BYTE bPrecision,   
   BYTE bScale,   
   BOOL bSkipCurrent = TRUE,   
   CBookmarkBase* pBookmark = NULL) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `op`  
 [in] L'operazione da usare nel confronto dei valori di riga. Per i valori, vedere [irowsetfind:: FindNextRow](https://msdn.microsoft.com/en-us/library/ms723091.aspx).  
  
 `pData`  
 [in] Puntatore al valore da ricercare.  
  
 `wType`  
 [in] Indica il tipo di dati della parte del valore del buffer. Per informazioni sugli indicatori di tipo, vedere [tipi di dati](https://msdn.microsoft.com/en-us/library/ms723969.aspx) nel *riferimento per programmatori OLE DB* in Windows SDK.  
  
 `nLength`  
 [in] La lunghezza, espressa in byte, della struttura di data consumer allocata per il valore dei dati. Per informazioni dettagliate, vedere la descrizione di **cbMaxLen** in [strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *riferimento per programmatori OLE DB.*  
  
 `bPrecision`  
 [in] La precisione massima utilizzata durante il recupero di dati. Utilizzato solo se `wType` è `DBTYPE_NUMERIC`. Per ulteriori informazioni, vedere [conversioni DBTYPE_NUMERIC o DBTYPE_DECIMAL](https://msdn.microsoft.com/en-us/library/ms719714.aspx) nel *riferimento per programmatori OLE DB*.  
  
 `bScale`  
 [in] La scala usata durante il recupero di dati. Utilizzato solo se `wType` è `DBTYPE_NUMERIC` o **DBTYPE_DECIMAL**. Per ulteriori informazioni, vedere [conversioni DBTYPE_NUMERIC o DBTYPE_DECIMAL](https://msdn.microsoft.com/en-us/library/ms719714.aspx) nel *riferimento per programmatori OLE DB*.  
  
 *bSkipCurrent*  
 [in] Il numero di righe dal segnalibro da cui iniziare la ricerca.  
  
 `pBookmark`  
 [in] Il segnalibro per posizione da cui iniziare la ricerca.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo richiede l'interfaccia facoltativa **IRowsetFind**, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetFind** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
 Per informazioni sull'utilizzo di segnalibri degli utenti, vedere [mediante segnalibri](../../data/oledb/using-bookmarks.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [Strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)