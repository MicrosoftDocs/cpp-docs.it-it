---
title: Macro del controllo composto | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- composite controls, macros
ms.assetid: 17f2dd5e-07e6-4aa6-b965-7a361c78c45e
caps.latest.revision: 16
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
ms.sourcegitcommit: 8cdedc5cfac9d49df812ae6fcfcc548201b1edb5
ms.openlocfilehash: 9fb8a907c8052c9816d6b87247e903a63f34a5be
ms.lasthandoff: 02/24/2017

---
# <a name="composite-control-macros"></a>Macro di controllo composito
Queste macro definiscono mappe sink di evento e le voci.  
  
|||  
|-|-|  
|[BEGIN_SINK_MAP](#begin_sink_map)|Contrassegna l'inizio della mappa del sink di evento per il controllo composito.|  
|[END_SINK_MAP](#end_sink_map)|Contrassegna la fine della mappa del sink di evento per il controllo composito.|  
|[MACRO SINK_ENTRY](#sink_entry)|Voce della mappa del sink di evento.|  
|[SINK_ENTRY_EX](#sink_entry_ex)|Voce della mappa del sink di evento con un parametro aggiuntivo.| 
|[SINK_ENTRY_EX_P](#sink_entry_ex)| (2017 di visual Studio) Simile a SINK_ENTRY_EX la differenza che accetta un puntatore a iid.|  
|[MACRO SINK_ENTRY_INFO](#sink_entry_info)|Voce alla mappa del sink di eventi con informazioni sul tipo manualmente fornito per l'utilizzo con [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md).|  
|[SINK_ENTRY_INFO_P](#sink_entry_info)| (2017 di visual Studio) Simile a macro SINK_ENTRY_INFO la differenza che accetta un puntatore a iid.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  

##  <a name="a-namebeginsinkmapa--beginsinkmap"></a><a name="begin_sink_map"></a>BEGIN_SINK_MAP  
 Dichiara l'inizio della mappa del sink di evento per il controllo composito.  
  
```
BEGIN_SINK_MAP(_class)
```  
  
### <a name="parameters"></a>Parametri  
 `_class`  
 [in] Specifica il controllo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#104; NVC_ATL_Windowing](../../atl/codesnippet/cpp/composite-control-macros_1.h)]  
  
### <a name="remarks"></a>Note  
 Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
##  <a name="a-nameendsinkmapa--endsinkmap"></a><a name="end_sink_map"></a>END_SINK_MAP  
 Dichiara la fine della mappa del sink di evento per il controllo composito.  
  
```
END_SINK_MAP()
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#104; NVC_ATL_Windowing](../../atl/codesnippet/cpp/composite-control-macros_1.h)]  
  
### <a name="remarks"></a>Note  
 Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
##  <a name="a-namesinkentrya--sinkentry"></a><a name="sink_entry"></a>MACRO SINK_ENTRY  
 Dichiara la funzione del gestore ( `fn`) per l'evento specificato ( `dispid`), del controllo identificato da `id`.  
  
```
SINK_ENTRY( id, dispid, fn )
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identifica il controllo.  
  
 `dispid`  
 [in] Identifica l'evento specificato.  
  
 `fn`  
 [in] Nome della funzione del gestore eventi. Questa funzione è necessario utilizzare il **stdcall** la convenzione di chiamata e avere la firma stile dispinterface appropriato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#104; NVC_ATL_Windowing](../../atl/codesnippet/cpp/composite-control-macros_1.h)]  
  
### <a name="remarks"></a>Note  
 Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
##  <a name="a-namesinkentryexa--sinkentryex-and-sinkentryexp"></a><a name="sink_entry_ex"></a>SINK_ENTRY_EX e SINK_ENTRY_EX_P
 Dichiara la funzione del gestore ( `fn`) per l'evento specificato ( `dispid`), dell'interfaccia dispatch ( *iid)*, per il controllo identificato da `id`.  
  
```
SINK_ENTRY_EX( id, iid, dispid, fn )
SINK_ENTRY_EX_P( id, piid, dispid, fn ) // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Identifica il controllo.  
  
 `iid`  
 [in] Identifica l'interfaccia dispatch.  

 `piid`  
 [in] Puntatore all'interfaccia di invio.  
  
 `dispid`  
 [in] Identifica l'evento specificato.  
  
 `fn`  
 [in] Nome della funzione del gestore eventi. Questa funzione è necessario utilizzare il **stdcall** la convenzione di chiamata e avere la firma stile dispinterface appropriato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#136;](../../atl/codesnippet/cpp/composite-control-macros_2.h)]  
  
### <a name="remarks"></a>Note  
 Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
##  <a name="a-namesinkentryinfoa--sinkentryinfo-and-sinkentryinfop"></a><a name="sink_entry_info"></a>Macro SINK_ENTRY_INFO e SINK_ENTRY_INFO_P  
 Utilizzare il `SINK_ENTRY_INFO` (macro) all'interno di una mappa del sink di evento per fornire le informazioni necessarie a [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) l'invio di eventi alla funzione del gestore pertinente.  
  
```
SINK_ENTRY_INFO( id, iid, dispid, fn, info )
SINK_ENTRY_INFO_P( id, piid, dispid, fn, info ) // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 [in] Intero senza segno che identifica l'origine evento. Questo valore deve corrispondere il `nID` utilizzato nel parametro di modello [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) classe di base.  
  
 `iid`  
 [in] IID che identifica l'interfaccia dispatch.  

 `piid`  
 [in] Puntatore a IID che identifica l'interfaccia dispatch.
  
 `dispid`  
 [in] DISPID che identifica l'evento specificato.  
  
 `fn`  
 [in] Nome della funzione del gestore eventi. Questa funzione è necessario utilizzare il **stdcall** la convenzione di chiamata e avere la firma stile dispinterface appropriato.  
  
 `info`  
 [in] Digitare le informazioni per la funzione del gestore eventi. Questo tipo di informazioni viene fornito sotto forma di un puntatore a un `_ATL_FUNC_INFO` struttura. `CC_CDECL`è l'unica opzione supportata in Windows CE per il `CALLCONV` campo di `_ATL_FUNC_INFO` struttura. Qualsiasi altro valore non è supportato in questo modo il comportamento non definito.  
  
### <a name="remarks"></a>Note  
 I parametri della macro primi quattro sono identici a quelli per la [SINK_ENTRY_EX](#sink_entry_ex) (macro). L'ultimo parametro fornisce informazioni sul tipo per l'evento. Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  

## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [Funzioni globali di controllo composito](../../atl/reference/composite-control-global-functions.md)

