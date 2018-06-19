---
title: Classe ICommandTextImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ICommandText
dev_langs:
- C++
helpviewer_keywords:
- ICommandText class
ms.assetid: 9c2715cc-1e55-4468-8327-85341617ed46
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f49326dba4868ad490dc1a7122eed68271bdfa15
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33100200"
---
# <a name="icommandtextimpl-class"></a>Classe ICommandTextImpl
Fornisce un'implementazione per il [ICommandText](https://msdn.microsoft.com/en-us/library/ms714914.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T >  
class ATL_NO_VTABLE ICommandTextImpl   
   : public ICommandImpl<T, ICommandText>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Derivare la classe di comando da **ICommandTextImpl**.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetCommandText](../../data/oledb/icommandtextimpl-getcommandtext.md)|Restituisce il comando di testo impostato dall'ultima chiamata a [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).|  
|[SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md)|Imposta il testo del comando, sostituendo il testo del comando esistente.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_strCommandText](../../data/oledb/icommandtextimpl-m-strcommandtext.md)|Archivia il testo del comando.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria sui comandi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** altdb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)