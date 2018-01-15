---
title: Struttura CODBCFieldInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CODBCFieldInfo
dev_langs: C++
helpviewer_keywords:
- ODBC [MFC], data source information
- CODBCFieldInfo structure [MFC]
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5b2b5d707b9915aa0d5e3fd1362746fe30a99a22
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 `m_strName`  
 Nome del campo.  
  
 *m_nSQLType*  
 Il tipo di dati SQL del campo. Può trattarsi di un tipo di dati SQL ODBC o un tipo di dati specifici del driver SQL. Per un elenco dei tipi di dati ODBC SQL validi, vedere "Tipi di dati di SQL" in Windows SDK. Per informazioni sui tipi di dati specifici del driver SQL, vedere la documentazione del driver.  
  
 *m_nPrecision*  
 La precisione massima del campo. Per informazioni dettagliate, vedere "Precisione, scala, lunghezza e dimensioni di visualizzazione" in Windows SDK.  
  
 *m_nScale*  
 La scala del campo. Per informazioni dettagliate, vedere "Precisione, scala, lunghezza e dimensioni di visualizzazione" in Windows SDK.  
  
 *m_nNullability*  
 Se il campo accetta un valore Null. Può trattarsi di uno dei due valori: **SQL_NULLABLE** se il campo ammette valori Null, o **SQL_NO_NULLS** se il campo non accetta valori Null.  
  
## <a name="remarks"></a>Note  
 Per recuperare queste informazioni, chiamare [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo)   
 [CRecordset:: GetFieldValue](../../mfc/reference/crecordset-class.md#getfieldvalue)


