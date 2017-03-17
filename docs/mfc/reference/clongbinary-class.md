---
title: CLongBinary (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CLongBinary
- AFXDB_/CLongBinary
- AFXDB_/CLongBinary::CLongBinary
- AFXDB_/CLongBinary::m_dwDataLength
- AFXDB_/CLongBinary::m_hData
dev_langs:
- C++
helpviewer_keywords:
- BLOB (binary large object)
- CLongBinary class
- BLOB (binary large object), CLongBinary class
ms.assetid: f4320059-aeb4-4ee5-bc2b-25f19d898ef5
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: bb73604ee4d15f3a71be8514f348ad265064928a
ms.lasthandoff: 02/24/2017

---
# <a name="clongbinary-class"></a>CLongBinary (classe)
Semplifica l'utilizzo di oggetti dati binari di grandi dimensioni (spesso chiamati BLOB) in un database.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CLongBinary : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLongBinary::CLongBinary](#clongbinary)|Costruisce un oggetto `CLongBinary`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLongBinary::m_dwDataLength](#m_dwdatalength)|Contiene la dimensione effettiva in byte dell'oggetto dati il cui handle viene archiviato in `m_hData`.|  
|[CLongBinary::m_hData](#m_hdata)|Contiene un Windows `HGLOBAL` handle per l'oggetto immagine effettiva.|  
  
## <a name="remarks"></a>Note  
 Ad esempio, un campo di record in una tabella SQL potrebbe contenere una mappa di bit che rappresenta un'immagine. Oggetto `CLongBinary` oggetto archivia tale oggetto e tiene traccia delle relative dimensioni.  
  
> [!NOTE]
>  In generale, è consigliabile ora utilizzare [CByteArray](../../mfc/reference/cbytearray-class.md) in combinazione con il [DFX_Binary](http://msdn.microsoft.com/library/678021a3-2e46-44d7-8528-71bb692dcc07) (funzione). È comunque possibile utilizzare `CLongBinary`, ma in genere `CByteArray` fornisce ulteriori funzionalità in Win32, poiché non è più il limite delle dimensioni rilevato con 16 bit `CByteArray`. Questa raccomandazione si applica alla programmazione con oggetti DAO (Data Access), nonché Open Database Connectivity (ODBC).  
  
 Per utilizzare un `CLongBinary` oggetto, dichiarare un membro dati del campo di tipo `CLongBinary` nella classe recordset. Questo membro sarà un membro della classe recordset incorporati e verrà creato quando viene costruito l'oggetto recordset. Dopo il `CLongBinary` oggetto viene costruito, il meccanismo di campi di record (RFX) exchange carica l'oggetto dati da un campo del record corrente nell'origine dati e la archivia nuovamente il record quando il record viene aggiornato. RFX query origine dati per le dimensioni dell'oggetto binario di grandi dimensioni, archiviazione ne alloca (tramite il `CLongBinary` dell'oggetto `m_hData` membro dati) e archivia un `HGLOBAL` handle per i dati in `m_hData`. RFX consente inoltre di archiviare le dimensioni effettive dell'oggetto dati nel `m_dwDataLength` (membro dati). Lavorare con i dati nell'oggetto tramite `m_hData`, utilizzando le stesse tecniche normalmente si utilizzerebbe per modificare i dati archiviati in un Windows `HGLOBAL` gestire.  
  
 Quando si elimina il recordset, l'oggetto incorporato `CLongBinary` oggetto viene anche eliminato e il relativo distruttore dealloca la `HGLOBAL` handle di dati.  
  
 Per ulteriori informazioni su oggetti di grandi dimensioni e l'utilizzo di `CLongBinary`, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md) e [Recordset: lavorare con gli elementi di dati grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CLongBinary`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdb_.h  
  
##  <a name="clongbinary"></a>CLongBinary::CLongBinary  
 Costruisce un oggetto `CLongBinary`.  
  
```  
CLongBinary();
```  
  
##  <a name="m_dwdatalength"></a>CLongBinary::m_dwDataLength  
 Archivia la dimensione effettiva in byte dei dati archiviati nel `HGLOBAL` handle in `m_hData`.  
  
```  
SQLULEN m_dwDataLength;  
```  
  
### <a name="remarks"></a>Note  
 Questa dimensione può essere inferiore rispetto alla dimensione del blocco di memoria allocata per i dati. Chiamare Win32 [GLobalSize](http://msdn.microsoft.com/library/windows/desktop/aa366593) funzione per ottenere la dimensione allocata.  
  
##  <a name="m_hdata"></a>CLongBinary::m_hData  
 Archivia un Windows `HGLOBAL` handle per i dati effettivi binary large object.  
  
```  
HGLOBAL m_hData;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)

