---
title: Classe ICommandTextImpl
ms.date: 11/04/2016
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
helpviewer_keywords:
- ICommandText class
- GetCommandText method
- m_strCommandText
- SetCommandText method
ms.assetid: 9c2715cc-1e55-4468-8327-85341617ed46
ms.openlocfilehash: d91221dd509122ebbd6490c2de7fab1ce51eb2f8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210730"
---
# <a name="icommandtextimpl-class"></a>Classe ICommandTextImpl

Fornisce un'implementazione per l'interfaccia [ICommandText](/previous-versions/windows/desktop/ms714914(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T >
class ATL_NO_VTABLE ICommandTextImpl
   : public ICommandImpl<T, ICommandText>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe Command derivata da `ICommandTextImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** altdb. h

## <a name="members"></a>Members

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetCommandText](#getcommandtext)|Restituisce il comando di testo impostato dall'ultima chiamata a [CommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).|
|[SetCommandText](#setcommandtext)|Imposta il testo del comando, sostituendo il testo del comando esistente.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_strCommandText](#strcommandtext)|Archivia il testo del comando.|

## <a name="remarks"></a>Osservazioni

Interfaccia obbligatoria sui comandi.

## <a name="icommandtextimplgetcommandtext"></a><a name="getcommandtext"></a>ICommandTextImpl:: GetCommandText

Restituisce il comando di testo impostato dall'ultima chiamata a [CommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetCommandText)(GUID * pguidDialect,
   LPOLESTR * ppwszCommand);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandText:: GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*. Il parametro *pguidDialect* viene ignorato per impostazione predefinita.

## <a name="icommandtextimplsetcommandtext"></a><a name="setcommandtext"></a>ICommandTextImpl:: secommandtext

Imposta il testo del comando, sostituendo il testo del comando esistente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetCommandText)(REFGUID rguidDialect,
   LPCOLESTR pwszCommand);
```

#### <a name="parameters"></a>Parametri

Vedere [ICommandText:: CommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="icommandtextimplm_strcommandtext"></a><a name="strcommandtext"></a>ICommandTextImpl:: m_strCommandText

Archivia la stringa di testo del comando.

### <a name="syntax"></a>Sintassi

```cpp
CComBSTR m_strCommandText;
```

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
