---
title: "CSession::Open | Microsoft Docs"
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
  - "ATL::CSession::Open"
  - "CSession::Open"
  - "CSession.Open"
  - "ATL.CSession.Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open (metodo)"
ms.assetid: c2050c2c-9817-4857-be49-189f346968f6
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSession::Open
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verrà aperta una nuova sessione per l'oggetto origine dati.  
  
## Sintassi  
  
```  
  
      HRESULT Open(  
   const CDataSource& ds,  
   DBPROPSET *pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw( );  
```  
  
#### Parametri  
 `ds`  
 \[in\] l'origine dati per il quale la sessione deve essere aperta.  
  
 *pPropSet*  
 \[in\] puntatore A una matrice di strutture che contengono [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) proprietà e valori da impostare.  Vedere [Insiemi di proprietà e gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx)*in OLE DB Programmer's Reference* in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ulPropSets`  
 \[in\] numero di strutture di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) passate nell'argomento *di pPropSet*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 È necessario aprire l'oggetto origine dati utilizzando [CDataSource::Open](../../data/oledb/cdatasource-open.md) prima di passarli a `CSession::Open`.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CSession](../../data/oledb/csession-class.md)