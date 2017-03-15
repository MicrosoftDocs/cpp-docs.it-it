---
title: "IRowsetUpdateImpl::IsUpdateAllowed | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetUpdateImpl::IsUpdateAllowed"
  - "IRowsetUpdateImpl.IsUpdateAllowed"
  - "IsUpdateAllowed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsUpdateAllowed (metodo)"
ms.assetid: d6daf3b3-a8e0-4275-a67d-897dea01e297
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IRowsetUpdateImpl::IsUpdateAllowed
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Eseguire l'override di questo metodo per verificare la presenza di sicurezza, integrità e così via, prima degli aggiornamenti.  
  
## Sintassi  
  
```  
  
      HRESULT IsUpdateAllowed(  
   DBPENDINGSTATUS /* [in] *//* status */,  
   HROW /* [in] *//* hRowUpdate */,  
   DBROWSTATUS* /* [out] *//* pRowStatus */  
);  
```  
  
#### Parametri  
 *status*  
 \[in\] lo stato delle operazioni in sospeso in righe.  
  
 *hRowUpdate*  
 \[in\] handle per le righe che desidera aggiornare.  
  
 *pRowStatus*  
 \[out\] lo stato restituito all'utente.  
  
## Note  
 Se si determina che un aggiornamento è autorizzato, restituisce `S_OK`; in caso contrario restituisce **E\_FAIL**.  Se si consente un aggiornamento, è inoltre necessario impostare **DBROWSTATUS** in [IRowsetUpdateImpl::Update](../../data/oledb/irowsetupdateimpl-update.md) a [stato della riga](https://msdn.microsoft.com/en-us/library/ms722752.aspx)appropriato.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)