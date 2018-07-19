---
title: Classe CLongBinary | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CLongBinary class [MFC]
ms.assetid: f4320059-aeb4-4ee5-bc2b-25f19d898ef5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b75016c6c783ae19d8e0f6739adaa34b8da977db
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37338437"
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
|[CLongBinary::m_dwDataLength](#m_dwdatalength)|Contiene la dimensione effettiva in byte dell'oggetto dati con handle viene archiviato in `m_hData`.|  
|[CLongBinary::m_hData](#m_hdata)|Contiene un handle Windows HGLOBAL all'oggetto immagine effettiva.|  
  
## <a name="remarks"></a>Note  
 Ad esempio, un campo di record in una tabella SQL potrebbe contenere una mappa di bit che rappresenta un'immagine. Oggetto `CLongBinary` archivia un oggetto di questo tipo di oggetto e tiene traccia delle relative dimensioni.  
  
> [!NOTE]
>  In generale, è consigliabile a questo punto usare [CByteArray](../../mfc/reference/cbytearray-class.md) in combinazione con la [DFX_Binary](record-field-exchange-functions.md#dfx_binary) (funzione). È comunque possibile usare `CLongBinary`, ma in genere `CByteArray` fornisce altre funzionalità in Win32, perché è presente non più il limite delle dimensioni rilevato con 16 bit `CByteArray`. Questo Consiglio si applica alla programmazione con gli oggetti DAO (Data Access), nonché Open Database Connectivity (ODBC).  
  
 Usare un `CLongBinary` oggetti, dichiarare un membro dati di campo di tipo `CLongBinary` nella classe recordset. Questo membro è un membro incorporato della classe recordset e verrà creato quando viene costruito il recordset. Dopo il `CLongBinary` costruito, il meccanismo di campi di record (RFX) di exchange viene caricato l'oggetto dati da un campo nel record corrente nell'origine dati e archiviarlo nuovamente al record quando viene aggiornato il record. RFX esegue query sull'origine di dati per le dimensioni dell'oggetto di grandi dimensioni binario, archiviazione ne alloca (tramite il `CLongBinary` dell'oggetto `m_hData` membro dati) e archivia un' `HGLOBAL` handle per i dati in `m_hData`. RFX archivia anche le dimensioni effettive dell'oggetto dati nel `m_dwDataLength` (membro dati). Lavorare con i dati nell'oggetto attraverso `m_hData`, con le stesse tecniche normalmente si utilizzerebbe per manipolare i dati archiviati in un Windows `HGLOBAL` gestire.  
  
 Quando si elimina il recordset, l'oggetto incorporato `CLongBinary` oggetto viene anche eliminato e il relativo distruttore dealloca la `HGLOBAL` handle di dati.  
  
 Per altre informazioni sugli oggetti di grandi dimensioni e l'uso di `CLongBinary`, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md) e [Recordset: lavorare con gli elementi di dati grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CLongBinary`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdb_.h  
  
##  <a name="clongbinary"></a>  CLongBinary::CLongBinary  
 Costruisce un oggetto `CLongBinary`.  
  
```  
CLongBinary();
```  
  
##  <a name="m_dwdatalength"></a>  CLongBinary::m_dwDataLength  
 Archivia la dimensione effettiva in byte dei dati archiviati in handle HGLOBAL in `m_hData`.  
  
```  
SQLULEN m_dwDataLength;  
```  
  
### <a name="remarks"></a>Note  
 Questa dimensione può essere inferiore alla dimensione del blocco di memoria allocato per i dati. Chiamare Win32 [GLobalSize](http://msdn.microsoft.com/library/windows/desktop/aa366593) funzione per ottenere la dimensione allocata.  
  
##  <a name="m_hdata"></a>  CLongBinary::m_hData  
 Archivia un handle Windows HGLOBAL per i dati effettivi binary large object.  
  
```  
HGLOBAL m_hData;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CObject](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)
