---
description: 'Altre informazioni su: classe CDBVariant'
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
ms.openlocfilehash: 54fc432998a15d79ab51165b280e4cc4ced94455
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247942"
---
# <a name="cdbvariant-class"></a>Classe CDBVariant

Rappresenta un tipo di dati Variant per le classi ODBC MFC.

## <a name="syntax"></a>Sintassi

```
class CDBVariant
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDBVariant:: CDBVariant](#cdbvariant)|Costruisce un oggetto `CDBVariant`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDBVariant:: Clear](#clear)|Cancella l' `CDBVariant` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDBVariant:: m_dwType](#m_dwtype)|Contiene il tipo di dati del valore attualmente archiviato. Digitare `DWORD`.|

### <a name="public-union-members"></a>Membri Unione pubblica

|Nome|Description|
|----------|-----------------|
|[CDBVariant:: m_boolVal](#m_boolval)|Contiene un valore di tipo **bool**.|
|[CDBVariant:: m_chVal](#m_chval)|Contiene un valore di tipo **`unsigned char`** .|
|[CDBVariant:: m_dblVal](#m_dblval)|Contiene un valore di tipo **`double`** .|
|[CDBVariant:: m_fltVal](#m_fltval)|Contiene un valore di tipo **`float`** .|
|[CDBVariant:: m_iVal](#m_ival)|Contiene un valore di tipo **`short`** .|
|[CDBVariant:: m_lVal](#m_lval)|Contiene un valore di tipo **`long`** .|
|[CDBVariant:: m_pbinary](#m_pbinary)|Contiene un puntatore a un oggetto di tipo `CLongBinary` .|
|[CDBVariant:: m_pdate](#m_pdate)|Contiene un puntatore a un oggetto di tipo **TIMESTAMP_STRUCT**.|
|[CDBVariant:: m_pstring](#m_pstring)|Contiene un puntatore a un oggetto di tipo `CString` .|
|[CDBVariant:: m_pstringA](#m_pstringa)|Archivia un puntatore a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) ASCII.|
|[CDBVariant:: m_pstringW](#m_pstringw)|Archivia un puntatore a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) di tipo Wide.|

## <a name="remarks"></a>Commenti

`CDBVariant` non dispone di una classe base.

`CDBVariant` è simile a [COleVariant](../../mfc/reference/colevariant-class.md); Tuttavia, non `CDBVariant` utilizza OLE. `CDBVariant` consente di archiviare un valore senza doversi preoccupare del tipo di dati del valore. `CDBVariant` tiene traccia del tipo di dati del valore corrente, memorizzato in un'Unione.

La classe [CRecordset](../../mfc/reference/crecordset-class.md) utilizza `CDBVariant` oggetti in tre funzioni membro: `GetFieldValue` , `GetBookmark` e `SetBookmark` . Ad esempio, `GetFieldValue` consente di recuperare dinamicamente i dati in una colonna. Poiché il tipo di dati della colonna potrebbe non essere noto in fase di esecuzione, in `GetFieldValue` viene utilizzato un `CDBVariant` oggetto per archiviare i dati della colonna.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDBVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="cdbvariantcdbvariant"></a><a name="cdbvariant"></a> CDBVariant:: CDBVariant

Crea un `CDBVariant` oggetto null.

```
CDBVariant();
```

### <a name="remarks"></a>Commenti

Imposta il membro dati [m_dwType](#m_dwtype) su DBVT_NULL.

## <a name="cdbvariantclear"></a><a name="clear"></a> CDBVariant:: Clear

Chiamare questa funzione membro per cancellare l' `CDBVariant` oggetto.

```cpp
void Clear();
```

### <a name="remarks"></a>Commenti

Se il valore del membro dati [m_dwType](#m_dwtype) è DBVT_DATE, DBVT_STRING o DBVT_BINARY, `Clear` libera la memoria associata al membro del puntatore di Unione. `Clear` imposta `m_dwType` su DBVT_NULL.

Il `CDBVariant` distruttore chiama `Clear` .

## <a name="cdbvariantm_boolval"></a><a name="m_boolval"></a> CDBVariant:: m_boolVal

Archivia un valore di tipo BOOL.

### <a name="remarks"></a>Commenti

Il `m_boolVal` membro dati appartiene a un'Unione. Prima di accedere `m_boolVal` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_BOOL, conterrà `m_boolVal` un valore valido. in caso contrario, l'accesso `m_boolVal` produrrà risultati non affidabili.

## <a name="cdbvariantm_chval"></a><a name="m_chval"></a> CDBVariant:: m_chVal

Archivia un valore di tipo **`unsigned char`** .

### <a name="remarks"></a>Commenti

Il `m_chVal` membro dati appartiene a un'Unione. Prima di accedere `m_chVal` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_UCHAR, `m_chVal` contiene un valore valido. in caso contrario, l'accesso a `m_chVal` produrrà risultati non affidabili.

## <a name="cdbvariantm_dblval"></a><a name="m_dblval"></a> CDBVariant:: m_dblVal

Archivia un valore di tipo **`double`** .

### <a name="remarks"></a>Commenti

Il `m_dblVal` membro dati appartiene a un'Unione. Prima di accedere `m_dblVal` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_DOUBLE, `m_dblVal` contiene un valore valido. in caso contrario, l'accesso a `m_dblVal` produrrà risultati non affidabili.

## <a name="cdbvariantm_dwtype"></a><a name="m_dwtype"></a> CDBVariant:: m_dwType

Questo membro dati contiene il tipo di dati per il valore attualmente archiviato nel `CDBVariant` membro dati Unione dell'oggetto.

### <a name="remarks"></a>Commenti

Prima di accedere a questa Unione, è necessario controllare il valore di `m_dwType` per determinare il membro dati di Unione a cui accedere. Nella tabella seguente sono elencati i valori possibili per `m_dwType` e il membro dati di Unione corrispondente.

|m_dwType|Membro dati Unione|
|---------------|-----------------------|
|DBVT_NULL|Nessun membro Union è valido per l'accesso.|
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

## <a name="cdbvariantm_fltval"></a><a name="m_fltval"></a> CDBVariant:: m_fltVal

Archivia un valore di tipo **`float`** .

### <a name="remarks"></a>Commenti

Il `m_fltVal` membro dati appartiene a un'Unione. Prima di accedere `m_fltVal` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_SINGLE, `m_fltVal` contiene un valore valido. in caso contrario, l'accesso a `m_fltVal` produrrà risultati non affidabili.

## <a name="cdbvariantm_ival"></a><a name="m_ival"></a> CDBVariant:: m_iVal

Archivia un valore di tipo **`short`** .

### <a name="remarks"></a>Commenti

Il `m_iVal` membro dati appartiene a un'Unione. Prima di accedere `m_iVal` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_SHORT, `m_iVal` contiene un valore valido. in caso contrario, l'accesso a `m_iVal` produrrà risultati non affidabili.

## <a name="cdbvariantm_lval"></a><a name="m_lval"></a> CDBVariant:: m_lVal

Archivia un valore di tipo **`long`** .

### <a name="remarks"></a>Commenti

Il `m_lVal` membro dati appartiene a un'Unione. Prima di accedere `m_lVal` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_LONG, `m_lVal` contiene un valore valido. in caso contrario, l'accesso a `m_lVal` produrrà risultati non affidabili.

## <a name="cdbvariantm_pbinary"></a><a name="m_pbinary"></a> CDBVariant:: m_pbinary

Archivia un puntatore a un oggetto di tipo [CLongBinary](../../mfc/reference/clongbinary-class.md).

### <a name="remarks"></a>Commenti

Il `m_pbinary` membro dati appartiene a un'Unione. Prima di accedere `m_pbinary` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_BINARY, `m_pbinary` contiene un puntatore valido. in caso contrario, l'accesso `m_pbinary` produrrà risultati non affidabili.

## <a name="cdbvariantm_pdate"></a><a name="m_pdate"></a> CDBVariant:: m_pdate

Archivia un puntatore a un oggetto di tipo TIMESTAMP_STRUCT.

### <a name="remarks"></a>Commenti

Il `m_pdate` membro dati appartiene a un'Unione. Prima di accedere `m_pdate` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_DATE, `m_pdate` contiene un puntatore valido. in caso contrario, l'accesso `m_pdate` produrrà risultati non affidabili.

Per ulteriori informazioni sul tipo di dati TIMESTAMP_STRUCT, vedere l'argomento [tipi di dati C](/sql/odbc/reference/appendixes/c-data-types) nell'Appendice D di *ODBC Programmer ' s Reference* nel Windows SDK.

## <a name="cdbvariantm_pstring"></a><a name="m_pstring"></a> CDBVariant:: m_pstring

Archivia un puntatore a un oggetto di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### <a name="remarks"></a>Commenti

Il `m_pstring` membro dati appartiene a un'Unione. Prima di accedere `m_pstring` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_STRING, `m_pstring` contiene un puntatore valido. in caso contrario, l'accesso `m_pstring` produrrà risultati non affidabili.

## <a name="cdbvariantm_pstringa"></a><a name="m_pstringa"></a> CDBVariant:: m_pstringA

Archivia un puntatore a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) ASCII.

### <a name="remarks"></a>Commenti

Il `m_pstringA` membro dati appartiene a un'Unione. Prima di accedere `m_pstringA` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_ASTRING, `m_pstringA` contiene un puntatore valido. in caso contrario, l'accesso `m_pstringA` produrrà risultati non affidabili.

## <a name="cdbvariantm_pstringw"></a><a name="m_pstringw"></a> CDBVariant:: m_pstringW

Archivia un puntatore a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) di tipo Wide.

### <a name="remarks"></a>Commenti

Il `m_pstringW` membro dati appartiene a un'Unione. Prima di accedere `m_pstringW` a, controllare innanzitutto il valore di [CDBVariant:: m_dwType](#m_dwtype). Se `m_dwType` è impostato su DBVT_WSTRING, `m_pstringW` contiene un puntatore valido. in caso contrario, l'accesso `m_pstringW` produrrà risultati non affidabili.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
