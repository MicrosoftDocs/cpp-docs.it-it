---
title: "CDBPropSet::AddProperty | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDBPropSet::AddProperty"
  - "CDBPropSet.AddProperty"
  - "AddProperty"
  - "ATL::CDBPropSet::AddProperty"
  - "ATL.CDBPropSet.AddProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddProperty (metodo)"
ms.assetid: dc9539d3-1ee4-40f3-9281-2068e6d65e93
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBPropSet::AddProperty
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge una proprietà alla raccolta di proprietà.  
  
## Sintassi  
  
```  
  
      bool AddProperty(   
   DWORD dwPropertyID,   
   const VARIANT& var,   
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
) throw( );  
bool AddProperty(  
   DWORD dwPropertyID,  
   LPCSTR szValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
) throw( );  
bool AddProperty(  
   DWORD dwPropertyID,  
   LPCWSTR szValue,   
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
) throw( );  
bool AddProperty(  
   DWORD dwPropertyID,  
   bool bValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
) throw( );  
bool AddProperty(  
   DWORD dwPropertyID,  
   BYTE bValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
);  
bool AddProperty(  
   DWORD dwPropertyID,  
   short nValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
);  
bool AddProperty(  
   DWORD dwPropertyID,  
   long nValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
);  
bool AddProperty(  
   DWORD dwPropertyID,  
   float fltValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
);  
bool AddProperty(  
   DWORD dwPropertyID,  
   double dblValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
) throw( );  
bool AddProperty(  
   DWORD dwPropertyID,  
   CY cyValue,  
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED    
) throw( );  
```  
  
#### Parametri  
 *dwPropertyID*  
 \[in\] ID della proprietà da aggiungere.  Utilizzato per inizializzare **dwPropertyID** della struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 `var`  
 \[in\] il variant A utilizzata per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 `szValue`  
 \[in\] la stringa A utilizzata per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 `bValue`  
 \[in\] A **BYTE** o valore booleano utilizzato per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 `nValue`  
 \[in\] un valore Integer utilizzato per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 *fltValue*  
 \[in\] il valore a virgola mobile A utilizzato per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 `dblValue`  
 \[in\] il valore a virgola mobile a precisione doppia A utilizzato per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
 `cyValue`  
 \[in\] il valore di valuta A CY utilizzato per inizializzare il valore della proprietà per la struttura di `DBPROP` aggiunto alla raccolta di proprietà.  
  
## Valore restituito  
 **true** se la proprietà è stato aggiunto correttamente.  In caso contrario, **false**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDBPropSet](../../data/oledb/cdbpropset-class.md)   
 [DBPROP Structure](https://msdn.microsoft.com/en-us/library/ms717970.aspx)