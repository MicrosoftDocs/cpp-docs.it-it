---
title: Interfaccia IAxWinAmbientDispatchEx | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IAxWinAmbientDispatchEx
- ATLIFACE/ATL::IAxWinAmbientDispatchEx
- ATLIFACE/ATL::SetAmbientDispatch
dev_langs:
- C++
helpviewer_keywords:
- IAxWinAmbientDispatchEx interface
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1c1c6ed120705886c1b0bb4836e851139543f629
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43753912"
---
# <a name="iaxwinambientdispatchex-interface"></a>Interfaccia IAxWinAmbientDispatchEx

Questa interfaccia implementa la proprietà di ambiente aggiuntive per un controllo ospitato.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
MIDL_INTERFACE("B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5") IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[SetAmbientDispatch](#setambientdispatch)|Questo metodo viene chiamato per integrare l'interfaccia di proprietà di ambiente predefinita con un'interfaccia definita dall'utente.|

## <a name="remarks"></a>Note

Includere questa interfaccia in applicazioni ATL che vengono collegate staticamente a host controlli ActiveX, soprattutto i controlli ActiveX con le proprietà di ambiente e ATL. Senza questa interfaccia genererà questa asserzione: "Si è omesso di passare LIBID CComModule"

Questa interfaccia viene esposta dal controllo ActiveX dell'ATL hosting di oggetti. Derivata da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` aggiunge un metodo che consente di integrare l'interfaccia di proprietà di ambiente fornito da ATL con uno personalizzato.

[AXHost](https://msdn.microsoft.com/library/system.windows.forms.axhost.aspx) tenterà di caricare le informazioni sul tipo sulle `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi che contiene il codice.

Se ci si collega, Atl90 **AXHost** caricherà le informazioni sul tipo dalla libreria dei tipi nella DLL.

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per altri dettagli.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.

|Tipo definizione|File|
|---------------------|----------|
|IDL|atliface.idl|
|Libreria dei tipi|ATL|
|C++|atliface.h (incluso anche in atlbase. H)|

##  <a name="setambientdispatch"></a>  IAxWinAmbientDispatchEx::SetAmbientDispatch

Questo metodo viene chiamato per integrare l'interfaccia di proprietà di ambiente predefinita con un'interfaccia definita dall'utente.

```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatch*  
Puntatore alla nuova interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, verrà usata questa nuova interfaccia per richiamare qualsiasi proprietà o metodo richiesto dal controllo ospitato, se tali proprietà non sono già fornite dal [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).

## <a name="see-also"></a>Vedere anche

[Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)
