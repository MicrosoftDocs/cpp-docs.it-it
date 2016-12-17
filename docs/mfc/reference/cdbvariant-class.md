---
title: "CDBVariant Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDBVariant"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBVariant (classe)"
  - "Variant (tipo di dati), ODBC"
ms.assetid: de23609c-c560-4b24-bd6b-9d8903fd5b49
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBVariant Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un tipo di dati variant per le classi ODBC MFC.  
  
## Sintassi  
  
```  
class CDBVariant  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDBVariant::CDBVariant](../Topic/CDBVariant::CDBVariant.md)|Costruisce un oggetto `CDBVariant`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDBVariant::Clear](../Topic/CDBVariant::Clear.md)|Rimuove l'oggetto `CDBVariant`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDBVariant::m\_dwType](../Topic/CDBVariant::m_dwType.md)|Contiene il tipo di dati del valore corrente archiviato.  Digitare `DWORD`.|  
  
### Sindacalisti pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDBVariant::m\_boolVal](../Topic/CDBVariant::m_boolVal.md)|Contiene un valore di tipo **BOOL**.|  
|[CDBVariant::m\_chVal](../Topic/CDBVariant::m_chVal.md)|Contiene un valore di tipo `unsigned char`.|  
|[CDBVariant::m\_dblVal](../Topic/CDBVariant::m_dblVal.md)|Contiene un valore di tipo **double**.|  
|[CDBVariant::m\_fltVal](../Topic/CDBVariant::m_fltVal.md)|Contiene un valore di tipo **float**.|  
|[CDBVariant::m\_iVal](../Topic/CDBVariant::m_iVal.md)|Contiene un valore di tipo **short**.|  
|[CDBVariant::m\_lVal](../Topic/CDBVariant::m_lVal.md)|Contiene un valore di tipo **long**.|  
|[CDBVariant::m\_pbinary](../Topic/CDBVariant::m_pbinary.md)|Contiene un puntatore a un oggetto di tipo `CLongBinary`.|  
|[CDBVariant::m\_pdate](../Topic/CDBVariant::m_pdate.md)|Contiene un puntatore a un oggetto di tipo **TIMESTAMP\_STRUCT**.|  
|[CDBVariant::m\_pstring](../Topic/CDBVariant::m_pstring.md)|Contiene un puntatore a un oggetto di tipo `CString`.|  
|[CDBVariant::m\_pstringA](../Topic/CDBVariant::m_pstringA.md)|Include un puntatore a un oggetto ASCII [CString](../../atl-mfc-shared/reference/cstringt-class.md).|  
|[CDBVariant::m\_pstringW](../Topic/CDBVariant::m_pstringW.md)|Include un puntatore a un intero oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md).|  
  
## Note  
 `CDBVariant` non dispone di una classe base.  
  
 `CDBVariant` è simile a [COleVariant](../../mfc/reference/colevariant-class.md); tuttavia, `CDBVariant` non utilizza OLE.  `CDBVariant` consente di memorizzare un valore senza preoccuparsi del tipo di dati del valore.  `CDBVariant` tenere traccia del tipo di dati del valore corrente, archiviato in un'unione.  
  
 La classe [CRecordset](../../mfc/reference/crecordset-class.md) utilizza oggetti `CDBVariant` nelle funzioni di tre membri: `GetFieldValue`, `GetBookmark`e `SetBookmark`.  Ad esempio, `GetFieldValue` consente ai dati in modo dinamico di recupero di una colonna.  Poiché il tipo di dati della colonna non può essere noto in fase di esecuzione, `GetFieldValue` utilizza un oggetto `CDBVariant` per archiviare i dati della colonna.  
  
## Gerarchia di ereditarietà  
 `CDBVariant`  
  
## Requisiti  
 **Header:** afxdb.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CRecordset::GetFieldValue](../Topic/CRecordset::GetFieldValue.md)   
 [CRecordset::GetBookmark](../Topic/CRecordset::GetBookmark.md)   
 [CRecordset::SetBookmark](../Topic/CRecordset::SetBookmark.md)