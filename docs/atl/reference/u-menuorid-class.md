---
title: Classe _U_MENUorID | Documenti Microsoft
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
ms.openlocfilehash: 847a735cdba6b9ff4173e23acf78ea7dc4d3034c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32363460"
---
# <a name="umenuorid-class"></a>Classe _U_MENUorID
Questa classe fornisce wrapper per **CreateWindow** e **CreateWindowEx**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[_U_MENUorID::m_hMenu](#_u_menuorid__m_hmenu)|Un handle a un menu.|  
  
## <a name="remarks"></a>Note  
 Classe di adattatori di questo argomento consente di entrambi gli ID ( **UINT**s) o gli handle di menu ( `HMENU`s) deve essere passato a una funzione senza un cast esplicito della parte del chiamante.  
  
 Questa classe è progettata per l'implementazione di wrapper per l'API di Windows, in particolare il [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) e [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) funzioni che accettano un `HMENU` argomento che può essere un elemento figlio Identificatore di finestra ( **UINT**) anziché un handle di menu. Ad esempio, è possibile visualizzare questa classe in uso come parametro a [CWindowImpl::Create](cwindowimpl-class.md#create).  

  
 La classe definisce due overload del costruttore: uno accetta un **UINT** argomento e l'altro accetta un `HMENU` argomento. Il **UINT** argomento è sufficiente eseguire il cast a un `HMENU` nel costruttore e il risultato memorizzato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu). L'argomento di `HMENU` costruttore verrà archiviato direttamente senza conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="_u_menuorid__m_hmenu"></a>  _U_MENUorID::m_hMenu  
 La classe contiene il valore passato a uno dei suoi costruttori come pubblica `HMENU` (membro dati).  
  
```
HMENU m_hMenu;
```  
  
##  <a name="_u_menuorid___u_menuorid"></a>  _U_MENUorID::_U_MENUorID  
 Il **UINT** argomento è sufficiente eseguire il cast a un `HMENU` nel costruttore e il risultato memorizzato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu).  
  
```
_U_MENUorID(UINT nID);  
_U_MENUorID(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di una finestra figlio.  
  
 `hMenu`  
 Handle di menu.  
  
### <a name="remarks"></a>Note  
 L'argomento di `HMENU` costruttore verrà archiviato direttamente senza conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
