---
title: Classe IDBCreateCommandImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IDBCreateCommandImpl
- IDBCreateCommandImpl
- ATL.IDBCreateCommandImpl
- IDBCreateCommandImpl.CreateCommand
- CreateCommand
- IDBCreateCommandImpl::CreateCommand
dev_langs:
- C++
helpviewer_keywords:
- IDBCreateCommandImpl class
- CreateCommand method
ms.assetid: eac4755e-1668-42e1-958e-a35620c385ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6a2457ed01214750091bd9ec5a59c9aeac819357
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39336994"
---
# <a name="idbcreatecommandimpl-class"></a>Classe IDBCreateCommandImpl
Fornisce un'implementazione del [IDBCreateCommand](https://msdn.microsoft.com/library/ms711625.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class CommandClass >  
class ATL_NO_VTABLE IDBCreateCommandImpl   
   : public IDBCreateCommand  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 L'oggetto sessione derivato da `IDBCreateCommandImpl`.  
  
 *CommandClass*  
 Classe del comando.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[CreateCommand](#createcommand)|Crea un nuovo comando.|  
  
## <a name="remarks"></a>Note  
 Interfaccia opzionale sull'oggetto sessione per ottenere un nuovo comando.  

## <a name="createcommand"></a> Idbcreatecommandimpl:: CreateCommand
Crea un nuovo comando e restituisce l'interfaccia richiesta.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(CreateCommand)(IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppvCommand);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IDBCreateCommand](https://msdn.microsoft.com/library/ms709772.aspx) nel *riferimento per programmatori OLE DB*.  
  
 Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* i parametri dei nomi diversi, descritte nelle `IDBCreateCommand::CreateCommand`:  
  
|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|  
|--------------------------------|------------------------------------------------|  
|*ppvCommand*|*ppCommand*|  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)