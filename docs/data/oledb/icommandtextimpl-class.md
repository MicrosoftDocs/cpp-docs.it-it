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
ms.openlocfilehash: de9e930056db7b91968ca1ce471a87809693376a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408979"
---
# <a name="icommandtextimpl-class"></a>Classe ICommandTextImpl

Fornisce un'implementazione per il [ICommandText](/previous-versions/windows/desktop/ms714914(v=vs.85)) interfaccia.

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

## <a name="getcommandtext"></a> ICommandTextImpl::GetCommandText

Restituisce il comando di testo impostato dall'ultima chiamata a [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetCommandText)(GUID * pguidDialect,
   LPOLESTR * ppwszCommand);
```

#### <a name="parameters"></a>Parametri

Visualizzare [ICommandText::GetCommandText](/previous-versions/windows/desktop/ms709825(v=vs.85)) nel *riferimento per programmatori OLE DB*. Il *pguidDialect* parametro viene ignorato per impostazione predefinita.

## <a name="setcommandtext"></a> ICommandTextImpl::SetCommandText

Imposta il testo del comando, sostituendo il testo del comando esistenti.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetCommandText)(REFGUID rguidDialect,
   LPCOLESTR pwszCommand);
```

#### <a name="parameters"></a>Parametri

Visualizzare [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709757(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="strcommandtext"></a> ICommandTextImpl::m_strCommandText

Archivia la stringa di testo del comando.

### <a name="syntax"></a>Sintassi

```cpp
CComBSTR m_strCommandText;
```

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)