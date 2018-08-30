---
title: Classe CWinTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CWinTraits
- ATLWIN/ATL::CWinTraits
- ATLWIN/ATL::CWinTraits::GetWndExStyle
- ATLWIN/ATL::CWinTraits::GetWndStyle
dev_langs:
- C++
helpviewer_keywords:
- CMDIChildWinTraits class
- window styles, default values for ATL
- CWinTraits class
- CFrameWinTraits class
- CControlWinTraits class
ms.assetid: f78f486e-6d9c-42c6-8e86-371e05aa7e59
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ae151d25af5ad1c77f2dcfc7af1902e562ffde51
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208308"
---
# <a name="cwintraits-class"></a>Classe CWinTraits
Questa classe fornisce un metodo per la standardizzazione con gli stili usati durante la creazione di un oggetto finestra.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <DWORD t_dwStyle = 0, DWORD t_dwExStyle = 0>  class CWinTraits
```  
  
#### <a name="parameters"></a>Parametri  
 *t_dwStyle*  
 Stili di finestra standard predefinito.  
  
 *t_dwExStyle*  
 Stili finestra estesi per impostazione predefinita.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinTraits::GetWndExStyle](#getwndexstyle)|(Statico) Recupera gli stili estesi per il `CWinTraits` oggetto.|  
|[CWinTraits::GetWndStyle](#getwndstyle)|(Statico) Recupera gli stili di standard per il `CWinTraits` oggetto.|  
  
## <a name="remarks"></a>Note  
 Ciò [tratti delle finestre](../../atl/understanding-window-traits.md) classe fornisce un metodo semplice per la standardizzazione con gli stili usati per la creazione di un oggetto di finestra ATL. Usare una specializzazione della classe come parametro di modello per [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi di finestra di ATL per specificare gli stili di standard ed estese predefiniti usati per le istanze di tale classe della finestra.  
  
 Usare questo modello quando si desidera fornire stili di finestra che verranno utilizzati solo se nessun altri stili vengono specificati nella chiamata a predefiniti [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create).  
  
 ATL fornisce tre predefinite specializzazioni del modello per le combinazioni di usate comune degli stili finestra:  
  
 `CControlWinTraits`  
 Progettato per una finestra di controllo standard. Vengono usati i seguenti stili standard: WS_CHILD WS_VISIBLE, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Sono non disponibili stili estesi.  
  
 `CFrameWinTraits`  
 Progettato per una finestra cornice standard. Gli stili standard usati includono: WS_OVERLAPPEDWINDOW WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Gli stili estesi usati includono: WS_EX_APPWINDOW e WS_EX_WINDOWEDGE.  
  
 `CMDIChildWinTraits`  
 Progettato per una finestra figlio MDI standard. Gli stili standard usati includono: WS_OVERLAPPEDWINDOW WS_CHILD, WS_VISIBLE, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Gli stili estesi usati includono: WS_EX_MDICHILD.  
  
 Se si desidera assicurarsi che siano impostati alcuni stili per tutte le istanze della classe della finestra mentre altri devono essere impostate in una base per istanza, utilizzare [CWinTraitsOR](../../atl/reference/cwintraitsor-class.md) invece.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="getwndstyle"></a>  CWinTraits::GetWndStyle  
 Chiamare questa funzione per recuperare gli stili di standard di `CWinTraits` oggetto.  
  
```
static DWORD GetWndStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Stili usati per la creazione di una finestra standard. Se *dwStyle* è 0, i valori dello stile di modello (`t_dwStyle`) vengono restituiti. Se *dwStyle* è diverso da zero, *dwStyle* viene restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Gli stili di finestra standard dell'oggetto.  
  
##  <a name="getwndexstyle"></a>  CWinTraits::GetWndExStyle  
 Chiamare questa funzione per recuperare gli stili estesi del `CWinTraits` oggetto.  
  
```
static DWORD GetWndExStyle(DWORD dwExStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *dwExStyle*  
 Stili estesi utilizzati per la creazione di una finestra. Se *dwExStyle* è 0, i valori dello stile di modello (`t_dwExStyle`) vengono restituiti. Se *dwExStyle* è diverso da zero, *dwExStyle* viene restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Stili finestra estesi dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Membri della classe](https://msdn.microsoft.com/dbe6a147-3f01-4aea-a3fb-fe6ebadc31f8)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Informazioni sui tratti delle finestre](../../atl/understanding-window-traits.md)
