---
title: CToolTipCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CToolTipCtrl
dev_langs:
- C++
helpviewer_keywords:
- tool tips [C++], tool tip controls
- data tips [C++]
- CToolTipCtrl class
ms.assetid: 8973f70c-b73a-46c7-908d-758f364b9a97
caps.latest.revision: 20
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
ms.openlocfilehash: 982aae01dc1308896e9c625e2c2e118b65ec2e64
ms.lasthandoff: 02/24/2017

---
# <a name="ctooltipctrl-class"></a>CToolTipCtrl Class
Incapsula la funzionalità di un "controllo descrizione comando", una piccola finestra popup in cui viene visualizzata una riga di testo singola che descrive lo scopo di uno strumento in un'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CToolTipCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolTipCtrl::CToolTipCtrl](#ctooltipctrl)|Costruisce un oggetto `CToolTipCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolTipCtrl::Activate](#activate)|Attiva e disattiva il controllo descrizione comandi.|  
|[CToolTipCtrl::AddTool](#addtool)|Registra uno strumento con il controllo descrizione comandi.|  
|[CToolTipCtrl::AdjustRect](#adjustrect)|Converte tra il testo di un controllo descrizione comandi visualizzazione rettangolo e il rettangolo della finestra.|  
|[CToolTipCtrl::Create](#create)|Crea un controllo descrizione comandi e lo collega a un `CToolTipCtrl` oggetto.|  
|[CToolTipCtrl::CreateEx](#createex)|Crea un controllo descrizione comandi con gli stili estesi di Windows specificati e lo collega a un `CToolTipCtrl` oggetto.|  
|[CToolTipCtrl::DelTool](#deltool)|Rimuove uno strumento del controllo ToolTip.|  
|[CToolTipCtrl::GetBubbleSize](#getbubblesize)|Recupera la dimensione della descrizione comandi.|  
|[CToolTipCtrl::GetCurrentTool](#getcurrenttool)|Recupera le informazioni quali la dimensione, posizione e testo, della finestra della descrizione comando che consente di visualizzare il controllo descrizione comando corrente.|  
|[CToolTipCtrl::GetDelayTime](#getdelaytime)|Recupera l'iniziale, di popup e di una nuova visualizzazione durate attualmente impostati per uno strumento di controllo ToolTip.|  
|[CToolTipCtrl::GetMargin](#getmargin)|Recupera, sinistro, inferiore, margini superiore e destro impostati per una descrizione comandi.|  
|[CToolTipCtrl::GetMaxTipWidth](#getmaxtipwidth)|Recupera la larghezza massima per una descrizione comandi.|  
|[CToolTipCtrl::GetText](#gettext)|Recupera il testo che gestisce un controllo descrizione comandi per uno strumento.|  
|[CToolTipCtrl::GetTipBkColor](#gettipbkcolor)|Recupera il colore di sfondo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::GetTipTextColor](#gettiptextcolor)|Recupera il colore del testo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::GetTitle](#gettitle)|Recupera il titolo del controllo descrizione comando corrente.|  
|[CToolTipCtrl::GetToolCount](#gettoolcount)|Recupera un conteggio degli strumenti gestiti da un controllo descrizione comandi.|  
|[CToolTipCtrl::GetToolInfo](#gettoolinfo)|Recupera informazioni su uno strumento che gestisce un controllo descrizione comandi.|  
|[CToolTipCtrl::HitTest](#hittest)|Test di un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato. In questo caso, recupera le informazioni sullo strumento.|  
|[CToolTipCtrl::Pop](#pop)|Rimuove una finestra del suggerimento visualizzato lo strumento dalla visualizzazione.|  
|[CToolTipCtrl::Popup](#popup)|Determina il controllo descrizione comandi corrente visualizzare in corrispondenza delle coordinate dell'ultimo messaggio di mouse.|  
|[CToolTipCtrl:: RelayEvent](#relayevent)|Passa un messaggio a un controllo descrizione comandi per l'elaborazione.|  
|[CToolTipCtrl::SetDelayTime](#setdelaytime)|Imposta iniziale, popup e di nuova visualizzazione durate per un controllo descrizione comandi.|  
|[CToolTipCtrl::SetMargin](#setmargin)|Imposta, sinistro, inferiore, margini superiore e destro per una descrizione comandi.|  
|[CToolTipCtrl::SetMaxTipWidth](#setmaxtipwidth)|Imposta la larghezza massima per una descrizione comandi.|  
|[CToolTipCtrl::SetTipBkColor](#settipbkcolor)|Imposta il colore di sfondo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::SetTipTextColor](#settiptextcolor)|Imposta il colore del testo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::SetTitle](#settitle)|Aggiunge una stringa standard di icona e il titolo per una descrizione comandi.|  
|[CToolTipCtrl::SetToolInfo](#settoolinfo)|Imposta le informazioni da una descrizione comandi per uno strumento.|  
|[CToolTipCtrl::SetToolRect](#settoolrect)|Imposta un nuovo rettangolo di delimitazione per uno strumento.|  
|[CToolTipCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della descrizione comandi.|  
|[CToolTipCtrl::Update](#update)|Forza lo strumento corrente da ricreare.|  
|[CToolTipCtrl::UpdateTipText](#updatetiptext)|Imposta il testo della descrizione comando per uno strumento.|  
  
## <a name="remarks"></a>Note  
 "Strumento" è una finestra, ad esempio una finestra figlio o controllo o un'area rettangolare definita dall'applicazione all'interno dell'area client della finestra. Una descrizione comandi viene nascosta la maggior parte dei casi, visualizzata solo quando l'utente posiziona il cursore del mouse su uno strumento e lascia in tale posizione per circa mezzo secondo. La descrizione viene visualizzata accanto al cursore e scomparirà quando l'utente fa clic su un pulsante del mouse o Sposta il cursore fuori dello strumento.  
  
 `CToolTipCtrl`fornisce la funzionalità per controllare il tempo iniziale e la durata della descrizione comandi, le larghezze dei margini che circonda il testo della descrizione comando, la larghezza della finestra della descrizione dello strumento e il colore di sfondo e del testo della descrizione comandi. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento.  
  
 La `CToolTipCtrl` classe fornisce la funzionalità di controllo Windows comune descrizione comando. Questo controllo (e pertanto la `CToolTipCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per ulteriori informazioni sull'abilitazione di descrizioni comandi, vedere [descrizioni comandi in Windows non derivate da CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
 Per ulteriori informazioni sull'utilizzo di `CToolTipCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CToolTipCtrl utilizzando](../../mfc/using-ctooltipctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CToolTipCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="a-nameactivatea--ctooltipctrlactivate"></a><a name="activate"></a>CToolTipCtrl::Activate  
 Chiamare questa funzione per attivare o disattivare un controllo descrizione comandi.  
  
```  
void Activate(BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 `bActivate`  
 Specifica se il controllo descrizione comandi deve essere attivata o disattivata.  
  
### <a name="remarks"></a>Note  
 Se `bActivate` è **TRUE**, il controllo è attivato; se **FALSE**, viene disattivata.  
  
 Quando un controllo descrizione comandi è attivo, le informazioni di descrizione dello strumento viene visualizzato quando il cursore si trova in uno strumento che viene registrato con il controllo. Quando è inattivo, lo strumento di informazioni di suggerimento non appare, anche quando il cursore si trova in uno strumento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="a-nameaddtoola--ctooltipctrladdtool"></a><a name="addtool"></a>CToolTipCtrl::AddTool  
 Registra uno strumento con il controllo descrizione comandi.  
  
```  
BOOL AddTool(
    CWnd* pWnd,  
    UINT nIDText,  
    LPCRECT lpRectTool = NULL,  
    UINT_PTR nIDTool = 0);

 
BOOL AddTool(
    CWnd* pWnd,  
    LPCTSTR lpszText = LPSTR_TEXTCALLBACK,  
    LPCRECT lpRectTool = NULL,  
    UINT_PTR nIDTool = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDText`  
 ID della risorsa di tipo stringa che contiene il testo dello strumento.  
  
 *lpRectTool*  
 Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) rettangolo di delimitazione della struttura che contiene le coordinate dello strumento. Le coordinate sono rispetto all'angolo superiore sinistro dell'area client della finestra identificata da `pWnd`.  
  
 `nIDTool`  
 ID dello strumento.  
  
 `lpszText`  
 Puntatore di testo per lo strumento. Se questo parametro contiene il valore **LPSTR_TEXTCALLBACK**, **TTN_NEEDTEXT** passare i messaggi di notifica per l'elemento padre della finestra che `pWnd` punta a.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **lpRectTool** e **nIDTool** parametri devono essere entrambi validi, o se **lpRectTool** è NULL, **nIDTool** deve essere 0.  
  
 Un controllo descrizione comandi può essere associato a più di uno strumento. Chiamare questa funzione per registrare uno strumento con il controllo descrizione comandi, in modo che le informazioni archiviate nella descrizione comandi viene visualizzate quando il cursore si trova sullo strumento.  
  
> [!NOTE]
>  Non è possibile impostare una descrizione comandi a un controllo statico utilizzando `AddTool`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="a-nameadjustrecta--ctooltipctrladjustrect"></a><a name="adjustrect"></a>CToolTipCtrl::AdjustRect  
 Conversione tra il testo di un controllo descrizione comandi Visualizza rettangolo e il rettangolo della finestra.  
  
```  
BOOL AdjustRect(
    LPRECT lprc,  
    BOOL bLarger = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene un rettangolo della finestra suggerimento strumento o un rettangolo di visualizzazione di testo.  
  
 `bLarger`  
 Se **TRUE**, `lprc` viene utilizzata per specificare un rettangolo di visualizzazione del testo, e riceve il rettangolo della finestra corrispondente. Se **FALSE**, `lprc` viene utilizzata per specificare un rettangolo della finestra, e riceve il rettangolo di visualizzazione di testo corrispondente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il rettangolo viene regolato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro calcola rettangolo di visualizzazione di un controllo descrizione comando testo dal relativo rettangolo della finestra o il rettangolo della finestra suggerimento strumento necessario per la visualizzazione di un rettangolo di visualizzazione di testo specificato.  
  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_ADJUSTRECT](http://msdn.microsoft.com/library/windows/desktop/bb760352), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namecreatea--ctooltipctrlcreate"></a><a name="create"></a>CToolTipCtrl::Create  
 Crea un controllo descrizione comandi e lo collega a un `CToolTipCtrl` oggetto.  
  
```  
virtual BOOL Create(CWnd* pParentWnd, DWORD dwStyle = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Specifica finestra padre del controllo descrizione comandi, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `dwStyle`  
 Specifica lo stile del controllo descrizione comandi. Vedere il **osservazioni** sezione per ulteriori informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CToolTipCtrl` oggetto è stato creato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CToolTipCtrl` in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CToolTipCtrl` e quindi chiamare **crea** per creare il controllo descrizione comandi e associarlo al `CToolTipCtrl` oggetto.  
  
 Il `dwStyle` parametro può essere qualsiasi combinazione di [stili finestra](../../mfc/reference/window-styles.md). Inoltre, un controllo descrizione comando dispone di due stili specifici della classe: **TTS_ALWAYSTIP** e **TTS_NOPREFIX**.  
  
|Stile|Significato|  
|-----------|-------------|  
|**TTS_ALWAYSTIP**|Specifica che verrà visualizzata la descrizione comando quando il cursore si trova in uno strumento, indipendentemente dal fatto finestra proprietaria del controllo descrizione comandi sia attivo o inattivo. Senza questo stile, il controllo descrizione comandi viene visualizzato quando è attiva la finestra dello strumento proprietario, ma non quando è inattivo.|  
|**TTS_NOPREFIX**|Questo stile impedisce che il sistema rimuovendo il carattere e commerciale (&) da una stringa. Se non dispone di un controllo descrizione comandi di **TTS_NOPREFIX** stile, il sistema elimina automaticamente i caratteri e commerciale, permettendo a un'applicazione utilizzare la stessa stringa come una voce di menu e come testo in un controllo descrizione comandi.|  
  
 Dispone di un controllo descrizione comandi di `WS_POPUP` e **WS_EX_TOOLWINDOW** stili di finestra, indipendentemente dal fatto se sono specificate quando si crea il controllo.  
  
 Per creare un controllo descrizione comandi con gli stili estesi, chiamare [CToolTipCtrl::CreateEx](#createex) anziché **crea**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="a-namecreateexa--ctooltipctrlcreateex"></a><a name="createex"></a>CToolTipCtrl::CreateEx  
 Crea un controllo (una finestra figlio) che verrà associato il `CToolTipCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwStyle = 0,  
    DWORD dwStyleEx = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `dwStyle`  
 Specifica lo stile del controllo descrizione comandi. Vedere il **osservazioni** sezione [crea](#create) per ulteriori informazioni.  
  
 *dwStyleEx*  
 Specifica lo stile esteso di controllo da creare. Per un elenco degli stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché **crea** per applicare stili estesi di Windows, specificati da precedere Windows stile esteso **WS_EX _**.  
  
##  <a name="a-namectooltipctrla--ctooltipctrlctooltipctrl"></a><a name="ctooltipctrl"></a>CToolTipCtrl::CToolTipCtrl  
 Costruisce un oggetto `CToolTipCtrl`.  
  
```  
CToolTipCtrl();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare **crea** dopo la costruzione dell'oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#74;](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]  
  
##  <a name="a-namedeltoola--ctooltipctrldeltool"></a><a name="deltool"></a>CToolTipCtrl::DelTool  
 Rimuove lo strumento specificato da `pWnd` e `nIDTool` dalla raccolta di strumenti supportati da un controllo descrizione comandi.  
  
```  
void DelTool(
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
##  <a name="a-namegetbubblesizea--ctooltipctrlgetbubblesize"></a><a name="getbubblesize"></a>CToolTipCtrl::GetBubbleSize  
 Recupera la dimensione della descrizione comandi.  
  
```  
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpToolInfo`  
 Un puntatore per la descrizione comando [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della descrizione comandi.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETBUBBLESIZE](http://msdn.microsoft.com/library/windows/desktop/bb760387), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetcurrenttoola--ctooltipctrlgetcurrenttool"></a><a name="getcurrenttool"></a>CToolTipCtrl::GetCurrentTool  
 Recupera le informazioni quali la dimensione, posizione e testo, della finestra di descrizione comandi visualizzato dal controllo descrizione comando corrente.  
  
```  
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpToolInfo`|Puntatore a un [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura che riceve informazioni sulla finestra della descrizione comando corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se le informazioni vengono recuperate correttamente. in caso contrario,`false.`  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TTM_GETCURRENTTOOL](http://msdn.microsoft.com/library/windows/desktop/bb760389) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera le informazioni sulla finestra della descrizione comando corrente.  
  
 [!code-cpp[6 NVC_MFC_CToolBarCtrl_s1](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]  
  
##  <a name="a-namegetdelaytimea--ctooltipctrlgetdelaytime"></a><a name="getdelaytime"></a>CToolTipCtrl::GetDelayTime  
 Recupera iniziale, popup e di nuova visualizzazione durate attualmente impostate per un controllo descrizione comandi.  
  
```  
int GetDelayTime(DWORD dwDuration) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwDuration`  
 Flag che specifica il valore di durata, verrà recuperato. Questo parametro può essere uno dei valori seguenti:  
  
- `TTDT_AUTOPOP`Recuperare l'intervallo di tempo che la descrizione comandi rimane visibile se il puntatore è fermo su rettangolo di delimitazione dello strumento.  
  
- `TTDT_INITIAL`Recuperare l'intervallo di tempo che il puntatore del mouse deve soffermarsi nel rettangolo di delimitazione dello strumento prima che venga visualizzata la finestra di descrizione comandi.  
  
- `TTDT_RESHOW`Recuperare l'intervallo di tempo impiegato per le successive finestre di descrizione comandi da visualizzare quando il puntatore viene spostato da uno strumento a altro.  
  
### <a name="return-value"></a>Valore restituito  
 Il tempo di ritardo specificato, in millisecondi  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETDELAYTIME](http://msdn.microsoft.com/library/windows/desktop/bb760390), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetmargina--ctooltipctrlgetmargin"></a><a name="getmargin"></a>CToolTipCtrl::GetMargin  
 Recupera, sinistro, inferiore, margini superiore e destro impostato per una descrizione comandi.  
  
```  
void GetMargin(LPRECT lprc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Indirizzo di un `RECT` struttura che riceverà le informazioni di margine. I membri di [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura non definiscono un rettangolo di delimitazione. Ai fini di questo messaggio, i membri della struttura vengono interpretati come indicato di seguito:  
  
|Membro|Rappresentazione|  
|------------|--------------------|  
|**top**|Distanza tra il bordo superiore e inizio del testo della descrizione comando, in pixel.|  
|**left**|Distanza tra il bordo sinistro ed estremità sinistra del testo di suggerimento, in pixel.|  
|**nella parte inferiore**|Distanza tra il bordo inferiore e inferiore del testo di suggerimento, in pixel.|  
|**right**|Distanza tra il bordo destro ed estremità destra del testo di suggerimento, in pixel.|  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb760391), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetmaxtipwidtha--ctooltipctrlgetmaxtipwidth"></a><a name="getmaxtipwidth"></a>CToolTipCtrl::GetMaxTipWidth  
 Recupera la larghezza massima per una descrizione comandi.  
  
```  
int GetMaxTipWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza massima per una descrizione comandi.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMAXTIPWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760392), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettexta--ctooltipctrlgettext"></a><a name="gettext"></a>CToolTipCtrl::GetText  
 Recupera il testo che gestisce un controllo descrizione comandi per uno strumento.  
  
```  
void GetText(
    CString& str,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 Fare riferimento a un `CString` oggetto che riceve il testo dello strumento.  
  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
### <a name="remarks"></a>Note  
 Il `pWnd` e `nIDTool` lo strumento di identificare i parametri. Se tale strumento è stato registrato in precedenza con il controllo descrizione comandi tramite una chiamata precedente a **CToolTipCtrl::AddTool**, l'oggetto a cui fa riferimento il `str` parametro viene assegnato il testo dello strumento.  
  
##  <a name="a-namegettipbkcolora--ctooltipctrlgettipbkcolor"></a><a name="gettipbkcolor"></a>CToolTipCtrl::GetTipBkColor  
 Recupera il colore di sfondo in una finestra di descrizione comandi.  
  
```  
COLORREF GetTipBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che rappresenta il colore di sfondo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760394), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettiptextcolora--ctooltipctrlgettiptextcolor"></a><a name="gettiptextcolor"></a>CToolTipCtrl::GetTipTextColor  
 Recupera il colore del testo in una finestra di descrizione comandi.  
  
```  
COLORREF GetTipTextColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che rappresenta il colore del testo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760395), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettitlea--ctooltipctrlgettitle"></a><a name="gettitle"></a>CToolTipCtrl::GetTitle  
 Recupera il titolo del controllo descrizione comando corrente.  
  
```  
void GetTitle(PTTGETTITLE pttgt) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `pttgt`|Puntatore a un [TTGETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760260) struttura che contiene informazioni sul controllo descrizione comandi. Quando termina, questo metodo il `pszTitle` membro del [TTGETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760260) struttura punti al testo del titolo.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TTM_GETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760396) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettoolcounta--ctooltipctrlgettoolcount"></a><a name="gettoolcount"></a>CToolTipCtrl::GetToolCount  
 Recupera un conteggio degli strumenti registrati con il controllo descrizione comandi.  
  
```  
int GetToolCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un conteggio degli strumenti registrati con il controllo descrizione comandi.  
  
##  <a name="a-namegettoolinfoa--ctooltipctrlgettoolinfo"></a><a name="gettoolinfo"></a>CToolTipCtrl::GetToolInfo  
 Recupera informazioni su uno strumento che gestisce un controllo descrizione comandi.  
  
```  
BOOL GetToolInfo(
    CToolInfo& ToolInfo,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *ToolInfo*  
 Fare riferimento a un `TOOLINFO` oggetto che riceve il testo dello strumento.  
  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **hwnd** e **uId** i membri di [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura a cui fa riferimento *CToolInfo* identificare lo strumento. Se tale strumento è stato registrato con il controllo descrizione comandi tramite una chiamata precedente a `AddTool`, `TOOLINFO` struttura viene riempita con informazioni sullo strumento.  
  
##  <a name="a-namehittesta--ctooltipctrlhittest"></a><a name="hittest"></a>CToolTipCtrl::HitTest  
 Un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare informazioni sullo strumento di verifica.  
  
```  
BOOL HitTest(
    CWnd* pWnd,  
    CPoint pt,  
    LPTOOLINFO lpToolInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `pt`  
 Puntatore a un `CPoint` che contiene le coordinate del punto da sottoporre a test.  
  
 `lpToolInfo`  
 Puntatore a [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura che contiene informazioni sullo strumento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto specificato dalle informazioni sulla verifica nel rettangolo di delimitazione dello strumento; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se questa funzione restituisce un valore diverso da zero, la struttura a cui puntava `lpToolInfo` viene riempita con informazioni sullo strumento in cui il rettangolo si trova il punto.  
  
 Il `TTHITTESTINFO` struttura è definita come segue:  
  
 `typedef struct _TT_HITTESTINFO { // tthti`  
  
 `HWND hwnd;   // handle of tool or window with tool`  
  
 `POINT pt;    // client coordinates of point to test`  
  
 `TOOLINFO ti; // receives information about the tool`  
  
 `} TTHITTESTINFO, FAR * LPHITTESTINFO;`  
  
 **HWND**  
 Specifica l'handle dello strumento.  
  
 **pt**  
 Specifica le coordinate di un punto, se il punto viene dello strumento rettangolo di delimitazione.  
  
 **ti**  
 Informazioni sullo strumento. Per ulteriori informazioni sui `TOOLINFO` struttura, vedere [CToolTipCtrl::GetToolInfo](#gettoolinfo).  
  
##  <a name="a-namepopa--ctooltipctrlpop"></a><a name="pop"></a>CToolTipCtrl::Pop  
 Rimuove una finestra del suggerimento visualizzato lo strumento dalla vista.  
  
```  
void Pop();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_POP](http://msdn.microsoft.com/library/windows/desktop/bb760401), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namepopupa--ctooltipctrlpopup"></a><a name="popup"></a>CToolTipCtrl::Popup  
 Determina il controllo descrizione comandi corrente visualizzare in corrispondenza delle coordinate dell'ultimo messaggio di mouse.  
  
```  
void Popup();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TTM_POPUP](http://msdn.microsoft.com/library/windows/desktop/bb760402) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Il codice seguente consente di visualizzare una finestra della descrizione comando.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s&#1;7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]  
  
##  <a name="a-namerelayeventa--ctooltipctrlrelayevent"></a><a name="relayevent"></a>CToolTipCtrl:: RelayEvent  
 Passa un messaggio a un controllo descrizione comandi per l'elaborazione.  
  
```  
void RelayEvent(LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMsg`  
 Puntatore a un [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che contiene il messaggio di inoltro.  
  
### <a name="remarks"></a>Note  
 Un controllo descrizione comando elabora solo i messaggi seguenti, che vengono inviati da `RelayEvent`:  
  
|WM_LBUTTONDOWN|WM_MOUSEMOVE|  
|---------------------|-------------------|  
|`WM_LBUTTONUP`|`WM_RBUTTONDOWN`|  
|`WM_MBUTTONDOWN`|`WM_RBUTTONUP`|  
|`WM_MBUTTONUP`||  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="a-namesetdelaytimea--ctooltipctrlsetdelaytime"></a><a name="setdelaytime"></a>CToolTipCtrl::SetDelayTime  
 Imposta l'intervallo di tempo per un controllo descrizione comandi.  
  
```  
void SetDelayTime(UINT nDelay);

 
void SetDelayTime(
    DWORD dwDuration,  
    int iTime);
```  
  
### <a name="parameters"></a>Parametri  
 *nDelay*  
 Specifica il nuovo tempo di ritardo, in millisecondi.  
  
 `dwDuration`  
 Flag che specifica il valore di durata, verrà recuperato. Vedere [CToolTipCtrl::GetDelayTime](#getdelaytime) per una descrizione dei valori validi.  
  
 *iTime*  
 Il tempo di ritardo specificato, in millisecondi.  
  
### <a name="remarks"></a>Note  
 L'intervallo di tempo è il periodo di tempo prima che venga visualizzata la finestra di descrizione comandi, il cursore deve rimanere in uno strumento. Il tempo di ritardo predefinito è 500 millisecondi.  
  
##  <a name="a-namesetmargina--ctooltipctrlsetmargin"></a><a name="setmargin"></a>CToolTipCtrl::SetMargin  
 Imposta, sinistro, inferiore, margini superiore e destro per una descrizione comandi.  
  
```  
void SetMargin(LPRECT lprc);
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Indirizzo di un `RECT` struttura che contiene le informazioni di margine da impostare. I membri del `RECT` struttura non definiscono un rettangolo di delimitazione. Vedere [CToolTipCtrl::GetMargin](#getmargin) per una descrizione delle informazioni di margine.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb760406), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetmaxtipwidtha--ctooltipctrlsetmaxtipwidth"></a><a name="setmaxtipwidth"></a>CToolTipCtrl::SetMaxTipWidth  
 Imposta la larghezza massima per una descrizione comandi.  
  
```  
int SetMaxTipWidth(int iWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *iWidth*  
 Larghezza della finestra strumento massimo suggerimento da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza massima suggerimento precedente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMAXTIPWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760408), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesettipbkcolora--ctooltipctrlsettipbkcolor"></a><a name="settipbkcolor"></a>CToolTipCtrl::SetTipBkColor  
 Imposta il colore di sfondo in una finestra di descrizione comandi.  
  
```  
void SetTipBkColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 `clr`  
 Il nuovo colore di sfondo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760411), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesettiptextcolora--ctooltipctrlsettiptextcolor"></a><a name="settiptextcolor"></a>CToolTipCtrl::SetTipTextColor  
 Imposta il colore del testo in una finestra di descrizione comandi.  
  
```  
void SetTipTextColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 `clr`  
 Il nuovo colore del testo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760413), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesettitlea--ctooltipctrlsettitle"></a><a name="settitle"></a>CToolTipCtrl::SetTitle  
 Aggiunge una stringa standard di icona e il titolo per una descrizione comandi.  
  
```  
BOOL SetTitle(
    UINT uIcon,  
    LPCTSTR lpstrTitle);
```  
  
### <a name="parameters"></a>Parametri  
 *uIcon*  
 Vedere *icona* in [TTM_SETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760414) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 *lpstrTitle*  
 Puntatore alla stringa del titolo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760414), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesettoolinfoa--ctooltipctrlsettoolinfo"></a><a name="settoolinfo"></a>CToolTipCtrl::SetToolInfo  
 Imposta le informazioni da una descrizione comandi per uno strumento.  
  
```  
void SetToolInfo(LPTOOLINFO lpToolInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lpToolInfo`  
 Un puntatore a un [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura che specifica le informazioni da impostare.  
  
##  <a name="a-namesettoolrecta--ctooltipctrlsettoolrect"></a><a name="settoolrect"></a>CToolTipCtrl::SetToolRect  
 Imposta un nuovo rettangolo di delimitazione per uno strumento.  
  
```  
void SetToolRect(
    CWnd* pWnd,  
    UINT_PTR nIDTool,  
    LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
 `lpRect`  
 Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura specificando il nuovo rettangolo di delimitazione.  
  
##  <a name="a-namesetwindowthemea--ctooltipctrlsetwindowtheme"></a><a name="setwindowtheme"></a>CToolTipCtrl::SetWindowTheme  
 Imposta lo stile di visualizzazione della descrizione comandi.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### <a name="parameters"></a>Parametri  
 `pszSubAppName`  
 Un puntatore a una stringa Unicode contenente lo stile visivo da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [TTM_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb760418) dei messaggi, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameupdatea--ctooltipctrlupdate"></a><a name="update"></a>CToolTipCtrl::Update  
 Forza lo strumento corrente da ricreare.  
  
```  
void Update();
```  
  
##  <a name="a-nameupdatetiptexta--ctooltipctrlupdatetiptext"></a><a name="updatetiptext"></a>CToolTipCtrl::UpdateTipText  
 Aggiorna il testo della descrizione comando per gli strumenti del controllo.  
  
```  
void UpdateTipText(
    LPCTSTR lpszText,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0);

 
void UpdateTipText(
    UINT nIDText,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Puntatore di testo per lo strumento.  
  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
 `nIDText`  
 ID della risorsa di tipo stringa che contiene il testo dello strumento.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBar (classe)](../../mfc/reference/ctoolbar-class.md)

