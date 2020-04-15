---
title: Classe CDBVariant
ms.date: 11/04/2016
f1_keywords:
- CDBVariant
- AFXDB/CDBVariant
- AFXDB/CDBVariant::CDBVariant
- AFXDB/CDBVariant::Clear
- AFXDB/CDBVariant::m_dwType
- AFXDB/CDBVariant::m_boolVal
- AFXDB/CDBVariant::m_chVal
- AFXDB/CDBVariant::m_dblVal
- AFXDB/CDBVariant::m_fltVal
- AFXDB/CDBVariant::m_iVal
- AFXDB/CDBVariant::m_lVal
- AFXDB/CDBVariant::m_pbinary
- AFXDB/CDBVariant::m_pdate
- AFXDB/CDBVariant::m_pstring
- AFXDB/CDBVariant::m_pstringA
- AFXDB/CDBVariant::m_pstringW
helpviewer_keywords:
- CDBVariant [MFC], CDBVariant
- CDBVariant [MFC], Clear
- CDBVariant [MFC], m_dwType
- CDBVariant [MFC], m_boolVal
- CDBVariant [MFC], m_chVal
- CDBVariant [MFC], m_dblVal
- CDBVariant [MFC], m_fltVal
- CDBVariant [MFC], m_iVal
- CDBVariant [MFC], m_lVal
- CDBVariant [MFC], m_pbinary
- CDBVariant [MFC], m_pdate
- CDBVariant [MFC], m_pstring
- CDBVariant [MFC], m_pstringA
- CDBVariant [MFC], m_pstringW
ms.assetid: de23609c-c560-4b24-bd6b-9d8903fd5b49
ms.openlocfilehash: 3c13c1a965014af271ce2911505742d9a50eedd7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376458"
---
# <a name="cdbvariant-class"></a>Classe CDBVariant

Rappresenta un tipo di dati Variant per le classi ODBC MFC.

## <a name="syntax"></a>Sintassi

```
class CDBVariant
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDBVariant::CDBVariant](#cdbvariant)|Costruisce un oggetto `CDBVariant`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDBVariant::Clear](#clear)|Cancella l'oggetto. `CDBVariant`|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDBVariant::m_dwType](#m_dwtype)|Contiene il tipo di dati del valore attualmente archiviato. Digitare `DWORD`.|

### <a name="public-union-members"></a>Membri dell'Unione pubblica

|Nome|Descrizione|
|----------|-----------------|
|[CDBVariant::m_boolVal](#m_boolval)|Contiene un valore di tipo **BOOL**.|
|[CDBVariant::m_chVal](#m_chval)|Contiene un valore di tipo **unsigned char**.|
|[CDBVariant::m_dblVal](#m_dblval)|Contiene un valore di tipo **double**.|
|[CDBVariant::m_fltVal](#m_fltval)|Contiene un valore di tipo **float**.|
|[CDBVariant::m_iVal](#m_ival)|Contiene un valore di tipo **short**.|
|[CDBVariant::m_lVal](#m_lval)|Contiene un valore di tipo **long**.|
|[CDBVariant::m_pbinary](#m_pbinary)|Contiene un puntatore a `CLongBinary`un oggetto di tipo .|
|[CDBVariant::m_pdate](#m_pdate)|Contiene un puntatore a un oggetto di tipo **TIMESTAMP_STRUCT**.|
|[CDBVariant::m_pstring](#m_pstring)|Contiene un puntatore a `CString`un oggetto di tipo .|
|[CDBVariant::m_pstringA](#m_pstringa)|Archivia un puntatore a un oggetto [ASCII CString.](../../atl-mfc-shared/reference/cstringt-class.md)|
|[CDBVariant::m_pstringW](#m_pstringw)|Archivia un puntatore a un wide [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.|

## <a name="remarks"></a>Osservazioni

`CDBVariant`non dispone di una classe base.

`CDBVariant`è simile a [COleVariant](../../mfc/reference/colevariant-class.md); tuttavia, `CDBVariant` non utilizza OLE. `CDBVariant`consente di archiviare un valore senza preoccuparsi del tipo di dati del valore. `CDBVariant`tiene traccia del tipo di dati del valore corrente, memorizzato in un'unione.

La classe [CRecordset](../../mfc/reference/crecordset-class.md) `CDBVariant` utilizza oggetti `GetFieldValue`in `GetBookmark`tre `SetBookmark`funzioni membro: , , e . Ad esempio, `GetFieldValue` consente di recuperare dinamicamente i dati in una colonna. Poiché il tipo di dati della colonna `GetFieldValue` potrebbe `CDBVariant` non essere noto in fase di esecuzione, utilizza un oggetto per archiviare i dati della colonna.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDBVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="cdbvariantcdbvariant"></a><a name="cdbvariant"></a>CDBVariant::CDBVariant

Crea un `CDBVariant` oggetto NULL.

```
CDBVariant();
```

### <a name="remarks"></a>Osservazioni

Imposta il membro dati [m_dwType](#m_dwtype) su DBVT_NULL.

## <a name="cdbvariantclear"></a><a name="clear"></a>CDBVariant::Clear

Chiamare questa funzione membro `CDBVariant` per cancellare l'oggetto.

```
void Clear();
```

### <a name="remarks"></a>Osservazioni

Se il valore del membro dati [m_dwType](#m_dwtype) è `Clear` DBVT_DATE, DBVT_STRING o DBVT_BINARY, libera la memoria associata al membro del puntatore di unione. `Clear`è `m_dwType` impostato su DBVT_NULL.

Il `CDBVariant` distruttore `Clear`chiama .

## <a name="cdbvariantm_boolval"></a><a name="m_boolval"></a>CDBVariant::m_boolVal

Archivia un valore di tipo BOOL.

### <a name="remarks"></a>Osservazioni

Il `m_boolVal` membro dati appartiene a un'unione. Prima di `m_boolVal`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_boolVal` DBVT_BOOL, conterrà un valore valido. in caso `m_boolVal` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_chval"></a><a name="m_chval"></a>CDBVariant::m_chVal

Archivia un valore di tipo **unsigned char**.

### <a name="remarks"></a>Osservazioni

Il `m_chVal` membro dati appartiene a un'unione. Prima di `m_chVal`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_chVal` DBVT_UCHAR, contiene un valore valido. in caso `m_chVal` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_dblval"></a><a name="m_dblval"></a>CDBVariant::m_dblVal

Archivia un valore di tipo **double**.

### <a name="remarks"></a>Osservazioni

Il `m_dblVal` membro dati appartiene a un'unione. Prima di `m_dblVal`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_dblVal` DBVT_DOUBLE, contiene un valore valido. in caso `m_dblVal` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_dwtype"></a><a name="m_dwtype"></a>CDBVariant::m_dwType

Questo membro dati contiene il tipo di dati `CDBVariant` per il valore attualmente archiviato nel membro dati di unione dell'oggetto.

### <a name="remarks"></a>Osservazioni

Prima di accedere a questa unione, `m_dwType` è necessario controllare il valore di per determinare a quale membro dati dell'unione accedere. Nella tabella seguente sono `m_dwType` elencati i valori possibili per e il membro dati di unione corrispondente.

|m_dwType|Membro dati dell'Unione|
|---------------|-----------------------|
|DBVT_NULL|Nessun membro unione è valido per l'accesso.|
|DBVT_BOOL|[m_boolVal](#m_boolval)|
|DBVT_UCHAR|[m_chVal](#m_chval)|
|DBVT_SHORT|[m_iVal](#m_ival)|
|DBVT_LONG|[m_lVal](#m_lval)|
|DBVT_SINGLE|[m_fltVal](#m_fltval)|
|DBVT_DOUBLE|[m_dblVal](#m_dblval)|
|DBVT_DATE|[m_pdate](#m_pdate)|
|DBVT_STRING|[m_pstring](#m_pstring)|
|DBVT_BINARY|[m_pbinary](#m_pbinary)|
|DBVT_ASTRING|[m_pstringA](#m_pstringa)|
|DBVT_WSTRING|[m_pstringW](#m_pstringw)|

## <a name="cdbvariantm_fltval"></a><a name="m_fltval"></a>CDBVariant::m_fltVal

Archivia un valore di tipo **float**.

### <a name="remarks"></a>Osservazioni

Il `m_fltVal` membro dati appartiene a un'unione. Prima di `m_fltVal`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_fltVal` DBVT_SINGLE, contiene un valore valido. in caso `m_fltVal` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_ival"></a><a name="m_ival"></a>CDBVariant::m_iVal

Archivia un valore di tipo **short**.

### <a name="remarks"></a>Osservazioni

Il `m_iVal` membro dati appartiene a un'unione. Prima di `m_iVal`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_iVal` DBVT_SHORT, contiene un valore valido. in caso `m_iVal` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_lval"></a><a name="m_lval"></a>CDBVariant::m_lVal

Archivia un valore di tipo **long**.

### <a name="remarks"></a>Osservazioni

Il `m_lVal` membro dati appartiene a un'unione. Prima di `m_lVal`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_lVal` DBVT_LONG, contiene un valore valido. in caso `m_lVal` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_pbinary"></a><a name="m_pbinary"></a>CDBVariant::m_pbinary

Archivia un puntatore a un oggetto di tipo [CLongBinary](../../mfc/reference/clongbinary-class.md).

### <a name="remarks"></a>Osservazioni

Il `m_pbinary` membro dati appartiene a un'unione. Prima di `m_pbinary`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_pbinary` DBVT_BINARY, contiene un puntatore valido; in caso `m_pbinary` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_pdate"></a><a name="m_pdate"></a>CDBVariant::m_pdate

Archivia un puntatore a un oggetto di tipo TIMESTAMP_STRUCT.

### <a name="remarks"></a>Osservazioni

Il `m_pdate` membro dati appartiene a un'unione. Prima di `m_pdate`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_pdate` DBVT_DATE, contiene un puntatore valido; in caso `m_pdate` contrario, l'accesso produrrà risultati inaffidabili.

Per ulteriori informazioni sul tipo di dati TIMESTAMP_STRUCT, vedere l'argomento [Tipi di dati C](/sql/odbc/reference/appendixes/c-data-types) nell'Appendice D di ODBC *Programmer's Reference* in Windows SDK.

## <a name="cdbvariantm_pstring"></a><a name="m_pstring"></a>CDBVariant::m_pstring

Archivia un puntatore a un oggetto di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Osservazioni

Il `m_pstring` membro dati appartiene a un'unione. Prima di `m_pstring`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_pstring` DBVT_STRING, contiene un puntatore valido; in caso `m_pstring` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_pstringa"></a><a name="m_pstringa"></a>CDBVariant::m_pstringA

Archivia un puntatore a un oggetto [ASCII CString.](../../atl-mfc-shared/reference/cstringt-class.md)

### <a name="remarks"></a>Osservazioni

Il `m_pstringA` membro dati appartiene a un'unione. Prima di `m_pstringA`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_pstringA` DBVT_ASTRING, contiene un puntatore valido; in caso `m_pstringA` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="cdbvariantm_pstringw"></a><a name="m_pstringw"></a>CDBVariant::m_pstringW

Archivia un puntatore a un wide [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Il `m_pstringW` membro dati appartiene a un'unione. Prima di `m_pstringW`accedere , controllare il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su `m_pstringW` DBVT_WSTRING, contiene un puntatore valido; in caso `m_pstringW` contrario, l'accesso produrrà risultati inaffidabili.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)
