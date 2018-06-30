---
title: CSpinButtonCtrl (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl::CSpinButtonCtrl
- AFXCMN/CSpinButtonCtrl::Create
- AFXCMN/CSpinButtonCtrl::CreateEx
- AFXCMN/CSpinButtonCtrl::GetAccel
- AFXCMN/CSpinButtonCtrl::GetBase
- AFXCMN/CSpinButtonCtrl::GetBuddy
- AFXCMN/CSpinButtonCtrl::GetPos
- AFXCMN/CSpinButtonCtrl::GetRange
- AFXCMN/CSpinButtonCtrl::SetAccel
- AFXCMN/CSpinButtonCtrl::SetBase
- AFXCMN/CSpinButtonCtrl::SetBuddy
- AFXCMN/CSpinButtonCtrl::SetPos
- AFXCMN/CSpinButtonCtrl::SetRange
dev_langs:
- C++
helpviewer_keywords:
- CSpinButtonCtrl [MFC], CSpinButtonCtrl
- CSpinButtonCtrl [MFC], Create
- CSpinButtonCtrl [MFC], CreateEx
- CSpinButtonCtrl [MFC], GetAccel
- CSpinButtonCtrl [MFC], GetBase
- CSpinButtonCtrl [MFC], GetBuddy
- CSpinButtonCtrl [MFC], GetPos
- CSpinButtonCtrl [MFC], GetRange
- CSpinButtonCtrl [MFC], SetAccel
- CSpinButtonCtrl [MFC], SetBase
- CSpinButtonCtrl [MFC], SetBuddy
- CSpinButtonCtrl [MFC], SetPos
- CSpinButtonCtrl [MFC], SetRange
ms.assetid: 509bfd76-1c5a-4af6-973f-e133c0b87734
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ddf8e6530530552a4ef7b811698c816352f7719c
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122967"
---
# <a name="cspinbuttonctrl-class"></a>CSpinButtonCtrl (classe)
Fornisce la funzionalità del controllo pulsante di selezione comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSpinButtonCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSpinButtonCtrl::CSpinButtonCtrl](#cspinbuttonctrl)|Costruisce un oggetto `CSpinButtonCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSpinButtonCtrl::Create](#create)|Crea un controllo pulsante di selezione e lo collega a un `CSpinButtonCtrl` oggetto.|  
|[CSpinButtonCtrl::CreateEx](#createex)|Crea un controllo pulsante di selezione con gli stili estesi di Windows specificati e lo collega a un `CSpinButtonCtrl` oggetto.|  
|[CSpinButtonCtrl::GetAccel](#getaccel)|Recupera le informazioni di accelerazione per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetBase](#getbase)|Recupera la base corrente per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetBuddy](#getbuddy)|Recupera un puntatore alla finestra buddy corrente.|  
|[CSpinButtonCtrl::GetPos](#getpos)|Recupera la posizione corrente del controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetRange](#getrange)|Recupera i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetAccel](#setaccel)|Imposta l'accelerazione per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetBase](#setbase)|Imposta la base per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetBuddy](#setbuddy)|Imposta la finestra buddy per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetPos](#setpos)|Imposta la posizione corrente per il controllo.|  
|[CSpinButtonCtrl:: SetRange](#setrange)|Imposta i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.|  
  
## <a name="remarks"></a>Note  
 Un "controllo pulsante di selezione" (noto anche come controllo di scorrimento) è una coppia di frecce che l'utente può fare clic per incrementare o decrementare un valore, ad esempio una posizione di scorrimento o un numero visualizzato in un controllo correlato. Il valore associato a un controllo pulsante di selezione viene chiamato alla posizione corrente. Un controllo pulsante di selezione viene generalmente utilizzato con un controllo correlato, denominato "finestra buddy".  
  
 Questo controllo (e pertanto il `CSpinButtonCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 All'utente, un controllo pulsante di selezione e la relativa finestra buddy spesso simile a un singolo controllo. È possibile specificare che un controllo pulsante di selezione automaticamente posizionerà accanto alla relativa finestra buddy e impostato automaticamente la didascalia della finestra buddy sulla propria posizione corrente. È possibile utilizzare un controllo pulsante di selezione con un controllo di modifica per richiedere all'utente per l'input numerico.  
  
 Facendo clic sulla freccia in su consente di spostare la posizione corrente verso il valore massimo e facendo clic sulla freccia in giù sposta la posizione corrente verso il valore minimo. Per impostazione predefinita, il valore minimo è 100 e il valore massimo è 0. Ogni volta che l'impostazione minima è superiore al massimo l'impostazione (ad esempio, quando vengono usate le impostazioni predefinite), fare clic su diminuisce il freccia alto il valore della posizione e facendo clic sulla freccia in giù aumenta.  
  
 Un controllo pulsante di selezione senza finestra buddy funziona come una sorta di barra di scorrimento semplificata. Ad esempio, un controllo struttura a schede Visualizza talvolta un controllo pulsante di selezione per consentire all'utente di scorrere le schede aggiuntive nella visualizzazione.  
  
 Per ulteriori informazioni sull'utilizzo `CSpinButtonCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CSpinButtonCtrl utilizzando](../../mfc/using-cspinbuttonctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSpinButtonCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="create"></a>  CSpinButtonCtrl::Create  
 Crea un controllo pulsante di selezione e lo collega a un `CSpinButtonCtrl` oggetto...  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili del controllo pulsante di selezione al controllo. Questi stili sono descritti in [stili del controllo UpDown](http://msdn.microsoft.com/library/windows/desktop/bb759885) in Windows SDK.  
  
 *Rect*  
 Specifica dimensioni e la posizione del controllo pulsante di selezione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura  
  
 *pParentWnd*  
 Un puntatore alla finestra padre del controllo pulsante di selezione, in genere un `CDialog`. Non deve essere NULL.  
  
 *nID*  
 Specifica l'ID. del controllo pulsante di selezione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce una `CSpinButtonCtrl` prima l'oggetto in due passaggi, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo pulsante di selezione e lo collega al `CSpinButtonCtrl` oggetto.  
  
 Per creare un controllo pulsante di selezione con stili finestra estesi, chiamare [CSpinButtonCtrl::CreateEx](#createex) anziché `Create`.  
  
##  <a name="createex"></a>  CSpinButtonCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e la associa il `CSpinButtonCtrl` oggetto.  
  
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
 Specifica lo stile esteso del controllo da creare. Per un elenco degli stili estesi, vedere la *dwExStyle* parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 *dwStyle*  
 Specifica lo stile del controllo pulsante di selezione. Applicare qualsiasi combinazione di stili del controllo pulsante di selezione al controllo. Questi stili sono descritti in [stili del controllo UpDown](http://msdn.microsoft.com/library/windows/desktop/bb759885) in Windows SDK.  
  
 *Rect*  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e posizione della finestra deve essere creato, nelle coordinate client di *pParentWnd*.  
  
 *pParentWnd*  
 Un puntatore alla finestra padre del controllo.  
  
 *nID*  
 ID finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Uso `CreateEx` invece di [crea](#create) per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows WS_EX _.  
  
##  <a name="cspinbuttonctrl"></a>  CSpinButtonCtrl::CSpinButtonCtrl  
 Costruisce un oggetto `CSpinButtonCtrl`.  
  
```  
CSpinButtonCtrl();
```  
  
##  <a name="getaccel"></a>  CSpinButtonCtrl::GetAccel  
 Recupera le informazioni di accelerazione per un controllo pulsante di selezione.  
  
```  
UINT GetAccel(
    int nAccel,  
    UDACCEL* pAccel) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nAccel*  
 Numero di elementi nella matrice specificata dal *pAccel*.  
  
 *pAccel*  
 Puntatore a una matrice di [UDACCEL](http://msdn.microsoft.com/library/windows/desktop/bb759897) strutture che riceve le informazioni di accelerazione.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di strutture di tasti di scelta rapida recuperati.  
  
##  <a name="getbase"></a>  CSpinButtonCtrl::GetBase  
 Recupera la base corrente per un controllo pulsante di selezione.  
  
```  
UINT GetBase() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore di basa corrente.  
  
##  <a name="getbuddy"></a>  CSpinButtonCtrl::GetBuddy  
 Recupera un puntatore alla finestra buddy corrente.  
  
```  
CWnd* GetBuddy() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra buddy corrente.  
  
##  <a name="getpos"></a>  CSpinButtonCtrl::GetPos  
 Recupera la posizione corrente del controllo pulsante di selezione.  
  
```  
int GetPos() const;  int GetPos32(LPBOOL lpbError = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpbError*  
 Un puntatore a un valore booleano che è impostato su zero se il valore è stata recuperata o diverso da zero se si verifica un errore. Se questo parametro è impostato su NULL, non vengono segnalati errori.  
  
### <a name="return-value"></a>Valore restituito  
 La prima versione restituisce la posizione corrente a 16 bit nella parola meno significativa. La parola più significativa è diverso da zero se si è verificato un errore.  
  
 La seconda versione restituisce la posizione di 32 bit.  
  
### <a name="remarks"></a>Note  
 Quando elabora il valore restituito, il controllo ha aggiornato la posizione corrente in base alla didascalia della finestra buddy. Il controllo viene restituito un errore se non esiste alcuna finestra buddy o se la didascalia specifica un valore non valido o out-of-range.  
  
##  <a name="getrange"></a>  CSpinButtonCtrl::GetRange  
 Recupera i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.  
  
```  
DWORD GetRange() const;  
  
void GetRange(
    int& lower,  
    int& upper) const;  
  
void GetRange32(
    int& lower,  
    int &upper) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *inferiore*  
 Riferimento a un valore integer che riceve il limite inferiore per il controllo.  
  
 *superiore*  
 Riferimento a un valore integer che riceve il limite superiore per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 La prima versione restituisce un valore a 32 bit contenente i limiti superiore e inferiore. La parola meno significativa è il limite superiore per il controllo e la parola più significativa è il limite inferiore.  
  
### <a name="remarks"></a>Note  
 La funzione membro `GetRange32` recupera intervallo del controllo pulsante di selezione come intero a 32 bit.  
  
##  <a name="setaccel"></a>  CSpinButtonCtrl::SetAccel  
 Imposta l'accelerazione per un controllo pulsante di selezione.  
  
```  
BOOL SetAccel(
    int nAccel,  
    UDACCEL* pAccel);
```  
  
### <a name="parameters"></a>Parametri  
 *nAccel*  
 Numero di [UDACCEL](http://msdn.microsoft.com/library/windows/desktop/bb759897) strutture specificato da *pAccel*.  
  
 *pAccel*  
 Puntatore a una matrice di strutture UDACCEL che contengono informazioni sull'accelerazione. Gli elementi devono essere disposti in ordine crescente in base il `nSec` membro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="setbase"></a>  CSpinButtonCtrl::SetBase  
 Imposta la base per un controllo pulsante di selezione.  
  
```  
int SetBase(int nBase);
```  
  
### <a name="parameters"></a>Parametri  
 *nBase*  
 Nuovo valore di base per il controllo. Può essere per decimale 10 o 16 per esadecimale.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore di basa precedente se ha esito positivo oppure zero se viene specificata una base non valida.  
  
### <a name="remarks"></a>Note  
 Il valore di base determina se la finestra buddy Visualizza i numeri in cifre decimale o esadecimale. I numeri esadecimali sono sempre senza segno; numeri decimali sono firmati.  
  
##  <a name="setbuddy"></a>  CSpinButtonCtrl::SetBuddy  
 Imposta la finestra buddy per un controllo pulsante di selezione.  
  
```  
CWnd* SetBuddy(CWnd* pWndBuddy);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndBuddy*  
 Puntatore a una nuova finestra buddy.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra buddy precedente.  
  
### <a name="remarks"></a>Note  
 Un controllo di selezione è quasi sempre associato a un'altra finestra, ad esempio un controllo di modifica, che consente di visualizzare alcuni contenuti. L'altra finestra viene chiamata "contatto" della casella di selezione.  
  
##  <a name="setpos"></a>  CSpinButtonCtrl::SetPos  
 Imposta la posizione corrente per un controllo pulsante di selezione.  
  
```  
int SetPos(int nPos);  
int SetPos32(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Nuova posizione per il controllo. Questo valore deve essere compreso nell'intervallo specificato per i limiti superiore e inferiore per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente (precisione a 16 bit per `SetPos`a 32 bit precision per `SetPos32`).  
  
### <a name="remarks"></a>Note  
 `SetPos32` Imposta la posizione di 32 bit.  
  
##  <a name="setrange"></a>  CSpinButtonCtrl:: SetRange  
 Imposta i limiti superiore e inferiore (intervallo) per un controllo pulsante di selezione.  
  
```  
void SetRange(
    short nLower,  
    short nUpper);

 
void SetRange32(
    int nLower,  
    int nUpper);
```  
  
### <a name="parameters"></a>Parametri  
 *nLower* e *nUpper*  
 Limiti superiore e inferiore per il controllo. Per `SetRange`, né limite può essere maggiore di UD_MAXVAL o inferiore a UD_MINVAL; inoltre, la differenza tra due limiti non può superare i UD_MAXVAL. `SetRange32` non applica alcuna restrizione sui limiti; utilizzare qualsiasi integer.  
  
### <a name="remarks"></a>Note  
 La funzione membro `SetRange32` imposta l'intervallo di 32 bit per il controllo pulsante di selezione.  
  
> [!NOTE]
>  L'intervallo predefinito per il pulsante di selezione il valore massimo impostato su zero (0) e il valore minimo è impostato su 100. Poiché il valore massimo è minore del valore minimo, facendo clic sulla freccia in su diminuirà la posizione e facendo clic sulla freccia in giù si aumenta. Utilizzare `CSpinButtonCtrl::SetRange` per modificare questi valori.  
  
## <a name="see-also"></a>Vedere anche  
 [CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CSliderCtrl](../../mfc/reference/csliderctrl-class.md)
