---
title: Classe CMFCDesktopAlertWnd | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDesktopAlertWnd
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::Create
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAnimationSpeed
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAnimationType
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAutoCloseTime
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetCaptionHeight
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetDialogSize
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetLastPos
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetTransparency
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::HasSmallCaption
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnBeforeShow
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnClickLinkButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnCommand
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnDraw
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::ProcessCommand
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAnimationSpeed
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAnimationType
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAutoCloseTime
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetSmallCaption
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetTransparency
dev_langs: C++
helpviewer_keywords:
- CMFCDesktopAlertWnd [MFC], Create
- CMFCDesktopAlertWnd [MFC], GetAnimationSpeed
- CMFCDesktopAlertWnd [MFC], GetAnimationType
- CMFCDesktopAlertWnd [MFC], GetAutoCloseTime
- CMFCDesktopAlertWnd [MFC], GetCaptionHeight
- CMFCDesktopAlertWnd [MFC], GetDialogSize
- CMFCDesktopAlertWnd [MFC], GetLastPos
- CMFCDesktopAlertWnd [MFC], GetTransparency
- CMFCDesktopAlertWnd [MFC], HasSmallCaption
- CMFCDesktopAlertWnd [MFC], OnBeforeShow
- CMFCDesktopAlertWnd [MFC], OnClickLinkButton
- CMFCDesktopAlertWnd [MFC], OnCommand
- CMFCDesktopAlertWnd [MFC], OnDraw
- CMFCDesktopAlertWnd [MFC], ProcessCommand
- CMFCDesktopAlertWnd [MFC], SetAnimationSpeed
- CMFCDesktopAlertWnd [MFC], SetAnimationType
- CMFCDesktopAlertWnd [MFC], SetAutoCloseTime
- CMFCDesktopAlertWnd [MFC], SetSmallCaption
- CMFCDesktopAlertWnd [MFC], SetTransparency
ms.assetid: 73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425
caps.latest.revision: "33"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5e5927cf9697a25e7e6e76a3e71c3d41ba1b32ab
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmfcdesktopalertwnd-class"></a>CMFCDesktopAlertWnd Class
La `CMFCDesktopAlertWnd` classe implementa la funzionalità di una finestra di dialogo non modale visualizzata sullo schermo per informare l'utente a un evento.  

 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]    
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCDesktopAlertWnd : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Cmfcdesktopalertwnd:: Create](#create)|Crea e inizializza la finestra di avviso.|  
|[CMFCDesktopAlertWnd::GetAnimationSpeed](#getanimationspeed)|Restituisce la velocità dell'animazione.|  
|[CMFCDesktopAlertWnd::GetAnimationType](#getanimationtype)|Restituisce il tipo di animazione.|  
|[CMFCDesktopAlertWnd::GetAutoCloseTime](#getautoclosetime)|Restituisce il valore di timeout di chiusura automatica.|  
|[CMFCDesktopAlertWnd::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia.|  
|[CMFCDesktopAlertWnd::GetDialogSize](#getdialogsize)||  
|[CMFCDesktopAlertWnd::GetLastPos](#getlastpos)|Restituisce l'ultima posizione valida della finestra di avviso sullo schermo.|  
|[CMFCDesktopAlertWnd::GetTransparency](#gettransparency)|Restituisce il livello di trasparenza.|  
|[CMFCDesktopAlertWnd::HasSmallCaption](#hassmallcaption)|Determina se la finestra di avviso viene visualizzata con il titolo di piccole dimensioni.|  
|[CMFCDesktopAlertWnd::OnBeforeShow](#onbeforeshow)||  
|[CMFCDesktopAlertWnd::OnClickLinkButton](#onclicklinkbutton)|Chiamato dal framework quando l'utente sceglie un pulsante di collegamento del menu avviso desktop.|  
|[CMFCDesktopAlertWnd::OnCommand](#oncommand)|Il framework chiama questa funzione membro quando l'utente seleziona un elemento da un menu, quando un controllo figlio invia un messaggio di notifica o quando viene convertito un tasto di scelta rapida. (Esegue l'override [CWnd:: OnCommand](../../mfc/reference/cwnd-class.md#oncommand).)|  
|[CMFCDesktopAlertWnd::OnDraw](#ondraw)||  
|[CMFCDesktopAlertWnd::ProcessCommand](#processcommand)||  
|[CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed)|Imposta la nuova velocità dell'animazione.|  
|[CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype)|Imposta il tipo di animazione.|  
|[CMFCDesktopAlertWnd::SetAutoCloseTime](#setautoclosetime)|Imposta il valore di timeout di chiusura automatica.|  
|[CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption)|Passa tra le didascalie normali e di piccole dimensioni.|  
|[CMFCDesktopAlertWnd::SetTransparency](#settransparency)|Imposta il livello di trasparenza.|  
  
## <a name="remarks"></a>Note  
 Una finestra di avviso può essere trasparente, ma può essere visualizzato con gli effetti di animazione e può scomparire (dopo un periodo di tempo oppure quando l'utente dovrà essere facendo clic sul pulsante Chiudi).  
  
 Finestra di avviso può contenere anche una finestra di dialogo predefinita che a sua volta contiene un'icona, il testo del messaggio (etichetta) e un collegamento. In alternativa, una finestra di avviso può contenere una finestra di dialogo personalizzata dalle risorse dell'applicazione.  
  
 Creare una finestra di avviso in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CMFCDesktopAlertWnd` oggetto. In secondo luogo, chiamare il [cmfcdesktopalertwnd:: Create](#create) funzione membro per creare una finestra e associarlo al `CMFCDesktopAlertWnd` oggetto.  
  
 Il `CMFCDesktopAlertWnd` oggetto crea una finestra di dialogo figlio speciali che riempie l'area client della finestra di avviso. La finestra di dialogo possiede tutti i controlli che si trovano su di esso.  
  
 Per visualizzare una finestra di dialogo nella finestra popup, seguire questi passaggi:  
  
1.  Derivare una classe da `CMFCDesktopAlertDialog`.  
  
2.  Creare un modello di finestra di dialogo figlio nelle risorse.  
  
3.  Chiamare [cmfcdesktopalertwnd:: Create](#create) utilizzando l'ID di risorsa del modello di finestra di dialogo e un puntatore per le informazioni sulla classe di runtime della classe derivata.  
  
4.  Programmare la finestra di dialogo personalizzata per gestire tutte le notifiche provenienti dai controlli ospitati oppure programmare i controlli ospitati per gestire direttamente queste notifiche.  
  
 Per controllare il comportamento della finestra di avviso, utilizzare le funzioni seguenti:  
  
-   Impostare il tipo di animazione chiamando [CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype). Le opzioni valide comprendono Espandi diapositiva e dissolvenza.  
  
-   Impostare la velocità di frame di animazione chiamando [CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed).  
  
-   Impostare il livello di trasparenza chiamando [CMFCDesktopAlertWnd::SetTransparency](#settransparency).  
  
-   Modificare le dimensioni della didascalia di piccole dimensioni chiamando [CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption). Didascalia di piccole dimensioni è 7 pixel di altezza.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCDesktopAlertWnd` classe per configurare un `CMFCDesktopAlertWnd` oggetto. Nell'esempio viene illustrato come impostare un tipo di animazione, impostare la trasparenza della finestra popup, specificare che nella finestra di avviso viene visualizzato un titolo di piccole dimensioni e impostare il tempo che trascorre prima della chiusura automaticamente la finestra di avviso. Nell'esempio viene inoltre illustrato come creare e inizializzare la finestra di avviso. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#1](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwnd-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDesktopAlertWnd.h  
  
##  <a name="create"></a>Cmfcdesktopalertwnd:: Create  
 Crea e inizializza la finestra di avviso.  
  
```  
virtual BOOL Create(
    CWnd* pWndOwner,  
    UINT uiDlgResID,  
    HMENU hMenu = NULL,  
    CPoint ptPos = CPoint(-1,-1),  
    CRuntimeClass* pRTIDlgBar = RUNTIME_CLASS(CMFCDesktopAlertDialog));

 
virtual BOOL Create(
    CWnd* pWndOwner,  
    CMFCDesktopAlertWndInfo& params,  
    HMENU hMenu = NULL,  
    CPoint ptPos = CPoint(-1,-1));
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pWndOwner`  
 Specifica il proprietario della finestra di avviso. Proprietario riceverà quindi tutte le notifiche per la finestra di avviso. Questo valore non può essere `NULL`.  
  
 [in] `uiDlgResID`  
 Specifica l'ID risorsa della finestra di avviso.  
  
 [in] `hMenu`  
 Specifica il menu visualizzato quando l'utente fa clic sul pulsante di menu. Se `NULL`, non viene visualizzato il pulsante di menu.  
  
 [in] `ptPos`  
 Specifica la posizione iniziale in cui viene visualizzata la finestra di avviso, utilizzando coordinate dello schermo. Se questo parametro (-1, -1), viene visualizzata la finestra di avviso nell'angolo inferiore destro della schermata.  
  
 [in] `pRTIDlgBar`  
 Informazioni sulla classe di runtime per una classe di finestra di dialogo personalizzata che copre l'area client della finestra di avviso.  
  
 [in] `params`  
 Specifica i parametri vengono utilizzati per creare una finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra di avviso è stata creata correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per creare una finestra di avviso. L'area client della finestra di avviso contiene una finestra di dialogo figlio che contiene tutti i controlli che vengono visualizzati all'utente.  
  
 Il primo overload di metodo crea una finestra che contiene la finestra di dialogo figlio che viene caricato da risorse dell'applicazione. Il primo overload di metodo è inoltre possibile specificare informazioni sulla classe di runtime per una classe di finestra di dialogo personalizzata.  
  
 Il secondo overload del metodo crea una finestra che contiene i controlli predefiniti. È possibile specificare quali controlli per visualizzare, modificare il [classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md).  
  
##  <a name="getanimationspeed"></a>CMFCDesktopAlertWnd::GetAnimationSpeed  
 Restituisce la velocità dell'animazione.  
  
```  
UINT GetAnimationSpeed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La velocità dell'animazione della finestra di avviso, espresso in millisecondi.  
  
### <a name="remarks"></a>Note  
 La velocità dell'animazione descrive la velocità di apre e chiude la finestra di avviso.  
  
##  <a name="getanimationtype"></a>CMFCDesktopAlertWnd::GetAnimationType  
 Restituisce il tipo di animazione.  
  
```  
CMFCPopupMenu::ANIMATION_TYPE GetAnimationType();
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei seguenti tipi di animazione:  
  
- `NO_ANIMATION`  
  
- `UNFOLD`  
  
- `SLIDE`  
  
- `FADE`  
  
- `SYSTEM_DEFAULT_ANIMATION`  
  
##  <a name="getautoclosetime"></a>CMFCDesktopAlertWnd::GetAutoCloseTime  
 Restituisce il valore di timeout di chiusura automatica.  
  
```  
int GetAutoCloseTime() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Tempo, espresso in millisecondi, dopo il quale verrà chiusa automaticamente la finestra di avviso.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per determinare quanto tempo deve trascorrere prima che la finestra di avviso verrà chiusa automaticamente.  
  
##  <a name="getcaptionheight"></a>CMFCDesktopAlertWnd::GetCaptionHeight  
 Restituisce l'altezza della didascalia.  
  
```  
virtual int GetCaptionHeight();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, della didascalia.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere sottoposto a override in una classe derivata. L'implementazione predefinita entrambi: restituisce il valore di altezza della didascalia di piccole dimensioni (pixel a 7), se la finestra popup deve essere visualizzato il titolo di piccole dimensioni o al valore ottenuto dalla funzione API di Windows `GetSystemMetrics(SM_CYSMCAPTION)`.  
  
##  <a name="getlastpos"></a>CMFCDesktopAlertWnd::GetLastPos  
 Restituisce l'ultima posizione della finestra di avviso sullo schermo.  
  
```  
CPoint GetLastPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un punto, nelle coordinate dello schermo.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce l'ultima posizione valida della finestra di avviso sullo schermo.  
  
##  <a name="gettransparency"></a>CMFCDesktopAlertWnd::GetTransparency  
 Restituisce il livello di trasparenza.  
  
```  
BYTE GetTransparency() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Livello di trasparenza compreso tra 0 e 255 inclusi. Maggiore è il valore, maggiore è l'opacità finestra.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per recuperare il livello di trasparenza corrente della finestra di avviso.  
  
##  <a name="hassmallcaption"></a>CMFCDesktopAlertWnd::HasSmallCaption  
 Determina se la finestra di avviso dispone di un titolo di piccole dimensioni o di una didascalia di dimensioni normali.  
  
```  
BOOL HasSmallCaption() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene visualizzata la finestra popup con un titolo di piccole dimensioni; `FALSE` se viene visualizzata la finestra popup con una didascalia dimensioni normali.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per determinare se la finestra popup ha una didascalia di dimensioni normali o di un titolo di piccole dimensioni. Per impostazione predefinita, il titolo di piccole dimensioni è 7 pixel di altezza. È possibile ottenere l'altezza della didascalia di dimensioni normali, chiamando la funzione API Windows `GetSystemMetrics(SM_CYCAPTION)`.  
  
##  <a name="onbeforeshow"></a>CMFCDesktopAlertWnd::OnBeforeShow  

  
```  
virtual BOOL OnBeforeShow(CPoint&);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CPoint&`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onclicklinkbutton"></a>CMFCDesktopAlertWnd::OnClickLinkButton  
 Chiamato dal framework quando l'utente sceglie un pulsante di collegamento del menu avviso desktop.  
  
```  
virtual BOOL OnClickLinkButton(UINT uiCmdID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata se si desidera ricevere una notifica quando un utente fa clic sul collegamento nella finestra di avviso.  
  
##  <a name="oncommand"></a>CMFCDesktopAlertWnd::OnCommand  

  
```  
virtual BOOL OnCommand(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wParam`  
 [in] `lParam`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>CMFCDesktopAlertWnd::OnDraw  

  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="remarks"></a>Note  
  
##  <a name="processcommand"></a>CMFCDesktopAlertWnd::ProcessCommand  

  
```  
BOOL ProcessCommand(HWND hwnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hwnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setanimationspeed"></a>CMFCDesktopAlertWnd::SetAnimationSpeed  
 Imposta la nuova velocità dell'animazione.  
  
```  
void SetAnimationSpeed(UINT nSpeed);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSpeed`  
 Specifica la nuova velocità dell'animazione, in millisecondi.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare la velocità dell'animazione per la finestra di avviso. La velocità dell'animazione predefinito è 30 millisecondi.  
  
##  <a name="setanimationtype"></a>CMFCDesktopAlertWnd::SetAnimationType  
 Imposta il tipo di animazione.  
  
```  
void SetAnimationType(CMFCPopupMenu::ANIMATION_TYPE type);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `type`  
 Specifica il tipo di animazione.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare il tipo di animazione. È possibile specificare uno dei valori seguenti:  
  
- `NO_ANIMATION`  
  
- `UNFOLD`  
  
- `SLIDE`  
  
- `FADE`  
  
- `SYSTEM_DEFAULT_ANIMATION`  
  
##  <a name="setautoclosetime"></a>CMFCDesktopAlertWnd::SetAutoCloseTime  
 Imposta il valore di timeout di chiusura automatica.  
  
```  
void SetAutoCloseTime(int nTime);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTime`  
 Il tempo, in millisecondi, che deve trascorrere prima che venga chiuso automaticamente la finestra di avviso.  
  
### <a name="remarks"></a>Note  
 La finestra di avviso viene chiuso automaticamente dopo il tempo specificato, se l'utente non interagisce con la finestra.  
  
##  <a name="setsmallcaption"></a>CMFCDesktopAlertWnd::SetSmallCaption  
 Passa tra le didascalie di piccole dimensioni e dimensioni normali.  
  
```  
void SetSmallCaption(BOOL bSmallCaption = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSmallCaption`  
 `TRUE`Per specificare che nella finestra di avviso viene visualizzato un titolo di piccole dimensioni; in caso contrario, `FALSE` per specificare che la finestra di avviso viene visualizzata una didascalia di dimensioni normali.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per visualizzare la didascalia di piccole dimensioni o dimensioni normali. Per impostazione predefinita, il titolo di piccole dimensioni è 7 pixel di altezza. È possibile ottenere la dimensione della didascalia regolare chiamando la funzione API Windows `GetSystemMetrics(SM_CYCAPTION)`.  
  
##  <a name="settransparency"></a>CMFCDesktopAlertWnd::SetTransparency  
 Imposta il livello di trasparenza della finestra popup.  
  
```  
void SetTransparency(BYTE nTransparency);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTransparency`  
 Specifica il livello di trasparenza. Questo valore deve essere compreso tra 0 e 255 inclusi. Maggiore è il valore, maggiore è l'opacità finestra.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare il livello di trasparenza della finestra popup.  
  
##  <a name="getdialogsize"></a>CMFCDesktopAlertWnd::GetDialogSize  

  
```  
virtual CSize GetDialogSize();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)   
 [Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)
