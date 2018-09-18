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
ms.openlocfilehash: 6283f29455cc3d835babdd83414e9dc98127eacd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46029728"
---
# <a name="icommandtextimpl-class"></a>Classe ICommandTextImpl

Fornisce un'implementazione per il [ICommandText](/previous-versions/windows/desktop/ms714914\(v=vs.85\)) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T >  
class ATL_NO_VTABLE ICommandTextImpl   
   : public ICommandImpl<T, ICommandText>  
```  
  
### <a name="parameters"></a>Parametri  

*T*<br/>
La classe di comando derivata da `ICommandTextImpl`. 

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

Visualizzare [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. Il *pguidDialect* parametro viene ignorato per impostazione predefinita.  

## <a name="setcommandtext"></a> ICommandTextImpl:: SetCommandText

Imposta il testo del comando, sostituendo il testo del comando esistenti.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(SetCommandText)(REFGUID rguidDialect,   
   LPCOLESTR pwszCommand);  
```  
  
#### <a name="parameters"></a>Parametri  

Visualizzare [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709757\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. 

## <a name="strcommandtext"></a> ICommandTextImpl:: M_strcommandtext

Archivia la stringa di testo del comando.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CComBSTR m_strCommandText;  
```  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)