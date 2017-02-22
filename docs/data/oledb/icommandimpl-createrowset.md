---
title: "ICommandImpl::CreateRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl::CreateRowset"
  - "ICommandImpl.CreateRowset"
  - "CreateRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateRowset (metodo)"
ms.assetid: a0890009-205e-4970-879f-01ed9d6a93f1
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# ICommandImpl::CreateRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamato da [Esegui](../../data/oledb/icommandimpl-execute.md) per creare un singolo rowset.  
  
## Sintassi  
  
```  
  
      template <class   
      RowsetClass  
      >  
HRESULT CreateRowset(  
   IUnknown* pUnkOuter,  
   REFIID riid,  
   DBPARAMS* pParams,  
   DBROWCOUNT* pcRowsAffected,  
   IUnknown** ppRowset,  
   RowsetClass*& pRowsetObj   
);  
```  
  
#### Parametri  
 `RowsetClass`  
 Un membro della classe modello che rappresenta la classe del rowset dell'utente.  Solitamente generato dalla procedura guidata.  
  
 `pUnkOuter`  
 \[in\] puntatore All'interfaccia di controllo di **IUnknown** se il rowset viene creato come parte di un aggregato; in caso contrario, è null.  
  
 `riid`  
 \[in\] corrisponde a `riid` in `ICommand::Execute`.  
  
 `pParams`  
 \[In\/out\] Corrisponde a `pParams` in `ICommand::Execute`.  
  
 `pcRowsAffected`  
 Corrisponde a `pcRowsAffected` in `ICommand::Execute`.  
  
 `ppRowset`  
 \[In\/out\] Corrisponde a `ppRowset` in `ICommand::Execute`.  
  
 `pRowsetObj`  
 \[out\] puntatore A un oggetto rowset.  In genere questo parametro non viene utilizzato, ma può essere utilizzato se è necessario eseguire ulteriori operazioni sul rowset prima di passarli a un oggetto COM.  La durata di `pRowsetObj` è associata da `ppRowset`.  
  
## Valore restituito  
 Un valore standard di `HRESULT`.  Vedere `ICommand::Execute` per un elenco di valori comuni.  
  
## Note  
 Per creare più di un rowset, o fornire i propri condizioni per creare rowset diversi, inserire le chiamate diverse a `CreateRowset` da **Esegui**.  
  
 Vedere [ICommand::Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx)*in OLE DB Programmer's Reference.*  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe ICommandImpl](../../data/oledb/icommandimpl-class.md)