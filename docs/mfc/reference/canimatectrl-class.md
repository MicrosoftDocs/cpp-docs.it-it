---
title: CAnimateCtrl (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAnimateCtrl
- AFXCMN/CAnimateCtrl
- AFXCMN/CAnimateCtrl::CAnimateCtrl
- AFXCMN/CAnimateCtrl::Close
- AFXCMN/CAnimateCtrl::Create
- AFXCMN/CAnimateCtrl::CreateEx
- AFXCMN/CAnimateCtrl::IsPlaying
- AFXCMN/CAnimateCtrl::Open
- AFXCMN/CAnimateCtrl::Play
- AFXCMN/CAnimateCtrl::Seek
- AFXCMN/CAnimateCtrl::Stop
dev_langs:
- C++
helpviewer_keywords:
- CAnimateCtrl [MFC], CAnimateCtrl
- CAnimateCtrl [MFC], Close
- CAnimateCtrl [MFC], Create
- CAnimateCtrl [MFC], CreateEx
- CAnimateCtrl [MFC], IsPlaying
- CAnimateCtrl [MFC], Open
- CAnimateCtrl [MFC], Play
- CAnimateCtrl [MFC], Seek
- CAnimateCtrl [MFC], Stop
ms.assetid: 5e8eb1bd-96b7-47b8-8de2-6bcbb3cc299b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 48c431ecbcc415776ff9accfb68004c7c8e46d34
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952326"
---
# <a name="canimatectrl-class"></a>CAnimateCtrl (classe)
Fornisce la funzionalità del controllo animazione comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimateCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimateCtrl:: CAnimateCtrl](#canimatectrl)|Costruisce un oggetto `CAnimateCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimateCtrl::Close](#close)|Chiude l'apertura del clip AVI.|  
|[CAnimateCtrl::Create](#create)|Crea un controllo animation e lo collega a un `CAnimateCtrl` oggetto.|  
|[CAnimateCtrl::CreateEx](#createex)|Crea un controllo animation con gli stili estesi di Windows specificati e lo collega a un `CAnimateCtrl` oggetto.|  
|[CAnimateCtrl::IsPlaying](#isplaying)|Indica se un clip Audio e Video con interfoliazione (AVI) è in esecuzione.|  
|[CAnimateCtrl::Open](#open)|Apre un clip AVI da un file o una risorsa e visualizza il primo frame.|  
|[CAnimateCtrl::Play](#play)|Riproduce il clip AVI senza l'audio.|  
|[CAnimateCtrl::Seek](#seek)|Consente di visualizzare un singolo frame selezionato del clip AVI.|  
|[CAnimateCtrl::Stop](#stop)|Arresta la riproduzione del clip AVI.|  
  
## <a name="remarks"></a>Note  
 Questo controllo (e pertanto il `CAnimateCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95, Windows 98 e Windows NT versione 3.51 e successive.  
  
 Un controllo animation è una finestra rettangolare contenente un clip in formato AVI (Audio Video con interfoliazione), ovvero il formato audio/video Windows standard. Un clip AVI è una serie di fotogrammi bitmap, come un film.  
  
 Controlli animazione possono riprodurre solo clip AVI semplici. In particolare, la Ritaglia per essere riprodotte da un controllo animation deve soddisfare i requisiti seguenti:  
  
-   Deve essere presente esattamente un flusso video e deve avere almeno un frame.  
  
-   Può esistere al massimo due flussi nel file (in genere l'altro flusso, se presente, è un flusso audio, anche se il controllo animazione Ignora informazioni audio).  
  
-   Il ritaglio deve essere compressi o compressa con compressione RLE8.  
  
-   Nessuna modifica di tavolozza è consentita nel flusso video.  
  
 È possibile aggiungere clip AVI all'applicazione come una risorsa AVI o possa accompagnare l'applicazione come file AVI separato.  
  
 Poiché il thread continua l'esecuzione durante l'apertura del clip AVI viene visualizzato, un utilizzo comune per un controllo animation è per indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, la finestra di dialogo Trova di Esplora File consente di visualizzare una lente di ingrandimento mobile durante la ricerca per un file.  
  
 Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra di dialogo casella o da una risorsa finestra di dialogo utilizzando l'editor finestre, si verrà automaticamente eliminato definitivamente quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra, potrebbe essere necessario eliminarlo. Se si crea il `CAnimateCtrl` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CAnimateCtrl` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarlo. Se si deriva una nuova classe da `CAnimateCtrl` e alloca alcuna memoria in tale classe, eseguire l'override di `CAnimateCtrl` distruttore per l'eliminazione delle allocazioni.  
  
 Per ulteriori informazioni sull'utilizzo `CAnimateCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CAnimateCtrl utilizzando](../../mfc/using-canimatectrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CAnimateCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="canimatectrl"></a>  CAnimateCtrl:: CAnimateCtrl  
 Costruisce un oggetto `CAnimateCtrl`.  
  
```  
CAnimateCtrl();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il [crea](#create) funzione membro prima di poter eseguire qualsiasi altra operazione sull'oggetto creato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#56](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]  
  
##  <a name="close"></a>  CAnimateCtrl::Close  
 Chiude l'apertura del clip AVI che è stato precedentemente aperto nel controllo animazione (se presente) e di rimuoverlo dalla memoria.  
  
```  
BOOL Close();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="create"></a>  CAnimateCtrl::Create  
 Crea un controllo animation e lo collega a un `CAnimateCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione di windows gli stili descritti nella sezione Osservazioni e gli stili del controllo animazione descritto in [stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886) in Windows SDK.  
  
 *Rect*  
 Specifica posizione e le dimensioni del controllo animazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 *pParentWnd*  
 Specifica finestra padre del controllo animazione, in genere un `CDialog`. Non deve essere **NULL**.  
  
 *nID*  
 Specifica l'ID. del controllo animazione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CAnimateCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo di animazione e lo collega al `CAnimateCtrl` oggetto.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo di animazione.  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
 Se si desidera utilizzare stili di windows estese con il controllo di animazione, chiamare [CreateEx](#createex) anziché `Create`.  
  
 Oltre a stili di finestra elencati in precedenza, si desidera applicare uno o più degli stili del controllo animazione a un controllo di animazione. Vedi il Windows SDK per ulteriori informazioni sul [stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="createex"></a>  CAnimateCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e la associa il `CAnimateCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwExStyle*  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 *dwStyle*  
 Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione della finestra e stili del controllo animazione descritto in [stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886) in Windows SDK.  
  
 *Rect*  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e posizione della finestra deve essere creato, nelle coordinate client di *pParentWnd*.  
  
 *pParentWnd*  
 Un puntatore alla finestra padre del controllo.  
  
 *nID*  
 ID finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="isplaying"></a>  CAnimateCtrl::IsPlaying  
 Indica se un clip Audio e Video con interfoliazione (AVI) è in esecuzione.  
  
```  
BOOL IsPlaying() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se è in esecuzione un clip AVI; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [ACM_ISPLAYING](http://msdn.microsoft.com/library/windows/desktop/bb761895) messaggio, come descritto in Windows SDK.  
  
##  <a name="open"></a>  CAnimateCtrl::Open  
 Chiamare questa funzione per aprire un clip AVI e visualizzare il relativo primo frame.  
  
```  
BOOL Open(LPCTSTR lpszFileName);  
BOOL Open(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszFileName*  
 Oggetto `CString` oggetto o un puntatore a una stringa con terminazione null che contiene il nome del file AVI o il nome di una risorsa AVI. Se questo parametro è **NULL**, il sistema chiude del clip AVI che è stato precedentemente aperto per il controllo di animazione, se presente.  
  
 *nID*  
 Identificatore della risorsa AVI. Se questo parametro è **NULL**, il sistema chiude del clip AVI che è stato precedentemente aperto per il controllo di animazione, se presente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La risorsa AVI viene caricata dal modulo che ha creato il controllo di animazione.  
  
 **Aprire** non supportano l'audio in un clip AVI; è possibile aprire solo clip AVI invisibile all'utente.  
  
 Se il controllo animazione ha il `ACS_AUTOPLAY` stile, il controllo animazione verrà avviato automaticamente la clip immediatamente dopo che viene aperto. Continuerà a essere riprodotto il ritaglio in background mentre il thread continua l'esecuzione. Quando è terminato il ritaglio riproduzione, si verrà automaticamente ripetuto.  
  
 Se il controllo animazione ha il `ACS_CENTER` stile, del clip AVI verrà centrato nel controllo e non cambia le dimensioni del controllo. Se il controllo animazione non ha il `ACS_CENTER` stile, il controllo verrà ridimensionato all'apertura del clip AVI alle dimensioni delle immagini nell'apertura del clip AVI. La posizione dell'angolo superiore sinistro del controllo non cambierà, solo le dimensioni del controllo.  
  
 Se il controllo animazione ha il `ACS_TRANSPARENT` stile, verrà creato il primo frame utilizzando uno sfondo trasparente piuttosto che il colore di sfondo specificato nel ritaglio di animazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="play"></a>  CAnimateCtrl::Play  
 Chiamare questa funzione per riprodurre un clip AVI in un controllo di animazione.  
  
```  
BOOL Play(
    UINT nFrom,  
    UINT nTo,  
    UINT nRep);
```  
  
### <a name="parameters"></a>Parametri  
 *ndal*  
 Indice in base zero del frame in cui inizia la riproduzione. Valore deve essere minore di 65.536. Un valore pari a 0 significa inizia con il primo frame nell'apertura del clip AVI.  
  
 *nPer*  
 Indice in base zero del frame in cui la riproduzione termina. Valore deve essere minore di 65.536. Il valore - 1 significa terminare con l'ultimo fotogramma del clip AVI.  
  
 *sillaba nRep*  
 Numero di volte per la riproduzione del clip AVI. Valore - 1 indica che il file di riproduzione per un periodo illimitato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il controllo animazione verrà riprodotta clip in background mentre il thread continua l'esecuzione. Se il controllo animazione `ACS_TRANSPARENT` stile, del clip AVI verrà riprodotto con uno sfondo trasparente invece il colore di sfondo specificato per il ritaglio di animazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="seek"></a>  CAnimateCtrl::Seek  
 Chiamare questa funzione per visualizzare staticamente un singolo frame del clip AVI.  
  
```  
BOOL Seek(UINT nTo);
```  
  
### <a name="parameters"></a>Parametri  
 *nPer*  
 Indice in base zero del frame da visualizzare. Valore deve essere minore di 65.536. Un valore pari a 0 indica la visualizzazione il primo frame nell'apertura del clip AVI. Il valore -1 indica l'ultimo fotogramma la visualizzazione nell'apertura del clip AVI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il controllo animazione `ACS_TRANSPARENT` stile, del clip AVI verrà disegnato utilizzando uno sfondo trasparente piuttosto che il colore di sfondo specificato nel ritaglio di animazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="stop"></a>  CAnimateCtrl::Stop  
 Chiamare questa funzione per interrompere la riproduzione di un clip AVI in un controllo di animazione.  
  
```  
BOOL Stop();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAnimateCtrl::Create](#create)   
 [ON_CONTROL](message-map-macros-mfc.md#on_control)

