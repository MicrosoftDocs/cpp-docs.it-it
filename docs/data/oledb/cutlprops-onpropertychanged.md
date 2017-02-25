---
title: "CUtlProps::OnPropertyChanged | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnPropertyChanged"
  - "CUtlProps.OnPropertyChanged"
  - "CUtlProps::OnPropertyChanged"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnPropertyChanged (metodo)"
ms.assetid: c5924210-b685-46c4-87f8-1b81e5bd3378
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# CUtlProps::OnPropertyChanged
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamata dopo avere impostato una proprietà per gestire proprietà concatenate.  
  
## Sintassi  
  
```  
  
      virtual HRESULT OnPropertyChanged(  
   ULONG /* iCurSet */,  
   DBPROP* pDBProp   
);  
```  
  
#### Parametri  
 `iCurSet`  
 Indice nella matrice della raccolta di proprietà; zero se è presente solo un insieme di proprietà.  
  
 `pDBProp`  
 La proprietà ID e un nuovo valore in una struttura di [DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx).  
  
## Valore restituito  
 `HRESULT`standard.  Il valore restituito predefinito è `S_OK`.  
  
## Note  
 Se si desidera gestire proprietà concatenate, come segnalibri o aggiorna di valori che dipendono da un altro valore di proprietà, è necessario eseguire l'override della funzione.  
  
## Esempio  
 In questa funzione, l'utente ottiene la proprietà ID dal parametro di `DBPROP*`.  Attualmente, è possibile confrontare l'id a una proprietà per concatenare.  Quando la proprietà viene trovata, `SetProperties` viene chiamato con la proprietà che verrà impostata insieme all'altra proprietà.  In questo caso, si ne ottiene `DBPROP_IRowsetLocate`, `DBPROP_LITERALBOOKMARKS`, o proprietà di `DBPROP_ORDEREDBOOKMARKS`, una può impostare la proprietà di `DBPROP_BOOKMARKS`.  
  
 [!code-cpp[NVC_OLEDB_Provider#2](../../data/oledb/codesnippet/CPP/cutlprops-onpropertychanged_1.h)]  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)