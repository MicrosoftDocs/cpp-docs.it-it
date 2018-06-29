---
title: CProgressCtrl (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CProgressCtrl
- AFXCMN/CProgressCtrl
- AFXCMN/CProgressCtrl::CProgressCtrl
- AFXCMN/CProgressCtrl::Create
- AFXCMN/CProgressCtrl::CreateEx
- AFXCMN/CProgressCtrl::GetBarColor
- AFXCMN/CProgressCtrl::GetBkColor
- AFXCMN/CProgressCtrl::GetPos
- AFXCMN/CProgressCtrl::GetRange
- AFXCMN/CProgressCtrl::GetState
- AFXCMN/CProgressCtrl::GetStep
- AFXCMN/CProgressCtrl::OffsetPos
- AFXCMN/CProgressCtrl::SetBarColor
- AFXCMN/CProgressCtrl::SetBkColor
- AFXCMN/CProgressCtrl::SetMarquee
- AFXCMN/CProgressCtrl::SetPos
- AFXCMN/CProgressCtrl::SetRange
- AFXCMN/CProgressCtrl::SetState
- AFXCMN/CProgressCtrl::SetStep
- AFXCMN/CProgressCtrl::StepIt
dev_langs:
- C++
helpviewer_keywords:
- CProgressCtrl [MFC], CProgressCtrl
- CProgressCtrl [MFC], Create
- CProgressCtrl [MFC], CreateEx
- CProgressCtrl [MFC], GetBarColor
- CProgressCtrl [MFC], GetBkColor
- CProgressCtrl [MFC], GetPos
- CProgressCtrl [MFC], GetRange
- CProgressCtrl [MFC], GetState
- CProgressCtrl [MFC], GetStep
- CProgressCtrl [MFC], OffsetPos
- CProgressCtrl [MFC], SetBarColor
- CProgressCtrl [MFC], SetBkColor
- CProgressCtrl [MFC], SetMarquee
- CProgressCtrl [MFC], SetPos
- CProgressCtrl [MFC], SetRange
- CProgressCtrl [MFC], SetState
- CProgressCtrl [MFC], SetStep
- CProgressCtrl [MFC], StepIt
ms.assetid: 222630f4-1598-4026-8198-51649b1192ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 38ccc4acfdfd618bf0fa11f4a49c1e0b78f009ca
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079390"
---
# <a name="cprogressctrl-class"></a>CProgressCtrl (classe)
Fornisce la funzionalità del controllo indicatore di stato comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CProgressCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CProgressCtrl::CProgressCtrl](#cprogressctrl)|Costruisce un oggetto `CProgressCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CProgressCtrl:: Create](#create)|Crea un controllo indicatore di stato e lo collega a un `CProgressCtrl` oggetto.|  
|[CProgressCtrl::CreateEx](#createex)|Crea un controllo di stato con gli stili estesi di Windows specificati e lo collega a un `CProgressCtrl` oggetto.|  
|[CProgressCtrl::GetBarColor](#getbarcolor)|Ottiene il colore della barra di indicatore di stato per il controllo barra di stato di avanzamento corrente.|  
|[CProgressCtrl::GetBkColor](#getbkcolor)|Ottiene il colore di sfondo della barra di stato corrente.|  
|[CProgressCtrl::GetPos](#getpos)|Ottiene la posizione corrente dell'indicatore di stato.|  
|[CProgressCtrl::GetRange](#getrange)|Ottiene i limiti inferiori e superiori dell'intervallo del controllo indicatore di stato di avanzamento.|  
|[CProgressCtrl:: GetState](#getstate)|Ottiene lo stato del controllo barra di stato di avanzamento corrente.|  
|[CProgressCtrl::GetStep](#getstep)|Recupera l'incremento di passaggio per l'indicatore di stato del controllo barra di stato di avanzamento corrente.|  
|[CProgressCtrl::OffsetPos](#offsetpos)|Fa avanzare la posizione corrente di un controllo barra di stato di avanzamento un incremento specificato e ridisegna la barra per riflettere la nuova posizione.|  
|[CProgressCtrl::SetBarColor](#setbarcolor)|Imposta il colore della barra di indicatore di stato nel controllo indicatore di stato di avanzamento corrente.|  
|[CProgressCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per l'indicatore di stato.|  
|[CProgressCtrl::SetMarquee](#setmarquee)|Disattiva la modalità di selezione o disattivare per il controllo barra di stato di avanzamento corrente.|  
|[CProgressCtrl::SetPos](#setpos)|Imposta la posizione corrente per un controllo barra di stato di avanzamento e ridisegna la barra per riflettere la nuova posizione.|  
|[CProgressCtrl::SetRange](#setrange)|Imposta l'intervallo minimo e massimo per un controllo barra di stato di avanzamento e ridisegna la barra per riflettere i nuovi intervalli di valori.|  
|[CProgressCtrl::SetState](#setstate)|Imposta lo stato del controllo indicatore di stato corrente.|  
|[CProgressCtrl::SetStep](#setstep)|Specifica l'incremento di passaggio per un controllo indicatore di stato.|  
|[CProgressCtrl::StepIt](#stepit)|Fa avanzare la posizione corrente per un controllo indicatore di stato l'incremento di passaggio (vedere [SetStep](#setstep)) e ridisegna la barra per riflettere la nuova posizione.|  
  
## <a name="remarks"></a>Note  
 Un controllo indicatore di stato è una finestra che un'applicazione può utilizzare per indicare lo stato di avanzamento di un'operazione di lunga durata. È costituito da un rettangolo che viene riempito gradualmente da sinistra a destra, con il sistema di colore dei lati illuminati durante l'avanzamento dell'operazione.  
  
 Un controllo barra di stato di avanzamento ha un intervallo e una posizione corrente. L'intervallo rappresenta la durata totale dell'operazione e la posizione corrente rappresenta lo stato di avanzamento che all'applicazione effettuati dal completamento dell'operazione. La procedura della finestra utilizza l'intervallo e la posizione corrente per determinare la percentuale della barra di stato da riempire con il colore di evidenziazione. Poiché l'intervallo e i valori di posizione corrente sono espressi come numeri interi con segno, l'intervallo di valori di posizione corrente possibili è da -2.147.483.648 a 2.147.483.647 inclusivo.  
  
 Per ulteriori informazioni sull'utilizzo `CProgressCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CProgressCtrl utilizzando](../../mfc/using-cprogressctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CProgressCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cprogressctrl"></a>  CProgressCtrl::CProgressCtrl  
 Costruisce un oggetto `CProgressCtrl`.  
  
```  
CProgressCtrl();
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione di `CProgressCtrl` dell'oggetto, chiamare `CProgressCtrl::Create` per creare il controllo indicatore di stato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_1.cpp)]  
  
##  <a name="create"></a>  CProgressCtrl:: Create  
 Crea un controllo indicatore di stato e lo collega a un `CProgressCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione di finestra stylesdescribed in [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in Windows SDK, oltre a dell'indicatore stili del controllo, per il controllo di stato seguente:  
  
- `PBS_VERTICAL` Consente di visualizzare informazioni di stato verticalmente, dall'alto verso il basso. Senza questo flag, il controllo indicatore di stato vengono visualizzati in senso orizzontale, a sinistra a destra.  
  
- `PBS_SMOOTH` Consente di visualizzare graduale, smooth compilare il controllo indicatore di stato. Senza questo flag, il controllo venga compilato con blocchi.  
  
 *Rect*  
 Specifica dimensioni e la posizione del controllo indicatore di stato. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura. Poiché il controllo deve essere una finestra figlio, delle coordinate specificate sono relative all'area client del *pParentWnd*.  
  
 *pParentWnd*  
 Specifica lo stato di avanzamento della barra di finestra padre del controllo, in genere un `CDialog`. Non deve essere **NULL.**  
  
 *nID*  
 Specifica l'ID. del controllo indicatore di stato  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il `CProgressCtrl` oggetto è stato creato correttamente; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CProgressCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore, che crea il `CProgressCtrl` dell'oggetto e quindi chiamare `Create`, che consente di creare il controllo indicatore di stato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_2.cpp)]  
  
##  <a name="createex"></a>  CProgressCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e la associa il `CProgressCtrl` oggetto.  
  
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
 Specifica lo stile del controllo indicatore di stato. Applicare qualsiasi combinazione degli stili finestra descritto in [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in Windows SDK.  
  
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
  
##  <a name="getbarcolor"></a>  CProgressCtrl::GetBarColor  
 Ottiene il colore della barra di indicatore di stato per il controllo barra di stato di avanzamento corrente.  
  
```  
COLORREF GetBarColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore della barra di stato corrente, rappresentato come un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore, o `CLR_DEFAULT` se il colore della barra di stato di avanzamento indicatore è il colore predefinito.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_GETBARCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760826) messaggio, come descritto in Windows SDK.  
  
##  <a name="getbkcolor"></a>  CProgressCtrl::GetBkColor  
 Ottiene il colore di sfondo della barra di stato corrente.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore di sfondo della barra di stato corrente, rappresentato come un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760828) messaggio, come descritto in Windows SDK.  
  
##  <a name="getpos"></a>  CProgressCtrl::GetPos  
 Recupera la posizione corrente dell'indicatore di stato.  
  
```  
int GetPos();
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione del controllo indicatore di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 La posizione del controllo indicatore di stato di avanzamento non è la posizione fisica su schermo, ma piuttosto tra il limite superiore e inferiore intervallo indicato in [SetRange](#setrange).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_3.cpp)]  
  
##  <a name="getrange"></a>  CProgressCtrl::GetRange  
 Ottiene i limiti inferiore e superiore correnti, o intervallo, del controllo indicatore di stato di avanzamento.  
  
```  
void GetRange(
    int& nLower,  
    int& nUpper);
```  
  
### <a name="parameters"></a>Parametri  
 *nLower*  
 Un riferimento a un numero intero riceve il limite inferiore del controllo indicatore di stato di avanzamento.  
  
 *nUpper*  
 Un riferimento a un numero intero riceve il limite superiore del controllo indicatore di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 Questa funzione copia i valori dei limiti inferiori e superiori per i numeri interi fa riferimento *nLower* e *nUpper*, rispettivamente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_4.cpp)]  
  
##  <a name="getstate"></a>  CProgressCtrl:: GetState  
 Ottiene lo stato del controllo barra di stato di avanzamento corrente.  
  
```  
int GetState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato del controllo barra lo stato di avanzamento corrente che è uno dei valori seguenti:  
  
|Valore|Stato|  
|-----------|-----------|  
|`PBST_NORMAL`|In corso|  
|`PBST_ERROR`|Error|  
|`PBST_PAUSED`|In pausa|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_GETSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760834) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera lo stato del controllo barra di stato di avanzamento corrente.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_6.cpp)]  
  
##  <a name="getstep"></a>  CProgressCtrl::GetStep  
 Recupera l'incremento di passaggio per l'indicatore di stato del controllo barra di stato di avanzamento corrente.  
  
```  
int GetStep() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento del passaggio dell'indicatore di stato.  
  
### <a name="remarks"></a>Note  
 L'incremento di passaggio è la quantità da una chiamata a [CProgressCtrl::StepIt](#stepit) aumenta la posizione corrente dell'indicatore di stato.  
  
 Questo metodo invia il [PBM_GETSTEP](http://msdn.microsoft.com/library/windows/desktop/bb760836) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera l'incremento di passaggio del controllo barra di stato di avanzamento corrente.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_7.cpp)]  
  
##  <a name="offsetpos"></a>  CProgressCtrl::OffsetPos  
 Sposta in avanti l'incremento specificato dall'indicatore di posizione corrente del controllo *nPos* e ridisegna la barra per riflettere la nuova posizione.  
  
```  
int OffsetPos(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Quantità in base a spostare la posizione.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente del controllo indicatore di stato di avanzamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#5](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_8.cpp)]  
  
##  <a name="setbarcolor"></a>  CProgressCtrl::SetBarColor  
 Imposta il colore della barra di indicatore di stato nel controllo indicatore di stato di avanzamento corrente.  
  
```  
COLORREF SetBarColor(COLORREF clrBar);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *clrBar*|Un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che specifica il nuovo colore della barra di indicatore di stato. Specificare `CLR_DEFAULT` causare l'indicatore di stato da usare il colore predefinito.|  
  
### <a name="return-value"></a>Valore restituito  
 Il colore precedente della barra di indicatore di stato, rappresentato come un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore, o `CLR_DEFAULT` se il colore della barra di indicatore di stato è il colore predefinito.  
  
### <a name="remarks"></a>Note  
 Il `SetBarColor` metodo imposta l'indicatore di stato solo se colore una [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] [tema](https://msdn.microsoft.com/library/windows/desktop/hh270423.aspx) non è attiva.  
  
 Questo metodo invia il [PBM_SETBARCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760838) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente modifica il colore dell'indicatore di stato rosso, verde, blu e il valore predefinito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_9.cpp)]  
  
##  <a name="setbkcolor"></a>  CProgressCtrl::SetBkColor  
 Imposta il colore di sfondo per l'indicatore di stato.  
  
```  
COLORREF SetBkColor(COLORREF clrNew);
```  
  
### <a name="parameters"></a>Parametri  
 *clrNew*  
 Un **COLORREF** valore che specifica il nuovo colore di sfondo. Specificare il `CLR_DEFAULT` valore da usare il colore di sfondo predefinito per l'indicatore di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Il [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che indica il colore di sfondo precedenti, o **CLR_DEFAULT** se il colore di sfondo è il colore predefinito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#6](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_10.cpp)]  
  
##  <a name="setmarquee"></a>  CProgressCtrl::SetMarquee  
 Disattiva la modalità di selezione o disattivare per il controllo barra di stato di avanzamento corrente.  
  
```  
BOOL SetMarquee(
    BOOL fMarqueeMode,   
    int nInterval);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *fMarqueeMode*|`true` Per attivare la modalità di selezione, o `false` per disattivare la modalità di selezione.|  
|[in] *Nintervallo*|Tempo in millisecondi tra gli aggiornamenti del testo scorrevole.|  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce sempre `true`.  
  
### <a name="remarks"></a>Note  
 Quando viene abilitata la modalità di selezione, viene animata l'indicatore di stato e lo scorrimento come accesso scorrevole teatro.  
  
 Questo metodo invia il [PBM_SETMARQUEE](http://msdn.microsoft.com/library/windows/desktop/bb760842) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente avvia e arresta il rettangolo di selezione lo scorrimento di animazione.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_11.cpp)]  
  
##  <a name="setpos"></a>  CProgressCtrl::SetPos  
 Imposta lo stato di avanzamento della posizione corrente del controllo come specificato da *nPos* e ridisegna la barra per riflettere la nuova posizione.  
  
```  
int SetPos(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Nuova posizione della barra di stato di avanzamento.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente del controllo indicatore di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 La posizione del controllo indicatore di stato di avanzamento non è la posizione fisica su schermo, ma piuttosto tra il limite superiore e inferiore intervallo indicato in [SetRange](#setrange).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#7](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_12.cpp)]  
  
##  <a name="setrange"></a>  CProgressCtrl::SetRange  
 Imposta i limiti superiore e inferiore dell'intervallo del controllo indicatore e ridisegna la barra per riflettere i nuovi intervalli di valori.  
  
```  
void SetRange(
    short nLower,  
    short nUpper);

 
void SetRange32(
    int nLower,  
    int nUpper);
```  
  
### <a name="parameters"></a>Parametri  
 *nLower*  
 Specifica il limite inferiore dell'intervallo (valore predefinito è zero).  
  
 *nUpper*  
 Specifica il limite massimo dell'intervallo (valore predefinito è 100).  
  
### <a name="remarks"></a>Note  
 La funzione membro `SetRange32` imposta l'intervallo di 32 bit per il controllo dello stato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#8](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_13.cpp)]  
  
##  <a name="setstate"></a>  CProgressCtrl::SetState  
 Imposta lo stato del controllo indicatore di stato corrente.  
  
```  
int SetState(int iState);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *iState*|Stato su cui impostare l'indicatore di stato. Usare uno dei valori indicati di seguito.<br /><br /> - `PBST_NORMAL` -In corso<br />- `PBST_ERROR` -Errore<br />- `PBST_PAUSED` -In pausa|  
  
### <a name="return-value"></a>Valore restituito  
 Stato precedente del controllo indicatore di stato corrente.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_SETSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760850) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Nell'esempio di codice seguente lo stato del controllo indicatore di stato corrente viene impostato su In pausa o In corso.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_14.cpp)]  
  
##  <a name="setstep"></a>  CProgressCtrl::SetStep  
 Specifica l'incremento di passaggio per un controllo indicatore di stato.  
  
```  
int SetStep(int nStep);
```  
  
### <a name="parameters"></a>Parametri  
 *nStep*  
 Nuovo incremento di passaggio.  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento di passaggio precedente.  
  
### <a name="remarks"></a>Note  
 L'incremento di passaggio è la quantità da una chiamata a `CProgressCtrl::StepIt` aumenta lo stato di avanzamento posizione corrente dell'indicatore.  
  
 L'incremento di passaggio predefinito è 10.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#9](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_15.cpp)]  
  
##  <a name="stepit"></a>  CProgressCtrl::StepIt  
 Fa avanzare la posizione corrente per un controllo indicatore di stato l'incremento di passaggio e ridisegna la barra per riflettere la nuova posizione.  
  
```  
int StepIt();
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente del controllo indicatore di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 L'incremento di passaggio l'impostazione è la `CProgressCtrl::SetStep` funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl#10](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_16.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)


