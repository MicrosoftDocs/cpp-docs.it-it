---
title: "Struttura CODBCFieldInfo | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CODBCFieldInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CODBCFieldInfo (struttura)"
  - "ODBC, informazioni sull'origine dati"
ms.assetid: 92598b4f-facc-4108-b282-63a179ff79ab
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CODBCFieldInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CODBCFieldInfo` contiene informazioni sui campi in un'origine dati ODBC.  
  
## Sintassi  
  
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
  
#### Parametri  
 `m_strName`  
 Nome del campo.  
  
 *m\_nSQLType*  
 Il tipo di dati SQL del campo.  Può trattarsi di un tipo di dati SQL ODBC o un tipo di dati SQL driver\- specifico.  Per un elenco di tipi di dati SQL validi ODBC, vedere "tipi di dati SQL" in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  Per informazioni sui tipi di dati SQL driver\- specifici, vedere la documentazione del driver.  
  
 *m\_nPrecision*  
 La precisione massima del campo.  Per informazioni dettagliate, vedere la precisione, scala, la lunghezza e le dimensioni di visualizzazione" in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *m\_nScale*  
 La scala del campo.  Per informazioni dettagliate, vedere la precisione, scala, la lunghezza e le dimensioni di visualizzazione" in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *m\_nNullability*  
 Se il campo accetta un valore null.  Ciò può essere di due valori: **SQL\_NULLABLE** se il campo accetta valori null, o **SQL\_NO\_NULLS** se il campo non accetta valori NULL.  
  
## Note  
 Per recuperare le informazioni, chiamare [CRecordset::GetODBCFieldInfo](../Topic/CRecordset::GetODBCFieldInfo.md).  
  
## Requisiti  
 **Intestazione:** afxdb.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRecordset::GetODBCFieldInfo](../Topic/CRecordset::GetODBCFieldInfo.md)   
 [CRecordset::GetFieldValue](../Topic/CRecordset::GetFieldValue.md)