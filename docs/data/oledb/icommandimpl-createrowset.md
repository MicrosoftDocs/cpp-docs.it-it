---
title: 'ICommandImpl:: CreateRowset | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ICommandImpl::CreateRowset
- ICommandImpl.CreateRowset
- CreateRowset
dev_langs: C++
helpviewer_keywords: CreateRowset method
ms.assetid: a0890009-205e-4970-879f-01ed9d6a93f1
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 510f222972b8d9306f7b248799679f0dd499288a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="icommandimplcreaterowset"></a>ICommandImpl::CreateRowset
Chiamato da [Execute](../../data/oledb/icommandimpl-execute.md) per creare un singolo set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `RowsetClass`  
 Un membro della classe modello che rappresenta la classe di rowset dell'utente. In genere generato dalla procedura guidata.  
  
 `pUnkOuter`  
 [in] Un puntatore a interfaccia di controllo **IUnknown** interfaccia se il set di righe viene creato come parte di un'aggregazione; in caso contrario, il valore è null.  
  
 `riid`  
 [in] Corrisponde a `riid` in `ICommand::Execute`.  
  
 `pParams`  
 [in/out] Corrisponde a `pParams` in `ICommand::Execute`.  
  
 `pcRowsAffected`  
 Corrisponde a `pcRowsAffected` in `ICommand::Execute`.  
  
 `ppRowset`  
 [in/out] Corrisponde a `ppRowset` in `ICommand::Execute`.  
  
 `pRowsetObj`  
 [out] Un puntatore a un oggetto set di righe. Questo parametro non viene in genere usato, ma può essere utilizzato se è necessario eseguire più operazioni nel set di righe prima di passarlo a un oggetto COM. La durata di `pRowsetObj` è associato a `ppRowset`.  
  
## <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard. Vedere `ICommand::Execute` per un elenco di valori tipici.  
  
## <a name="remarks"></a>Note  
 Per creare più di un set di righe o per fornire la propria condizioni per la creazione di set di righe diverso, effettuare le diverse chiamate alle `CreateRowset` dall'interno **Execute**.  
  
 Vedere [ICommand:: Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx) nel *di riferimento per programmatori OLE DB.*  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ICommandImpl](../../data/oledb/icommandimpl-class.md)