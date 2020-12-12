---
description: 'Altre informazioni su: interfaccia IAxWinAmbientDispatchEx'
title: Interfaccia IAxWinAmbientDispatchEx
ms.date: 11/04/2016
f1_keywords:
- IAxWinAmbientDispatchEx
- ATLIFACE/ATL::IAxWinAmbientDispatchEx
- ATLIFACE/ATL::SetAmbientDispatch
helpviewer_keywords:
- IAxWinAmbientDispatchEx interface
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
ms.openlocfilehash: c26ce7fb4f41273a498e3b28e9d6e15d4c89f9ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139724"
---
# <a name="iaxwinambientdispatchex-interface"></a>Interfaccia IAxWinAmbientDispatchEx

Questa interfaccia implementa le proprietà di ambiente aggiuntive per un controllo ospitato.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
MIDL_INTERFACE("B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5") IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|Nome|Description|
|-|-|
|[SetAmbientDispatch](#setambientdispatch)|Questo metodo viene chiamato per integrare l'interfaccia della proprietà di ambiente predefinita con un'interfaccia definita dall'utente.|

## <a name="remarks"></a>Commenti

Includere questa interfaccia nelle applicazioni ATL collegate in modo statico ad ATL e ai controlli ActiveX host, in particolare i controlli ActiveX con proprietà di ambiente. Se non si include questa interfaccia, verrà generata questa asserzione: "si è omesso di passare LIBID a CComModule:: init"

Questa interfaccia è esposta dagli oggetti di hosting del controllo ActiveX di ATL. Derivato da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` aggiunge un metodo che consente di integrare l'interfaccia della proprietà di ambiente fornita da ATL con una propria.

<xref:System.Windows.Forms.AxHost> proverà a caricare informazioni sul tipo relative a `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi che contiene il codice.

Se si sta collegando a ATL90.dll, **AxHost** caricherà le informazioni sul tipo dalla libreria dei tipi nella dll.

Per ulteriori informazioni, vedere l' [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) .

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.

|Tipo di definizione|File|
|---------------------|----------|
|IDL|Atliface. idl|
|Libreria di tipi|ATL.dll|
|C++|Atliface. h (incluso anche in ATLBase. h)|

## <a name="iaxwinambientdispatchexsetambientdispatch"></a><a name="setambientdispatch"></a> IAxWinAmbientDispatchEx:: SetAmbientDispatch

Questo metodo viene chiamato per integrare l'interfaccia della proprietà di ambiente predefinita con un'interfaccia definita dall'utente.

```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatch*<br/>
Puntatore alla nuova interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, questa nuova interfaccia verrà utilizzata per richiamare eventuali proprietà o metodi richiesti dal controllo ospitato, se tali proprietà non sono già state fornite da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).

## <a name="see-also"></a>Vedi anche

[Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)
