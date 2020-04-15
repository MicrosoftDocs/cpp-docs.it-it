---
title: Interfaccia IAxWinAmbientDispatchEx
ms.date: 11/04/2016
f1_keywords:
- IAxWinAmbientDispatchEx
- ATLIFACE/ATL::IAxWinAmbientDispatchEx
- ATLIFACE/ATL::SetAmbientDispatch
helpviewer_keywords:
- IAxWinAmbientDispatchEx interface
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
ms.openlocfilehash: f4816846801e388619db62998ec979a1100916ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329984"
---
# <a name="iaxwinambientdispatchex-interface"></a>Interfaccia IAxWinAmbientDispatchEx

Questa interfaccia implementa le proprietà di ambiente aggiuntive per un controllo ospitato.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
MIDL_INTERFACE("B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5") IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[SetAmbientDispatch](#setambientdispatch)|Questo metodo viene chiamato per integrare l'interfaccia delle proprietà di ambiente predefinita con un'interfaccia definita dall'utente.|

## <a name="remarks"></a>Osservazioni

Includere questa interfaccia nelle applicazioni ATL collegate in modo statico ad ATL e ai controlli ActiveX host, in particolare i controlli ActiveX con proprietà di ambiente. Se non si include questa interfaccia verrà generata questa asserzione: "Hai dimenticato di passare il LIBID a CComModule::Init"

Questa interfaccia viene esposta dagli oggetti di hosting del controllo ActiveX di ATL. Derivato da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` aggiunge un metodo che consente di integrare l'interfaccia della proprietà di ambiente fornita da ATL con uno personalizzato.

<xref:System.Windows.Forms.AxHost>tenterà di caricare `IAxWinAmbientDispatch` le `IAxWinAmbientDispatchEx` informazioni sul tipo su e dalla libreria dei tipi che contiene il codice.

Se si esegue il collegamento ad ATL90.dll, **AXHost** caricherà le informazioni sul tipo dalla libreria dei tipi nella DLL.

Per ulteriori informazioni, vedere [Hosting di controlli ActiveX mediante ATL AXHost.](../../atl/hosting-activex-controls-using-atl-axhost.md)

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.

|Tipo di definizione|File|
|---------------------|----------|
|Idl|atliface.idl|
|Libreria dei tipi|Atl|
|C++|atliface.h (incluso anche in ATLBase.h)|

## <a name="iaxwinambientdispatchexsetambientdispatch"></a><a name="setambientdispatch"></a>IAxWinAmbientDispatchEx::SetAmbientDispatchIAxWinAmbientDispatchEx::SetAmbientDispatch

Questo metodo viene chiamato per integrare l'interfaccia delle proprietà di ambiente predefinita con un'interfaccia definita dall'utente.

```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatch (Invio)*<br/>
Puntatore alla nuova interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, questa nuova interfaccia verrà utilizzata per richiamare le proprietà o i metodi richiesti dal controllo ospitato, se tali proprietà non sono già fornite da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).

## <a name="see-also"></a>Vedere anche

[Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)
