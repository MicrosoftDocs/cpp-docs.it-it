---
title: Classe IPointerInactiveImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPointerInactiveImpl
dev_langs:
- C++
helpviewer_keywords:
- IPointerInactive ATL implementation
- inactive objects
- IPointerInactiveImpl class
ms.assetid: e1fe9ea6-d38a-4527-9112-eb344771e0b7
caps.latest.revision: 21
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 05cf4b2247cabe713cfc6b0dd54c95c01e5bbddc
ms.lasthandoff: 02/24/2017

---
# <a name="ipointerinactiveimpl-class"></a>Classe IPointerInactiveImpl
Questa classe implementa **IUnknown** e [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712) metodi di interfaccia.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IPointerInactiveImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPointerInactiveImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPointerInactiveImpl::GetActivationPolicy](#getactivationpolicy)|Recupera i criteri di attivazione per l'oggetto corrente. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IPointerInactiveImpl::OnInactiveMouseMove](#oninactivemousemove)|Notifica l'oggetto che ha spostato il puntatore del mouse su di esso, che indica l'oggetto può generare eventi del mouse. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IPointerInactiveImpl::OnInactiveSetCursor](#oninactivesetcursor)|Imposta il puntatore del mouse per l'oggetto inattivo. L'implementazione ATL restituisce **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Un oggetto inattivo è quello che viene semplicemente caricata o è in esecuzione. A differenza di un oggetto attivo, un oggetto inattivo non può ricevere i messaggi di mouse e tastiera di Windows. Di conseguenza, gli oggetti inattivi utilizzano meno risorse e vengono in genere più efficienti.  
  
 Il [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712) interfaccia consente a un oggetto supportare un livello minimo di interazione del mouse rimanendo inattivo. Questa funzionalità è particolarmente utile per i controlli.  
  
 Classe `IPointerInactiveImpl` implementa il `IPointerInactive` metodi semplicemente restituendo **E_NOTIMPL**. Tuttavia, che implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPointerInactive`  
  
 `IPointerInactiveImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="a-namegetactivationpolicya--ipointerinactiveimplgetactivationpolicy"></a><a name="getactivationpolicy"></a>IPointerInactiveImpl::GetActivationPolicy  
 Recupera i criteri di attivazione per l'oggetto corrente.  
  
```
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IPointerInactive::GetActivationPolicy](http://msdn.microsoft.com/library/windows/desktop/ms692470) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameoninactivemousemovea--ipointerinactiveimploninactivemousemove"></a><a name="oninactivemousemove"></a>IPointerInactiveImpl::OnInactiveMouseMove  
 Notifica l'oggetto che ha spostato il puntatore del mouse su di esso, che indica l'oggetto può generare eventi del mouse.  
  
```
HRESULT OnInactiveMouseMove(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IPointerInactive::OnInactiveMouseMove](http://msdn.microsoft.com/library/windows/desktop/ms693374) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameoninactivesetcursora--ipointerinactiveimploninactivesetcursor"></a><a name="oninactivesetcursor"></a>IPointerInactiveImpl::OnInactiveSetCursor  
 Imposta il puntatore del mouse per l'oggetto inattivo.  
  
```
HRESULT OnInactiveSetCursor(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg,
    BOOL fSetAlways);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IPointerInactive::OnInactiveSetCursor](http://msdn.microsoft.com/library/windows/desktop/ms694336) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

