---
title: CDBVariant (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27970a7d3854dca398943bfe13c67f6a4e1f92f5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdbvariant-class"></a>CDBVariant (classe)
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
|[CDBVariant::Clear](#clear)|Cancella il `CDBVariant` oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDBVariant::m_dwType](#m_dwtype)|Contiene il tipo di dati del valore attualmente archiviato. Digitare `DWORD`.|  
  
### <a name="public-union-members"></a>Membri pubblici di unioni  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CDBVariant::m_boolVal](#m_boolval)|Contiene un valore di tipo **BOOL**.|  
|[CDBVariant::m_chVal](#m_chval)|Contiene un valore di tipo `unsigned char`.|  
|[CDBVariant::m_dblVal](#m_dblval)|Contiene un valore di tipo **double**.|  
|[CDBVariant::m_fltVal](#m_fltval)|Contiene un valore di tipo **float**.|  
|[CDBVariant::m_iVal](#m_ival)|Contiene un valore di tipo **breve**.|  
|[CDBVariant::m_lVal](#m_lval)|Contiene un valore di tipo **lungo**.|  
|[CDBVariant::m_pbinary](#m_pbinary)|Contiene un puntatore a un oggetto di tipo `CLongBinary`.|  
|[CDBVariant::m_pdate](#m_pdate)|Contiene un puntatore a un oggetto di tipo **TIMESTAMP_STRUCT**.|  
|[CDBVariant::m_pstring](#m_pstring)|Contiene un puntatore a un oggetto di tipo `CString`.|  
|[CDBVariant::m_pstringA](#m_pstringa)|Archivia un puntatore a ASCII [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.|  
|[CDBVariant::m_pstringW](#m_pstringw)|Archivia un puntatore a un'ampia [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.|  
  
## <a name="remarks"></a>Note  
 `CDBVariant` non dispone di una classe basa.  
  
 `CDBVariant` è simile a [COleVariant](../../mfc/reference/colevariant-class.md); tuttavia, `CDBVariant` non utilizza OLE. `CDBVariant` Consente di archiviare un valore senza doversi preoccupare di tipo di dati del valore. `CDBVariant` Registra il tipo di dati del valore corrente, che viene archiviato in un'unione.  
  
 Classe [CRecordset](../../mfc/reference/crecordset-class.md) utilizza `CDBVariant` gli oggetti in tre funzioni membro: `GetFieldValue`, `GetBookmark`, e `SetBookmark`. Ad esempio, `GetFieldValue` consente di recuperare in modo dinamico i dati in una colonna. Perché il tipo di dati della colonna non può essere conosciuto in fase di esecuzione `GetFieldValue` utilizza un `CDBVariant` oggetto usato per archiviare i dati della colonna.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDBVariant`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="cdbvariant"></a>  CDBVariant::CDBVariant  
 Crea un valore NULL `CDBVariant` oggetto.  
  
```  
CDBVariant();
```  
  
### <a name="remarks"></a>Note  
 Imposta il [m_dwType](#m_dwtype) un membro dati **DBVT_NULL**.  
  
##  <a name="clear"></a>  CDBVariant::Clear  
 Chiamare questa funzione membro per cancellare il `CDBVariant` oggetto.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 Se il valore di [m_dwType](#m_dwtype) membro dati è **DBVT_DATE**, **DBVT_STRING**, o **DBVT_BINARY**, **deselezionare**libera la memoria associata al membro di unione di puntatore. **Deselezionare** imposta `m_dwType` alla **DBVT_NULL**.  
  
 Il `CDBVariant` chiamate di distruttore **deselezionare**.  
  
##  <a name="m_boolval"></a>  CDBVariant::m_boolVal  
 Archivia un valore di tipo **BOOL**.  
  
### <a name="remarks"></a>Note  
 Il **m_boolVal** (membro dati) appartiene a un'unione. Prima di accedere a **m_boolVal**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_BOOL**, quindi **m_boolVal** conterrà un valore valido; in caso contrario, l'accesso a **m_boolVal** produrrà risultati inaffidabili.  
  
##  <a name="m_chval"></a>  CDBVariant::m_chVal  
 Archivia un valore di tipo `unsigned char`.  
  
### <a name="remarks"></a>Note  
 Il **m_chVal** (membro dati) appartiene a un'unione. Prima di accedere a **m_chVal**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_UCHAR**, quindi **m_chVal** contiene un valore valido; in caso contrario, l'accesso a **m_chVal** produrrà risultati inaffidabili.  
  
##  <a name="m_dblval"></a>  CDBVariant::m_dblVal  
 Archivia un valore di tipo **double**.  
  
### <a name="remarks"></a>Note  
 Il **m_dblVal** (membro dati) appartiene a un'unione. Prima di accedere a **m_dblVal**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_DOUBLE**, quindi **m_dblVal** contiene un valore valido; in caso contrario, l'accesso a **m_dblVal** produrrà risultati inaffidabili.  
  
##  <a name="m_dwtype"></a>  CDBVariant::m_dwType  
 Questo membro dei dati contiene il tipo di dati per il valore attualmente archiviato nel `CDBVariant` membro dei dati di unione dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Prima di accedere a questo scopo, è necessario controllare il valore di `m_dwType` per determinare quale membro dei dati di unione per accedere. Nella tabella seguente sono elencati i valori possibili per `m_dwType` e il membro di unione di dati corrispondente.  
  
|m_dwType|Membro dati di unione|  
|---------------|-----------------------|  
|**DBVT_NULL**|Nessun membro dell'unione è valido per l'accesso.|  
|**DBVT_BOOL**|[m_boolVal](#m_boolval)|  
|**DBVT_UCHAR**|[m_chVal](#m_chval)|  
|**DBVT_SHORT**|[m_iVal](#m_ival)|  
|**DBVT_LONG**|[m_lVal](#m_lval)|  
|**DBVT_SINGLE**|[m_fltVal](#m_fltval)|  
|**DBVT_DOUBLE**|[m_dblVal](#m_dblval)|  
|**DBVT_DATE**|[m_pdate](#m_pdate)|  
|**DBVT_STRING**|[m_pstring](#m_pstring)|  
|**DBVT_BINARY**|[m_pbinary](#m_pbinary)|  
|**DBVT_ASTRING**|[m_pstringA](#m_pstringa)|  
|**DBVT_WSTRING**|[m_pstringW](#m_pstringw)|  
  
##  <a name="m_fltval"></a>  CDBVariant::m_fltVal  
 Archivia un valore di tipo **float**.  
  
### <a name="remarks"></a>Note  
 Il **m_fltVal** (membro dati) appartiene a un'unione. Prima di accedere a **m_fltVal**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_SINGLE**, quindi **m_fltVal** contiene un valore valido; in caso contrario, l'accesso a **m_fltVal** produrrà risultati inaffidabili.  
  
##  <a name="m_ival"></a>  CDBVariant::m_iVal  
 Archivia un valore di tipo **breve**.  
  
### <a name="remarks"></a>Note  
 Il **m_iVal** (membro dati) appartiene a un'unione. Prima di accedere a **m_iVal**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_SHORT**, quindi **m_iVal** contiene un valore valido; in caso contrario, l'accesso a **m_iVal** produrrà risultati inaffidabili.  
  
##  <a name="m_lval"></a>  CDBVariant::m_lVal  
 Archivia un valore di tipo **lungo**.  
  
### <a name="remarks"></a>Note  
 Il **m_lVal** (membro dati) appartiene a un'unione. Prima di accedere a **m_lVal**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_LONG**, quindi **m_lVal** contiene un valore valido; in caso contrario, l'accesso a **m_lVal** produrrà risultati inaffidabili.  
  
##  <a name="m_pbinary"></a>  CDBVariant::m_pbinary  
 Archivia un puntatore a un oggetto di tipo [CLongBinary](../../mfc/reference/clongbinary-class.md).  
  
### <a name="remarks"></a>Note  
 Il **m_pbinary** (membro dati) appartiene a un'unione. Prima di accedere a **m_pbinary**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_BINARY**, quindi **m_pbinary** contiene un puntatore valido; in caso contrario, l'accesso a **m_pbinary** produrrà risultati inaffidabili.  
  
##  <a name="m_pdate"></a>  CDBVariant::m_pdate  
 Archivia un puntatore a un oggetto di tipo **TIMESTAMP_STRUCT**.  
  
### <a name="remarks"></a>Note  
 Il **m_pdate** (membro dati) appartiene a un'unione. Prima di accedere a **m_pdate**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_DATE**, quindi **m_pdate** contiene un puntatore valido; in caso contrario, l'accesso a **m_pdate** produrrà risultati inaffidabili.  
  
 Per ulteriori informazioni sul **TIMESTAMP_STRUCT** del tipo di dati, vedere l'argomento [tipi di dati C](https://msdn.microsoft.com/library/ms714556.aspx) nell'appendice D il *riferimento per programmatori ODBC* in Windows SDK.  
  
##  <a name="m_pstring"></a>  CDBVariant::m_pstring  
 Archivia un puntatore a un oggetto di tipo [CString](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="remarks"></a>Note  
 Il **m_pstring** (membro dati) appartiene a un'unione. Prima di accedere a **m_pstring**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_STRING**, quindi **m_pstring** contiene un puntatore valido; in caso contrario, l'accesso a **m_pstring** produrrà risultati inaffidabili.  
  
##  <a name="m_pstringa"></a>  CDBVariant::m_pstringA  
 Archivia un puntatore a ASCII [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il **m_pstringA** (membro dati) appartiene a un'unione. Prima di accedere a **m_pstringA**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_ASTRING**, quindi **m_pstringA** contiene un puntatore valido; in caso contrario, l'accesso a **m_pstringA** produrrà risultati inaffidabili.  
  
##  <a name="m_pstringw"></a>  CDBVariant::m_pstringW  
 Archivia un puntatore a un'ampia [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il **m_pstringW** (membro dati) appartiene a un'unione. Prima di accedere a **m_pstringW**, controllare innanzi tutto il valore di [CDBVariant::m_dwType](#m_dwtype). Se `m_dwType` è impostato su **DBVT_WSTRING**, quindi **m_pstringW** contiene un puntatore valido; in caso contrario, l'accesso a **m_pstringW** produrrà risultati inaffidabili.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)
