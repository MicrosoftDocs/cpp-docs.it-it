---
title: "CRowsetImpl::GetColumnInfo | Microsoft Docs"
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
  - "GetColumnInfo"
  - "CRowsetImpl.GetColumnInfo"
  - "CRowsetImpl::GetColumnInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnInfo (metodo)"
ms.assetid: 9ef76525-f996-4c6f-81b9-68eb260350ef
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowsetImpl::GetColumnInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera le informazioni di colonna per una richiesta del client specifico.  
  
## Sintassi  
  
```  
  
      static ATLCOLUMNINFO* CRowsetBaseImpl::GetColumnInfo(  
   T* pv,  
   ULONG* pcCols   
);  
```  
  
#### Parametri  
 `pv`  
 \[in\] puntatore A una classe derivata t `CRowsetImpl` dell'utente.  
  
 `pcCols`  
 \[in\] puntatore A \(restituito\) il numero di colonne restituito.  
  
## Valore restituito  
 Un puntatore a una struttura statica di **ATLCOLUMNINFO**.  
  
## Note  
 Questo metodo è un override avanzate.  
  
 Questo metodo viene chiamato da diverse classi di implementazione di base per recuperare le informazioni di colonna per una richiesta del client specifico.  In genere, questo metodo viene chiamato da `IColumnsInfoImpl`.  Se si esegue l'override di questo metodo, è necessario inserire una versione del metodo nel `CRowsetImpl`\- classe derivata.  Poiché il metodo può essere inserito in una classe non templatized, è necessario modificare `pv` a `CRowsetImpl`appropriato \- classe derivata.  
  
 Nell'esempio seguente viene illustrato l'utilizzo di **GetColumnInfo's**.  In questo esempio, **CMyRowset** è `CRowsetImpl`\- classe derivata.  Per eseguire l'override di `GetColumnInfo` per tutte le istanze di questa classe, inserire il seguente metodo nella definizione della classe **CMyRowset** :  
  
 [!code-cpp[NVC_OLEDB_Provider#1](../../data/oledb/codesnippet/CPP/crowsetimpl-getcolumninfo_1.h)]  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)