---
title: CDialogImpl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDialogImpl
- ATL.CDialogImpl
- ATL::CDialogImpl
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes, ATL
- CDialogImpl class
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
caps.latest.revision: 25
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 732227ef8566ce5e2985a3e65a1153a130df6b20
ms.lasthandoff: 02/24/2017

---
# <a name="cdialogimpl-class"></a>CDialogImpl (classe)
Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
template <class T,  
    class TBase = CWindow>  
    class ATL_NO_VTABLE CDialogImpl : public CDialogImplBaseT<TBase>  
 
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `CDialogImpl`.  
  
 *TBase*  
 Classe di base della nuova classe. La classe di base predefinita è [CWindow](../../atl/reference/cwindow-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Creare](#create)|Crea una finestra di dialogo non modale.|  
|[DestroyWindow](#destroywindow)|Elimina una finestra di dialogo non modale.|  
|[DoModal](#domodal)|Crea una finestra di dialogo modale.|  
|[EndDialog](#enddialog)|Elimina una finestra di dialogo modale.|  
  
### <a name="cdialogimplbaset-methods"></a>Metodi CDialogImplBaseT  
  
|||  
|-|-|  
|[GetDialogProc](#getdialogproc)|Restituisce la routine della finestra di dialogo corrente.|  
|[MapDialogRect](#mapdialogrect)|Le unità finestra di dialogo del rettangolo specificato viene eseguito il mapping a unità schermo (pixel).|  
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo la ricezione dell'ultimo messaggio, in genere `WM_NCDESTROY`.|  
  
### <a name="static-functions"></a>Funzioni statiche  
  
|||  
|-|-|  
|[DialogProc](#dialogproc)|Elabora i messaggi inviati alla finestra di dialogo.|  
|[StartDialogProc](#startdialogproc)|Chiamato quando viene ricevuto il messaggio prima di elaborare i messaggi inviati alla finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Con `CDialogImpl` è possibile creare una finestra di dialogo modale o non modale. `CDialogImpl`fornisce la routine della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi per i gestori appropriati.  
  
 Il distruttore della classe base **~ CWindowImplRoot** assicura che la finestra è stata eliminata prima dell'eliminazione dell'oggetto.  
  
 `CDialogImpl`deriva da **CDialogImplBaseT**, che a sua volta deriva da **CWindowImplRoot**.  
  
> [!NOTE]
>  La classe deve definire un **IDD** membro che specifica l'ID di risorsa modello di finestra di dialogo. Ad esempio, la creazione guidata progetto ATL aggiunge automaticamente la riga seguente alla classe:  
  
 [!code-cpp[NVC_ATL_Windowing n.&41;](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]  
  
 dove `MyDlg` è il **nome breve** immesso della procedura guidata **nomi** pagina.  
  
|Per altre informazioni su|Vedere|  
|--------------------------------|---------|  
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Le finestre di dialogo in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
|Finestre di dialogo|[Finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms632588) e gli argomenti successivi il[!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="a-namecreatea--cdialogimplcreate"></a><a name="create"></a>CDialogImpl::Create  
 Crea una finestra di dialogo non modale.  
  
```  
HWND Create(
    HWND hWndParent,  
    LPARAM dwInitParam = NULL );  

HWND Create(
    HWND hWndParent,  
    RECT&, 
    LPARAM dwInitParam = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle di finestra proprietaria.  
  
 **RECT /**`rect`  
 [in] Oggetto [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura specifica dimensioni e la posizione della finestra di dialogo.  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo nel **lParam** parametro il **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra di dialogo appena creato.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo viene associata automaticamente al `CDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal). Il secondo override precedente viene utilizzato solo con [CComControl](../../atl/reference/ccomcontrol-class.md).  
  
##  <a name="a-namedestroywindowa--cdialogimpldestroywindow"></a><a name="destroywindow"></a>CDialogImpl::DestroyWindow  
 Elimina una finestra di dialogo non modale.  
  
```  
 
BOOL DestroyWindow();

 
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra di dialogo è stata eliminata correttamente; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Restituisce **TRUE** se la finestra di dialogo è stata eliminata correttamente; in caso contrario **FALSE**.  
  
##  <a name="a-namedialogproca--cdialogimpldialogproc"></a><a name="dialogproc"></a>CDialogImpl::DialogProc  
 Questa funzione statica implementa la routine della finestra di dialogo.  
  
```  
 
static LRESULT CALLBACK DialogProc(
    HWND hWnd,  
    UINT uMsg,  
    WPARAM wParam,  
    LPARAM lParam);

 
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra di dialogo.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra di dialogo.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il messaggio viene elaborato; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 `DialogProc`utilizza la mappa messaggi predefinita per indirizzare i messaggi per i gestori appropriati.  
  
 È possibile eseguire l'override `DialogProc` per fornire un meccanismo diverso per la gestione dei messaggi.  
  
##  <a name="a-namedomodala--cdialogimpldomodal"></a><a name="domodal"></a>CDialogImpl::DoModal  
 Crea una finestra di dialogo modale.  
  
```   
INT_PTR DoModal(  
    HWND hWndParent = ::GetActiveWindow(),   
    LPARAM dwInitParam = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle di finestra proprietaria. Il valore predefinito è il valore restituito di [GetActiveWindow](http://msdn.microsoft.com/library/windows/desktop/ms646292) funzione Win32.  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo nel **lParam** parametro il **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore di `nRetCode` parametro specificato nella chiamata a [EndDialog](#enddialog). In caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo viene associata automaticamente al `CDialogImpl` oggetto.  
  
 Per creare una finestra di dialogo non modale, chiamare [crea](#create).  
  
##  <a name="a-nameenddialoga--cdialogimplenddialog"></a><a name="enddialog"></a>CDialogImpl::EndDialog  
 Elimina una finestra di dialogo modale.  
  
```   
BOOL EndDialog(int nRetCode); 
```  
  
### <a name="parameters"></a>Parametri  
 `nRetCode`  
 [in] Il valore deve essere restituito da [CDialogImpl::DoModal](#domodal).  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra di dialogo viene eliminata; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 `EndDialog`deve essere chiamato tramite la procedura di finestra di dialogo. Dopo che la finestra di dialogo viene eliminata, verrà utilizzato il valore di `nRetCode` come valore restituito per `DoModal`, che creato la finestra di dialogo.  
  
> [!NOTE]
>  Non chiamare `EndDialog` per eliminare una finestra di dialogo non modale. Chiamare [CWindow::DestroyWindow](../../atl/reference/cwindow-class.md#destroywindow) invece.  
  
##  <a name="a-namegetdialogproca--cdialogimplgetdialogproc"></a><a name="getdialogproc"></a>CDialogImpl::GetDialogProc  
 Restituisce `DialogProc`, la routine della finestra di dialogo corrente.  
  
```   
virtual WNDPROC GetDialogProc(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 La routine della finestra di dialogo corrente.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per sostituire la routine della finestra di dialogo con il proprio.  
  
##  <a name="a-namemapdialogrecta--cdialogimplmapdialogrect"></a><a name="mapdialogrect"></a>CDialogImpl::MapDialogRect  
 Converte le unità finestra di dialogo del rettangolo specificato sullo schermo (maps) unità (pixel).  
  
```   
BOOL MapDialogRect(LPRECT lpRect); 
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `CRect` oggetto o [RECT](../../mfc/reference/rect-structure1.md) struttura che riceverà le coordinate client dell'aggiornamento che racchiude l'area di aggiornamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'aggiornamento ha esito positivo. 0 se l'aggiornamento ha esito negativo. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 La funzione sostituisce le coordinate specificate nella `RECT` struttura con le coordinate convertite, che consente la struttura da utilizzare per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra di dialogo.  
  
##  <a name="a-nameonfinalmessagea--cdialogimplonfinalmessage"></a><a name="onfinalmessage"></a>CDialogImpl::OnFinalMessage  
 Chiamato dopo la ricezione dell'ultimo messaggio (in genere `WM_NCDESTROY`).  
  
```   
virtual void OnFinalMessage(HWND hWnd); 
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra in corso l'eliminazione.  
  
### <a name="remarks"></a>Note  
 Si noti che se si desidera eliminare automaticamente l'oggetto dopo la distruzione di finestre, è possibile chiamare `delete this;` qui.  
  
##  <a name="a-namestartdialogproca--cdialogimplstartdialogproc"></a><a name="startdialogproc"></a>CDialogImpl::StartDialogProc  
 Chiamato una sola volta, quando viene ricevuto il primo messaggio, per elaborare i messaggi inviati alla finestra di dialogo.  
  
```   
static LRESULT CALLBACK StartDialogProc(
    HWND hWnd,  
    UINT uMsg,  
    WPARAM wParam,  
    LPARAM lParam); 
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra di dialogo.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra di dialogo.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 La procedura della finestra.  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata iniziale a `StartDialogProc`, `DialogProc` è impostato come una procedura di finestra di dialogo e altre chiamate indirizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
