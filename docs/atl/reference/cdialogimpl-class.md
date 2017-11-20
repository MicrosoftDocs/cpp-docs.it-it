---
title: CDialogImpl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDialogImpl
- ATLWIN/ATL::CDialogImpl
- ATLWIN/ATL::Create
- ATLWIN/ATL::DestroyWindow
- ATLWIN/ATL::DoModal
- ATLWIN/ATL::EndDialog
- ATLWIN/ATL::GetDialogProc
- ATLWIN/ATL::MapDialogRect
- ATLWIN/ATL::OnFinalMessage
- ATLWIN/ATL::DialogProc
- ATLWIN/ATL::StartDialogProc
dev_langs: C++
helpviewer_keywords:
- dialog boxes, ATL
- CDialogImpl class
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: aab3048667099a698bd4aff928c7a23d7fbb01e2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 La classe, derivata da `CDialogImpl`.  
  
 *TBase*  
 Classe di base della nuova classe. La classe base predefinita è [CWindow](../../atl/reference/cwindow-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Creare](#create)|Crea una finestra di dialogo non modale.|  
|[DestroyWindow](#destroywindow)|Elimina definitivamente una finestra di dialogo non modale.|  
|[DoModal](#domodal)|Crea una finestra di dialogo modale.|  
|[EndDialog](#enddialog)|Elimina definitivamente una finestra di dialogo modale.|  
  
### <a name="cdialogimplbaset-methods"></a>Metodi CDialogImplBaseT  
  
|||  
|-|-|  
|[GetDialogProc](#getdialogproc)|Restituisce la routine della finestra di dialogo corrente.|  
|[MapDialogRect](#mapdialogrect)|Le unità della finestra di dialogo del rettangolo specificato viene eseguito il mapping alle unità schermata (pixel).|  
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
  
 [!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]  
  
 dove `MyDlg` è il **nome breve** immessa nella finestra della procedura guidata **nomi** pagina.  
  
|Per altre informazioni su|Vedere|  
|--------------------------------|---------|  
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Utilizzando le finestre di dialogo ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
|Finestre di dialogo|[Finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms632588) e argomenti successivi in Windows SDK|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="create"></a>CDialogImpl::Create  
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
  
 **RECT &**`rect`  
 [in] Oggetto [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura specifica dimensioni e la posizione della finestra di dialogo.  
  
 `dwInitParam`  
 [in] Specifica il valore da passare alla finestra di dialogo di **lParam** parametro del **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra di dialogo appena creato.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo verrà automaticamente allegata al `CDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal). Il secondo override precedente viene utilizzato solo con [CComControl](../../atl/reference/ccomcontrol-class.md).  
  
##  <a name="destroywindow"></a>CDialogImpl::DestroyWindow  
 Elimina definitivamente una finestra di dialogo non modale.  
  
```  
 
BOOL DestroyWindow();

 
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra di dialogo è stato eliminato; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Restituisce **TRUE** se la finestra di dialogo è stato eliminato; in caso contrario **FALSE**.  
  
##  <a name="dialogproc"></a>CDialogImpl::DialogProc  
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
  
##  <a name="domodal"></a>CDialogImpl::DoModal  
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
 [in] Specifica il valore da passare alla finestra di dialogo di **lParam** parametro del **WM_INITDIALOG** messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore di `nRetCode` parametro specificato nella chiamata a [EndDialog](#enddialog). In caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo verrà automaticamente allegata al `CDialogImpl` oggetto.  
  
 Per creare una finestra di dialogo non modale, chiamare [crea](#create).  
  
##  <a name="enddialog"></a>CDialogImpl::EndDialog  
 Elimina definitivamente una finestra di dialogo modale.  
  
```   
BOOL EndDialog(int nRetCode); 
```  
  
### <a name="parameters"></a>Parametri  
 `nRetCode`  
 [in] Il valore deve essere restituito da [CDialogImpl::DoModal](#domodal).  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** eliminata; in caso contrario, se la finestra di dialogo **FALSE**.  
  
### <a name="remarks"></a>Note  
 `EndDialog`deve essere chiamato tramite la procedura di finestra di dialogo. Dopo che la finestra di dialogo viene eliminato definitivamente, Windows Usa il valore di `nRetCode` come valore restituito per `DoModal`, che creato la finestra di dialogo.  
  
> [!NOTE]
>  Non chiamare `EndDialog` eliminare definitivamente una finestra di dialogo non modale. Chiamare [CWindow::DestroyWindow](../../atl/reference/cwindow-class.md#destroywindow) invece.  
  
##  <a name="getdialogproc"></a>CDialogImpl::GetDialogProc  
 Restituisce `DialogProc`, la routine della finestra di dialogo corrente.  
  
```   
virtual WNDPROC GetDialogProc(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 La routine della finestra di dialogo corrente.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per sostituire la routine della finestra di dialogo con le proprie.  
  
##  <a name="mapdialogrect"></a>CDialogImpl::MapDialogRect  
 Converte unità (maps) le unità finestra di dialogo del rettangolo specificato alla schermata (pixel).  
  
```   
BOOL MapDialogRect(LPRECT lpRect); 
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `CRect` oggetto o [RECT](../../mfc/reference/rect-structure1.md) struttura che riceverà le coordinate client dell'aggiornamento che racchiude l'area di aggiornamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'aggiornamento ha esito positivo. 0 se l'aggiornamento ha esito negativo. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 La funzione sostituisce le coordinate dell'oggetto `RECT` struttura con le coordinate convertite, che consente la struttura da utilizzare per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra di dialogo.  
  
##  <a name="onfinalmessage"></a>CDialogImpl::OnFinalMessage  
 Chiamato dopo la ricezione dell'ultimo messaggio (in genere `WM_NCDESTROY`).  
  
```   
virtual void OnFinalMessage(HWND hWnd); 
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Un handle alla finestra in corso l'eliminazione.  
  
### <a name="remarks"></a>Note  
 Si noti che se si desidera eliminare automaticamente l'oggetto durante la distruzione di finestre, è possibile chiamare `delete this;` qui.  
  
##  <a name="startdialogproc"></a>CDialogImpl::StartDialogProc  
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
 Dopo la chiamata iniziale a `StartDialogProc`, `DialogProc` è impostato come una routine della finestra di dialogo e altre chiamate passano.  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)