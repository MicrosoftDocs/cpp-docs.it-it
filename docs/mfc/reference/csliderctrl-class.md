---
title: CSliderCtrl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSliderCtrl
- AFXCMN/CSliderCtrl
- AFXCMN/CSliderCtrl::CSliderCtrl
- AFXCMN/CSliderCtrl::ClearSel
- AFXCMN/CSliderCtrl::ClearTics
- AFXCMN/CSliderCtrl::Create
- AFXCMN/CSliderCtrl::CreateEx
- AFXCMN/CSliderCtrl::GetBuddy
- AFXCMN/CSliderCtrl::GetChannelRect
- AFXCMN/CSliderCtrl::GetLineSize
- AFXCMN/CSliderCtrl::GetNumTics
- AFXCMN/CSliderCtrl::GetPageSize
- AFXCMN/CSliderCtrl::GetPos
- AFXCMN/CSliderCtrl::GetRange
- AFXCMN/CSliderCtrl::GetRangeMax
- AFXCMN/CSliderCtrl::GetRangeMin
- AFXCMN/CSliderCtrl::GetSelection
- AFXCMN/CSliderCtrl::GetThumbLength
- AFXCMN/CSliderCtrl::GetThumbRect
- AFXCMN/CSliderCtrl::GetTic
- AFXCMN/CSliderCtrl::GetTicArray
- AFXCMN/CSliderCtrl::GetTicPos
- AFXCMN/CSliderCtrl::GetToolTips
- AFXCMN/CSliderCtrl::SetBuddy
- AFXCMN/CSliderCtrl::SetLineSize
- AFXCMN/CSliderCtrl::SetPageSize
- AFXCMN/CSliderCtrl::SetPos
- AFXCMN/CSliderCtrl::SetRange
- AFXCMN/CSliderCtrl::SetRangeMax
- AFXCMN/CSliderCtrl::SetRangeMin
- AFXCMN/CSliderCtrl::SetSelection
- AFXCMN/CSliderCtrl::SetThumbLength
- AFXCMN/CSliderCtrl::SetTic
- AFXCMN/CSliderCtrl::SetTicFreq
- AFXCMN/CSliderCtrl::SetTipSide
- AFXCMN/CSliderCtrl::SetToolTips
dev_langs:
- C++
helpviewer_keywords:
- CSliderCtrl [MFC], CSliderCtrl
- CSliderCtrl [MFC], ClearSel
- CSliderCtrl [MFC], ClearTics
- CSliderCtrl [MFC], Create
- CSliderCtrl [MFC], CreateEx
- CSliderCtrl [MFC], GetBuddy
- CSliderCtrl [MFC], GetChannelRect
- CSliderCtrl [MFC], GetLineSize
- CSliderCtrl [MFC], GetNumTics
- CSliderCtrl [MFC], GetPageSize
- CSliderCtrl [MFC], GetPos
- CSliderCtrl [MFC], GetRange
- CSliderCtrl [MFC], GetRangeMax
- CSliderCtrl [MFC], GetRangeMin
- CSliderCtrl [MFC], GetSelection
- CSliderCtrl [MFC], GetThumbLength
- CSliderCtrl [MFC], GetThumbRect
- CSliderCtrl [MFC], GetTic
- CSliderCtrl [MFC], GetTicArray
- CSliderCtrl [MFC], GetTicPos
- CSliderCtrl [MFC], GetToolTips
- CSliderCtrl [MFC], SetBuddy
- CSliderCtrl [MFC], SetLineSize
- CSliderCtrl [MFC], SetPageSize
- CSliderCtrl [MFC], SetPos
- CSliderCtrl [MFC], SetRange
- CSliderCtrl [MFC], SetRangeMax
- CSliderCtrl [MFC], SetRangeMin
- CSliderCtrl [MFC], SetSelection
- CSliderCtrl [MFC], SetThumbLength
- CSliderCtrl [MFC], SetTic
- CSliderCtrl [MFC], SetTicFreq
- CSliderCtrl [MFC], SetTipSide
- CSliderCtrl [MFC], SetToolTips
ms.assetid: dd12b084-4eda-4550-a810-8f3cfb06b871
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2788777b9a5014790e094cf39871b3e4d40750fe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="csliderctrl-class"></a>CSliderCtrl (classe)
Fornisce la funzionalità del controllo dispositivo di scorrimento comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSliderCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSliderCtrl::CSliderCtrl](#csliderctrl)|Costruisce un oggetto `CSliderCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSliderCtrl::ClearSel](#clearsel)|Cancella la selezione corrente in un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::ClearTics](#cleartics)|Rimuove i segni di graduazione corrente da un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::Create](#create)|Crea un controllo dispositivo di scorrimento e lo collega a un `CSliderCtrl` oggetto.|  
|[CSliderCtrl::CreateEx](#createex)|Crea un controllo dispositivo di scorrimento con gli stili estesi di Windows specificati e lo collega a un `CSliderCtrl` oggetto.|  
|[CSliderCtrl::GetBuddy](#getbuddy)|Recupera l'handle di finestra buddy controllo dispositivo di scorrimento in corrispondenza della posizione specificata.|  
|[CSliderCtrl::GetChannelRect](#getchannelrect)|Recupera la dimensione del canale del controllo dispositivo di scorrimento.|  
|[CSliderCtrl::GetLineSize](#getlinesize)|Recupera la dimensione della linea di un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::GetNumTics](#getnumtics)|Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::GetPageSize](#getpagesize)|Recupera le dimensioni della pagina di un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::GetPos](#getpos)|Recupera la posizione corrente del dispositivo di scorrimento.|  
|[CSliderCtrl::GetRange](#getrange)|Recupera le posizioni minime e massime per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetRangeMax](#getrangemax)|Recupera la posizione massima per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetRangeMin](#getrangemin)|Recupera la posizione minima per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetSelection](#getselection)|Recupera l'intervallo della selezione corrente.|  
|[CSliderCtrl::GetThumbLength](#getthumblength)|Recupera la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.|  
|[CSliderCtrl::GetThumbRect](#getthumbrect)|Recupera le dimensioni della casella di scorrimento del controllo dispositivo di scorrimento.|  
|[CSliderCtrl::GetTic](#gettic)|Recupera la posizione del segno di graduazione specificato.|  
|[CSliderCtrl::GetTicArray](#getticarray)|Recupera la matrice di posizioni di contrassegno di segni di graduazione per un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::GetTicPos](#getticpos)|Recupera la posizione del segno di graduazione specificato nelle coordinate client.|  
|[CSliderCtrl::GetToolTips](#gettooltips)|Recupera l'handle per il controllo tooltip assegnato al controllo dispositivo di scorrimento, se presente.|  
|[CSliderCtrl::SetBuddy](#setbuddy)|Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::SetLineSize](#setlinesize)|Imposta la dimensione della linea di un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::SetPageSize](#setpagesize)|Imposta le dimensioni della pagina di un controllo dispositivo di scorrimento.|  
|[CSliderCtrl::SetPos](#setpos)|Imposta la posizione corrente del dispositivo di scorrimento.|  
|[CSliderCtrl::SetRange](#setrange)|Imposta le posizioni minime e massime per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetRangeMax](#setrangemax)|Imposta la posizione massima per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetRangeMin](#setrangemin)|Imposta la posizione minima per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetSelection](#setselection)|Imposta l'intervallo della selezione corrente.|  
|[CSliderCtrl::SetThumbLength](#setthumblength)|Imposta la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.|  
|[CSliderCtrl::SetTic](#settic)|Imposta la posizione del segno di graduazione specificato.|  
|[CSliderCtrl::SetTicFreq](#setticfreq)|Imposta la frequenza dei segni di graduazione per ogni incremento di controllo dispositivo di scorrimento.|  
|[CSliderCtrl::SetTipSide](#settipside)|Posizioni di un controllo tooltip utilizzato da un controllo trackbar.|  
|[CSliderCtrl::SetToolTips](#settooltips)|Assegna un controllo descrizione comandi a un controllo dispositivo di scorrimento.|  
  
## <a name="remarks"></a>Note  
 "Controllo dispositivo di scorrimento" (noto anche come indicatore di avanzamento) è una finestra contenente un dispositivo di scorrimento e segni di graduazione facoltativi. Quando l'utente sposta il dispositivo di scorrimento, utilizzando il mouse o i tasti di direzione, il controllo Invia messaggi di notifica per indicare la modifica.  
  
 I controlli dispositivo di scorrimento sono utili quando si desidera che l'utente selezioni un valore distinto o un set di valori consecutivi in un intervallo. È ad esempio possibile utilizzare un controllo dispositivo di scorrimento per consentire all'utente di impostare la velocità di ripetizione della tastiera spostando il dispositivo di scorrimento in corrispondenza di uno specifico segno di graduazione.  
  
 Questo controllo (e pertanto la `CSliderCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Il dispositivo di scorrimento viene spostato ad incrementi specificate al momento della creazione. Ad esempio, se si specifica che il dispositivo di scorrimento deve disporre di un intervallo di cinque, il dispositivo di scorrimento potrà occupare solo sei posizioni: una posizione sul lato sinistro del controllo dispositivo di scorrimento e una per ogni incremento nell'intervallo. In genere, ognuna di queste posizioni è identificata da un segno di graduazione.  
  
 Per creare un dispositivo di scorrimento, utilizzare il costruttore e **crea** funzione membro di `CSliderCtrl`. Dopo aver creato un controllo dispositivo di scorrimento, è possibile utilizzare funzioni membro in `CSliderCtrl` per modificare molte delle relative proprietà. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento.  
  
 Per ulteriori informazioni sull'utilizzo `CSliderCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CSliderCtrl utilizzando](../../mfc/using-csliderctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSliderCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="clearsel"></a>CSliderCtrl::ClearSel  
 Cancella la selezione corrente in un controllo dispositivo di scorrimento.  
  
```  
void ClearSel(BOOL bRedraw = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bRedraw`  
 Flag di visualizzazione. Se questo parametro è **TRUE**, il dispositivo di scorrimento viene ridisegnato dopo la selezione viene annullata; in caso contrario non venga aggiornato il dispositivo di scorrimento.  
  
##  <a name="cleartics"></a>CSliderCtrl::ClearTics  
 Rimuove i segni di graduazione corrente da un controllo dispositivo di scorrimento.  
  
```  
void ClearTics(BOOL bRedraw = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `bRedraw`  
 Flag di visualizzazione. Se questo parametro è **TRUE**, il dispositivo di scorrimento viene ridisegnato dopo che sono stati cancellati i segni di graduazione; in caso contrario non venga aggiornato il dispositivo di scorrimento.  
  
##  <a name="create"></a>CSliderCtrl::Create  
 Crea un controllo dispositivo di scorrimento e lo collega a un `CSliderCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo dispositivo di scorrimento. Applicare qualsiasi combinazione di [stili del controllo slider](http://msdn.microsoft.com/library/windows/desktop/bb760147), descritto in Windows SDK, al controllo.  
  
 `rect`  
 Specifica dimensioni e la posizione del controllo dispositivo di scorrimento. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo dispositivo di scorrimento, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo dispositivo di scorrimento  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione è stata completata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CSliderCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare **crea**, che crea il controllo dispositivo di scorrimento e lo collega al `CSliderCtrl` oggetto.  
  
 In base ai valori impostati per `dwStyle`, il dispositivo di scorrimento può avere un orientamento verticale o orizzontale. Può avere i segni di graduazione su entrambi i lati, entrambi i lati o nessuno. E può essere utilizzato anche per specificare un intervallo di valori consecutivi.  
  
 Per applicare gli stili finestra estesi per il controllo dispositivo di scorrimento, chiamare [CreateEx](#createex) anziché **crea**.  
  
##  <a name="createex"></a>CSliderCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e la associa il `CSliderCtrl` oggetto.  
  
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
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 `dwStyle`  
 Specifica lo stile del controllo dispositivo di scorrimento. Applicare qualsiasi combinazione di [stili del controllo slider](http://msdn.microsoft.com/library/windows/desktop/bb760147), descritto in Windows SDK, al controllo.  
  
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
  
##  <a name="csliderctrl"></a>CSliderCtrl::CSliderCtrl  
 Costruisce un oggetto `CSliderCtrl`.  
  
```  
CSliderCtrl();
```  
  
##  <a name="getbuddy"></a>CSliderCtrl::GetBuddy  
 Recupera l'handle di finestra buddy controllo dispositivo di scorrimento in corrispondenza della posizione specificata.  
  
```  
CWnd* GetBuddy(BOOL fLocation = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `fLocation`  
 Valore booleano che indica quale delle due handle di finestra buddy da recuperare. Il valore può essere uno dei seguenti:  
  
- **TRUE** recupera l'handle per il controllo correlato a sinistra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento utilizza il `TBS_VERT` stile, il messaggio verrà recuperato il contatto sopra il cursore.  
  
- **FALSE** recupera l'handle per il controllo correlato a destra del dispositivo di scorrimento. Se il controllo dispositivo di scorrimento utilizza il `TBS_VERT` stile, il messaggio verrà recuperato il contatto sotto il cursore.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra buddy nella posizione specificata da `fLocation`, o **NULL** se non esiste alcun intervallo di contatto in tale posizione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_GETBUDDY](http://msdn.microsoft.com/library/windows/desktop/bb760178), come descritto in Windows SDK. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](http://msdn.microsoft.com/library/windows/desktop/bb760147) in Windows SDK.  
  
##  <a name="getchannelrect"></a>CSliderCtrl::GetChannelRect  
 Recupera le dimensioni e la posizione del rettangolo di delimitazione per il canale di un controllo dispositivo di scorrimento.  
  
```  
void GetChannelRect(LPRECT lprc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Un puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene le dimensioni e la posizione del canale del rettangolo di delimitazione quando la funzione restituisce.  
  
### <a name="remarks"></a>Note  
 Il canale è l'area che consente di spostare il dispositivo di scorrimento e che contiene l'evidenziazione quando si seleziona un intervallo.  
  
##  <a name="getlinesize"></a>CSliderCtrl::GetLineSize  
 Recupera le dimensioni della riga per un controllo dispositivo di scorrimento.  
  
```  
int GetLineSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni di una riga per il controllo dispositivo di scorrimento.  
  
### <a name="remarks"></a>Note  
 Le dimensioni di riga influisce su quanto il dispositivo di scorrimento viene spostato per il **TB_LINEUP** e **TB_LINEDOWN** notifiche. L'impostazione predefinita per le dimensioni di riga è 1.  
  
##  <a name="getnumtics"></a>CSliderCtrl::GetNumTics  
 Recupera il numero di segni di graduazione in un controllo dispositivo di scorrimento.  
  
```  
UINT GetNumTics() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di segni di graduazione nel controllo dispositivo di scorrimento.  
  
##  <a name="getpagesize"></a>CSliderCtrl::GetPageSize  
 Recupera le dimensioni della pagina per un controllo dispositivo di scorrimento.  
  
```  
int GetPageSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni di una pagina per il controllo dispositivo di scorrimento.  
  
### <a name="remarks"></a>Note  
 Le dimensioni della pagina influisce sulla quantità il dispositivo di scorrimento viene spostato per il **TB_PAGEUP** e **TB_PAGEDOWN** notifiche.  
  
##  <a name="getpos"></a>CSliderCtrl::GetPos  
 Recupera la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
int GetPos() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione corrente.  
  
##  <a name="getrange"></a>CSliderCtrl::GetRange  
 Recupera le posizioni minime e massime per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
void GetRange(
    int& nMin,  
    int& nMax) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nMin`  
 Riferimento a un valore integer che riceve la posizione minima.  
  
 `nMax`  
 Riferimento a un valore integer che riceve la posizione massima.  
  
### <a name="remarks"></a>Note  
 Questa funzione copia i valori negli interi a cui fa riferimento `nMin` e `nMax`.  
  
##  <a name="getrangemax"></a>CSliderCtrl::GetRangeMax  
 Recupera la posizione massima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
int GetRangeMax() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione massima del controllo.  
  
##  <a name="getrangemin"></a>CSliderCtrl::GetRangeMin  
 Recupera la posizione minima per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
int GetRangeMin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione minima del controllo.  
  
##  <a name="getselection"></a>CSliderCtrl::GetSelection  
 Recupera le posizioni iniziale e finale della selezione corrente in un controllo dispositivo di scorrimento.  
  
```  
void GetSelection(
    int& nMin,  
    int& nMax) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nMin`  
 Riferimento a un valore integer che riceve la posizione iniziale della selezione corrente.  
  
 `nMax`  
 Riferimento a un valore integer che riceve la posizione finale della selezione corrente.  
  
##  <a name="getthumblength"></a>CSliderCtrl::GetThumbLength  
 Recupera la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.  
  
```  
int GetThumbLength() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza del dispositivo di scorrimento, in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TBM_GETTHUMBLENGTH](http://msdn.microsoft.com/library/windows/desktop/bb760201) messaggio, come descritto in Windows SDK.  
  
##  <a name="getthumbrect"></a>CSliderCtrl::GetThumbRect  
 Recupera le dimensioni e posizione del rettangolo di delimitazione per il dispositivo di scorrimento (anteprima) in un controllo dispositivo di scorrimento.  
  
```  
void GetThumbRect(LPRECT lprc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lprc`  
 Un puntatore a un `CRect` oggetto che contiene il rettangolo di delimitazione per il dispositivo di scorrimento quando la funzione restituisce.  
  
##  <a name="gettic"></a>CSliderCtrl::GetTic  
 Recupera la posizione del segno di graduazione in un controllo dispositivo di scorrimento.  
  
```  
int GetTic(int nTic) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nTic`  
 Indice in base zero che identifica un segno di graduazione.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione di graduazione specificato oppure - 1 se `nTic` non specifica un indice valido.  
  
##  <a name="getticarray"></a>CSliderCtrl::GetTicArray  
 Recupera l'indirizzo della matrice contenente le posizioni dei segni di graduazione per un controllo dispositivo di scorrimento.  
  
```  
DWORD* GetTicArray() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indirizzo della matrice che contiene le posizioni degli indicatori segno di graduazione per il controllo dispositivo di scorrimento.  
  
##  <a name="getticpos"></a>CSliderCtrl::GetTicPos  
 Recupera la posizione fisica corrente di un segno di graduazione in un controllo dispositivo di scorrimento.  
  
```  
int GetTicPos(int nTic) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nTic`  
 Indice in base zero che identifica un segno di graduazione.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione fisica, nelle coordinate client, di graduazione specificato oppure - 1 se `nTic` non specifica un indice valido.  
  
##  <a name="gettooltips"></a>CSliderCtrl::GetToolTips  
 Recupera l'handle per il controllo tooltip assegnato al controllo dispositivo di scorrimento, se presente.  
  
```  
CToolTipCtrl* GetToolTips() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto, o **NULL** se le descrizioni comandi non in uso. Se il dispositivo di scorrimento non utilizza il **TBS_TOOLTIPS** stile, il valore restituito è **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_GETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb760209), come descritto in Windows SDK. Si noti che questa funzione membro restituisce un `CToolTipCtrl` oggetto anziché un handle a un controllo.  
  
 Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](http://msdn.microsoft.com/library/windows/desktop/bb760147) in Windows SDK.  
  
##  <a name="setbuddy"></a>CSliderCtrl::SetBuddy  
 Assegna una finestra come finestra buddy per un controllo dispositivo di scorrimento.  
  
```  
CWnd* SetBuddy(
    CWnd* pWndBuddy,  
    BOOL fLocation = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndBuddy`  
 Un puntatore a un `CWnd` oggetto che verrà impostato come contatto del controllo dispositivo di scorrimento.  
  
 `fLocation`  
 Valore che specifica la posizione in cui si desidera visualizzare la finestra buddy. Questo valore può essere uno dei valori seguenti:  
  
- **TRUE** il contatto verrà visualizzato a sinistra del controllo trackbar se il controllo trackbar Usa il `TBS_HORZ` stile. Se viene utilizzato l'indicatore di avanzamento di `TBS_VERT` di stile, il contatto viene visualizzato sopra il controllo trackbar.  
  
- **FALSE** il contatto verrà visualizzato a destra del controllo trackbar se il controllo trackbar Usa il `TBS_HORZ` stile. Se viene utilizzato l'indicatore di avanzamento di `TBS_VERT` di stile, il contatto viene visualizzato sotto il controllo trackbar.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto assegnato al controllo dispositivo di scorrimento in tale posizione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_SETBUDDY](http://msdn.microsoft.com/library/windows/desktop/bb760213), come descritto in Windows SDK. Si noti che questa funzione membro utilizza i puntatori a `CWnd` oggetti anziché gli handle di finestra per il parametro sia relativo valore restituito.  
  
 Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](http://msdn.microsoft.com/library/windows/desktop/bb760147) in Windows SDK.  
  
##  <a name="setlinesize"></a>CSliderCtrl::SetLineSize  
 Imposta le dimensioni della riga per un controllo dispositivo di scorrimento.  
  
```  
int SetLineSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 `nSize`  
 La nuova dimensione di riga del controllo dispositivo di scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione di riga precedente.  
  
### <a name="remarks"></a>Note  
 Le dimensioni di riga influisce su quanto il dispositivo di scorrimento viene spostato per il **TB_LINEUP** e **TB_LINEDOWN** notifiche.  
  
##  <a name="setpagesize"></a>CSliderCtrl::SetPageSize  
 Imposta le dimensioni della pagina per un controllo dispositivo di scorrimento.  
  
```  
int SetPageSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 `nSize`  
 Le nuove dimensioni di pagina del controllo dispositivo di scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della pagina precedente.  
  
### <a name="remarks"></a>Note  
 Le dimensioni della pagina influisce sulla quantità il dispositivo di scorrimento viene spostato per il **TB_PAGEUP** e **TB_PAGEDOWN** notifiche.  
  
##  <a name="setpos"></a>CSliderCtrl::SetPos  
 Imposta la posizione corrente del dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
void SetPos(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica la nuova posizione del dispositivo.  
  
##  <a name="setrange"></a>CSliderCtrl::SetRange  
 Imposta l'intervallo (posizioni minima e massima) per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
void SetRange(
    int nMin,  
    int nMax,  
    BOOL bRedraw = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `nMin`  
 Posizione minima per il dispositivo di scorrimento.  
  
 `nMax`  
 Posizione massima per il dispositivo di scorrimento.  
  
 `bRedraw`  
 Il flag di aggiornamento. Se questo parametro è **TRUE**, il dispositivo di scorrimento viene ridisegnato dopo l'intervallo è impostato; in caso contrario non venga aggiornato il dispositivo di scorrimento.  
  
##  <a name="setrangemax"></a>CSliderCtrl::SetRangeMax  
 Imposta l'intervallo massimo per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
void SetRangeMax(
    int nMax,  
    BOOL bRedraw = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `nMax`  
 Posizione massima per il dispositivo di scorrimento.  
  
 `bRedraw`  
 Il flag di aggiornamento. Se questo parametro è **TRUE**, il dispositivo di scorrimento viene ridisegnato dopo l'intervallo è impostato; in caso contrario non venga aggiornato il dispositivo di scorrimento.  
  
##  <a name="setrangemin"></a>CSliderCtrl::SetRangeMin  
 Imposta l'intervallo minimo per il dispositivo di scorrimento in un controllo dispositivo di scorrimento.  
  
```  
void SetRangeMin(
    int nMin,  
    BOOL bRedraw = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `nMin`  
 Posizione minima per il dispositivo di scorrimento.  
  
 `bRedraw`  
 Il flag di aggiornamento. Se questo parametro è **TRUE**, il dispositivo di scorrimento viene ridisegnato dopo l'intervallo è impostato; in caso contrario non venga aggiornato il dispositivo di scorrimento.  
  
##  <a name="setselection"></a>CSliderCtrl::SetSelection  
 Imposta la posizione iniziale e finale per la selezione corrente in un controllo dispositivo di scorrimento.  
  
```  
void SetSelection(
    int nMin,  
    int nMax);
```  
  
### <a name="parameters"></a>Parametri  
 `nMin`  
 Posizione iniziale per il dispositivo di scorrimento.  
  
 `nMax`  
 Posizione finale per il dispositivo di scorrimento.  
  
##  <a name="setthumblength"></a>CSliderCtrl::SetThumbLength  
 Imposta la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.  
  
```  
void SetThumbLength(int nLength);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nLength`|Lunghezza del dispositivo di scorrimento, in pixel.|  
  
### <a name="remarks"></a>Note  
 Questo metodo richiede che il controllo trackbar sia impostata su [TBS_FIXEDLENGTH](http://msdn.microsoft.com/library/windows/desktop/bb760147) stile.  
  
 Questo metodo invia il [TBM_SETTHUMBLENGTH](http://msdn.microsoft.com/library/windows/desktop/bb760234) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_sliderCtrl`, che viene utilizzato per accedere al controllo trackbar corrente. Nell'esempio viene inoltre definita una variabile, `thumbLength`, che viene utilizzato per archiviare la lunghezza predefinita del componente casella di scorrimento del controllo trackbar. Nell'esempio seguente vengono utilizzate queste variabili.  
  
 [!code-cpp[NVC_MFC_CSliderCtrl_s1#1](../../mfc/reference/codesnippet/cpp/csliderctrl-class_1.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta il componente di cursore del controllo trackbar due volte la lunghezza predefinita.  
  
 [!code-cpp[NVC_MFC_CSliderCtrl_s1#2](../../mfc/reference/codesnippet/cpp/csliderctrl-class_2.cpp)]  
  
##  <a name="settic"></a>CSliderCtrl::SetTic  
 Imposta la posizione del segno di graduazione in un controllo dispositivo di scorrimento.  
  
```  
BOOL SetTic(int nTic);
```  
  
### <a name="parameters"></a>Parametri  
 `nTic`  
 Posizione del segno di graduazione. Questo parametro è necessario specificare un valore positivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è impostato il segno di graduazione; in caso contrario 0.  
  
##  <a name="setticfreq"></a>CSliderCtrl::SetTicFreq  
 Imposta la frequenza con cui segni di graduazione visualizzati in un dispositivo di scorrimento.  
  
```  
void SetTicFreq(int nFreq);
```  
  
### <a name="parameters"></a>Parametri  
 *nFreq*  
 Frequenza dei segni di graduazione.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se la frequenza è impostata su 2, un segno di graduazione viene visualizzato per ogni altro incremento nell'intervallo del dispositivo di scorrimento. L'impostazione predefinita per la frequenza è 1 (ovvero, ogni incremento nell'intervallo è associata a un segno di graduazione).  
  
 È necessario creare il controllo con il `TBS_AUTOTICKS` stile da utilizzare questa funzione. Per ulteriori informazioni, vedere [CSliderCtrl::Create](#create).  
  
##  <a name="settipside"></a>CSliderCtrl::SetTipSide  
 Posizioni di un controllo tooltip utilizzato da un controllo trackbar.  
  
```  
int SetTipSide(int nLocation);
```  
  
### <a name="parameters"></a>Parametri  
 `nLocation`  
 Valore che rappresenta la posizione in cui visualizzare il controllo tooltip. Per un elenco di valori possibili, vedere il messaggio Win32 [TBM_SETTIPSIDE](http://msdn.microsoft.com/library/windows/desktop/bb760240), come descritto in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che rappresenta la posizione precedente del controllo tooltip. Il valore restituito è uguale a uno dei valori possibili per `nLocation`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 **TBM_SETTIPSIDE**, come descritto in Windows SDK. Dispositivo di scorrimento controlli che utilizzano il **TBS_TOOLTIPS** stile descrizioni comando visualizzato. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](http://msdn.microsoft.com/library/windows/desktop/bb760147) in Windows SDK.  
  
##  <a name="settooltips"></a>CSliderCtrl::SetToolTips  
 Assegna un controllo descrizione comandi a un controllo dispositivo di scorrimento.  
  
```  
void SetToolTips(CToolTipCtrl* pWndTip);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndTip`  
 Un puntatore a un [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto che contiene le descrizioni comandi da utilizzare con il controllo dispositivo di scorrimento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TBM_SETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb760242), come descritto in Windows SDK. Quando un controllo dispositivo di scorrimento viene creato con la **TBS_TOOLTIPS** stile, viene creato un controllo descrizione comandi predefinita visualizzata accanto al dispositivo di scorrimento, visualizzare la posizione corrente del dispositivo di scorrimento. Per una descrizione degli stili del controllo dispositivo di scorrimento, vedere [stili del controllo Trackbar](http://msdn.microsoft.com/library/windows/desktop/bb760147) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CProgressCtrl](../../mfc/reference/cprogressctrl-class.md)
