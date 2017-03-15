---
title: "CTable::Open | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CTable.Open"
  - "ATL::CTable::Open"
  - "CTable::Open"
  - "CTable.Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open (metodo)"
ms.assetid: 5d006d95-74d7-4e2b-b243-a33bc53b5455
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CTable::Open
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aprire la tabella.  
  
## Sintassi  
  
```  
  
      HRESULT Open(  
   const CSession& session,  
   LPCWSTR wszTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw ( );  
HRESULT Open(  
   const CSession& session,  
   LPCSTR szTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw ( );  
HRESULT Open(  
   const CSession& session,  
   DBID& dbid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw ( );  
```  
  
#### Parametri  
 `session`  
 \[in\] la sessione per il quale la tabella è aperta.  
  
 *wszTableName*  
 \[in\] nome della tabella da aprire, passato come stringhe Unicode.  
  
 *szTableName*  
 \[in\] nome della tabella da aprire, passato come stringa ANSI.  
  
 *dbid*  
 \[in\] **DBID** della tabella da aprire.  
  
 *pPropSet*  
 \[in\] puntatore A una matrice di strutture che contengono [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) proprietà e valori da impostare.  Vedere [Insiemi di proprietà e gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx)*in OLE DB Programmer's Reference* in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  Il valore predefinito NULL non specifica proprietà.  
  
 `ulPropSets`  
 \[in\] numero di strutture di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) passate nell'argomento *di pPropSet*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Per ulteriori informazioni, vedere [IOpenRowset::OpenRowset](https://msdn.microsoft.com/en-us/library/ms716724.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CTable](../../data/oledb/ctable-class.md)