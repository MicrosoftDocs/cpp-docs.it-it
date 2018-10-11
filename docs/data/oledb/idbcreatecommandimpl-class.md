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
ms.openlocfilehash: b06d6c730562203cdef1191a9d73012c3b19c2c8
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49083965"
---
# <a name="idbcreatecommandimpl-class"></a>Classe IDBCreateCommandImpl

Fornisce un'implementazione del [IDBCreateCommand](/previous-versions/windows/desktop/ms711625) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class CommandClass >  
class ATL_NO_VTABLE IDBCreateCommandImpl   
   : public IDBCreateCommand  
```  
  
### <a name="parameters"></a>Parametri  

*T*<br/>
L'oggetto sessione derivato da `IDBCreateCommandImpl`.  
  
*CommandClass*<br/>
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

Visualizzare [IDBCreateCommand](/previous-versions/windows/desktop/ms709772) nel *riferimento per programmatori OLE DB*.  
  
Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* i parametri dei nomi diversi, descritte nelle `IDBCreateCommand::CreateCommand`:  
  
|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|  
|--------------------------------|------------------------------------------------|  
|*ppvCommand*|*ppCommand*|  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)