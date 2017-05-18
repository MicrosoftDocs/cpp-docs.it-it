---
title: CAnimateCtrl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- animation controls [C++], CAnimateCtrl class
- Windows common controls [C++], CAnimateCtrl class
- CAnimateCtrl class
ms.assetid: 5e8eb1bd-96b7-47b8-8de2-6bcbb3cc299b
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: c4b8472a0dd8d2470f8e069e144efd0949201266
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

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
|[CAnimateCtrl::Close](#close)|Chiude il clip AVI.|  
|[CAnimateCtrl::Create](#create)|Crea un controllo animation e lo collega a un `CAnimateCtrl` oggetto.|  
|[CAnimateCtrl::CreateEx](#createex)|Crea un controllo animation con gli stili estesi di Windows specificati e lo collega a un `CAnimateCtrl` oggetto.|  
|[CAnimateCtrl::IsPlaying](#isplaying)|Indica se un clip Audio e Video con interfoliazione (AVI) è in esecuzione.|  
|[CAnimateCtrl::Open](#open)|Apre un clip AVI da un file o una risorsa e visualizza il primo frame.|  
|[CAnimateCtrl::Play](#play)|Riproduce il clip AVI senza l'audio.|  
|[CAnimateCtrl::Seek](#seek)|Consente di visualizzare un singolo frame selezionato del clip AVI.|  
|[CAnimateCtrl::Stop](#stop)|Arresta la riproduzione del clip AVI.|  
  
## <a name="remarks"></a>Note  
 Questo controllo (e pertanto la `CAnimateCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95, Windows 98 e Windows NT versione 3.51 e successive.  
  
 Un controllo animation è una finestra rettangolare che visualizza un clip in formato AVI (Audio Video con interfoliazione), ovvero il formato audio/video Windows standard. Un clip AVI è una serie di fotogrammi bitmap, ad esempio un filmato.  
  
 Controlli animazione possono riprodurre solo clip AVI semplici. In particolare, la Ritaglia per essere riprodotte da un controllo animation deve soddisfare i requisiti seguenti:  
  
-   Deve essere presente esattamente un flusso video e deve avere almeno un frame.  
  
-   Può esistere al massimo due flussi nel file (in genere il flusso, se presente, è un flusso audio, anche se il controllo animazione Ignora informazioni audio).  
  
-   Il ritaglio deve essere compressi o compressa con compressione RLE8.  
  
-   Nessuna modifica di tavolozza è consentita nel flusso video.  
  
 È possibile aggiungere clip AVI all'applicazione come una risorsa AVI o possa accompagnare l'applicazione come file AVI separato.  
  
 Poiché i thread continua l'esecuzione durante la visualizzazione del clip AVI, un utilizzo comune per un controllo animation è per indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, la finestra di dialogo Trova di Esplora File consente di visualizzare una lente di ingrandimento mobile durante la ricerca di un file.  
  
 Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra di dialogo casella o da una risorsa finestra di dialogo utilizzando la finestra di dialogo, verrà automaticamente eliminato definitivamente quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CAnimateCtrl` oggetto all'interno di una finestra, è possibile eliminarlo. Se si crea il `CAnimateCtrl` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CAnimateCtrl` oggetto sull'heap tramite il **nuova** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarlo. Se si deriva una nuova classe da `CAnimateCtrl` e alloca alcuna memoria in tale classe, eseguire l'override di `CAnimateCtrl` distruttore per l'eliminazione delle allocazioni.  
  
 Per ulteriori informazioni sull'utilizzo `CAnimateCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CAnimateCtrl utilizzando](../../mfc/using-canimatectrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CAnimateCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="canimatectrl"></a>CAnimateCtrl:: CAnimateCtrl  
 Costruisce un oggetto `CAnimateCtrl`.  
  
```  
CAnimateCtrl();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il [crea](#create) funzione membro prima di poter eseguire qualsiasi altra operazione sull'oggetto creato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog #56](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]  
  
##  <a name="close"></a>CAnimateCtrl::Close  
 Chiusura del clip AVI che è stato precedentemente aperto nel controllo animazione (se presente) e la rimuove dalla memoria.  
  
```  
BOOL Close();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="create"></a>CAnimateCtrl::Create  
 Crea un controllo animation e lo collega a un `CAnimateCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione di windows descritti nella sezione Osservazioni riportata di seguito e gli stili del controllo animazione stili descritto in [stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Specifica posizione e le dimensioni del controllo animazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo animazione, in genere un `CDialog`. Non deve essere **NULL.**  
  
 `nID`  
 Specifica l'ID. del controllo animazione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CAnimateCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare **crea**, che crea il controllo di animazione e lo collega al `CAnimateCtrl` oggetto.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/window-styles.md) a un controllo di animazione.  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
 Se si desidera utilizzare gli stili estesi windows con il controllo di animazione, chiamare [CreateEx](#createex) anziché **crea**.  
  
 Oltre a stili di finestra elencati in precedenza, si desidera applicare uno o più degli stili del controllo animazione a un controllo di animazione. Vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni su [stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="createex"></a>CAnimateCtrl::CreateEx  
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
 `dwExStyle`  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione di finestra e stili del controllo animazione descritte in [stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e la posizione della finestra deve essere creata, nelle coordinate del client di `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="isplaying"></a>CAnimateCtrl::IsPlaying  
 Indica se un clip Audio e Video con interfoliazione (AVI) è in esecuzione.  
  
```  
BOOL IsPlaying() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se è in esecuzione un clip AVI; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [ACM_ISPLAYING](http://msdn.microsoft.com/library/windows/desktop/bb761895) messaggio, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="open"></a>CAnimateCtrl::Open  
 Chiamare questa funzione per aprire un clip AVI e visualizzare il primo frame.  
  
```  
BOOL Open(LPCTSTR lpszFileName);  
BOOL Open(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Oggetto `CString` oggetto o un puntatore a una stringa con terminazione null che contiene il nome del file AVI o il nome di una risorsa AVI. Se questo parametro è **NULL**, il sistema chiude del clip AVI che è stato precedentemente aperto per il controllo di animazione, se presente.  
  
 `nID`  
 Identificatore della risorsa AVI. Se questo parametro è **NULL**, il sistema chiude del clip AVI che è stato precedentemente aperto per il controllo di animazione, se presente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La risorsa AVI viene caricata dal modulo che ha creato il controllo di animazione.  
  
 **Aprire** non supportano l'audio in un clip AVI; è possibile aprire solo clip AVI invisibile all'utente.  
  
 Se il controllo animazione il `ACS_AUTOPLAY` stile, il controllo animazione verrà avviato automaticamente la clip immediatamente dopo che viene aperto. Per riprodurre il clip in background mentre il thread continua l'esecuzione continuerà. Termine clip riproduzione, si verrà automaticamente ripetuto.  
  
 Se il controllo animazione il `ACS_CENTER` stile, del clip AVI verrà centrato nel controllo e non cambia le dimensioni del controllo. Se il controllo animazione non ha il `ACS_CENTER` stile, il controllo verrà ridimensionato all'apertura del clip AVI per le dimensioni delle immagini del clip AVI. La posizione dell'angolo superiore sinistro del controllo non cambierà, solo le dimensioni del controllo.  
  
 Se il controllo animazione il `ACS_TRANSPARENT` stile, verrà creato il primo frame utilizzando uno sfondo trasparente piuttosto che il colore di sfondo specificato nel ritaglio di animazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="play"></a>CAnimateCtrl::Play  
 Chiamare questa funzione per riprodurre un clip AVI in un controllo di animazione.  
  
```  
BOOL Play(
    UINT nFrom,  
    UINT nTo,  
    UINT nRep);
```  
  
### <a name="parameters"></a>Parametri  
 `nFrom`  
 Indice in base zero del frame in cui inizia la riproduzione. Valore deve essere minore di 65.536. Un valore pari a 0 significa inizia con il primo frame del clip AVI.  
  
 `nTo`  
 Indice in base zero del frame in cui la riproduzione termina. Valore deve essere minore di 65.536. Il valore - 1 significa terminare con l'ultimo fotogramma del clip AVI.  
  
 *sillaba nRep*  
 Numero di volte per la riproduzione del clip AVI. Il valore - 1 indica il file di riproduzione per un periodo illimitato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il controllo animazione verrà riprodotta clip in background durante l'esecuzione del thread continua. Se il controllo animazione `ACS_TRANSPARENT` stile, del clip AVI verrà riprodotto con uno sfondo trasparente invece il colore di sfondo specificato per il ritaglio di animazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="seek"></a>CAnimateCtrl::Seek  
 Chiamare questa funzione per visualizzare staticamente un singolo fotogramma della clip AVI.  
  
```  
BOOL Seek(UINT nTo);
```  
  
### <a name="parameters"></a>Parametri  
 `nTo`  
 Indice in base zero del frame da visualizzare. Valore deve essere minore di 65.536. Il valore 0 indica il primo frame la visualizzazione del clip AVI. Il valore-1 indica l'ultimo fotogramma la visualizzazione del clip AVI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se il controllo animazione `ACS_TRANSPARENT` stile, del clip AVI verrà creato utilizzando uno sfondo trasparente piuttosto che il colore di sfondo specificato nel ritaglio di animazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="stop"></a>CAnimateCtrl::Stop  
 Chiamare questa funzione per interrompere la riproduzione di un clip AVI in un controllo di animazione.  
  
```  
BOOL Stop();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAnimateCtrl::Create](#create)   
 [ON_CONTROL](message-map-macros-mfc.md#on_control)


