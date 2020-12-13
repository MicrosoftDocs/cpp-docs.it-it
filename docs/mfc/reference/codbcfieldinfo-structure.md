---
description: 'Altre informazioni su: struttura CODBCFieldInfo'
title: Struttura CODBCFieldInfo
ms.date: 11/04/2016
f1_keywords:
- CODBCFieldInfo
helpviewer_keywords:
- ODBC [MFC], data source information
- CODBCFieldInfo structure [MFC]
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
ms.openlocfilehash: 7cd7072719bec46cfbfaeb02c5c86d714c4de13c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331411"
---
# <a name="codbcfieldinfo-structure"></a>Struttura CODBCFieldInfo

La `CODBCFieldInfo` struttura contiene informazioni sui campi in un'origine dati ODBC.

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
Tipo di dati SQL del campo. Può trattarsi di un tipo di dati SQL ODBC o di un tipo di dati SQL specifico del driver. Per un elenco dei tipi di dati ODBC SQL validi, vedere "tipi di dati SQL" nella Windows SDK. Per informazioni sui tipi di dati SQL specifici del driver, vedere la documentazione del driver.

*m_nPrecision*<br/>
Precisione massima del campo. Per informazioni dettagliate, vedere "precisione, scala, lunghezza e dimensioni di visualizzazione" nel Windows SDK.

*m_nScale*<br/>
Scala del campo. Per informazioni dettagliate, vedere "precisione, scala, lunghezza e dimensioni di visualizzazione" nel Windows SDK.

*m_nNullability*<br/>
Indica se il campo accetta un valore null. Può essere uno dei due valori seguenti: SQL_NULLABLE se il campo accetta valori null oppure SQL_NO_NULLS se il campo non accetta valori null.

## <a name="remarks"></a>Commenti

Per recuperare queste informazioni, chiamare [CRecordset:: GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo).

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRecordset:: GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo)<br/>
[CRecordset:: GetFieldValue](../../mfc/reference/crecordset-class.md#getfieldvalue)
