---
title: CToolTipCtrl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CToolTipCtrl
- AFXCMN/CToolTipCtrl
- AFXCMN/CToolTipCtrl::CToolTipCtrl
- AFXCMN/CToolTipCtrl::Activate
- AFXCMN/CToolTipCtrl::AddTool
- AFXCMN/CToolTipCtrl::AdjustRect
- AFXCMN/CToolTipCtrl::Create
- AFXCMN/CToolTipCtrl::CreateEx
- AFXCMN/CToolTipCtrl::DelTool
- AFXCMN/CToolTipCtrl::GetBubbleSize
- AFXCMN/CToolTipCtrl::GetCurrentTool
- AFXCMN/CToolTipCtrl::GetDelayTime
- AFXCMN/CToolTipCtrl::GetMargin
- AFXCMN/CToolTipCtrl::GetMaxTipWidth
- AFXCMN/CToolTipCtrl::GetText
- AFXCMN/CToolTipCtrl::GetTipBkColor
- AFXCMN/CToolTipCtrl::GetTipTextColor
- AFXCMN/CToolTipCtrl::GetTitle
- AFXCMN/CToolTipCtrl::GetToolCount
- AFXCMN/CToolTipCtrl::GetToolInfo
- AFXCMN/CToolTipCtrl::HitTest
- AFXCMN/CToolTipCtrl::Pop
- AFXCMN/CToolTipCtrl::Popup
- AFXCMN/CToolTipCtrl::RelayEvent
- AFXCMN/CToolTipCtrl::SetDelayTime
- AFXCMN/CToolTipCtrl::SetMargin
- AFXCMN/CToolTipCtrl::SetMaxTipWidth
- AFXCMN/CToolTipCtrl::SetTipBkColor
- AFXCMN/CToolTipCtrl::SetTipTextColor
- AFXCMN/CToolTipCtrl::SetTitle
- AFXCMN/CToolTipCtrl::SetToolInfo
- AFXCMN/CToolTipCtrl::SetToolRect
- AFXCMN/CToolTipCtrl::SetWindowTheme
- AFXCMN/CToolTipCtrl::Update
- AFXCMN/CToolTipCtrl::UpdateTipText
dev_langs: C++
helpviewer_keywords:
- CToolTipCtrl [MFC], CToolTipCtrl
- CToolTipCtrl [MFC], Activate
- CToolTipCtrl [MFC], AddTool
- CToolTipCtrl [MFC], AdjustRect
- CToolTipCtrl [MFC], Create
- CToolTipCtrl [MFC], CreateEx
- CToolTipCtrl [MFC], DelTool
- CToolTipCtrl [MFC], GetBubbleSize
- CToolTipCtrl [MFC], GetCurrentTool
- CToolTipCtrl [MFC], GetDelayTime
- CToolTipCtrl [MFC], GetMargin
- CToolTipCtrl [MFC], GetMaxTipWidth
- CToolTipCtrl [MFC], GetText
- CToolTipCtrl [MFC], GetTipBkColor
- CToolTipCtrl [MFC], GetTipTextColor
- CToolTipCtrl [MFC], GetTitle
- CToolTipCtrl [MFC], GetToolCount
- CToolTipCtrl [MFC], GetToolInfo
- CToolTipCtrl [MFC], HitTest
- CToolTipCtrl [MFC], Pop
- CToolTipCtrl [MFC], Popup
- CToolTipCtrl [MFC], RelayEvent
- CToolTipCtrl [MFC], SetDelayTime
- CToolTipCtrl [MFC], SetMargin
- CToolTipCtrl [MFC], SetMaxTipWidth
- CToolTipCtrl [MFC], SetTipBkColor
- CToolTipCtrl [MFC], SetTipTextColor
- CToolTipCtrl [MFC], SetTitle
- CToolTipCtrl [MFC], SetToolInfo
- CToolTipCtrl [MFC], SetToolRect
- CToolTipCtrl [MFC], SetWindowTheme
- CToolTipCtrl [MFC], Update
- CToolTipCtrl [MFC], UpdateTipText
ms.assetid: 8973f70c-b73a-46c7-908d-758f364b9a97
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f67a9ccb25216c6f7546d9d906f91cfe5102bc4a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CToolTipCtrl::AdjustRect](#adjustrect)|Conversione tra il testo di un controllo descrizione comando visualizzare rettangolo e il rettangolo della finestra.|  
|[CToolTipCtrl::Create](#create)|Crea un controllo descrizione comando e lo collega a un `CToolTipCtrl` oggetto.|  
|[CToolTipCtrl::CreateEx](#createex)|Crea un controllo descrizione comando con gli stili estesi di Windows specificati e lo collega a un `CToolTipCtrl` oggetto.|  
|[CToolTipCtrl::DelTool](#deltool)|Rimuove uno strumento del controllo ToolTip.|  
|[CToolTipCtrl::GetBubbleSize](#getbubblesize)|Recupera la dimensione della descrizione comando.|  
|[CToolTipCtrl::GetCurrentTool](#getcurrenttool)|Recupera le informazioni quali dimensioni, posizione e testo della finestra della descrizione comando che consente di visualizzare il controllo descrizione comando corrente.|  
|[CToolTipCtrl::GetDelayTime](#getdelaytime)|Recupera l'iniziale, popup e una nuova visualizzazione durate attualmente impostati per uno strumento di controllo ToolTip.|  
|[CToolTipCtrl::GetMargin](#getmargin)|Recupera, sinistro, inferiore, margini superiore e destro impostate per una descrizione comandi.|  
|[CToolTipCtrl::GetMaxTipWidth](#getmaxtipwidth)|Recupera la larghezza massima per una descrizione comandi.|  
|[CToolTipCtrl::GetText](#gettext)|Recupera il testo che gestisce un controllo descrizione comando per uno strumento.|  
|[CToolTipCtrl::GetTipBkColor](#gettipbkcolor)|Recupera il colore di sfondo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::GetTipTextColor](#gettiptextcolor)|Recupera il colore del testo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::GetTitle](#gettitle)|Recupera il titolo del controllo tooltip corrente.|  
|[CToolTipCtrl::GetToolCount](#gettoolcount)|Recupera un conteggio degli strumenti gestiti da un controllo descrizione comando.|  
|[CToolTipCtrl::GetToolInfo](#gettoolinfo)|Recupera informazioni su uno strumento che gestisce un controllo descrizione comando.|  
|[CToolTipCtrl::HitTest](#hittest)|Verifica di un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato. In caso affermativo, recupera le informazioni sullo strumento.|  
|[CToolTipCtrl::Pop](#pop)|Rimuove una finestra del suggerimento visualizzato strumento dalla visualizzazione.|  
|[CToolTipCtrl::Popup](#popup)|Fa sì che il controllo descrizione comando corrente da visualizzare in corrispondenza delle coordinate dell'ultimo messaggio del mouse.|  
|[CToolTipCtrl:: RelayEvent](#relayevent)|Passa un messaggio a un controllo descrizione comando per l'elaborazione.|  
|[CToolTipCtrl::SetDelayTime](#setdelaytime)|Imposta iniziale, popup e quindi la nuova visualizzazione durate per un controllo descrizione comando.|  
|[CToolTipCtrl::SetMargin](#setmargin)|Imposta, sinistro, inferiore, margini superiore e destro per una descrizione comandi.|  
|[CToolTipCtrl::SetMaxTipWidth](#setmaxtipwidth)|Imposta la larghezza massima per una descrizione comandi.|  
|[CToolTipCtrl::SetTipBkColor](#settipbkcolor)|Imposta il colore di sfondo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::SetTipTextColor](#settiptextcolor)|Imposta il colore del testo in una finestra di descrizione comandi.|  
|[CToolTipCtrl::SetTitle](#settitle)|Aggiunge una stringa standard di icona e il titolo per una descrizione comandi.|  
|[CToolTipCtrl::SetToolInfo](#settoolinfo)|Imposta le informazioni che gestisce una descrizione comando per uno strumento.|  
|[CToolTipCtrl::SetToolRect](#settoolrect)|Imposta un nuovo rettangolo di delimitazione per uno strumento.|  
|[CToolTipCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della finestra suggerimento.|  
|[CToolTipCtrl::Update](#update)|Forza lo strumento corrente da ridisegnare.|  
|[CToolTipCtrl::UpdateTipText](#updatetiptext)|Imposta il testo della descrizione comando per uno strumento.|  
  
## <a name="remarks"></a>Note  
 "Strumento" è una finestra, ad esempio una finestra figlio o di controllo o di un'area rettangolare definita dall'applicazione all'interno dell'area client. Una descrizione comando è nascosto la maggior parte dei casi, visualizzata solo quando l'utente posiziona il cursore in uno strumento e lascia in tale posizione per circa mezzo secondo. La descrizione comando viene visualizzata accanto al cursore e scomparirà quando l'utente fa clic su un pulsante del mouse o si sposta il cursore dello strumento.  
  
 `CToolTipCtrl`fornisce la funzionalità per controllare il tempo iniziale e la durata della descrizione comando, la larghezza del margine che circonda il testo della descrizione comando, la larghezza della finestra della descrizione dello strumento e il colore di sfondo e del testo della descrizione comando. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento.  
  
 La `CToolTipCtrl` classe fornisce la funzionalità di controllo Windows comune descrizione comando. Questo controllo (e pertanto la `CToolTipCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per ulteriori informazioni sull'abilitazione di descrizioni comandi, vedere [descrizioni comandi in Windows non derivate da CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
 Per ulteriori informazioni sull'utilizzo `CToolTipCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CToolTipCtrl utilizzando](../../mfc/using-ctooltipctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CToolTipCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="activate"></a>CToolTipCtrl::Activate  
 Chiamare questa funzione per attivare o disattivare un controllo descrizione comando.  
  
```  
void Activate(BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 `bActivate`  
 Specifica se il controllo descrizione comandi deve essere attivata o disattivata.  
  
### <a name="remarks"></a>Note  
 Se `bActivate` è **TRUE**, il controllo è attivato; se **FALSE**, questo viene disattivato.  
  
 Quando un controllo descrizione comandi è attivo, lo strumento di informazioni di descrizione viene visualizzata quando il cursore si trova in uno strumento che viene registrato con il controllo. Quando è inattivo, lo strumento di informazioni di suggerimento non appare, anche quando il cursore si trova in uno strumento.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="addtool"></a>CToolTipCtrl::AddTool  
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
 ID della risorsa stringa che contiene il testo per lo strumento.  
  
 *lpRectTool*  
 Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) rettangolo di delimitazione della struttura che contiene le coordinate dello strumento. Le coordinate sono rispetto all'angolo superiore sinistro dell'area client della finestra, identificata da `pWnd`.  
  
 `nIDTool`  
 ID dello strumento.  
  
 `lpszText`  
 Puntatore al testo per lo strumento. Se questo parametro contiene il valore **LPSTR_TEXTCALLBACK**, **TTN_NEEDTEXT** passano i messaggi di notifica per l'elemento padre della finestra che `pWnd` punta a.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **lpRectTool** e **nIDTool** parametri devono essere entrambi validi, o se **lpRectTool** è NULL, **nIDTool** deve essere 0.  
  
 Un controllo descrizione comando può essere associato a più di uno strumento. Chiamare questa funzione per registrare uno strumento con il controllo descrizione comandi, in modo che le informazioni archiviate nella descrizione comando viene visualizzate quando il cursore si trova sullo strumento.  
  
> [!NOTE]
>  Non è possibile impostare una descrizione comandi a un controllo statico utilizzando `AddTool`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="adjustrect"></a>CToolTipCtrl::AdjustRect  
 Conversione tra il testo di un controllo descrizione comando visualizzato rettangolo e il rettangolo della finestra.  
  
```  
BOOL AdjustRect(
    LPRECT lprc,  
    BOOL bLarger = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene un rettangolo della finestra suggerimento strumento o un rettangolo di visualizzazione di testo.  
  
 `bLarger`  
 Se **TRUE**, `lprc` viene utilizzata per specificare un rettangolo di visualizzazione di testo, e riceve il rettangolo della finestra. Se **FALSE**, `lprc` viene utilizzata per specificare un rettangolo della finestra, e riceve il rettangolo di visualizzazione di testo corrispondente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il rettangolo correttamente viene regolato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro calcola rettangolo di visualizzazione di un controllo descrizione comando testo dal rettangolo della finestra o il rettangolo della finestra suggerimento strumento necessario per la visualizzazione di un rettangolo di visualizzazione del testo specificato.  
  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_ADJUSTRECT](http://msdn.microsoft.com/library/windows/desktop/bb760352), come descritto in Windows SDK.  
  
##  <a name="create"></a>CToolTipCtrl::Create  
 Crea un controllo descrizione comando e lo collega a un `CToolTipCtrl` oggetto.  
  
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
 Si costruisce un `CToolTipCtrl` in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CToolTipCtrl` e quindi chiamare **crea** per creare il controllo descrizione comando e associarlo al `CToolTipCtrl` oggetto.  
  
 Il `dwStyle` parametro può essere qualsiasi combinazione di [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Inoltre, un controllo descrizione comandi ha due stili specifici della classe: **TTS_ALWAYSTIP** e **TTS_NOPREFIX**.  
  
|Stile|Significato|  
|-----------|-------------|  
|**TTS_ALWAYSTIP**|Specifica che la descrizione comandi verranno visualizzato quando il cursore si trova in uno strumento, indipendentemente dalla finestra proprietaria del controllo descrizione comando attivo o inattivo. Senza questo stile, il controllo descrizione comandi viene visualizzata quando è attiva la finestra dello strumento proprietario, ma non quando è inattivo.|  
|**TTS_NOPREFIX**|Questo stile impedisce l'eliminazione la e commerciale (&) da una stringa. Se non dispone di un controllo descrizione comando di **TTS_NOPREFIX** stile, il sistema elimina automaticamente i caratteri e commerciale, un'applicazione può utilizzare la stessa stringa come una voce di menu e come testo in un controllo descrizione comando.|  
  
 Un controllo descrizione comando è il `WS_POPUP` e **WS_EX_TOOLWINDOW** stili di finestra, indipendentemente dal fatto se specificarli durante la creazione del controllo.  
  
 Per creare un controllo descrizione comando con gli stili estesi, chiamare [CToolTipCtrl::CreateEx](#createex) anziché **crea**.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="createex"></a>CToolTipCtrl::CreateEx  
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
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché **crea** per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="ctooltipctrl"></a>CToolTipCtrl::CToolTipCtrl  
 Costruisce un oggetto `CToolTipCtrl`.  
  
```  
CToolTipCtrl();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare **crea** dopo la costruzione dell'oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#74](../../mfc/codesnippet/cpp/ctooltipctrl-class_1.h)]  
  
##  <a name="deltool"></a>CToolTipCtrl::DelTool  
 Rimuove lo strumento specificato da `pWnd` e `nIDTool` dall'insieme di strumenti supportati da un controllo descrizione comando.  
  
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
  
##  <a name="getbubblesize"></a>CToolTipCtrl::GetBubbleSize  
 Recupera la dimensione della descrizione comando.  
  
```  
CSize GetBubbleSize(LPTOOLINFO lpToolInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpToolInfo`  
 Un puntatore per la descrizione comando [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della descrizione comando.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETBUBBLESIZE](http://msdn.microsoft.com/library/windows/desktop/bb760387), come descritto in Windows SDK.  
  
##  <a name="getcurrenttool"></a>CToolTipCtrl::GetCurrentTool  
 Recupera le informazioni quali dimensioni, posizione e testo della finestra della descrizione comando visualizzato dal controllo descrizione comando corrente.  
  
```  
BOOL GetCurrentTool(LPTOOLINFO lpToolInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpToolInfo`|Puntatore a un [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura che riceve le informazioni sulla finestra della descrizione comando corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se le informazioni vengono recuperate correttamente. in caso contrario,`false.`  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TTM_GETCURRENTTOOL](http://msdn.microsoft.com/library/windows/desktop/bb760389) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera informazioni sulla finestra della descrizione comando corrente.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1#6](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_2.cpp)]  
  
##  <a name="getdelaytime"></a>CToolTipCtrl::GetDelayTime  
 Recupera il primo, popup e nuova visualizzazione durate attualmente impostate per un controllo descrizione comando.  
  
```  
int GetDelayTime(DWORD dwDuration) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwDuration`  
 Verranno recuperati i flag che specifica il valore di durata. Questo parametro può essere uno dei valori seguenti:  
  
- `TTDT_AUTOPOP`Recuperare l'intervallo di tempo, che la descrizione comandi rimane visibile se il puntatore è fermo su rettangolo di delimitazione dello strumento.  
  
- `TTDT_INITIAL`Recuperare l'intervallo di tempo che il puntatore del mouse deve soffermarsi nel rettangolo di delimitazione dello strumento prima che venga visualizzata la finestra di descrizione comandi.  
  
- `TTDT_RESHOW`Recuperare la lunghezza di tempo impiegato per le successive finestre di descrizione comandi da visualizzare quando il puntatore del mouse viene spostato da uno strumento a un altro.  
  
### <a name="return-value"></a>Valore restituito  
 Il periodo di tempo specificato, in millisecondi  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETDELAYTIME](http://msdn.microsoft.com/library/windows/desktop/bb760390), come descritto in Windows SDK.  
  
##  <a name="getmargin"></a>CToolTipCtrl::GetMargin  
 Recupera, sinistro, inferiore, margini superiore e destro impostato per una descrizione comandi.  
  
```  
void GetMargin(LPRECT lprc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Indirizzo di un `RECT` struttura che riceverà le informazioni del margine. I membri del [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura non definisce un rettangolo di delimitazione. Allo scopo di questo messaggio, i membri della struttura vengono interpretati come indicato di seguito:  
  
|Membro|Rappresentazione|  
|------------|--------------------|  
|**top**|Distanza tra il bordo superiore e parte superiore del testo della descrizione comando, in pixel.|  
|**left**|Distanza tra il bordo sinistro ed estremità sinistra del testo di suggerimento, in pixel.|  
|**nella parte inferiore**|Distanza tra il bordo inferiore e inferiore del testo di suggerimento, in pixel.|  
|**right**|Distanza tra il bordo destro ed estremità destra del testo di suggerimento, in pixel.|  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb760391), come descritto in Windows SDK.  
  
##  <a name="getmaxtipwidth"></a>CToolTipCtrl::GetMaxTipWidth  
 Recupera la larghezza massima per una descrizione comandi.  
  
```  
int GetMaxTipWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza massima per una descrizione comandi.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETMAXTIPWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760392), come descritto in Windows SDK.  
  
##  <a name="gettext"></a>CToolTipCtrl::GetText  
 Recupera il testo che gestisce un controllo descrizione comando per uno strumento.  
  
```  
void GetText(
    CString& str,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 Riferimento a un `CString` oggetto che riceve il testo dello strumento.  
  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
### <a name="remarks"></a>Note  
 Il `pWnd` e `nIDTool` lo strumento di identificare i parametri. Se questo strumento è stata precedentemente registrato con il controllo descrizione comando tramite una chiamata precedente a **CToolTipCtrl::AddTool**, l'oggetto a cui fa riferimento il `str` parametro viene assegnato il testo dello strumento.  
  
##  <a name="gettipbkcolor"></a>CToolTipCtrl::GetTipBkColor  
 Recupera il colore di sfondo in una finestra di descrizione comandi.  
  
```  
COLORREF GetTipBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che rappresenta il colore di sfondo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760394), come descritto in Windows SDK.  
  
##  <a name="gettiptextcolor"></a>CToolTipCtrl::GetTipTextColor  
 Recupera il colore del testo in una finestra di descrizione comandi.  
  
```  
COLORREF GetTipTextColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che rappresenta il colore del testo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_GETTIPTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760395), come descritto in Windows SDK.  
  
##  <a name="gettitle"></a>CToolTipCtrl::GetTitle  
 Recupera il titolo del controllo tooltip corrente.  
  
```  
void GetTitle(PTTGETTITLE pttgt) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `pttgt`|Puntatore a un [TTGETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760260) struttura che contiene informazioni sul controllo descrizione comando. Quando termina, questo metodo il `pszTitle` appartenente il [TTGETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760260) punti al testo del titolo della struttura.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TTM_GETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760396) messaggio, come descritto in Windows SDK.  
  
##  <a name="gettoolcount"></a>CToolTipCtrl::GetToolCount  
 Recupera un conteggio degli strumenti registrato con il controllo descrizione comandi.  
  
```  
int GetToolCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un conteggio degli strumenti registrato con il controllo descrizione comandi.  
  
##  <a name="gettoolinfo"></a>CToolTipCtrl::GetToolInfo  
 Recupera informazioni su uno strumento che gestisce un controllo descrizione comando.  
  
```  
BOOL GetToolInfo(
    CToolInfo& ToolInfo,  
    CWnd* pWnd,  
    UINT_PTR nIDTool = 0) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *ToolInfo*  
 Riferimento a un `TOOLINFO` oggetto che riceve il testo dello strumento.  
  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **hwnd** e **uId** i membri del [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura a cui fa riferimento *CToolInfo* identificare lo strumento. Se questo strumento è stato registrato con il controllo descrizione comando tramite una chiamata precedente a `AddTool`, `TOOLINFO` struttura viene riempita con informazioni sullo strumento.  
  
##  <a name="hittest"></a>CToolTipCtrl::HitTest  
 Un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato e, in caso affermativo, recuperare le informazioni sullo strumento di verifica.  
  
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
 Diverso da zero se il punto specificato dalle informazioni sulla verifica è all'interno di rettangolo di delimitazione dello strumento; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se questa funzione restituisce un valore diverso da zero, la struttura a cui puntava `lpToolInfo` viene riempita con informazioni sullo strumento di in cui il rettangolo si trova il punto.  
  
 Il `TTHITTESTINFO` struttura viene definita come segue:  
  
 `typedef struct _TT_HITTESTINFO { // tthti`  
  
 `HWND hwnd;   // handle of tool or window with tool`  
  
 `POINT pt;    // client coordinates of point to test`  
  
 `TOOLINFO ti; // receives information about the tool`  
  
 `} TTHITTESTINFO, FAR * LPHITTESTINFO;`  
  
 **HWND**  
 Specifica l'handle dello strumento.  
  
 **pt**  
 Specifica le coordinate di un punto, se il punto viene dello strumento rettangolo di delimitazione.  
  
 **gerarchie temporali**  
 Informazioni sullo strumento. Per ulteriori informazioni sul `TOOLINFO` struttura, vedere [CToolTipCtrl::GetToolInfo](#gettoolinfo).  
  
##  <a name="pop"></a>CToolTipCtrl::Pop  
 Rimuove una finestra del suggerimento visualizzato strumento dalla vista.  
  
```  
void Pop();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_POP](http://msdn.microsoft.com/library/windows/desktop/bb760401), come descritto in Windows SDK.  
  
##  <a name="popup"></a>CToolTipCtrl::Popup  
 Fa sì che il controllo descrizione comando corrente da visualizzare in corrispondenza delle coordinate dell'ultimo messaggio del mouse.  
  
```  
void Popup();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TTM_POPUP](http://msdn.microsoft.com/library/windows/desktop/bb760402) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente visualizza una finestra della descrizione comando.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1#7](../../mfc/reference/codesnippet/cpp/ctooltipctrl-class_3.cpp)]  
  
##  <a name="relayevent"></a>CToolTipCtrl:: RelayEvent  
 Passa un messaggio a un controllo descrizione comando per l'elaborazione.  
  
```  
void RelayEvent(LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMsg`  
 Puntatore a un [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) struttura che contiene il messaggio per l'inoltro.  
  
### <a name="remarks"></a>Note  
 Un controllo descrizione comando elabora i seguenti messaggi sono inviati da `RelayEvent`:  
  
|WM_LBUTTONDOWN|WM_MOUSEMOVE|  
|---------------------|-------------------|  
|`WM_LBUTTONUP`|`WM_RBUTTONDOWN`|  
|`WM_MBUTTONDOWN`|`WM_RBUTTONUP`|  
|`WM_MBUTTONUP`||  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).  
  
##  <a name="setdelaytime"></a>CToolTipCtrl::SetDelayTime  
 Imposta l'intervallo di tempo per un controllo descrizione comando.  
  
```  
void SetDelayTime(UINT nDelay);

 
void SetDelayTime(
    DWORD dwDuration,  
    int iTime);
```  
  
### <a name="parameters"></a>Parametri  
 *nDelay*  
 Specifica la nuova ora di ritardo in millisecondi.  
  
 `dwDuration`  
 Verranno recuperati i flag che specifica il valore di durata. Vedere [CToolTipCtrl::GetDelayTime](#getdelaytime) per una descrizione dei valori validi.  
  
 *iTime*  
 Il tempo di ritardo specificato, in millisecondi.  
  
### <a name="remarks"></a>Note  
 L'intervallo di tempo è l'intervallo di tempo prima che venga visualizzata la finestra di descrizione comandi, il cursore deve rimanere in uno strumento. L'intervallo di tempo predefinito è 500 millisecondi.  
  
##  <a name="setmargin"></a>CToolTipCtrl::SetMargin  
 Imposta, sinistro, inferiore, margini superiore e destro per una descrizione comandi.  
  
```  
void SetMargin(LPRECT lprc);
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Indirizzo di un `RECT` struttura che contiene le informazioni di margine da impostare. I membri del `RECT` struttura non definisce un rettangolo di delimitazione. Vedere [CToolTipCtrl::GetMargin](#getmargin) per una descrizione delle informazioni dei margini.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb760406), come descritto in Windows SDK.  
  
##  <a name="setmaxtipwidth"></a>CToolTipCtrl::SetMaxTipWidth  
 Imposta la larghezza massima per una descrizione comandi.  
  
```  
int SetMaxTipWidth(int iWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *iWidth*  
 Larghezza della finestra suggerimento strumento massimo da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza massima suggerimento precedente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETMAXTIPWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb760408), come descritto in Windows SDK.  
  
##  <a name="settipbkcolor"></a>CToolTipCtrl::SetTipBkColor  
 Imposta il colore di sfondo in una finestra di descrizione comandi.  
  
```  
void SetTipBkColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 `clr`  
 Il nuovo colore di sfondo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760411), come descritto in Windows SDK.  
  
##  <a name="settiptextcolor"></a>CToolTipCtrl::SetTipTextColor  
 Imposta il colore del testo in una finestra di descrizione comandi.  
  
```  
void SetTipTextColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 `clr`  
 Il nuovo colore del testo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTIPTEXTCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760413), come descritto in Windows SDK.  
  
##  <a name="settitle"></a>CToolTipCtrl::SetTitle  
 Aggiunge una stringa standard di icona e il titolo per una descrizione comandi.  
  
```  
BOOL SetTitle(
    UINT uIcon,  
    LPCTSTR lpstrTitle);
```  
  
### <a name="parameters"></a>Parametri  
 *uIcon*  
 Vedere *icona* in [TTM_SETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760414) in Windows SDK.  
  
 *lpstrTitle*  
 Puntatore alla stringa del titolo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TTM_SETTITLE](http://msdn.microsoft.com/library/windows/desktop/bb760414), come descritto in Windows SDK.  
  
##  <a name="settoolinfo"></a>CToolTipCtrl::SetToolInfo  
 Imposta le informazioni che gestisce una descrizione comando per uno strumento.  
  
```  
void SetToolInfo(LPTOOLINFO lpToolInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lpToolInfo`  
 Un puntatore a un [TOOLINFO](http://msdn.microsoft.com/library/windows/desktop/bb760256) struttura che specifica le informazioni da impostare.  
  
##  <a name="settoolrect"></a>CToolTipCtrl::SetToolRect  
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
 Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica il nuovo rettangolo di delimitazione.  
  
##  <a name="setwindowtheme"></a>CToolTipCtrl::SetWindowTheme  
 Imposta lo stile di visualizzazione della finestra suggerimento.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### <a name="parameters"></a>Parametri  
 `pszSubAppName`  
 Un puntatore a una stringa Unicode contenente lo stile visivo da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non è stato utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [TTM_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb760418) del messaggio, come descritto in Windows SDK.  
  
##  <a name="update"></a>CToolTipCtrl::Update  
 Forza lo strumento corrente da ridisegnare.  
  
```  
void Update();
```  
  
##  <a name="updatetiptext"></a>CToolTipCtrl::UpdateTipText  
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
 Puntatore al testo per lo strumento.  
  
 `pWnd`  
 Puntatore alla finestra che contiene lo strumento.  
  
 `nIDTool`  
 ID dello strumento.  
  
 `nIDText`  
 ID della risorsa stringa che contiene il testo per lo strumento.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CToolBar](../../mfc/reference/ctoolbar-class.md)
