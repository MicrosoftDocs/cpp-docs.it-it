---
title: Classe u_rect | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL::_U_RECT
- _U_RECT
- ATL._U_RECT
dev_langs:
- C++
helpviewer_keywords:
- U_RECT class
- _U_RECT class
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ebb76d2f373862b39f2a3742481e14523a7a94b
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37882221"
---
# <a name="urect-class"></a>Classe u_rect
Classe dell'adattatore in questo argomento consente `RECT` puntatori o riferimenti da passare a una funzione che viene implementata in termini di puntatori.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
class _U_RECT
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[_U_RECT::_U_RECT](#_u_rect___u_rect)|Costruttore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[_U_RECT::m_lpRect](#_u_rect__m_lprect)|Puntatore a un `RECT`.|  
  
## <a name="remarks"></a>Note  
 La classe definisce due overload del costruttore: uno accetta un **RECT &** argomento e l'altro accetta un `LPRECT` argomento. Il primo costruttore archivia l'indirizzo dell'argomento di riferimento nel membro dati della classe, [m_lpRect](#_u_rect__m_lprect). L'argomento del costruttore di puntatore verrà archiviato direttamente, senza conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="_u_rect__m_lprect"></a>  _U_RECT::m_lpRect  
 La classe contiene il valore passato a uno dei relativi costruttori come pubblica `LPRECT` (membro dati).  
  
```
LPRECT m_lpRect;
```  
  
##  <a name="_u_rect___u_rect"></a>  _U_RECT::_U_RECT  
 L'indirizzo dell'argomento di riferimento è archiviato nel membro dati della classe, [m_lpRect](#_u_rect__m_lprect).  
  
```
_U_RECT(RECT& rc);  
_U_RECT(LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *RC*  
 Oggetto `RECT` riferimento.  
  
 *lpRect*  
 Oggetto `RECT` puntatore.  
  
### <a name="remarks"></a>Note  
 L'argomento del costruttore di puntatore verrà archiviato direttamente, senza conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
