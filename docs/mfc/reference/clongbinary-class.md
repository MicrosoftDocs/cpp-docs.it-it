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
ms.openlocfilehash: 1ce1daba90f3a1dad4b9627082d63f1b3405eab4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370130"
---
# <a name="clongbinary-class"></a>Classe CLongBinary

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
|[CLongBinary::m_dwDataLength](#m_dwdatalength)|Contiene le dimensioni effettive in byte dell'oggetto dati il cui handle è archiviato in `m_hData`.|
|[CLongBinary::m_hData](#m_hdata)|Contiene un handle HGLOBAL di Windows per l'oggetto immagine effettivo.|

## <a name="remarks"></a>Osservazioni

Ad esempio, un campo record in una tabella SQL potrebbe contenere una bitmap che rappresenta un'immagine. Un `CLongBinary` oggetto archivia tale oggetto e tiene traccia delle sue dimensioni.

> [!NOTE]
> In generale, è consigliabile utilizzare [ora CByteArray](../../mfc/reference/cbytearray-class.md) insieme alla funzione [DFX_Binary.](record-field-exchange-functions.md#dfx_binary) È ancora `CLongBinary`possibile utilizzare `CByteArray` , ma in generale fornisce ulteriori funzionalità in Win32, poiché `CByteArray`non esiste più la limitazione delle dimensioni riscontrata con i bit a 16 bit. Questo consiglio si applica alla programmazione con DAO (Data Access Objects) e ODBC (Open Database Connectivity).

Per utilizzare `CLongBinary` un oggetto, dichiarare un `CLongBinary` membro dati di campo di tipo nella classe recordset. Questo membro sarà un membro incorporato della classe recordset e verrà costruito quando viene costruito il recordset. Dopo `CLongBinary` aver costruito l'oggetto, il meccanismo di scambio di campi di record (RFX) carica l'oggetto dati da un campo del record corrente nell'origine dati e lo archivia nuovamente nel record quando il record viene aggiornato. RFX esegue una query sull'origine dati per le dimensioni dell'oggetto binario di grandi dimensioni, alloca spazio di archiviazione per tale oggetto (tramite `CLongBinary` il membro dati dell'oggetto) `m_hData` e archivia un `HGLOBAL` handle per i dati in `m_hData`. RFX archivia inoltre le dimensioni effettive dell'oggetto dati nel membro `m_dwDataLength` dati. Utilizzare i dati nell'oggetto tramite `m_hData`, utilizzando le stesse tecniche normalmente `HGLOBAL` utilizzate per modificare i dati archiviati in un handle di Windows.

Quando si elimina il `CLongBinary` recordset, anche l'oggetto incorporato viene eliminato `HGLOBAL` e il relativo distruttore dealloca l'handle di dati.

Per ulteriori informazioni sugli oggetti `CLongBinary`di grandi dimensioni e sull'utilizzo di , vedere gli articoli [Recordset (ODBC)](../../data/odbc/recordset-odbc.md) e Recordset: utilizzo di elementi di dati di [grandi dimensioni (ODBC)](../../data/odbc/recordset-working-with-large-data-items-odbc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CLongBinary`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb_.h

## <a name="clongbinaryclongbinary"></a><a name="clongbinary"></a>CLongBinary::CLongBinary

Costruisce un oggetto `CLongBinary`.

```
CLongBinary();
```

## <a name="clongbinarym_dwdatalength"></a><a name="m_dwdatalength"></a>CLongBinary::m_dwDataLength

Archivia le dimensioni effettive in byte dei `m_hData`dati archiviati nell'handle HGLOBAL in .

```
SQLULEN m_dwDataLength;
```

### <a name="remarks"></a>Osservazioni

Questa dimensione può essere inferiore alla dimensione del blocco di memoria allocato per i dati. Chiamare la funzione [GLobalSize](/windows/win32/api/winbase/nf-winbase-globalsize) Win32 per ottenere le dimensioni allocate.

## <a name="clongbinarym_hdata"></a><a name="m_hdata"></a>CLongBinary::m_hData

Archivia un handle HGLOBAL di Windows per i dati oggetto binario di grandi dimensioni effettivi.

```
HGLOBAL m_hData;
```

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)
