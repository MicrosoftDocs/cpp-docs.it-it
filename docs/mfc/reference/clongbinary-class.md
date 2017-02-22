---
title: "CLongBinary Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "BLOB"
  - "CLongBinary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB (Binary Large Object - oggetti binari di grandi dimensioni)"
  - "BLOB (Binary Large Object - oggetti binari di grandi dimensioni), CLongBinary (classe)"
  - "CLongBinary (classe)"
ms.assetid: f4320059-aeb4-4ee5-bc2b-25f19d898ef5
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CLongBinary Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Semplifica l'utilizzo degli oggetti dati binari di grandi dimensioni \(spesso chiamati BLOB, o "oggetti binari di grandi dimensioni"\) in un database.  
  
## Sintassi  
  
```  
class CLongBinary : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLongBinary::CLongBinary](../Topic/CLongBinary::CLongBinary.md)|Costruisce un oggetto `CLongBinary`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLongBinary::m\_dwDataLength](../Topic/CLongBinary::m_dwDataLength.md)|Contiene l'effettiva dimensione in byte dell'oggetto dati che l'handle vengono archiviate in `m_hData`.|  
|[CLongBinary::m\_hData](../Topic/CLongBinary::m_hData.md)|Contiene l'handle di Windows `HGLOBAL` all'immagine.|  
  
## Note  
 Ad esempio, un campo del record di una tabella SQL potrebbe contenere una bitmap che rappresenta un'immagine.  Un oggetto `CLongBinary` archivia un oggetto e tenere traccia della relativa dimensione.  
  
> [!NOTE]
>  In genere è preferibile pratica ora possibile utilizzare [CByteArray](../../mfc/reference/cbytearray-class.md) combinazione con la funzione [DFX\_Binary](../Topic/DFX_Binary.md).  È comunque possibile utilizzare `CLongBinary`, ma in generale `CByteArray` fornisce ulteriori funzionalità in Win32, poiché non è più presente la limitazione di dimensione rilevata e il 16 bit `CByteArray`.  Il consiglio si applica alla programmazione con oggetti di accesso ai dati \(DAO\) e ODBC \(open database connectivity\).  
  
 Per utilizzare un oggetto `CLongBinary`, dichiarare un membro dati di campo di tipo `CLongBinary` nella classe recordset.  Questo membro è incorporato un membro di una classe di recordset e sarà costruito quando il recordset.  Dopo che l'oggetto `CLongBinary` viene costruito, il meccanismo di trasferimento di campi di Record viene caricato l'oggetto dati da un campo nel record corrente nell'origine dati e lo memorizza nel record quando questo viene aggiornato.  RFX interroga l'origine dati per la dimensione dell'oggetto binario di grandi dimensioni, alloca l'archiviazione per \(tramite il membro dati `m_hData` dell'oggetto `CLongBinary` \) e gli archivi handle `HGLOBAL` ai dati in `m_hData`.  RFX archivia dimensione effettiva dell'oggetto dati nel membro dati `m_dwDataLength`.  Utilizzare i dati nell'oggetto con `m_hData`, utilizzando le stesse tecniche generalmente utilizzare per modificare i dati archiviati negli handle di Windows `HGLOBAL`.  
  
 Quando si elimina il recordset, l'oggetto incorporato `CLongBinary` viene eliminato e il relativo distruttore libera l'handle di dati `HGLOBAL`.  
  
 Per ulteriori informazioni su oggetti di grandi dimensioni e l'utilizzo `CLongBinary`, vedere gli articoli [recordset \(ODBC\)](../../data/odbc/recordset-odbc.md) e [recordset: Gestione di dati di grandi dimensioni \(ODBC\)](../../data/odbc/recordset-working-with-large-data-items-odbc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CLongBinary`  
  
## Requisiti  
 **Header:** afxdb\_.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)