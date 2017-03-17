---
title: CProgressCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- CProgressCtrl class
- progress controls [C++], CProgressCtrl class
- Internet Explorer 4.0 common controls
ms.assetid: 222630f4-1598-4026-8198-51649b1192ab
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
ms.openlocfilehash: 6c0e9bc16f88018c9f258504924670cc2be31d28
ms.lasthandoff: 02/24/2017

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
|[CProgressCtrl::GetRange](#getrange)|Ottiene i limiti inferiori e superiori dell'intervallo del controllo barra di stato di avanzamento.|  
|[CProgressCtrl::GetState](#getstate)|Ottiene lo stato del controllo barra di stato di avanzamento corrente.|  
|[CProgressCtrl::GetStep](#getstep)|Recupera l'incremento di passaggio per l'indicatore di stato del controllo barra di stato di avanzamento corrente.|  
|[CProgressCtrl::OffsetPos](#offsetpos)|Sposta in avanti la posizione corrente di un controllo barra di stato di avanzamento di un incremento specificato e lo ridisegna la barra per riflettere la nuova posizione.|  
|[CProgressCtrl::SetBarColor](#setbarcolor)|Imposta il colore della barra di indicatore di stato nella barra di stato di avanzamento corrente.|  
|[CProgressCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per l'indicatore di stato.|  
|[CProgressCtrl::SetMarquee](#setmarquee)|Disattiva la modalità di selezione o disattivazione del controllo barra di stato corrente.|  
|[CProgressCtrl::SetPos](#setpos)|Imposta la posizione corrente per un controllo indicatore di stato e lo ridisegna la barra per riflettere la nuova posizione.|  
|[CProgressCtrl::SetRange](#setrange)|Imposta l'intervallo minimo e massimo per un controllo indicatore di stato e lo ridisegna la barra in modo da riflettere i nuovi intervalli.|  
|[CProgressCtrl::SetState](#setstate)|Imposta lo stato del controllo indicatore di stato corrente.|  
|[CProgressCtrl::SetStep](#setstep)|Specifica l'incremento di passaggio per un controllo indicatore di stato.|  
|[CProgressCtrl::StepIt](#stepit)|Sposta in avanti la posizione corrente per un controllo indicatore di stato l'incremento di passaggio (vedere [SetStep](#setstep)) e lo ridisegna la barra per riflettere la nuova posizione.|  
  
## <a name="remarks"></a>Note  
 Un controllo indicatore di stato è una finestra che un'applicazione può utilizzare per indicare lo stato di avanzamento di un'operazione di lunga durata. È costituito da un rettangolo che viene riempito gradualmente da sinistra a destra, con il sistema di colore di evidenziazione durante l'avanzamento dell'operazione.  
  
 Un intervallo e una posizione di un controllo indicatore di stato. L'intervallo rappresenta la durata totale dell'operazione e la posizione corrente rappresenta lo stato di avanzamento che l'applicazione ha eseguito completamento dell'operazione. La procedura di finestra utilizza l'intervallo e la posizione corrente per determinare la percentuale dell'indicatore di stato da riempire con il colore di evidenziazione. Poiché l'intervallo e i valori correnti di posizione vengono espressi come numeri interi con segno, l'intervallo di valori di posizione corrente possibili è da â €"2,147,483,648 a 2,147,483,647 inclusivo.  
  
 Per ulteriori informazioni sull'utilizzo di `CProgressCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CProgressCtrl utilizzando](../../mfc/using-cprogressctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CProgressCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cprogressctrl"></a>CProgressCtrl::CProgressCtrl  
 Costruisce un oggetto `CProgressCtrl`.  
  
```  
CProgressCtrl();
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione di `CProgressCtrl` dell'oggetto, chiamare `CProgressCtrl::Create` per creare il controllo barra di stato di avanzamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl n.&1;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_1.cpp)]  
  
##  <a name="create"></a>CProgressCtrl:: Create  
 Crea un controllo indicatore di stato e lo collega a un `CProgressCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di finestra stylesdescribed in [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)], oltre a indicatore stili del controllo, al controllo di stato seguente:  
  
- `PBS_VERTICAL`Consente di visualizzare informazioni di stato verticalmente, dall'alto verso il basso. Senza questo flag, il controllo barra di stato vengono visualizzati orizzontalmente, a sinistra a destra.  
  
- `PBS_SMOOTH`Visualizza graduale e senza problemi la compilazione del controllo barra di stato. Senza questo flag, il controllo verrà riempito con i blocchi.  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo barra di stato. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura. Poiché il controllo deve essere una finestra figlio, delle coordinate specificate sono relativo all'area client del `pParentWnd`.  
  
 `pParentWnd`  
 Specifica lo stato di avanzamento della barra di finestra padre del controllo, in genere un `CDialog`. Non deve essere **NULL.**  
  
 `nID`  
 Specifica l'ID. del controllo barra di stato  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il `CProgressCtrl` oggetto è stato creato correttamente; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Costruire un `CProgressCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore che crea il `CProgressCtrl` e quindi chiamare **crea**, che consente di creare il controllo barra di stato di avanzamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl n.&2;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_2.cpp)]  
  
##  <a name="createex"></a>CProgressCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e lo associa a di `CProgressCtrl` oggetto.  
  
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
 Specifica lo stile del controllo barra di stato. Applicare qualsiasi combinazione di stili di finestra descritto in [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
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
  
##  <a name="getbarcolor"></a>CProgressCtrl::GetBarColor  
 Ottiene il colore della barra di indicatore di stato per il controllo barra di stato di avanzamento corrente.  
  
```  
COLORREF GetBarColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore della barra di stato corrente, rappresentato come un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore, o `CLR_DEFAULT` se il colore della barra di stato di avanzamento indicatore è il colore predefinito.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_GETBARCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760826) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getbkcolor"></a>CProgressCtrl::GetBkColor  
 Ottiene il colore di sfondo della barra di stato corrente.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore di sfondo della barra di stato corrente, rappresentato come un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_GETBKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760828) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getpos"></a>CProgressCtrl::GetPos  
 Recupera la posizione corrente dell'indicatore di stato.  
  
```  
int GetPos();
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione della barra di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 La posizione della barra di stato di avanzamento non è la posizione fisica su schermo, ma piuttosto tra superiore e inferiore intervallo indicato nel [SetRange](#setrange).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl n.&3;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_3.cpp)]  
  
##  <a name="getrange"></a>CProgressCtrl::GetRange  
 Ottiene i limiti inferiore e superiore correnti o intervallo, della barra di stato di avanzamento.  
  
```  
void GetRange(
    int& nLower,  
    int& nUpper);
```  
  
### <a name="parameters"></a>Parametri  
 `nLower`  
 Un riferimento a un intero riceve il limite inferiore della barra di stato di avanzamento.  
  
 `nUpper`  
 Un riferimento a un intero riceve il limite superiore della barra di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 Questa funzione copia i valori dei limiti inferiori e superiori per i numeri interi a cui fa riferimento `nLower` e `nUpper`, rispettivamente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl n.&4;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_4.cpp)]  
  
##  <a name="getstate"></a>CProgressCtrl::GetState  
 Ottiene lo stato del controllo barra di stato di avanzamento corrente.  
  
```  
int GetState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato del controllo barra lo stato di avanzamento corrente che è uno dei valori seguenti:  
  
|Valore|Stato|  
|-----------|-----------|  
|`PBST_NORMAL`|In corso|  
|`PBST_ERROR`|Errore|  
|`PBST_PAUSED`|Paused|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_GETSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760834) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[9 NVC_MFC_CProgressCtrl_s1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera lo stato del controllo barra di stato di avanzamento corrente.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1 n.&5;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_6.cpp)]  
  
##  <a name="getstep"></a>CProgressCtrl::GetStep  
 Recupera l'incremento di passaggio per l'indicatore di stato del controllo barra di stato di avanzamento corrente.  
  
```  
int GetStep() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Passo dell'indicatore di stato.  
  
### <a name="remarks"></a>Note  
 L'incremento di passaggio è la quantità da una chiamata a [CProgressCtrl::StepIt](#stepit) aumenta la posizione corrente dell'indicatore di stato.  
  
 Questo metodo invia il [PBM_GETSTEP](http://msdn.microsoft.com/library/windows/desktop/bb760836) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[9 NVC_MFC_CProgressCtrl_s1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera l'incremento di passaggio del controllo barra di stato di avanzamento corrente.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1 n.&3;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_7.cpp)]  
  
##  <a name="offsetpos"></a>CProgressCtrl::OffsetPos  
 Sposta in avanti l'incremento specificato dall'indicatore di posizione corrente del controllo `nPos` e ridisegna la barra per riflettere la nuova posizione.  
  
```  
int OffsetPos(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Quantità per far avanzare la posizione.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente del controllo barra di stato di avanzamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl n.&5;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_8.cpp)]  
  
##  <a name="setbarcolor"></a>CProgressCtrl::SetBarColor  
 Imposta il colore della barra di indicatore di stato nella barra di stato di avanzamento corrente.  
  
```  
COLORREF SetBarColor(COLORREF clrBar);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `clrBar`|Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che specifica il nuovo colore della barra di indicatore di stato. Specificare `CLR_DEFAULT` per causare l'indicatore di stato utilizzare il colore predefinito.|  
  
### <a name="return-value"></a>Valore restituito  
 Il colore precedente della barra di indicatore di stato, rappresentato come un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore, o `CLR_DEFAULT` se il colore della barra di indicatore di stato è il colore predefinito.  
  
### <a name="remarks"></a>Note  
 Il `SetBarColor` metodo imposta l'indicatore di stato solo se colore un [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] [tema](https://msdn.microsoft.com/library/windows/desktop/hh270423.aspx) non è attivo.  
  
 Questo metodo invia il [PBM_SETBARCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb760838) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[9 NVC_MFC_CProgressCtrl_s1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente modifica il colore dell'indicatore di stato di colore rosso, verde, blu o il valore predefinito.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1 n.&1;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_9.cpp)]  
  
##  <a name="setbkcolor"></a>CProgressCtrl::SetBkColor  
 Imposta il colore di sfondo per l'indicatore di stato.  
  
```  
COLORREF SetBkColor(COLORREF clrNew);
```  
  
### <a name="parameters"></a>Parametri  
 `clrNew`  
 Oggetto **COLORREF** valore che specifica il nuovo colore di sfondo. Specificare il `CLR_DEFAULT` valore da utilizzare il colore di sfondo predefinito per l'indicatore di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Il [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che indica il colore di sfondo precedente, o **CLR_DEFAULT** se il colore di sfondo è il colore predefinito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFC_CProgressCtrl](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_10.cpp)]  
  
##  <a name="setmarquee"></a>CProgressCtrl::SetMarquee  
 Disattiva la modalità di selezione o disattivazione del controllo barra di stato corrente.  
  
```  
BOOL SetMarquee(
    BOOL fMarqueeMode,   
    int nInterval);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `fMarqueeMode`|`true`Per attivare la modalità di selezione, o `false` per disattivare la modalità di selezione.|  
|[in] `nInterval`|Tempo in millisecondi tra gli aggiornamenti del testo scorrevole.|  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce sempre `true`.  
  
### <a name="remarks"></a>Note  
 Quando è attivata la modalità di selezione, l'indicatore di stato viene animata e come scorrere un segno di un testo scorrevole teatro.  
  
 Questo metodo invia il [PBM_SETMARQUEE](http://msdn.microsoft.com/library/windows/desktop/bb760842) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[9 NVC_MFC_CProgressCtrl_s1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente avvia e arresta il rettangolo di selezione lo scorrimento di animazione.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1 n.&2;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_11.cpp)]  
  
##  <a name="setpos"></a>CProgressCtrl::SetPos  
 Imposta lo stato di avanzamento della barra di posizione corrente del controllo come specificato da `nPos` e ridisegna la barra per riflettere la nuova posizione.  
  
```  
int SetPos(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Nuova posizione della barra di stato di avanzamento.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente del controllo barra di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 La posizione della barra di stato di avanzamento non è la posizione fisica su schermo, ma piuttosto tra superiore e inferiore intervallo indicato nel [SetRange](#setrange).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl&#7;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_12.cpp)]  
  
##  <a name="setrange"></a>CProgressCtrl::SetRange  
 Imposta i limiti superiore e inferiori dell'intervallo del controllo indicatore e ridisegna la barra in modo da riflettere i nuovi intervalli.  
  
```  
void SetRange(
    short nLower,  
    short nUpper);

 
void SetRange32(
    int nLower,  
    int nUpper);
```  
  
### <a name="parameters"></a>Parametri  
 `nLower`  
 Specifica il limite inferiore dell'intervallo (valore predefinito è zero).  
  
 `nUpper`  
 Specifica il limite massimo dell'intervallo (valore predefinito è 100).  
  
### <a name="remarks"></a>Note  
 La funzione membro `SetRange32` imposta l'intervallo di 32 bit per il controllo dello stato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl n.&8;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_13.cpp)]  
  
##  <a name="setstate"></a>CProgressCtrl::SetState  
 Imposta lo stato del controllo indicatore di stato corrente.  
  
```  
int SetState(int iState);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iState`|Stato su cui impostare l'indicatore di stato. Usare uno dei valori indicati di seguito.<br /><br /> - `PBST_NORMAL`-In corso<br />- `PBST_ERROR`-Errore<br />- `PBST_PAUSED`-Sospeso|  
  
### <a name="return-value"></a>Valore restituito  
 Stato precedente del controllo indicatore di stato corrente.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [PBM_SETSTATE](http://msdn.microsoft.com/library/windows/desktop/bb760850) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce la variabile `m_progressCtrl`, che viene usata per accedere a livello di codice al controllo indicatore di stato. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[9 NVC_MFC_CProgressCtrl_s1](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_5.h)]  
  
### <a name="example"></a>Esempio  
 Nell'esempio di codice seguente lo stato del controllo indicatore di stato corrente viene impostato su In pausa o In corso.  
  
 [!code-cpp[NVC_MFC_CProgressCtrl_s1 n.&4;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_14.cpp)]  
  
##  <a name="setstep"></a>CProgressCtrl::SetStep  
 Specifica l'incremento di passaggio per un controllo indicatore di stato.  
  
```  
int SetStep(int nStep);
```  
  
### <a name="parameters"></a>Parametri  
 *nStep*  
 Nuovo incremento del passaggio.  
  
### <a name="return-value"></a>Valore restituito  
 L'incremento di passaggio precedente.  
  
### <a name="remarks"></a>Note  
 L'incremento di passaggio è la quantità da una chiamata a `CProgressCtrl::StepIt` aumenta lo stato di avanzamento posizione corrente dell'indicatore.  
  
 L'incremento di passaggio predefinito è 10.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[9 NVC_MFC_CProgressCtrl](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_15.cpp)]  
  
##  <a name="stepit"></a>CProgressCtrl::StepIt  
 Sposta in avanti la posizione corrente per un controllo indicatore di stato l'incremento di passaggio e lo ridisegna la barra per riflettere la nuova posizione.  
  
```  
int StepIt();
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione precedente del controllo barra di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 L'incremento di passaggio è l'impostazione di `CProgressCtrl::SetStep` funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CProgressCtrl&#10;](../../mfc/reference/codesnippet/cpp/cprogressctrl-class_16.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio CMNCTRL2](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)



