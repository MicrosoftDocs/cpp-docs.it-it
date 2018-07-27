---
title: Classe ICommandTextImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ICommandText
- GetCommandText
- ICommandTextImpl.GetCommandText
- ICommandTextImpl::GetCommandText
- ATL::ICommandTextImpl::m_strCommandText
- ICommandTextImpl<T>::m_strCommandText
- m_strCommandText
- ICommandTextImpl.m_strCommandText
- ICommandTextImpl::m_strCommandText
- ATL::ICommandTextImpl<T>::m_strCommandText
- ATL.ICommandTextImpl.m_strCommandText
- ICommandTextImpl.SetCommandText
- ICommandTextImpl::SetCommandText
- SetCommandText
dev_langs:
- C++
helpviewer_keywords:
- ICommandText class
- GetCommandText method
- m_strCommandText
- SetCommandText method
ms.assetid: 9c2715cc-1e55-4468-8327-85341617ed46
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2223958f2f5dbacb7c86bf2735c1de3a85d9d488
ms.sourcegitcommit: b0d6777cf4b580d093eaf6104d80a888706e7578
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2018
ms.locfileid: "39269491"
---
# <a name="icommandtextimpl-class"></a>Classe ICommandTextImpl
Fornisce un'implementazione per il [ICommandText](https://msdn.microsoft.com/library/ms714914.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T >  
class ATL_NO_VTABLE ICommandTextImpl   
   : public ICommandImpl<T, ICommandText>  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 La classe di comando derivata da **ICommandTextImpl**. 

## <a name="requirements"></a>Requisiti  
 **Intestazione:** altdb.h  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetCommandText](#getcommandtext)|Restituisce il comando di testo impostato dall'ultima chiamata a [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).|  
|[SetCommandText](#setcommandtext)|Imposta il testo del comando, sostituendo il testo del comando esistenti.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_strCommandText](#strcommandtext)|Archivia il testo del comando.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria sui comandi.  
 
## <a name="getcommandtext"></a> ICommandTextImpl:: Getcommandtext
Restituisce il comando di testo impostato dall'ultima chiamata a [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetCommandText)(GUID * pguidDialect,   
   LPOLESTR * ppwszCommand);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ICommandText::GetCommandText](https://msdn.microsoft.com/library/ms709825.aspx) nel *riferimento per programmatori OLE DB*. Il *pguidDialect* parametro viene ignorato per impostazione predefinita.  

## <a name="setcommandtext"></a> ICommandTextImpl:: SetCommandText
Imposta il testo del comando, sostituendo il testo del comando esistenti.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(SetCommandText)(REFGUID rguidDialect,   
   LPCOLESTR pwszCommand);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ICommandText:: SetCommandText](https://msdn.microsoft.com/library/ms709757.aspx) nel *riferimento per programmatori OLE DB*. 

## <a name="strcommandtext"></a> ICommandTextImpl:: M_strcommandtext
Archivia la stringa di testo del comando.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CComBSTR m_strCommandText;  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
