---
description: 'Altre informazioni su: classe CLongBinary'
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
ms.openlocfilehash: ad6836ce6ee7e95929f69d226dcab61fc5482277
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336720"
---
# <a name="clongbinary-class"></a>Classe CLongBinary

Semplifica l'utilizzo di oggetti dati binari di grandi dimensioni (spesso chiamati BLOB) in un database.

## <a name="syntax"></a>Sintassi

```
class CLongBinary : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CLongBinary:: CLongBinary](#clongbinary)|Costruisce un oggetto `CLongBinary`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CLongBinary:: m_dwDataLength](#m_dwdatalength)|Contiene le dimensioni effettive, in byte, dell'oggetto dati il cui handle è archiviato in `m_hData` .|
|[CLongBinary:: m_hData](#m_hdata)|Contiene un handle HGLOBAL Windows per l'oggetto immagine effettivo.|

## <a name="remarks"></a>Commenti

Ad esempio, un campo di record in una tabella SQL potrebbe contenere una bitmap che rappresenta un'immagine. Un `CLongBinary` oggetto archivia un oggetto di questo tipo e ne tiene traccia delle dimensioni.

> [!NOTE]
> In generale, è consigliabile usare [CByteArray](../../mfc/reference/cbytearray-class.md) insieme alla funzione [DFX_Binary](record-field-exchange-functions.md#dfx_binary) . È comunque possibile utilizzare `CLongBinary` , ma in generale `CByteArray` fornisce più funzionalità in Win32, perché non è più prevista la limitazione delle dimensioni con 16 bit `CByteArray` . Questo Consiglio si applica alla programmazione con DAO (Data Access Objects) e Open Database Connectivity (ODBC).

Per usare un `CLongBinary` oggetto, dichiarare un membro dati del campo di tipo `CLongBinary` nella classe recordset. Questo membro sarà un membro incorporato della classe recordset e verrà costruito quando il recordset viene costruito. Dopo che l' `CLongBinary` oggetto è stato costruito, il meccanismo RFX (record Field Exchange) carica l'oggetto dati da un campo del record corrente nell'origine dati e lo archivia di nuovo nel record quando il record viene aggiornato. RFX esegue una query nell'origine dati per le dimensioni dell'oggetto binario di grandi dimensioni, alloca lo spazio di archiviazione per esso (tramite il `CLongBinary` `m_hData` membro dati dell'oggetto) e archivia un `HGLOBAL` handle ai dati in `m_hData` . RFX archivia inoltre le dimensioni effettive dell'oggetto dati nel `m_dwDataLength` membro dati. Utilizzare i dati nell'oggetto tramite `m_hData` , utilizzando le stesse tecniche utilizzate normalmente per modificare i dati archiviati in un handle di Windows `HGLOBAL` .

Quando si elimina il recordset, `CLongBinary` viene eliminato anche l'oggetto incorporato e il relativo distruttore dealloca l' `HGLOBAL` handle di dati.

Per ulteriori informazioni sugli oggetti di grandi dimensioni e sull'utilizzo di `CLongBinary` , vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md) e [Recordset: utilizzo di elementi di dati di grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CLongBinary`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb_. h

## <a name="clongbinaryclongbinary"></a><a name="clongbinary"></a> CLongBinary:: CLongBinary

Costruisce un oggetto `CLongBinary`.

```
CLongBinary();
```

## <a name="clongbinarym_dwdatalength"></a><a name="m_dwdatalength"></a> CLongBinary:: m_dwDataLength

Archivia le dimensioni effettive in byte dei dati archiviati nell'handle HGLOBAL in `m_hData` .

```
SQLULEN m_dwDataLength;
```

### <a name="remarks"></a>Commenti

Questa dimensione può essere inferiore alla dimensione del blocco di memoria allocata per i dati. Chiamare la funzione [GlobalSize](/windows/win32/api/winbase/nf-winbase-globalsize) Win32 per ottenere la dimensione allocata.

## <a name="clongbinarym_hdata"></a><a name="m_hdata"></a> CLongBinary:: m_hData

Archivia un handle HGLOBAL Windows per i dati di oggetti binari di grandi dimensioni effettivi.

```
HGLOBAL m_hData;
```

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
