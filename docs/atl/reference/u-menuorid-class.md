---
title: Classe u_menuorid | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL._U_MENUorID
- ATL::_U_MENUorID
- _U_MENUorID
dev_langs:
- C++
helpviewer_keywords:
- U_MENUorID class
- _U_MENUorID class
ms.assetid: cfc8032b-61b4-4a68-ba3a-92b82500ccae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0f945766283fa6e58b1eb3430cc780b1ae136e9f
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884737"
---
# <a name="umenuorid-class"></a>Classe u_menuorid
Questa classe fornisce wrapper `CreateWindow` e `CreateWindowEx`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
class _U_MENUorID
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[_U_MENUorID::_U_MENUorID](#_u_menuorid___u_menuorid)|Costruttore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[_U_MENUorID::m_hMenu](#_u_menuorid__m_hmenu)|Handle a un menu.|  
  
## <a name="remarks"></a>Note  
 Classe dell'adattatore in questo argomento consente di eseguire gli ID (UINTs) o gli handle di menu (HMENUs) deve essere passato a una funzione senza un cast esplicito da parte del chiamante.  
  
 Questa classe è progettata per l'implementazione del wrapper per l'API di Windows, in particolare [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) e [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) funzioni, entrambi accettare un argomento HMENU che può essere una finestra figlio identificatore (UINT) anziché un handle di menu. Ad esempio, è possibile visualizzare questa classe in uso come parametro per [CWindowImpl::Create](cwindowimpl-class.md#create).  

  
 La classe definisce due overload del costruttore: uno accetta un argomento UINT e l'altro accetta un argomento HMENU. L'argomento UINT è sufficiente eseguire il cast a un HMENU nel costruttore e il risultato archiviato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu). L'argomento del costruttore HMENU verrà archiviato direttamente, senza conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="_u_menuorid__m_hmenu"></a>  _U_MENUorID::m_hMenu  
 La classe contiene il valore passato a uno dei relativi costruttori come membro dati pubblico HMENU.  
  
```
HMENU m_hMenu;
```  
  
##  <a name="_u_menuorid___u_menuorid"></a>  _U_MENUorID::_U_MENUorID  
 L'argomento UINT è sufficiente eseguire il cast a un HMENU nel costruttore e il risultato archiviato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu).  
  
```
_U_MENUorID(UINT nID);  
_U_MENUorID(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 Un identificatore di finestra figlio.  
  
 *hMenu*  
 Handle menu.  
  
### <a name="remarks"></a>Note  
 L'argomento del costruttore HMENU verrà archiviato direttamente, senza conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
