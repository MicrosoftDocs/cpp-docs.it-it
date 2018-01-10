---
title: Classe CWinTraitsOR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinTraitsOR
- ATLWIN/ATL::CWinTraitsOR
- ATLWIN/ATL::CWinTraitsOR::GetWndExStyle
- ATLWIN/ATL::CWinTraitsOR::GetWndStyle
dev_langs: C++
helpviewer_keywords:
- CWinTraitsOR class
- window styles, default values for ATL
ms.assetid: 1eb7b1e8-a9bd-411b-a30a-35a8a10af989
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ac6cf07fcd6d3703ffb6b483ba19a2d12520cb0a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cwintraitsor-class"></a>Classe CWinTraitsOR
Questa classe fornisce un metodo per la standardizzazione stili utilizzati quando si crea un oggetto window.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <DWORD t_dwStyle = 0,
          DWORD t_dwExStyle = 0, 
          class TWinTraits = CControlWinTraits>
class CWinTraitsOR
```  
  
#### <a name="parameters"></a>Parametri  
 `t_dwStyle`  
 Stili di finestra predefinito.  
  
 `t_dwExStyle`  
 Stili finestra estesi predefiniti.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinTraitsOR::GetWndExStyle](#getwndexstyle)|Recupera gli stili estesi per il `CWinTraitsOR` oggetto.|  
|[CWinTraitsOR::GetWndStyle](#getwndstyle)|Recupera gli stili standard per il `CWinTraitsOR` oggetto.|  
  
## <a name="remarks"></a>Note  
 Questo [tratti finestra](../../atl/understanding-window-traits.md) classe fornisce un metodo semplice per la standardizzazione stili utilizzati per la creazione di un oggetto finestra ATL. Utilizzare una specializzazione di questa classe come un parametro di modello [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi di finestra ATL per specificare il set minimo di stili standard ed estesi da utilizzare per le istanze di tale classe di finestra.  
  
 Utilizzare una specializzazione del modello se si desidera assicurarsi che determinati stili siano impostati per tutte le istanze della classe della finestra mentre altri deve essere impostato su una base per ogni istanza nella chiamata a [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create).  
  
 Se si desidera fornire stili finestra che verranno utilizzati solo quando gli altri stili non vengono specificati nella chiamata a predefiniti `CWindowImpl::Create`, utilizzare [CWinTraits](../../atl/reference/cwintraits-class.md) invece.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="getwndstyle"></a>CWinTraitsOR::GetWndStyle  
 Chiamare questa funzione per recuperare una combinazione (utilizzando l'operatore OR logico) gli stili di standard di `CWinTraits` oggetto e gli stili predefiniti specificati da `t_dwStyle`.  
  
```
static DWORD GetWndStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Stili utilizzati per la creazione di una finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione degli stili che vengono passati in `dwStyle` e il valore predefinito di quelle specificate da `t_dwStyle`, utilizzando l'operatore logico OR.  
  
##  <a name="getwndexstyle"></a>CWinTraitsOR::GetWndExStyle  
 Chiamare questa funzione per recuperare una combinazione (utilizzando l'operatore logico OR), gli stili estesi del `CWinTraits` oggetto e gli stili predefiniti specificati da `t_dwStyle`.  
  
```
static DWORD GetWndExStyle(DWORD dwExStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Stili estesi utilizzati per la creazione di una finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione degli stili estesi che vengono passati in `dwExStyle` e quelle specificato da predefinite `t_dwExStyle`, utilizzando l'operatore OR logico  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Informazioni sui tratti delle finestre](../../atl/understanding-window-traits.md)

