---
title: Classe _U_MENUorID | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: f7c0a5c34c4e103f830a029f58cdfa00dcb58a32
ms.lasthandoff: 02/24/2017

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
 Questa classe di argomenti dell'adapter consente l'ID ( **UINT**s) o gli handle di menu ( `HMENU`s) deve essere passato a una funzione senza un cast esplicito della parte del chiamante.  
  
 Questa classe è progettata per implementare il wrapper per l'API di Windows, in particolare il [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) e [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) le funzioni che accettano un `HMENU` argomento che può essere un identificatore di finestra figlio ( **UINT**) anziché un handle di menu. Ad esempio, è possibile visualizzare questa classe in uso come parametro per [CWindowImpl::Create](cwindowimpl-class.md#create).  

  
 La classe definisce due overload del costruttore: uno accetta un **UINT** argomento e l'altro accetta un `HMENU` argomento. Il **UINT** argomento è sufficiente eseguire il cast a un `HMENU` nel costruttore e il risultato memorizzato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu). L'argomento di `HMENU` costruttore verrà archiviato direttamente senza conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="a-nameumenuoridmhmenua--umenuoridmhmenu"></a><a name="_u_menuorid__m_hmenu"></a>_U_MENUorID::m_hMenu  
 La classe contiene il valore passato a uno dei suoi costruttori come pubblica `HMENU` (membro dati).  
  
```
HMENU m_hMenu;
```  
  
##  <a name="a-nameumenuoridumenuorida--umenuoridumenuorid"></a><a name="_u_menuorid___u_menuorid"></a>_U_MENUorID::_U_MENUorID  
 Il **UINT** argomento è sufficiente eseguire il cast a un `HMENU` nel costruttore e il risultato memorizzato nel membro dati della classe, [m_hMenu](#_u_menuorid__m_hmenu).  
  
```
_U_MENUorID(UINT nID);  
_U_MENUorID(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Un identificatore di finestra figlio.  
  
 `hMenu`  
 Handle di menu.  
  
### <a name="remarks"></a>Note  
 L'argomento di `HMENU` costruttore verrà archiviato direttamente senza conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

