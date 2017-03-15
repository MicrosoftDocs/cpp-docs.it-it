---
title: CHotKeyCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHotKeyCtrl
dev_langs:
- C++
helpviewer_keywords:
- hot key controls
- CHotKeyCtrl class
- Windows common controls [C++], CHotKeyCtrl
ms.assetid: 896f9766-0718-4f58-aab2-20325e118ca6
caps.latest.revision: 23
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
ms.openlocfilehash: cbcc720d2b934cde9f8beb9bb95499d9cc569413
ms.lasthandoff: 02/24/2017

---
# <a name="chotkeyctrl-class"></a>CHotKeyCtrl (classe)
Fornisce la funzionalità del controllo tasto di scelta comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHotKeyCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHotKeyCtrl::CHotKeyCtrl](#chotkeyctrl)|Costruisce un oggetto `CHotKeyCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHotKeyCtrl::Create](#create)|Crea un controllo tasto di scelta e la collega a un `CHotKeyCtrl` oggetto.|  
|[CHotKeyCtrl::CreateEx](#createex)|Crea un controllo tasto di scelta con gli stili estesi di Windows specificati e lo collega a un `CHotKeyCtrl` oggetto.|  
|[CHotKeyCtrl::GetHotKey](#gethotkey)|Recupera i flag di codice e il modificatore chiave virtuali di un tasto di scelta rapida da un controllo tasto di scelta.|  
|[CHotKeyCtrl::GetHotKeyName](#gethotkeyname)|Recupera il nome della chiave, nel set di caratteri locali, assegnato a un tasto di scelta rapida.|  
|[CHotKeyCtrl::GetKeyName](#getkeyname)|Recupera il nome della chiave, il set di caratteri locale assegnato per il codice tasto virtuale specificato.|  
|[CHotKeyCtrl::SetHotKey](#sethotkey)|Imposta la combinazione di tasti di scelta rapida per un controllo tasto di scelta.|  
|[CHotKeyCtrl::SetRules](#setrules)|Definisce le combinazioni non valide e la combinazione di modificatore predefinito per un controllo tasto di scelta.|  
  
## <a name="remarks"></a>Note  
 Un "controllo tasto di scelta" è una finestra che consente all'utente di creare un tasto di scelta rapida. Un "tasto di scelta rapida" è una combinazione di tasti che l'utente può premere per eseguire rapidamente un'azione. (Ad esempio, un utente può creare un tasto di scelta rapida che attiva una finestra specificata e viene visualizzato nella parte superiore dell'ordine Z). Controllo tasto di scelta consente di visualizzare le scelte dell'utente e garantisce che l'utente seleziona una combinazione di chiave valida.  
  
 Questo controllo (e pertanto la `CHotKeyCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Quando l'utente ha scelto una combinazione di tasti, l'applicazione può recuperare la combinazione di chiave specificata dal controllo e utilizzare il **messaggio WM_SETHOTKEY** messaggio per impostare il tasto di scelta rapida nel sistema. Ogni volta che l'utente preme il tasto di scelta rapida in seguito, da qualsiasi parte del sistema, la finestra specificata nel **messaggio WM_SETHOTKEY** messaggio riceve un `WM_SYSCOMMAND` messaggio specificando **SC_HOTKEY**. Questo messaggio viene attivata la finestra che lo riceve. Il tasto di scelta rimane valido fino a quando l'applicazione che ha chiamato **messaggio WM_SETHOTKEY** viene chiuso.  
  
 Questo meccanismo è diverso dal supporto delle chiavi a caldo che dipende il **WM_HOTKEY** messaggio e le finestre [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309) e [UnregisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646327) funzioni.  
  
 Per ulteriori informazioni sull'utilizzo di `CHotKeyCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CHotKeyCtrl utilizzando](../../mfc/using-chotkeyctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHotKeyCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="a-namechotkeyctrla--chotkeyctrlchotkeyctrl"></a><a name="chotkeyctrl"></a>CHotKeyCtrl::CHotKeyCtrl  
 Costruisce un oggetto `CHotKeyCtrl`.  
  
```  
CHotKeyCtrl();
```  
  
##  <a name="a-namecreatea--chotkeyctrlcreate"></a><a name="create"></a>CHotKeyCtrl::Create  
 Crea un controllo tasto di scelta e la collega a un `CHotKeyCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo tasto di scelta. Applicare qualsiasi combinazione di stili del controllo. Vedere [comuni degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775498) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
 `rect`  
 Specifica del controllo tasto di scelta dimensione e la posizione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [struttura RECT](../../mfc/reference/rect-structure1.md).  
  
 `pParentWnd`  
 Finestra del controllo tasto di scelta padre, in genere un [CDialog](../../mfc/reference/cdialog-class.md). Non deve essere **NULL**.  
  
 `nID`  
 Specifica ID. del controllo tasto di scelta  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero, se l'inizializzazione è stata completata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CHotKeyCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che crea il controllo tasto di scelta e lo collega a di `CHotKeyCtrl` oggetto.  
  
 Se si desidera utilizzare gli stili estesi con il controllo, chiamare [CreateEx](#createex) anziché **crea**.  
  
##  <a name="a-namecreateexa--chotkeyctrlcreateex"></a><a name="createex"></a>CHotKeyCtrl::CreateEx  
 Chiamare questa funzione per creare un controllo (una finestra figlio) che verrà associato il `CHotKeyCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Specifica lo stile esteso di controllo da creare. Per un elenco degli stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifica lo stile del controllo tasto di scelta. Applicare qualsiasi combinazione di stili del controllo. Per ulteriori informazioni, vedere [comuni degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775498) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) che descrive le dimensioni e posizione della finestra deve essere creata, in coordinate client della struttura `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati da precedere Windows stile esteso **WS_EX _**.  
  
##  <a name="a-namegethotkeya--chotkeyctrlgethotkey"></a><a name="gethotkey"></a>CHotKeyCtrl::GetHotKey  
 Recupera i flag di codice e il modificatore chiave virtuali di un tasto di scelta rapida da un controllo tasto di scelta.  
  
```  
DWORD GetHotKey() const;  
  
void GetHotKey(
    WORD& wVirtualKeyCode,  
    WORD& wModifiers) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `wVirtualKeyCode`  
 Codice chiave virtuale del tasto di scelta rapida. Per un elenco dei codici di tasti virtuali standard, vedere winuser.  
  
 [out] `wModifiers`  
 Combinazione bit per bit (OR) di flag che indicano i tasti di modifica nel tasto di scelta rapida.  
  
 I flag di modifica sono i seguenti:  
  
|Flag|Chiave corrispondente|  
|----------|-----------------------|  
|`HOTKEYF_ALT`|ALT (tasto)|  
|`HOTKEYF_CONTROL`|Tasto CTRL|  
|`HOTKEYF_EXT`|Chiave estesa|  
|`HOTKEYF_SHIFT`|Tasto MAIUSC|  
  
### <a name="return-value"></a>Valore restituito  
 Nel primo metodo di overload per un `DWORD` che contiene i flag di codice e il modificatore chiave virtuale. Il byte meno significativo della parola meno significativa contiene il codice tasto virtuale, il byte più significativo della parola meno significativa contiene i flag di modifica e la parola più significativa è zero.  
  
### <a name="remarks"></a>Note  
 Il codice tasto virtuale e i tasti di modifica insieme definiscono il tasto di scelta rapida.  
  
##  <a name="a-namegethotkeynamea--chotkeyctrlgethotkeyname"></a><a name="gethotkeyname"></a>CHotKeyCtrl::GetHotKeyName  
 Chiamare questa funzione membro per ottenere il nome localizzato del tasto di scelta.  
  
```  
CString GetHotKeyName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome localizzato del tasto di scelta attualmente selezionato. Se è presente alcun tasto di scelta rapida selezionato, `GetHotKeyName` restituisce una stringa vuota.  
  
### <a name="remarks"></a>Note  
 Il nome restituito da questa funzione membro proviene dal driver di tastiera. È possibile installare un driver di tastiera localizzato in una versione localizzata di Windows e viceversa.  
  
##  <a name="a-namegetkeynamea--chotkeyctrlgetkeyname"></a><a name="getkeyname"></a>CHotKeyCtrl::GetKeyName  
 Chiamare questa funzione membro per ottenere il nome localizzato della chiave assegnata a un codice chiave virtuale specificato.  
  
```  
static CString GetKeyName(
    UINT vk,  
    BOOL fExtended);
```  
  
### <a name="parameters"></a>Parametri  
 `vk`  
 Il codice tasto virtuale.  
  
 *fExtended*  
 Se il codice tasto virtuale è una chiave estesa **TRUE**; in caso contrario **FALSE**.  
  
### <a name="return-value"></a>Valore restituito  
 Il nome localizzato della chiave specificata per il `vk` parametro. Se la chiave non ha nessun nome mappato, `GetKeyName` restituisce una stringa vuota.  
  
### <a name="remarks"></a>Note  
 Il nome della chiave restituita da questa funzione viene fornito dal driver di tastiera, pertanto è possibile installare un driver di tastiera localizzato in una versione localizzata di Windows e viceversa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#69;](../../mfc/codesnippet/cpp/chotkeyctrl-class_1.cpp)]  
  
##  <a name="a-namesethotkeya--chotkeyctrlsethotkey"></a><a name="sethotkey"></a>CHotKeyCtrl::SetHotKey  
 Imposta il tasto di scelta rapida per un controllo tasto di scelta.  
  
```  
void SetHotKey(
    WORD wVirtualKeyCode,  
    WORD wModifiers);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `wVirtualKeyCode`  
 Codice chiave virtuale del tasto di scelta rapida. Per un elenco dei codici di tasti virtuali standard, vedere winuser.  
  
 [in] `wModifiers`  
 Combinazione bit per bit (OR) di flag che indicano i tasti di modifica nel tasto di scelta rapida.  
  
 I flag di modifica sono i seguenti:  
  
|Flag|Chiave corrispondente|  
|----------|-----------------------|  
|`HOTKEYF_ALT`|ALT (tasto)|  
|`HOTKEYF_CONTROL`|Tasto CTRL|  
|`HOTKEYF_EXT`|Chiave estesa|  
|`HOTKEYF_SHIFT`|Tasto MAIUSC|  
  
### <a name="remarks"></a>Note  
 Il codice tasto virtuale e i tasti di modifica insieme definiscono il tasto di scelta rapida.  
  
##  <a name="a-namesetrulesa--chotkeyctrlsetrules"></a><a name="setrules"></a>CHotKeyCtrl::SetRules  
 Chiamare questa funzione per definire le combinazioni non valide e la combinazione di modificatore predefinito per un controllo tasto di scelta.  
  
```  
void SetRules(
    WORD wInvalidComb,  
    WORD wModifiers);
```  
  
### <a name="parameters"></a>Parametri  
 `wInvalidComb`  
 Matrice di flag che specifica le combinazioni di tasti non valide. Può essere una combinazione dei valori seguenti:  
  
- `HKCOMB_A`ALT  
  
- `HKCOMB_C`CTRL  
  
- `HKCOMB_CA`CTRL + ALT  
  
- `HKCOMB_NONE`Chiavi non modificate  
  
- `HKCOMB_S`MAIUSC  
  
- `HKCOMB_SA`MAIUSC + ALT  
  
- `HKCOMB_SC`MAIUSC + CTRL  
  
- `HKCOMB_SCA`MAIUSC + CTRL + ALT  
  
 `wModifiers`  
 Matrice di flag che specifica la combinazione di tasti da utilizzare quando l'utente immette una combinazione non valida. Per ulteriori informazioni sui flag di modifica, vedere [GetHotKey](#gethotkey).  
  
### <a name="remarks"></a>Note  
 Quando un utente immette una combinazione di tasti non valida, come definito dai flag specificato in `wInvalidComb`, il sistema utilizza l'operatore OR per combinare le chiavi immesse dall'utente con i flag specificati in `wModifiers`. La combinazione di tasti risulta viene convertita in una stringa e quindi visualizzata nel controllo tasto di scelta.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




