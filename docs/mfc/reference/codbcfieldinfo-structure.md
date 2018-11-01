---
title: Struttura CODBCFieldInfo
ms.date: 11/04/2016
f1_keywords:
- CODBCFieldInfo
helpviewer_keywords:
- ODBC [MFC], data source information
- CODBCFieldInfo structure [MFC]
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
ms.openlocfilehash: 5ad7d8f710c763b25771e3d1fa8839b5b64802ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655273"
---
# <a name="codbcfieldinfo-structure"></a>Struttura CODBCFieldInfo

Il `CODBCFieldInfo` struttura contiene informazioni sui campi in un'origine dati ODBC.

## <a name="syntax"></a>Sintassi

```
struct CODBCFieldInfo
{
    CString m_strName;
    SWORD m_nSQLType;
    UDWORD m_nPrecision;
    SWORD m_nScale;
    SWORD m_nNullability;
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Nome del campo.

*m_nSQLType*<br/>
Il tipo di dati SQL del campo. Può trattarsi di un tipo di dati SQL ODBC o un tipo di dati specifici del driver SQL. Per un elenco di tipi di dati SQL ODBC validi, vedere "Tipi di dati di SQL" in Windows SDK. Per informazioni sui tipi di dati specifici del driver SQL, vedere la documentazione del driver.

*m_nPrecision*<br/>
La precisione massima del campo. Per informazioni dettagliate, vedere "Precisione, scala, lunghezza e dimensioni di visualizzazione" di Windows SDK.

*m_nScale*<br/>
Scala del campo. Per informazioni dettagliate, vedere "Precisione, scala, lunghezza e dimensioni di visualizzazione" di Windows SDK.

*m_nNullability*<br/>
Indica se il campo accetta un valore Null. Può trattarsi di uno dei due valori: SQL_NULLABLE se il campo accetta valori Null o SQL_NO_NULLS se il campo non accetta valori Null.

## <a name="remarks"></a>Note

Per recuperare queste informazioni, chiamare [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo).

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo)<br/>
[CRecordset:: GetFieldValue](../../mfc/reference/crecordset-class.md#getfieldvalue)

