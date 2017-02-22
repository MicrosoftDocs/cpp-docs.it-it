---
title: "CUtlProps::IsValidValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CUtlProps::IsValidValue"
  - "CUtlProps.IsValidValue"
  - "IsValidValue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsValidValue (metodo)"
ms.assetid: 1164556e-8d98-429c-a396-fc9a699e0e97
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CUtlProps::IsValidValue
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per convalidare un valore prima di impostare una proprietà.  
  
## Sintassi  
  
```  
  
      virtual HRESULT CUtlPropsBase::IsValidValue(  
   ULONG /* iCurSet */,  
   DBPROP* pDBProp   
);  
```  
  
#### Parametri  
 `iCurSet`  
 Indice nella matrice della raccolta di proprietà; zero se è presente solo un insieme di proprietà.  
  
 `pDBProp`  
 La proprietà ID e un nuovo valore in una struttura [DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx).  
  
## Valore restituito  
 Un `HRESULT` standard.  Il valore di ritorno predefinito è `S_OK`.  
  
## Note  
 Se si possiedono alcune procedure di convalida che si desidera eseguire in un valore che si sta per utilizzare per impostare una proprietà, è necessario eseguire l'override della funzione.  Ad esempio, è possibile convalidare **DBPROP\_AUTH\_PASSWORD** con una tabella di password per determinare un valore valido.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)