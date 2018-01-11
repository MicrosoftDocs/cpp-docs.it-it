---
title: CDateTimeCtrl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDateTimeCtrl
- AFXDTCTL/CDateTimeCtrl
- AFXDTCTL/CDateTimeCtrl::CDateTimeCtrl
- AFXDTCTL/CDateTimeCtrl::CloseMonthCal
- AFXDTCTL/CDateTimeCtrl::Create
- AFXDTCTL/CDateTimeCtrl::GetDateTimePickerInfo
- AFXDTCTL/CDateTimeCtrl::GetIdealSize
- AFXDTCTL/CDateTimeCtrl::GetMonthCalColor
- AFXDTCTL/CDateTimeCtrl::GetMonthCalCtrl
- AFXDTCTL/CDateTimeCtrl::GetMonthCalFont
- AFXDTCTL/CDateTimeCtrl::GetMonthCalStyle
- AFXDTCTL/CDateTimeCtrl::GetRange
- AFXDTCTL/CDateTimeCtrl::GetTime
- AFXDTCTL/CDateTimeCtrl::SetFormat
- AFXDTCTL/CDateTimeCtrl::SetMonthCalColor
- AFXDTCTL/CDateTimeCtrl::SetMonthCalFont
- AFXDTCTL/CDateTimeCtrl::SetMonthCalStyle
- AFXDTCTL/CDateTimeCtrl::SetRange
- AFXDTCTL/CDateTimeCtrl::SetTime
dev_langs: C++
helpviewer_keywords:
- CDateTimeCtrl [MFC], CDateTimeCtrl
- CDateTimeCtrl [MFC], CloseMonthCal
- CDateTimeCtrl [MFC], Create
- CDateTimeCtrl [MFC], GetDateTimePickerInfo
- CDateTimeCtrl [MFC], GetIdealSize
- CDateTimeCtrl [MFC], GetMonthCalColor
- CDateTimeCtrl [MFC], GetMonthCalCtrl
- CDateTimeCtrl [MFC], GetMonthCalFont
- CDateTimeCtrl [MFC], GetMonthCalStyle
- CDateTimeCtrl [MFC], GetRange
- CDateTimeCtrl [MFC], GetTime
- CDateTimeCtrl [MFC], SetFormat
- CDateTimeCtrl [MFC], SetMonthCalColor
- CDateTimeCtrl [MFC], SetMonthCalFont
- CDateTimeCtrl [MFC], SetMonthCalStyle
- CDateTimeCtrl [MFC], SetRange
- CDateTimeCtrl [MFC], SetTime
ms.assetid: 7113993b-5d37-4148-939f-500a190c5bdc
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3359b506217d2828207e06341fbf1fe53b3c0719
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdatetimectrl-class"></a>CDateTimeCtrl (classe)
Incapsula la funzionalità di un controllo di selezione data e ora.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDateTimeCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDateTimeCtrl::CDateTimeCtrl](#cdatetimectrl)|Costruisce un oggetto `CDateTimeCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDateTimeCtrl::CloseMonthCal](#closemonthcal)|Chiude il controllo di selezione data e l'ora corrente.|  
|[CDateTimeCtrl::Create](#create)|Crea il controllo selezione data e ora e lo collega al `CDateTimeCtrl` oggetto.|  
|[CDateTimeCtrl::GetDateTimePickerInfo](#getdatetimepickerinfo)|Recupera informazioni sul controllo selezione data e l'ora corrente.|  
|[CDateTimeCtrl::GetIdealSize](#getidealsize)|Restituisce la dimensione ideale del controllo selezione data e ora che è necessario per visualizzare la data corrente o l'ora.|  
|[CDateTimeCtrl::GetMonthCalColor](#getmonthcalcolor)|Recupera il colore per una parte del calendario del mese all'interno del controllo selezione data e ora.|  
|[:: GetMonthCalCtrl](#getmonthcalctrl)|Recupera il `CMonthCalCtrl` oggetto associato al controllo selezione data e ora.|  
|[CDateTimeCtrl::GetMonthCalFont](#getmonthcalfont)|Recupera il tipo di carattere attualmente utilizzato da data e di controllo di calendario mensile di controllo selezione ora figlio.|  
|[CDateTimeCtrl::GetMonthCalStyle](#getmonthcalstyle)|Ottiene lo stile del controllo selezione data e l'ora corrente.|  
|[CDateTimeCtrl::GetRange](#getrange)|Recupera corrente minimo e massimo consentito di ore per un controllo selezione data e ora di sistema.|  
|[CDateTimeCtrl::GetTime](#gettime)|Recupera il tempo attualmente selezionato da un controllo selezione data e ora e lo inserisce in un oggetto specificato `SYSTEMTIME` struttura.|  
|[CDateTimeCtrl:: SetFormat](#setformat)|Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificato.|  
|[CDateTimeCtrl::SetMonthCalColor](#setmonthcalcolor)|Imposta il colore per una parte del calendario del mese in un controllo selezione data e ora.|  
|[CDateTimeCtrl:: SetMonthCalFont](#setmonthcalfont)|Imposta il tipo di carattere che verrà utilizzato controllo calendario mensile di data e ora di selezione del controllo figlio.|  
|[CDateTimeCtrl::SetMonthCalStyle](#setmonthcalstyle)|Imposta lo stile del controllo selezione data e l'ora corrente.|  
|[CDateTimeCtrl::SetRange](#setrange)|Imposta l'ora di sistema consentiti minimo e massimo per un controllo selezione data e ora.|  
|[CDateTimeCtrl::SetTime](#settime)|Imposta il tempo in un controllo selezione data e ora.|  
  
## <a name="remarks"></a>Note  
 Il controllo selezione data e ora (controllo DTP) fornisce un'interfaccia semplice per lo scambio di informazioni di data e ora con un utente. Questa interfaccia contiene i campi, ognuno dei quali consente di visualizzare una parte delle informazioni sulla data e ora archiviate nel controllo. L'utente può modificare le informazioni archiviate nel controllo modificando il contenuto della stringa in un determinato campo. L'utente può spostarsi da un campo a altro utilizzando il mouse o tastiera.  
  
 È possibile personalizzare il controllo selezione data e ora applicando una varietà di stili all'oggetto durante la creazione. Vedere [data e ora stili del controllo selezione](http://msdn.microsoft.com/library/windows/desktop/bb761728) in Windows SDK per ulteriori informazioni sugli stili specifici per il controllo selezione data e ora. È possibile impostare il formato di visualizzazione del controllo DTP usando gli stili di formato. Questi stili di formato è descritta in "Stili di formato" nell'argomento Windows SDK [data e ora stili del controllo selezione](http://msdn.microsoft.com/library/windows/desktop/bb761728).  
  
 Il controllo selezione data e ora utilizza inoltre le notifiche e i callback, che sono descritte nel [utilizzando CDateTimeCtrl](../../mfc/using-cdatetimectrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDateTimeCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDTCTL  
  
##  <a name="cdatetimectrl"></a>CDateTimeCtrl::CDateTimeCtrl  
 Costruisce un oggetto `CDateTimeCtrl`.  
  
```  
CDateTimeCtrl();
```  
  
##  <a name="closemonthcal"></a>CDateTimeCtrl::CloseMonthCal  
 Chiude il controllo di selezione data e l'ora corrente.  
  
```  
void CloseMonthCal() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [DTM_CLOSEMONTHCAL](http://msdn.microsoft.com/library/windows/desktop/bb761753) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_dateTimeCtrl`, che viene utilizzato per accedere a livello di codice il controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente consente di chiudere il calendario a discesa per il controllo di selezione data e l'ora corrente.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_2.cpp)]  
  
##  <a name="create"></a>CDateTimeCtrl::Create  
 Crea il controllo selezione data e ora e lo collega al `CDateTimeCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica la combinazione di stili del controllo Data ora. Vedere [data e ora stili del controllo selezione](http://msdn.microsoft.com/library/windows/desktop/bb761728) in Windows SDK per ulteriori informazioni sugli stili di selezione data e ora.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, ovvero la posizione e le dimensioni del controllo selezione data e ora.  
  
 `pParentWnd`  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre del controllo selezione data e ora. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID di controllo di. Data e ora di selezione del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la creazione è stata completata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##### <a name="to-create-a-date-and-time-picker-control"></a>Per creare un controllo selezione data e ora  
  
1.  Chiamare [CDateTimeCtrl](#cdatetimectrl) per costruire un `CDateTimeCtrl` oggetto.  
  
2.  Chiamare questa funzione membro, che crea il controllo selezione data e ora di Windows e lo collega al `CDateTimeCtrl` oggetto.  
  
 Quando si chiama **crea**, vengono inizializzati i controlli comuni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_3.cpp)]  
  
##  <a name="getdatetimepickerinfo"></a>CDateTimeCtrl::GetDateTimePickerInfo  
 Recupera informazioni sul controllo selezione data e l'ora corrente.  
  
```   
BOOL GetDateTimePickerInfo(LPDATETIMEPICKERINFO pDateTimePickerInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `pDateTimePickerInfo`|Un puntatore a un [DATETIMEPICKERINFO](http://msdn.microsoft.com/library/windows/desktop/bb761729) struttura che riceve una descrizione del controllo selezione data e l'ora corrente.<br /><br /> Il chiamante è responsabile dell'allocazione di questa struttura. Tuttavia, questo metodo inizializza la `cbSize` membro della struttura.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [DTM_GETDATETIMEPICKERINFO](http://msdn.microsoft.com/library/windows/desktop/bb761755) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_dateTimeCtrl`, che viene utilizzato per accedere a livello di codice il controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente indica se viene recuperato correttamente le informazioni sul controllo selezione data e l'ora corrente.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_4.cpp)]  
  
##  <a name="getmonthcalcolor"></a>CDateTimeCtrl::GetMonthCalColor  
 Recupera il colore per una parte del calendario del mese all'interno del controllo selezione data e ora.  
  
```  
COLORREF GetMonthCalColor(int iColor) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `iColor`  
 Un `int` valore che specifica quale area di colore del calendario del mese da recuperare. Per un elenco di valori, vedere il `iColor` parametro per [SetMonthCalColor](#setmonthcalcolor).  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **COLORREF** valore che rappresenta l'impostazione del colore per la parte specificata del controllo calendario mensile se ha esito positivo. In caso contrario, la funzione restituisce -1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETMCCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761759), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_5.cpp)]  
  
##  <a name="getmonthcalctrl"></a>:: GetMonthCalCtrl  
 Recupera il `CMonthCalCtrl` oggetto associato al controllo selezione data e ora.  
  
```  
CMonthCalCtrl* GetMonthCalCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) oggetto, o **NULL** caso di esito negativo o se la finestra non è visibile.  
  
### <a name="remarks"></a>Note  
 Controlli selezione data e ora di creano un controllo di calendario mensile figlio quando l'utente fa clic sulla freccia a discesa. Quando il `CMonthCalCtrl` oggetto non è più necessario, viene eliminato, pertanto l'applicazione non deve basarsi sulla archiviare l'oggetto che rappresenta di calendario mensile di figlio del controllo di date time picker.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_6.cpp)]  
  
##  <a name="getmonthcalfont"></a>CDateTimeCtrl::GetMonthCalFont  
 Ottiene il tipo di carattere attualmente utilizzato da data e di controllo di calendario mensile di controllo selezione ora.  
  
```  
CFont* GetMonthCalFont() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CFont](../../mfc/reference/cfont-class.md) oggetto, o **NULL** caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il `CFont` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il tempo di elaborazione successivo inattivo.  
  
##  <a name="getmonthcalstyle"></a>CDateTimeCtrl::GetMonthCalStyle  
 Ottiene lo stile del controllo calendario mensile a discesa che viene associato al controllo di selezione data e l'ora corrente.  
  
```  
DWORD GetMonthCalStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile del controllo calendario mensile a discesa, ovvero una combinazione bit per bit (o) di stili del controllo selezione data e ora. Per ulteriori informazioni, vedere [stili del controllo calendario mensile](http://msdn.microsoft.com/library/windows/desktop/bb760919).  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [DTM_GETMCSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb761763) messaggio, come descritto in Windows SDK.  
  
##  <a name="getrange"></a>CDateTimeCtrl::GetRange  
 Recupera corrente minimo e massimo consentito di ore per un controllo selezione data e ora di sistema.  
  
```  
DWORD GetRange(
    COleDateTime* pMinRange,  
    COleDateTime* pMaxRange) const;  
  
DWORD GetRange(
    CTime* pMinRange,  
    CTime* pMaxRange) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pMinRange`  
 Un puntatore a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto o un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente la prima ora cui è consentita il `CDateTimeCtrl` oggetto.  
  
 `pMaxRange`  
 Un puntatore a un `COleDateTime` oggetto o un `CTime` oggetto che contiene l'ultima ora cui è consentito il `CDateTimeCtrl` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` contenente i flag che indicano gli intervalli impostati. Se  
  
 `return value & GDTR_MAX` == 0  
  
 il secondo parametro è valido. Analogamente, se  
  
 `return value & GDTR_MIN` == 0  
  
 il primo parametro è valido.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETRANGE](http://msdn.microsoft.com/library/windows/desktop/bb761767), come descritto in Windows SDK. Nell'implementazione di MFC, è possibile specificare `COleDateTime` o `CTime` utilizzi.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_7.cpp)]  
  
##  <a name="gettime"></a>CDateTimeCtrl::GetTime  
 Recupera il tempo attualmente selezionato da un controllo selezione data e ora e lo inserisce in un oggetto specificato `SYSTEMTIME` struttura.  
  
```  
BOOL GetTime(COleDateTime& timeDest) const;  
DWORD GetTime(CTime& timeDest) const;  
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *timeDest*  
 Nella prima versione, un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nella seconda versione, un riferimento a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.  
  
 *pTimeDest*  
 Un puntatore al [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura per ricevere le informazioni sull'ora di sistema. Non deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Nella prima versione, diverso da zero se è stata scritta l'ora di `COleDateTime` oggetto; in caso contrario 0. Nelle versioni di secondo e terza, un `DWORD` uguale al valore di **dwFlag** set di membri [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) struttura. Vedere il **osservazioni** sezione riportata di seguito per ulteriori informazioni.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_GETSYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/bb761769), come descritto in Windows SDK. Nell'implementazione MFC di **GetTime**, è possibile utilizzare `COleDateTime` o `CTime` classi oppure è possibile utilizzare un `SYSTEMTIME` struttura per archiviare le informazioni sull'ora.  
  
 Il valore restituito `DWORD` nelle versioni di secondo e terza, sopra, indica se il controllo selezione data e ora è impostato sullo stato di "Nessuna data", come indicato nella [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) i membri di struttura `dwFlags`. Se il valore restituito è uguale a **GDT_NONE**, il controllo è impostato su "Nessuna data" status e utilizza il **DTS_SHOWNONE** stile. Se il valore restituito è uguale a **GDT_VALID**, l'ora di sistema ha è archiviato nel percorso di destinazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_8.cpp)]  
  
##  <a name="getidealsize"></a>CDateTimeCtrl::GetIdealSize  
 Restituisce la dimensione ideale del controllo selezione data e ora che è necessario per visualizzare la data corrente o l'ora.  
  
```  
BOOL GetIdealSize(LPSIZE psize) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `psize`|Puntatore a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che contiene la dimensione ideale per il controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito è sempre `true`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [DTM_GETIDEALSIZE](http://msdn.microsoft.com/library/windows/desktop/bb761757) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_dateTimeCtrl`, che viene utilizzato per accedere a livello di codice il controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente recupera la dimensione ideale per visualizzare il controllo selezione data e ora.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_9.cpp)]  
  
##  <a name="setformat"></a>CDateTimeCtrl:: SetFormat  
 Imposta la visualizzazione di un controllo selezione data e ora in base a una stringa di formato specificato.  
  
```  
BOOL SetFormat(LPCTSTR pstrFormat);
```  
  
### <a name="parameters"></a>Parametri  
 *pstrFormat*  
 Puntatore a una stringa di formato termina con zero che definisce la visualizzazione desiderata. Impostando questo parametro su **NULL** reimposterà il controllo alla stringa di formato predefinito per lo stile corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
> [!NOTE]
>  L'input dell'utente non determina l'esito positivo o negativo per la chiamata.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb761771), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#6](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_10.cpp)]  
  
##  <a name="setmonthcalcolor"></a>CDateTimeCtrl::SetMonthCalColor  
 Imposta il colore per una parte del calendario del mese in un controllo selezione data e ora.  
  
```  
COLORREF SetMonthCalColor(
    int iColor,  
    COLORREF ref);
```  
  
### <a name="parameters"></a>Parametri  
 `iColor`  
 `int`valore che specifica quale area del controllo calendario mensile da impostare. Questo valore può essere uno dei valori seguenti.  
  
|Valore|Significato|  
|-----------|-------------|  
|MCSC_BACKGROUND|Impostare il colore di sfondo visualizzato tra i mesi.|  
|MCSC_MONTHBK|Impostare il colore di sfondo visualizzato all'interno di un mese.|  
|MCSC_TEXT|Impostare il colore utilizzato per visualizzare il testo all'interno di un mese.|  
|MCSC_TITLEBK|Impostare il colore di sfondo visualizzato nel titolo del calendario.|  
|MCSC_TITLETEXT|Impostare il colore utilizzato per visualizzare il testo del titolo del calendario.|  
|MCSC_TRAILINGTEXT|Impostare il colore utilizzato per visualizzare l'intestazione e il testo giorno finale. Intestazione giorni iniziale e finale sono i giorni dei mesi precedenti e successivi che appaiono sul calendario corrente.|  
  
 `ref`  
 Oggetto **COLORREF** valore che rappresenta il colore che verrà impostato per l'area specificata del calendario mensile.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **COLORREF** valore che rappresenta l'impostazione del colore precedenti per la parte specificata del controllo calendario mensile se ha esito positivo. In caso contrario, il messaggio restituisce -1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETMCCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761773), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CDateTimeCtrl::GetMonthCalColor](#getmonthcalcolor).  
  
##  <a name="setmonthcalfont"></a>CDateTimeCtrl:: SetMonthCalFont  
 Imposta il tipo di carattere che verrà utilizzato controllo calendario mensile di data e ora di selezione del controllo figlio.  
  
```  
void SetMonthCalFont(
    HFONT hFont,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `hFont`  
 Handle per il tipo di carattere che verrà impostata.  
  
 `bRedraw`  
 Specifica se il controllo deve essere ridisegnato immediatamente dopo l'impostazione del carattere. Impostando questo parametro su **TRUE** , il controllo si ridisegni.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETMCFONT](http://msdn.microsoft.com/library/windows/desktop/bb761775), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#7](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_11.cpp)]  
  
> [!NOTE]
>  Se si usa questo codice, è opportuno rendere un membro del `CDialog`-derivata denominata `m_MonthFont` di tipo **CFont**.  
  
##  <a name="setmonthcalstyle"></a>CDateTimeCtrl::SetMonthCalStyle  
 Imposta lo stile del controllo calendario mensile a discesa che viene associato al controllo di selezione data e l'ora corrente.  
  
```  
DWORD SetMonthCalStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `dwStyle`|Un nuovo mese di calendario stile del controllo, ovvero una combinazione bit per bit (OR) di stili del controllo calendario mensile. Per ulteriori informazioni, vedere [stili del controllo calendario mensile](http://msdn.microsoft.com/library/windows/desktop/bb760919).|  
  
### <a name="return-value"></a>Valore restituito  
 Stile precedente del controllo calendario mensile a discesa.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [DTM_SETMCSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb761778) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_dateTimeCtrl`, che viene utilizzato per accedere a livello di codice il controllo selezione data e ora. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta il controllo selezione data e ora per visualizzare i numeri di settimana, i nomi abbreviati dei giorni della settimana e Nessun indicatore oggi.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_12.cpp)]  
  
##  <a name="setrange"></a>CDateTimeCtrl::SetRange  
 Imposta l'ora di sistema consentiti minimo e massimo per un controllo selezione data e ora.  
  
```  
BOOL SetRange(
    const COleDateTime* pMinRange,  
    const COleDateTime* pMaxRange);

 
BOOL SetRange(
    const CTime* pMinRange,  
    const CTime* pMaxRange);
```  
  
### <a name="parameters"></a>Parametri  
 `pMinRange`  
 Un puntatore a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto o un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente la prima ora cui è consentita il `CDateTimeCtrl` oggetto.  
  
 `pMaxRange`  
 Un puntatore a un `COleDateTime` oggetto o un `CTime` oggetto che contiene l'ultima ora cui è consentito il `CDateTimeCtrl` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETRANGE](http://msdn.microsoft.com/library/windows/desktop/bb761780), come descritto in Windows SDK. Nell'implementazione di MFC, è possibile specificare `COleDateTime` o `CTime` utilizzi. Se il `COleDateTime` oggetto ha un **NULL** stato, l'intervallo verrà rimosso. Se il `CTime` puntatore o `COleDateTime` puntatore **NULL**, verrà rimossa l'intervallo.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CDateTimeCtrl::GetRange](#getrange).  
  
##  <a name="settime"></a>CDateTimeCtrl::SetTime  
 Imposta il tempo in un controllo selezione data e ora.  
  
```  
BOOL SetTime(const COleDateTime& timeNew);  
BOOL SetTime(const CTime* pTimeNew);  
BOOL SetTime(LPSYSTEMTIME pTimeNew = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *timeNew*  
 Un riferimento a un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene il da cui verrà impostato il controllo.  
  
 *pTimeNew*  
 Nella seconda versione precedente, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto contenente l'ora in cui verrà impostato il controllo. Nella terza versione precedente, un puntatore a un [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura che contiene l'ora in cui verrà impostato il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [DTM_SETSYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/bb761782), come descritto in Windows SDK. Nell'implementazione MFC di **SetTime**, è possibile utilizzare il `COleDateTime` o `CTime` classi oppure è possibile utilizzare un `SYSTEMTIME` struttura, per impostare le informazioni sull'ora.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#8](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_13.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CMNCTRL1 esempio MFC](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md)
