---
title: Classe CLongBinary
ms.date: 11/04/2016
f1_keywords:
- CLongBinary
- AFXDB_/CLongBinary
- AFXDB_/CLongBinary::CLongBinary
- AFXDB_/CLongBinary::m_dwDataLength
- AFXDB_/CLongBinary::m_hData
helpviewer_keywords:
- CLongBinary class [MFC]
ms.assetid: f4320059-aeb4-4ee5-bc2b-25f19d898ef5
ms.openlocfilehash: 94666c0d15898e05ae78663a15d86b7d00d5c9c6
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505679"
---
# <a name="clongbinary-class"></a>Classe CLongBinary

Semplifica l'utilizzo di oggetti dati binari di grandi dimensioni (spesso chiamati BLOB) in un database.

## <a name="syntax"></a>Sintassi

```
class CLongBinary : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CLongBinary::CLongBinary](#clongbinary)|Costruisce un oggetto `CLongBinary`.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CLongBinary::m_dwDataLength](#m_dwdatalength)|Contiene le dimensioni effettive, in byte, dell'oggetto dati il cui handle `m_hData`è archiviato in.|
|[CLongBinary::m_hData](#m_hdata)|Contiene un handle HGLOBAL Windows per l'oggetto immagine effettivo.|

## <a name="remarks"></a>Note

Ad esempio, un campo di record in una tabella SQL potrebbe contenere una bitmap che rappresenta un'immagine. Un `CLongBinary` oggetto archivia un oggetto di questo tipo e ne tiene traccia delle dimensioni.

> [!NOTE]
>  In generale, è consigliabile usare [CByteArray](../../mfc/reference/cbytearray-class.md) insieme alla funzione [DFX_Binary](record-field-exchange-functions.md#dfx_binary) . È comunque possibile utilizzare `CLongBinary`, ma in generale `CByteArray` fornisce più funzionalità in Win32, perché non è più prevista la limitazione delle dimensioni con 16 bit `CByteArray`. Questo Consiglio si applica alla programmazione con DAO (Data Access Objects) e Open Database Connectivity (ODBC).

Per usare un `CLongBinary` oggetto, dichiarare un membro dati del campo di `CLongBinary` tipo nella classe recordset. Questo membro sarà un membro incorporato della classe recordset e verrà costruito quando il recordset viene costruito. Dopo che `CLongBinary` l'oggetto è stato costruito, il meccanismo RFX (record Field Exchange) carica l'oggetto dati da un campo del record corrente nell'origine dati e lo archivia di nuovo nel record quando il record viene aggiornato. RFX esegue una query nell'origine dati per le dimensioni dell'oggetto binario di grandi dimensioni, alloca lo spazio di archiviazione `CLongBinary` per esso `m_hData` (tramite il membro dati dell'oggetto `HGLOBAL` ) e archivia un handle `m_hData`ai dati in. RFX archivia inoltre le dimensioni effettive dell'oggetto dati nel `m_dwDataLength` membro dati. Utilizzare i dati nell'oggetto tramite `m_hData`, utilizzando le stesse tecniche utilizzate normalmente per modificare i dati archiviati in un handle di Windows. `HGLOBAL`

Quando si elimina il recordset, viene eliminato `CLongBinary` anche l'oggetto incorporato e il relativo distruttore dealloca l'handle `HGLOBAL` di dati.

Per ulteriori informazioni sugli oggetti di grandi dimensioni e sull' `CLongBinary`utilizzo di, vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md) e [recordset: Utilizzo di elementi di dati di grandi dimensioni](../../data/odbc/recordset-working-with-large-data-items-odbc.md)(ODBC).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CLongBinary`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb_. h

##  <a name="clongbinary"></a>  CLongBinary::CLongBinary

Costruisce un oggetto `CLongBinary`.

```
CLongBinary();
```

##  <a name="m_dwdatalength"></a>  CLongBinary::m_dwDataLength

Archivia le dimensioni effettive in byte dei dati archiviati nell'handle HGLOBAL in `m_hData`.

```
SQLULEN m_dwDataLength;
```

### <a name="remarks"></a>Note

Questa dimensione può essere inferiore alla dimensione del blocco di memoria allocata per i dati. Chiamare la funzione [GlobalSize](/windows/win32/api/winbase/nf-winbase-globalsize) Win32 per ottenere la dimensione allocata.

##  <a name="m_hdata"></a>  CLongBinary::m_hData

Archivia un handle HGLOBAL Windows per i dati di oggetti binari di grandi dimensioni effettivi.

```
HGLOBAL m_hData;
```

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
