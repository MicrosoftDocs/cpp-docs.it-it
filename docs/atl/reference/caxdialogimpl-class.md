---
title: Classe CAxDialogImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAxDialogImpl
- ATLWIN/ATL::CAxDialogImpl
- ATLWIN/ATL::CAxDialogImpl::AdviseSinkMap
- ATLWIN/ATL::CAxDialogImpl::Create
- ATLWIN/ATL::CAxDialogImpl::DestroyWindow
- ATLWIN/ATL::CAxDialogImpl::DoModal
- ATLWIN/ATL::CAxDialogImpl::EndDialog
- ATLWIN/ATL::CAxDialogImpl::GetDialogProc
- ATLWIN/ATL::CAxDialogImpl::GetIDD
- ATLWIN/ATL::CAxDialogImpl::IsDialogMessage
- ATLWIN/ATL::CAxDialogImpl::m_bModal
dev_langs: C++
helpviewer_keywords:
- CAxDialogImpl class
- ATL, dialog boxes
ms.assetid: 817df483-3fa8-44e7-8487-72ba0881cd27
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2db97c0de9f262936212cf7f38abddf7c91eb5a6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="caxdialogimpl-class"></a>CAxDialogImpl (classe)
Questa classe implementa una finestra di dialogo (modale o non modale) che ospita controlli ActiveX.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class TBase = CWindow>  
class ATL_NO_VTABLE CAxDialogImpl : public CDialogImplBaseT<TBase>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `CAxDialogImpl`.  
  
 *TBase*  
 La classe di base di finestra per **CDialogImplBaseT**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::](#advisesinkmap)|Chiamare questo metodo per inviare o annullare gli avvisi per tutte le voci nella mappa di eventi mappa sink dell'oggetto.|  
|[CAxDialogImpl::Create](#create)|Chiamare questo metodo per creare una finestra di dialogo non modale.|  
|[CAxDialogImpl::DestroyWindow](#destroywindow)|Chiamare questo metodo per eliminare una finestra di dialogo non modale.|  
|[CAxDialogImpl::DoModal](#domodal)|Chiamare questo metodo per creare una finestra di dialogo modale.|  
|[CAxDialogImpl::EndDialog](#enddialog)|Chiamare questo metodo per eliminare una finestra di dialogo modale.|  
|[CAxDialogImpl::GetDialogProc](#getdialogproc)|Chiamare questo metodo per ottenere un puntatore per il `DialogProc` funzione di callback.|  
|[CAxDialogImpl::GetIDD](#getidd)|Chiamare questo metodo per ottenere l'ID di risorsa modello di finestra di dialogo|  
|[CAxDialogImpl::IsDialogMessage](#isdialogmessage)|Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, se si tratta, elaborare il messaggio.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::m_bModal](#m_bmodal)|Una variabile che esiste solo in modalità debug compila e viene impostata su true se la finestra di dialogo modale.|  
  
## <a name="remarks"></a>Note  
 `CAxDialogImpl`Consente di creare una finestra di dialogo modale o non modale. `CAxDialogImpl`fornisce la routine della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi per i gestori appropriati.  
  
 `CAxDialogImpl`deriva da `CDialogImplBaseT`, che a sua volta deriva da *TBase* (per impostazione predefinita, `CWindow`) e `CMessageMap`.  
  
 La classe deve definire un membro IDD che specifica l'ID di risorsa modello di finestra di dialogo. Ad esempio, aggiungendo un oggetto finestra di dialogo ATL tramite il **Aggiungi classe** la finestra di dialogo aggiunge automaticamente la riga seguente alla classe:  
  
 [!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/caxdialogimpl-class_1.h)]  
  
 dove `MyDialog` è il **nome breve** immessa nella creazione guidata finestra di dialogo ATL.  
  
 Vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni.  
  
 Si noti che verrà creato un controllo ActiveX nella finestra di dialogo modale con `CAxDialogImpl` non supporterà i tasti di scelta rapida. Per supportare i tasti di scelta rapida nella finestra di dialogo creata con `CAxDialogImpl`, creare una finestra di dialogo non modale e, utilizzando un ciclo di messaggi, utilizzare [CAxDialogImpl::IsDialogMessage](#isdialogmessage) dopo un messaggio dalla coda per gestire un tasto di scelta rapida.  
  
 Per ulteriori informazioni su `CAxDialogImpl`, vedere [ATL domande frequenti](../../atl/atl-control-containment-faq.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CDialogImplBaseT`  
  
 `CAxDialogImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="advisesinkmap"></a>CAxDialogImpl::  
 Chiamare questo metodo per inviare o annullare gli avvisi per tutte le voci nella mappa di eventi mappa sink dell'oggetto.  
  
```
HRESULT AdviseSinkMap(bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 `bAdvise`  
 Impostare su true se tutte le voci di sink devono ricevere notifica; le voci di false se tutti i sink debbano essere unadvised.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="create"></a>CAxDialogImpl::Create  
 Chiamare questo metodo per creare una finestra di dialogo non modale.  
  
```
HWND Create(HWND hWndParent, LPARAM dwInitParam = NULL);
HWND Create(HWND hWndParent, RECT&, LPARAM dwInitParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle di finestra proprietaria.  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo di `lParam` parametro del **WM_INITDIALOG** messaggio.  
  
 **RECT &**  
 Questo parametro non viene usato. Questo parametro viene passato dal `CComControl`.  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra di dialogo appena creato.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo verrà automaticamente allegata al `CAxDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal).  
  
 Il secondo override viene fornito solo in modo da finestre di dialogo possono essere utilizzate con [CComControl](../../atl/reference/ccomcontrol-class.md).  
  
##  <a name="destroywindow"></a>CAxDialogImpl::DestroyWindow  
 Chiamare questo metodo per eliminare una finestra di dialogo non modale.  
  
```
BOOL DestroyWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra viene eliminata correttamente; in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Non chiamare `DestroyWindow` eliminare la finestra di dialogo modale. Chiamare [EndDialog](#enddialog) invece.  
  
##  <a name="domodal"></a>CAxDialogImpl::DoModal  
 Chiamare questo metodo per creare una finestra di dialogo modale.  
  
```
INT_PTR DoModal(
  HWND hWndParent = ::GetActiveWindow(), 
  LPARAM dwInitParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle di finestra proprietaria. Il valore predefinito è il valore restituito di [GetActiveWindow](http://msdn.microsoft.com/library/windows/desktop/ms646292) funzione Win32.  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo di `lParam` parametro del **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore di `nRetCode` parametro specificato nella chiamata a [EndDialog](#enddialog); in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo verrà automaticamente allegata al `CAxDialogImpl` oggetto.  
  
 Per creare una finestra di dialogo non modale, chiamare [crea](#create).  
  
##  <a name="enddialog"></a>CAxDialogImpl::EndDialog  
 Chiamare questo metodo per eliminare una finestra di dialogo modale.  
  
```
BOOL EndDialog(int nRetCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nRetCode`  
 [in] Il valore deve essere restituito da [DoModal](#domodal).  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra di dialogo viene eliminato definitivamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 `EndDialog`devono essere chiamati tramite la routine della finestra di dialogo. Dopo che la finestra di dialogo viene eliminato definitivamente, Windows Usa il valore di `nRetCode` come valore restituito per `DoModal`, che creato la finestra di dialogo.  
  
> [!NOTE]
>  Non chiamare `EndDialog` eliminare definitivamente una finestra di dialogo non modale. Chiamare [DestroyWindow](#destroywindow) invece.  
  
##  <a name="getdialogproc"></a>CAxDialogImpl::GetDialogProc  
 Chiamare questo metodo per ottenere un puntatore per il `DialogProc` funzione di callback.  
  
```
virtual DLGPROC GetDialogProc();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al `DialogProc` funzione di callback.  
  
### <a name="remarks"></a>Note  
 Il `DialogProc` funzione è una funzione di callback definita dall'applicazione.  
  
##  <a name="getidd"></a>CAxDialogImpl::GetIDD  
 Chiamare questo metodo per ottenere l'ID di risorsa modello di finestra di dialogo.  
  
```
int GetIDD();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ID di risorsa modello di finestra di dialogo.  
  
##  <a name="isdialogmessage"></a>CAxDialogImpl::IsDialogMessage  
 Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, se si tratta, elaborare il messaggio.  
  
```
BOOL IsDialogMessage(LPMSG pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Puntatore a un [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che contiene il messaggio da verificare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il messaggio è stato elaborato, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo è destinato a essere chiamato dall'interno di un ciclo di messaggi.  
  
##  <a name="m_bmodal"></a>CAxDialogImpl::m_bModal  
 Una variabile che esiste solo in modalità debug compila e viene impostata su true se la finestra di dialogo modale.  
  
```
bool m_bModal;
```  
  
## <a name="see-also"></a>Vedere anche  
 [CDialogImpl (classe)](../../atl/reference/cdialogimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
