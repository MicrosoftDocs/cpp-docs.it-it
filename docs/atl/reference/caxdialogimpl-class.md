---
title: Classe CAxDialogImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
dev_langs:
- C++
helpviewer_keywords:
- CAxDialogImpl class
- ATL, dialog boxes
ms.assetid: 817df483-3fa8-44e7-8487-72ba0881cd27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 88cb742464507fe7040b38d88355ab473b366bac
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43196010"
---
# <a name="caxdialogimpl-class"></a>Classe CAxDialogImpl
Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class TBase = CWindow>  
class ATL_NO_VTABLE CAxDialogImpl : public CDialogImplBaseT<TBase>
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `CAxDialogImpl`.  
  
 *TBase*  
 La classe di finestra di base per `CDialogImplBaseT`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::](#advisesinkmap)|Chiamare questo metodo per inviare o annullare tutte le voci nella mappa di eventi dell'oggetto sink della mappa.|  
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
|[CAxDialogImpl::m_bModal](#m_bmodal)|Una variabile che esiste solo in modalità debug compila e deve essere impostata su true se la finestra di dialogo modale.|  
  
## <a name="remarks"></a>Note  
 `CAxDialogImpl` Consente di creare una finestra di dialogo modale o non modale. `CAxDialogImpl` fornisce la routine di finestra di dialogo, che usa la mappa dei messaggi predefinita per indirizzare i messaggi ai gestori appropriati.  
  
 `CAxDialogImpl` deriva da `CDialogImplBaseT`, che a sua volta deriva da *TBase* (per impostazione predefinita `CWindow`) e `CMessageMap`.  
  
 La classe deve definire un membro IDD che specifica l'ID di risorsa modello di finestra di dialogo. Ad esempio, aggiungendo un oggetto finestra di dialogo ATL tramite il **Aggiungi classe** nella finestra di dialogo aggiunge automaticamente la riga seguente alla classe:  
  
 [!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/caxdialogimpl-class_1.h)]  
  
 in cui `MyDialog` è il **nome breve** immessa nella creazione guidata finestra di dialogo ATL.  
  
 Visualizzare [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per altre informazioni.  
  
 Si noti che verrà creato un controllo ActiveX in una finestra di dialogo modale con `CAxDialogImpl` non supporterà tasti di scelta rapida. Per supportare tasti di scelta rapida in una finestra di dialogo creata con `CAxDialogImpl`, creare una finestra di dialogo non modale e, con il proprio ciclo di messaggi, usare [CAxDialogImpl::IsDialogMessage](#isdialogmessage) dopo aver ottenuto un messaggio dalla coda per gestire un tasto di scelta rapida.  
  
 Per ulteriori informazioni sul `CAxDialogImpl`, vedere [domande frequenti sul contenimento di controllo ATL](../../atl/atl-control-containment-faq.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CDialogImplBaseT`  
  
 `CAxDialogImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="advisesinkmap"></a>  CAxDialogImpl::  
 Chiamare questo metodo per inviare o annullare tutte le voci nella mappa di eventi dell'oggetto sink della mappa.  
  
```
HRESULT AdviseSinkMap(bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 *bAdvise*  
 Impostare su true se tutte le voci di sink a cui annunciare; false se tutti i sink voci sono da annullare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="create"></a>  CAxDialogImpl::Create  
 Chiamare questo metodo per creare una finestra di dialogo non modale.  
  
```
HWND Create(HWND hWndParent, LPARAM dwInitParam = NULL);
HWND Create(HWND hWndParent, RECT&, LPARAM dwInitParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *hWndParent*  
 [in] Handle alla finestra proprietaria.  
  
 *dwInitParam*  
 [in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del messaggio WM_INITDIALOG.  
  
 *RECT &AMP;*  
 Questo parametro non viene usato. Questo parametro viene passato dal `CComControl`.  
  
### <a name="return-value"></a>Valore restituito  
 Handle alla finestra di dialogo appena creato.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo viene associata automaticamente al `CAxDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal).  
  
 Il secondo override viene fornito solo per consentire le finestre di dialogo possono essere usate con [CComControl](../../atl/reference/ccomcontrol-class.md).  
  
##  <a name="destroywindow"></a>  CAxDialogImpl::DestroyWindow  
 Chiamare questo metodo per eliminare una finestra di dialogo non modale.  
  
```
BOOL DestroyWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra viene eliminata correttamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Non chiamare `DestroyWindow` eliminare definitivamente una finestra di dialogo modale. Chiamare [EndDialog](#enddialog) invece.  
  
##  <a name="domodal"></a>  CAxDialogImpl::DoModal  
 Chiamare questo metodo per creare una finestra di dialogo modale.  
  
```
INT_PTR DoModal(
  HWND hWndParent = ::GetActiveWindow(), 
  LPARAM dwInitParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *hWndParent*  
 [in] Handle alla finestra proprietaria. Il valore predefinito è il valore restituito di [GetActiveWindow](https://msdn.microsoft.com/library/windows/desktop/ms646292) funzione Win32.  
  
 *dwInitParam*  
 [in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del messaggio WM_INITDIALOG.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, il valore della *nRetCode* il parametro specificato nella chiamata a [EndDialog](#enddialog); in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo viene associata automaticamente al `CAxDialogImpl` oggetto.  
  
 Per creare una finestra di dialogo non modale, chiamare [Create](#create).  
  
##  <a name="enddialog"></a>  CAxDialogImpl::EndDialog  
 Chiamare questo metodo per eliminare una finestra di dialogo modale.  
  
```
BOOL EndDialog(int nRetCode);
```  
  
### <a name="parameters"></a>Parametri  
 *nRetCode*  
 [in] Il valore deve essere restituito da [DoModal](#domodal).  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra di dialogo viene eliminato definitivamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 `EndDialog` deve essere chiamato tramite la routine di finestra di dialogo. Dopo che la finestra di dialogo viene eliminato definitivamente, Windows Usa il valore della *nRetCode* come valore restituito per `DoModal`, che creato la finestra di dialogo.  
  
> [!NOTE]
>  Non chiamare `EndDialog` eliminare definitivamente una finestra di dialogo non modale. Chiamare [DestroyWindow](#destroywindow) invece.  
  
##  <a name="getdialogproc"></a>  CAxDialogImpl::GetDialogProc  
 Chiamare questo metodo per ottenere un puntatore per il `DialogProc` funzione di callback.  
  
```
virtual DLGPROC GetDialogProc();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al `DialogProc` funzione di callback.  
  
### <a name="remarks"></a>Note  
 Il `DialogProc` è una funzione di richiamata definita dall'applicazione.  
  
##  <a name="getidd"></a>  CAxDialogImpl::GetIDD  
 Chiamare questo metodo per ottenere l'ID di risorsa modello di finestra di dialogo.  
  
```
int GetIDD();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ID di risorsa modello di finestra di dialogo.  
  
##  <a name="isdialogmessage"></a>  CAxDialogImpl::IsDialogMessage  
 Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, se si tratta, elaborare il messaggio.  
  
```
BOOL IsDialogMessage(LPMSG pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *pMsg*  
 Puntatore a un [MSG](https://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che contiene il messaggio da controllare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il messaggio è stata elaborata, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo è destinato a essere chiamato dall'interno di un ciclo di messaggi.  
  
##  <a name="m_bmodal"></a>  CAxDialogImpl::m_bModal  
 Una variabile che esiste solo in modalità debug compila e deve essere impostata su true se la finestra di dialogo modale.  
  
```
bool m_bModal;
```  
  
## <a name="see-also"></a>Vedere anche  
 [CDialogImpl (classe)](../../atl/reference/cdialogimpl-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
