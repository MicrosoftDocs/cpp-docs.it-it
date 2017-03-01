---
title: Interfaccia IAxWinAmbientDispatchEx | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.IAxWinAmbientDispatchEx
- IAxWinAmbientDispatchEx
- ATL::IAxWinAmbientDispatchEx
dev_langs:
- C++
helpviewer_keywords:
- IAxWinAmbientDispatchEx interface
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 915514a021aa89b751a49a34cb53b693b9fd0c45
ms.lasthandoff: 02/24/2017

---
# <a name="iaxwinambientdispatchex-interface"></a>Interfaccia IAxWinAmbientDispatchEx
Questa interfaccia implementa le proprietà di ambiente aggiuntive per un controllo ospitato.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
MIDL_INTERFACE("B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5") IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[SetAmbientDispatch](#setambientdispatch)|Questo metodo viene chiamato per completare l'interfaccia di proprietà di ambiente predefinita con un'interfaccia definita dall'utente.|  
  
## <a name="remarks"></a>Note  
 Includere questa interfaccia in applicazioni ATL che vengono collegate staticamente a ATL e host controlli ActiveX, in particolare i controlli ActiveX che dispongono di proprietà di ambiente. Senza includere questa interfaccia genererà l'asserzione: "Provare a passare LIBID CComModule"  
  
 Questa interfaccia viene esposta dal controllo ActiveX dell'ATL hosting di oggetti. Derivata da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` aggiunge un metodo che consente di integrare l'interfaccia di proprietà di ambiente fornito da ATL con uno proprio.  
  
 [AXHost](https://msdn.microsoft.com/library/system.windows.forms.axhost.aspx) tenterà di caricare le informazioni sul tipo su `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi che contiene il codice.  
  
 Se si sta collegando a ATL90. dll, **AXHost** caricherà le informazioni sul tipo dalla libreria dei tipi nella DLL.  
  
 Vedere [Hosting ActiveX controlli mediante AXHost ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per ulteriori dettagli.  
  
## <a name="requirements"></a>Requisiti  
 La definizione di questa interfaccia è disponibile in una serie di moduli, come illustrato nella tabella seguente.  
  
|Tipo di definizione|File|  
|---------------------|----------|  
|IDL|atliface.idl|  
|Libreria dei tipi|ATL|  
|C++|atliface.h (incluso anche in atlbase. H)|  
  
##  <a name="a-namesetambientdispatcha--iaxwinambientdispatchexsetambientdispatch"></a><a name="setambientdispatch"></a>IAxWinAmbientDispatchEx::SetAmbientDispatch  
 Questo metodo viene chiamato per completare l'interfaccia di proprietà di ambiente predefinita con un'interfaccia definita dall'utente.  
  
```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 *pDispatch*  
 Puntatore alla nuova interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, questa nuova interfaccia verrà utilizzata per richiamare qualsiasi proprietà o metodi richiesto per il controllo ospitato, se tali proprietà non sono già state fornite da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)

