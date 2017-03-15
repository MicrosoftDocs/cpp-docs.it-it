---
title: CAnimateCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimateCtrl
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: cef1d6274d5334804ee028fa296c77faf124a496
ms.lasthandoff: 02/24/2017

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
|[CAnimateCtrl::IsPlaying](#isplaying)|Indica se la riproduzione di un clip Audio-Video Interleaved (AVI).|  
|[CAnimateCtrl::Open](#open)|Apre un clip AVI da un file o una risorsa e visualizza il primo frame.|  
|[CAnimateCtrl::Play](#play)|Riproduce il clip AVI senza l'audio.|  
|[CAnimateCtrl::Seek](#seek)|Visualizza un singolo frame selezionato della clip AVI.|  
|[CAnimateCtrl::Stop](#stop)|Arresta la riproduzione della clip AVI.|  
  
## <a name="remarks"></a>Note  
 Questo controllo (e pertanto la `CAnimateCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95, Windows 98 e Windows NT versione 3.51 e successive.  
  
 Un controllo animation è una finestra rettangolare che visualizza una clip in formato AVI (Audio Video Interleaved), ovvero il formato audio/video Windows standard. Un clip AVI è una serie di fotogrammi bitmap, come un film.  
  
 Controlli animazione possono riprodurre solo clip AVI semplici. In particolare, il clip verrà riprodotta da un controllo animation deve soddisfare i requisiti seguenti:  
  
-   Deve essere presente esattamente un flusso video e deve avere almeno un fotogramma.  
  
-   Può esistere al massimo due flussi nel file (in genere il flusso, se presente, è un flusso audio, anche se il controllo animazione Ignora informazioni audio).  
  
-   Il ritaglio deve essere decompressi o compressi con RLE8 compressione.  
  
-   Nessuna modifica tavolozza è consentita nel flusso video.  
  
 È possibile aggiungere il clip AVI all'applicazione come una risorsa AVI, o può accompagnare l'applicazione come file AVI separato.  
  
 Poiché il thread continua l'esecuzione durante la visualizzazione del clip AVI, un utilizzo comune per un controllo animation è per indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, la finestra di dialogo Trova di Esplora File Visualizza una lente di ingrandimento mobile durante la ricerca di un file.  
  
 Se si crea un `CAnimateCtrl` dell'oggetto all'interno di una finestra di dialogo casella o da una risorsa finestra di dialogo utilizzando la finestra di dialogo, verrà automaticamente eliminata quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CAnimateCtrl` dell'oggetto all'interno di una finestra, è possibile eliminarlo. Se si crea il `CAnimateCtrl` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CAnimateCtrl` oggetto nell'heap mediante il **nuova** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarlo. Se si deriva una nuova classe da `CAnimateCtrl` e alloca alcuna memoria in tale classe, eseguire l'override di `CAnimateCtrl` distruttore per smaltire le allocazioni.  
  
 Per ulteriori informazioni sull'utilizzo di `CAnimateCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CAnimateCtrl utilizzando](../../mfc/using-canimatectrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CAnimateCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="a-namecanimatectrla--canimatectrlcanimatectrl"></a><a name="canimatectrl"></a>CAnimateCtrl:: CAnimateCtrl  
 Costruisce un oggetto `CAnimateCtrl`.  
  
```  
CAnimateCtrl();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il [crea](#create) funzione membro prima di poter eseguire qualsiasi altra operazione sull'oggetto creato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#56; NVC_MFCControlLadenDialog](../../mfc/codesnippet/cpp/canimatectrl-class_1.cpp)]  
  
##  <a name="a-nameclosea--canimatectrlclose"></a><a name="close"></a>CAnimateCtrl::Close  
 Chiude la clip AVI che è stato precedentemente aperto nel controllo animazione (se presente) e lo rimuove dalla memoria.  
  
```  
BOOL Close();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="a-namecreatea--canimatectrlcreate"></a><a name="create"></a>CAnimateCtrl::Create  
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
 Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione di windows descritti nella sezione Osservazioni riportata di seguito e gli stili del controllo animazione stili descritti in [degli stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Specifica posizione e le dimensioni del controllo animazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo animazione, in genere un `CDialog`. Non deve essere **NULL.**  
  
 `nID`  
 Specifica l'ID. del controllo animazione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Costruire un `CAnimateCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare **crea**, che crea il controllo animazione e lo collega a di `CAnimateCtrl` oggetto.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/window-styles.md) per un controllo animation.  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
 Se si desidera utilizzare gli stili estesi con il controllo animazione, chiamare [CreateEx](#createex) anziché **crea**.  
  
 Oltre gli stili della finestra sopra elencati, si desidera applicare uno o più degli stili del controllo animazione a un controllo animation. Vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni su [degli stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="a-namecreateexa--canimatectrlcreateex"></a><a name="createex"></a>CAnimateCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e lo associa a di `CAnimateCtrl` oggetto.  
  
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
 Specifica lo stile del controllo animazione. Applicare qualsiasi combinazione di finestra e stili del controllo animazione descritte in [degli stili del controllo animazione](http://msdn.microsoft.com/library/windows/desktop/bb761886) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
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
  
##  <a name="a-nameisplayinga--canimatectrlisplaying"></a><a name="isplaying"></a>CAnimateCtrl::IsPlaying  
 Indica se la riproduzione di un clip Audio-Video Interleaved (AVI).  
  
```  
BOOL IsPlaying() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`nel caso di un clip AVI; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [ACM_ISPLAYING](http://msdn.microsoft.com/library/windows/desktop/bb761895) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameopena--canimatectrlopen"></a><a name="open"></a>CAnimateCtrl::Open  
 Chiamare questa funzione per aprire una clip AVI e visualizzare il primo fotogramma.  
  
```  
BOOL Open(LPCTSTR lpszFileName);  
BOOL Open(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Oggetto `CString` oggetto o un puntatore a una stringa con terminazione null che contiene il nome del file AVI o il nome di una risorsa AVI. Se questo parametro è **NULL**, il sistema chiude la clip AVI che è stato precedentemente aperto per il controllo di animazione, se presente.  
  
 `nID`  
 Identificatore della risorsa AVI. Se questo parametro è **NULL**, il sistema chiude la clip AVI che è stato precedentemente aperto per il controllo di animazione, se presente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 La risorsa AVI viene caricata dal modulo che ha creato il controllo di animazione.  
  
 **Aprire** non supportano l'audio in una clip AVI; è possibile aprire solo clip AVI invisibile all'utente.  
  
 Se il controllo animazione il `ACS_AUTOPLAY` stile, il controllo animazione avvierà automaticamente la clip immediatamente dopo che viene aperto. Per riprodurre il clip in background mentre il thread continua l'esecuzione continuerà. Quando viene eseguita la clip riproduzione, si verrà automaticamente ripetuto.  
  
 Se il controllo animazione il `ACS_CENTER` stile, nel clip AVI verrà centrato nel controllo e non cambia le dimensioni del controllo. Se il controllo animazione non dispone di `ACS_CENTER` stile, il controllo verrà ridimensionato quando la clip AVI viene aperto per la dimensione delle immagini della clip AVI. La posizione dell'angolo superiore sinistro del controllo non cambierà, solo le dimensioni del controllo.  
  
 Se il controllo animazione il `ACS_TRANSPARENT` stile, verrà creato il primo frame utilizzando uno sfondo trasparente piuttosto che il colore di sfondo specificato nella clip di animazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="a-nameplaya--canimatectrlplay"></a><a name="play"></a>CAnimateCtrl::Play  
 Chiamare questa funzione per riprodurre un clip AVI in un controllo animation.  
  
```  
BOOL Play(
    UINT nFrom,  
    UINT nTo,  
    UINT nRep);
```  
  
### <a name="parameters"></a>Parametri  
 `nFrom`  
 Indice in base zero del frame in cui inizia la riproduzione. Valore deve essere minore di 65.536. Il valore 0 significa inizia con il primo fotogramma della clip AVI.  
  
 `nTo`  
 Indice in base zero del frame in cui la riproduzione termina. Valore deve essere minore di 65.536. Un valore di-1 significa terminare con l'ultimo fotogramma della clip AVI.  
  
 *sillaba nRep*  
 Numero di volte che il clip AVI. Un valore di-1 significa riprodurre il file in modo indefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Controllo animazione verrà riprodotta la clip in background durante l'esecuzione del thread continua. Se il controllo animazione `ACS_TRANSPARENT` stile, nel clip AVI viene riprodotto utilizzando uno sfondo trasparente, anziché il colore di sfondo specificato della clip di animazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="a-nameseeka--canimatectrlseek"></a><a name="seek"></a>CAnimateCtrl::Seek  
 Chiamare questa funzione per visualizzare staticamente un singolo frame della clip AVI.  
  
```  
BOOL Seek(UINT nTo);
```  
  
### <a name="parameters"></a>Parametri  
 `nTo`  
 Indice in base zero del frame di visualizzazione. Valore deve essere minore di 65.536. Il valore 0 indica la visualizzazione del primo fotogramma della clip AVI. Il valore –&1; indica la visualizzazione all'ultimo fotogramma della clip AVI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Se il controllo animazione `ACS_TRANSPARENT` stile, verrà creato il clip AVI utilizzando uno sfondo trasparente piuttosto che il colore di sfondo specificato nella clip di animazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
##  <a name="a-namestopa--canimatectrlstop"></a><a name="stop"></a>CAnimateCtrl::Stop  
 Chiamare questa funzione per arrestare la riproduzione di un clip AVI in un controllo animation.  
  
```  
BOOL Stop();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CAnimateCtrl:: CAnimateCtrl](#canimatectrl).  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAnimateCtrl::Create](#create)   
 [ON_CONTROL](http://msdn.microsoft.com/library/2cb7ebdf-296b-4606-b191-3449835003db)


