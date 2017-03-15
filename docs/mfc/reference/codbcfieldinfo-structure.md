---
title: Struttura CODBCFieldInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CODBCFieldInfo
dev_langs:
- C++
helpviewer_keywords:
- ODBC, data source information
- CODBCFieldInfo structure
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 1080eb323c599014d84acab94aee4622795fdb96
ms.lasthandoff: 02/24/2017

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
 Il tipo di dati SQL del campo. Può trattarsi di un tipo di dati SQL ODBC o un tipo di dati specifici del driver SQL. Per un elenco dei tipi di dati SQL ODBC validi, vedere "Tipi di dati SQL" di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Per informazioni sui tipi di dati specifici del driver SQL, vedere la documentazione del driver.  
  
 *m_nPrecision*  
 La precisione massima del campo. Per informazioni dettagliate, vedere "Precisione, scala, lunghezza e dimensioni di visualizzazione" nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *m_nScale*  
 La scala del campo. Per informazioni dettagliate, vedere "Precisione, scala, lunghezza e dimensioni di visualizzazione" nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *m_nNullability*  
 Se il campo accetta un valore Null. Può trattarsi di uno dei due valori: **SQL_NULLABLE** se il campo accetta valori Null, o **SQL_NO_NULLS** se il campo non accetta valori Null.  
  
## <a name="remarks"></a>Note  
 Per recuperare queste informazioni, chiamare [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRecordset::GetODBCFieldInfo](../../mfc/reference/crecordset-class.md#getodbcfieldinfo)   
 [CRecordset:: GetFieldValue](../../mfc/reference/crecordset-class.md#getfieldvalue)



