---
title: Classe CAxDialogImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CAxDialogImpl
- ATL.CAxDialogImpl
- CAxDialogImpl
dev_langs:
- C++
helpviewer_keywords:
- CAxDialogImpl class
- ATL, dialog boxes
ms.assetid: 817df483-3fa8-44e7-8487-72ba0881cd27
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 71e77ac6b8d2a89e384817020772bb855ce2d573
ms.lasthandoff: 02/24/2017

---
# <a name="caxdialogimpl-class"></a>CAxDialogImpl (classe)
Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class TBase = CWindow>  
class ATL_NO_VTABLE CAxDialogImpl : public CDialogImplBaseT<TBase>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CAxDialogImpl`.  
  
 *TBase*  
 La classe di finestra di base per **CDialogImplBaseT**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::](#advisesinkmap)|Chiamare questo metodo per inviare o annullare gli avvisi per tutte le voci della mappa di eventi dell'oggetto sink mappa.|  
|[CAxDialogImpl::Create](#create)|Chiamare questo metodo per creare una finestra di dialogo non modale.|  
|[CAxDialogImpl::DestroyWindow](#destroywindow)|Chiamare questo metodo per eliminare una finestra di dialogo non modale.|  
|[CAxDialogImpl::DoModal](#domodal)|Chiamare questo metodo per creare una finestra di dialogo modale.|  
|[CAxDialogImpl::EndDialog](#enddialog)|Chiamare questo metodo per eliminare una finestra di dialogo modale.|  
|[CAxDialogImpl::GetDialogProc](#getdialogproc)|Chiamare questo metodo per ottenere un puntatore per il `DialogProc` funzione di callback.|  
|[CAxDialogImpl::GetIDD](#getidd)|Chiamare questo metodo per ottenere l'ID di risorsa modello di finestra di dialogo|  
|[CAxDialogImpl::IsDialogMessage](#isdialogmessage)|Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, se si tratta, elaborare il messaggio.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxDialogImpl::m_bModal](#m_bmodal)|Una variabile che esiste solo in modalità debug compila e viene impostato su true se la finestra di dialogo è modale.|  
  
## <a name="remarks"></a>Note  
 `CAxDialogImpl`Consente di creare una finestra di dialogo modale o non modale. `CAxDialogImpl`fornisce la routine della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi per i gestori appropriati.  
  
 `CAxDialogImpl`deriva da `CDialogImplBaseT`, che a sua volta deriva da *TBase* (per impostazione predefinita, `CWindow`) e `CMessageMap`.  
  
 La classe deve definire un membro IDD che specifica l'ID di risorsa modello di finestra di dialogo. Ad esempio si aggiunge un oggetto finestra di dialogo ATL mediante la **Aggiungi classe** la finestra di dialogo aggiunge automaticamente la riga seguente alla classe:  
  
 [!code-cpp[NVC_ATL_Windowing n.&41;](../../atl/codesnippet/cpp/caxdialogimpl-class_1.h)]  
  
 dove `MyDialog` è il **nome breve** immesso nella finestra di dialogo Creazione guidata ATL.  
  
 Vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni.  
  
 Si noti che verrà creato un controllo ActiveX nella finestra di dialogo modale con `CAxDialogImpl` non supporterà tasti di scelta rapida. Per supportare i tasti di scelta rapida nella finestra di dialogo create con `CAxDialogImpl`, creare una finestra di dialogo non modale e, utilizzando un ciclo di messaggi, utilizzare [CAxDialogImpl::IsDialogMessage](#isdialogmessage) dopo un messaggio dalla coda per la gestione di un tasto di scelta rapida.  
  
 Per ulteriori informazioni su `CAxDialogImpl`, vedere [domande frequenti sul contenimento di controllo ATL](../../atl/atl-control-containment-faq.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CDialogImplBaseT`  
  
 `CAxDialogImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="a-nameadvisesinkmapa--caxdialogimpladvisesinkmap"></a><a name="advisesinkmap"></a>CAxDialogImpl::  
 Chiamare questo metodo per inviare o annullare gli avvisi per tutte le voci della mappa di eventi dell'oggetto sink mappa.  
  
```
HRESULT AdviseSinkMap(bool bAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 `bAdvise`  
 Impostare su true se tutte le voci di sink devono essere informato; sink false se tutte le voci sono da unadvised.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-namecreatea--caxdialogimplcreate"></a><a name="create"></a>CAxDialogImpl::Create  
 Chiamare questo metodo per creare una finestra di dialogo non modale.  
  
```
HWND Create(HWND hWndParent, LPARAM dwInitParam = NULL);
HWND Create(HWND hWndParent, RECT&, LPARAM dwInitParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle di finestra proprietaria.  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo nel `lParam` parametro il **WM_INITDIALOG** messaggio.  
  
 **RECT /**  
 Questo parametro non viene usato. Questo parametro viene passato dal `CComControl`.  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra di dialogo appena creato.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo viene associata automaticamente al `CAxDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal).  
  
 Il secondo override viene fornito solo per consentire le finestre di dialogo possono essere utilizzate con [CComControl](../../atl/reference/ccomcontrol-class.md).  
  
##  <a name="a-namedestroywindowa--caxdialogimpldestroywindow"></a><a name="destroywindow"></a>CAxDialogImpl::DestroyWindow  
 Chiamare questo metodo per eliminare una finestra di dialogo non modale.  
  
```
BOOL DestroyWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra viene eliminata correttamente; in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Non chiamare `DestroyWindow` eliminare la finestra di dialogo modale. Chiamare [EndDialog](#enddialog) invece.  
  
##  <a name="a-namedomodala--caxdialogimpldomodal"></a><a name="domodal"></a>CAxDialogImpl::DoModal  
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
 [in] Specifica il valore da passare alla finestra di dialogo nel `lParam` parametro il **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore di `nRetCode` parametro specificato nella chiamata a [EndDialog](#enddialog); in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo viene associata automaticamente al `CAxDialogImpl` oggetto.  
  
 Per creare una finestra di dialogo non modale, chiamare [crea](#create).  
  
##  <a name="a-nameenddialoga--caxdialogimplenddialog"></a><a name="enddialog"></a>CAxDialogImpl::EndDialog  
 Chiamare questo metodo per eliminare una finestra di dialogo modale.  
  
```
BOOL EndDialog(int nRetCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nRetCode`  
 [in] Il valore deve essere restituito da [DoModal](#domodal).  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra di dialogo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 `EndDialog`devono essere chiamati tramite la routine della finestra di dialogo. Dopo che la finestra di dialogo viene eliminata, verrà utilizzato il valore di `nRetCode` come valore restituito per `DoModal`, che creato la finestra di dialogo.  
  
> [!NOTE]
>  Non chiamare `EndDialog` per eliminare una finestra di dialogo non modale. Chiamare [DestroyWindow](#destroywindow) invece.  
  
##  <a name="a-namegetdialogproca--caxdialogimplgetdialogproc"></a><a name="getdialogproc"></a>CAxDialogImpl::GetDialogProc  
 Chiamare questo metodo per ottenere un puntatore per il `DialogProc` funzione di callback.  
  
```
virtual DLGPROC GetDialogProc();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il `DialogProc` funzione di callback.  
  
### <a name="remarks"></a>Note  
 Il `DialogProc` tratta di una funzione di richiamata definita dall'applicazione.  
  
##  <a name="a-namegetidda--caxdialogimplgetidd"></a><a name="getidd"></a>CAxDialogImpl::GetIDD  
 Chiamare questo metodo per ottenere l'ID di risorsa modello di finestra di dialogo.  
  
```
int GetIDD();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ID di risorsa modello di finestra di dialogo.  
  
##  <a name="a-nameisdialogmessagea--caxdialogimplisdialogmessage"></a><a name="isdialogmessage"></a>CAxDialogImpl::IsDialogMessage  
 Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, se si tratta, elaborare il messaggio.  
  
```
BOOL IsDialogMessage(LPMSG pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Puntatore a un [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che contiene il messaggio da verificare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il messaggio è stata elaborata, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo è destinato a essere chiamato dall'interno di un ciclo di messaggi.  
  
##  <a name="a-namembmodala--caxdialogimplmbmodal"></a><a name="m_bmodal"></a>CAxDialogImpl::m_bModal  
 Una variabile che esiste solo in modalità debug compila e viene impostato su true se la finestra di dialogo è modale.  
  
```
bool m_bModal;
```  
  
## <a name="see-also"></a>Vedere anche  
 [CDialogImpl (classe)](../../atl/reference/cdialogimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

