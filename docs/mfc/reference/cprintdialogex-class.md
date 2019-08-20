---
title: Classe CPrintDialogEx
ms.date: 11/04/2016
f1_keywords:
- CPrintDialogEx
- AFXDLGS/CPrintDialogEx
- AFXDLGS/CPrintDialogEx::CPrintDialogEx
- AFXDLGS/CPrintDialogEx::CreatePrinterDC
- AFXDLGS/CPrintDialogEx::DoModal
- AFXDLGS/CPrintDialogEx::GetCopies
- AFXDLGS/CPrintDialogEx::GetDefaults
- AFXDLGS/CPrintDialogEx::GetDeviceName
- AFXDLGS/CPrintDialogEx::GetDevMode
- AFXDLGS/CPrintDialogEx::GetDriverName
- AFXDLGS/CPrintDialogEx::GetPortName
- AFXDLGS/CPrintDialogEx::GetPrinterDC
- AFXDLGS/CPrintDialogEx::PrintAll
- AFXDLGS/CPrintDialogEx::PrintCollate
- AFXDLGS/CPrintDialogEx::PrintCurrentPage
- AFXDLGS/CPrintDialogEx::PrintRange
- AFXDLGS/CPrintDialogEx::PrintSelection
- AFXDLGS/CPrintDialogEx::m_pdex
helpviewer_keywords:
- CPrintDialogEx [MFC], CPrintDialogEx
- CPrintDialogEx [MFC], CreatePrinterDC
- CPrintDialogEx [MFC], DoModal
- CPrintDialogEx [MFC], GetCopies
- CPrintDialogEx [MFC], GetDefaults
- CPrintDialogEx [MFC], GetDeviceName
- CPrintDialogEx [MFC], GetDevMode
- CPrintDialogEx [MFC], GetDriverName
- CPrintDialogEx [MFC], GetPortName
- CPrintDialogEx [MFC], GetPrinterDC
- CPrintDialogEx [MFC], PrintAll
- CPrintDialogEx [MFC], PrintCollate
- CPrintDialogEx [MFC], PrintCurrentPage
- CPrintDialogEx [MFC], PrintRange
- CPrintDialogEx [MFC], PrintSelection
- CPrintDialogEx [MFC], m_pdex
ms.assetid: 1d506703-ee1c-44cc-b4ce-4e778fec26b8
ms.openlocfilehash: ebef892e174525c0b907818c02b7d34b1b41f850
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916888"
---
# <a name="cprintdialogex-class"></a>Classe CPrintDialogEx

Incapsula i servizi forniti dalla finestra delle proprietà di stampa di Windows.

## <a name="syntax"></a>Sintassi

```
class CPrintDialogEx : public CCommonDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CPrintDialogEx::CPrintDialogEx](#cprintdialogex)|Costruisce un oggetto `CPrintDialogEx`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CPrintDialogEx::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante senza visualizzare la finestra di dialogo Stampa.|
|[CPrintDialogEx::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare le selezioni.|
|[CPrintDialogEx:: getcopies](#getcopies)|Recupera il numero di copie richieste.|
|[CPrintDialogEx:: GetDefaults](#getdefaults)|Recupera le impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|
|[CPrintDialogEx::GetDeviceName](#getdevicename)|Recupera il nome del dispositivo di stampa attualmente selezionato.|
|[CPrintDialogEx::GetDevMode](#getdevmode)|Recupera la `DEVMODE` struttura.|
|[CPrintDialogEx::GetDriverName](#getdrivername)|Recupera il nome del driver di dispositivo della stampante definito dal sistema.|
|[CPrintDialogEx::GetPortName](#getportname)|Recupera il nome della porta stampante attualmente selezionata.|
|[CPrintDialogEx::GetPrinterDC](#getprinterdc)|Recupera un handle per il contesto di dispositivo stampante.|
|[CPrintDialogEx::PrintAll](#printall)|Determina se stampare tutte le pagine del documento.|
|[CPrintDialogEx::PrintCollate](#printcollate)|Determina se le copie fascicolate sono richieste.|
|[CPrintDialogEx::PrintCurrentPage](#printcurrentpage)|Determina se stampare la pagina corrente del documento.|
|[CPrintDialogEx::PrintRange](#printrange)|Determina se stampare solo un intervallo di pagine specificato.|
|[CPrintDialogEx::PrintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Name|DESCRIZIONE|
|----------|-----------------|
|[CPrintDialogEx::m_pdex](#m_pdex)|Struttura utilizzata per personalizzare un `CPrintDialogEx` oggetto.|

## <a name="remarks"></a>Note

È possibile fare affidamento sul Framework per gestire molti aspetti del processo di stampa per l'applicazione. Per ulteriori informazioni sull'utilizzo del Framework per gestire le attività di stampa, vedere l'articolo relativo alla [stampa](../../mfc/printing.md).

Se si vuole che l'applicazione gestisca la stampa senza il coinvolgimento del Framework, è possibile `CPrintDialogEx` usare la classe "così com'è" con il costruttore fornito oppure è possibile derivare la propria `CPrintDialogEx` classe di finestra di dialogo da e scrivere un costruttore in base alle esigenze. In entrambi i casi, queste finestre di dialogo si comporteranno come le finestre di dialogo MFC standard `CCommonDialog`perché derivano dalla classe.

Per utilizzare un `CPrintDialogEx` oggetto, creare innanzitutto l'oggetto utilizzando il `CPrintDialogEx` costruttore. Una volta creata la finestra di dialogo, è possibile impostare o modificare i valori nella struttura [m_pdex](#m_pdex) per inizializzare i valori dei controlli della finestra di dialogo. La `m_pdex` struttura è di tipo [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa). Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

Se non si forniscono `m_pdex` handle personalizzati in per i `hDevMode` membri e `hDevNames` , assicurarsi di chiamare la funzione `GlobalFree` Windows per questi handle al termine della finestra di dialogo.

Dopo l'inizializzazione dei controlli della finestra di `DoModal` dialogo, chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. Quando `DoModal` restituisce, è possibile determinare se l'utente ha selezionato il pulsante OK, applica o Annulla.

Se l'utente ha premuto OK, è possibile `CPrintDialogEx`usare le funzioni membro di per recuperare l'input di informazioni da parte dell'utente.

La `CPrintDialogEx::GetDefaults` funzione membro è utile per recuperare le impostazioni predefinite della stampante correnti senza visualizzare una finestra di dialogo. Questo metodo non richiede alcuna interazione con l'utente.

È possibile utilizzare la funzione `CommDlgExtendedError` Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ottenere ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedere la Windows SDK.

Per ulteriori informazioni sull'utilizzo `CPrintDialogEx`di, vedere [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`IObjectWithSite`

`IPrintDialogCallback`

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPrintDialogEx`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="cprintdialogex"></a>  CPrintDialogEx::CPrintDialogEx

Costruisce una finestra delle proprietà di stampa di Windows.

```
CPrintDialogEx(
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS       | PD_HIDEPRINTTOFILE | PD_NOSELECTION | PD_NOCURRENTPAGE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo, combinate tramite l'operatore OR bit per bit. Il flag PD_ALLPAGES, ad esempio, imposta l'intervallo di stampa predefinito su tutte le pagine del documento. Per ulteriori informazioni su questi flag, vedere la struttura [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa) nel Windows SDK.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo.

### <a name="remarks"></a>Note

Questa funzione membro costruisce solo l'oggetto. Utilizzare la `DoModal` funzione membro per visualizzare la finestra di dialogo.

##  <a name="createprinterdc"></a>  CPrintDialogEx::CreatePrinterDC

Crea un contesto di dispositivo stampante (DC) dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/desktop/api/commdlg/ns-commdlg-tagdevnames) .

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di dispositivo stampante appena creato.

### <a name="remarks"></a>Note

Il controller di dominio restituito viene inoltre archiviato `hDC` nel membro di [m_pdex](#m_pdex).

Si presuppone che il controller di dominio sia il controller di dominio corrente della stampante ed è necessario eliminare tutti gli altri controller di dominio della stampante ottenuti in precedenza. Questa funzione può essere chiamata e il controller di dominio risultante viene usato senza visualizzare mai la finestra di dialogo Stampa.

##  <a name="domodal"></a>  CPrintDialogEx::DoModal

Chiamare questa funzione per visualizzare la finestra delle proprietà di stampa di Windows e consentire all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, l'intervallo di pagine e l'eventuale confronto delle copie.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Il valore restituito INT_PTR è effettivamente un HRESULT. Vedere la sezione valori restituiti in [PRINTDLGEX](/previous-versions/windows/desktop/legacy/ms646942\(v=vs.85\)) nella Windows SDK.

### <a name="remarks"></a>Note

Se si desidera inizializzare le varie opzioni della finestra di dialogo di stampa impostando i membri della `m_pdex` struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo la costruzione dell'oggetto finestra di dialogo.

Dopo aver `DoModal`chiamato, è possibile chiamare altre funzioni membro per recuperare le impostazioni o l'input di informazioni da parte dell'utente nella finestra di dialogo.

Se viene usato il flag PD_RETURNDC quando si `DoModal`chiama, viene restituito un controller di dominio della `hDC` stampante nel membro di [m_pdex](#m_pdex). Il controller di dominio deve essere liberato con una chiamata a [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) da `CPrintDialogEx`parte del chiamante di.

##  <a name="getcopies"></a>  CPrintDialogEx::GetCopies

Chiamare questa funzione dopo la `DoModal` chiamata a per recuperare il numero di copie richieste.

```
int GetCopies() const;
```

### <a name="return-value"></a>Valore restituito

Numero di copie richieste.

##  <a name="getdefaults"></a>CPrintDialogEx:: GetDefaults

Chiamare questa funzione per recuperare le impostazioni predefinite del dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.

```
BOOL GetDefaults();
```

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE.

### <a name="remarks"></a>Note

Crea un contesto di dispositivo stampante (DC) dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/desktop/api/commdlg/ns-commdlg-tagdevnames) .

`GetDefaults`non Visualizza la finestra delle proprietà di stampa. Al contrario, imposta i `hDevNames` membri `hDevMode` e di [m_pdex](#m_pdex) su handle per le strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/desktop/api/commdlg/ns-commdlg-tagdevnames) inizializzate per la stampante predefinita del sistema. Sia `hDevNames` `GetDefaults` che `hDevMode` devono essere null o non riuscire.

Se il flag PD_RETURNDC è impostato, questa funzione non solo restituirà `hDevNames` e `hDevMode` (che si `m_pdex.hDevNames` trova `m_pdex.hDevMode`in e) al chiamante, ma restituirà anche un controller di `m_pdex.hDC`dominio della stampante in. Al termine `CPrintDialogEx` dell'oggetto, è responsabilità del chiamante eliminare il controller di dominio della stampante e chiamare la funzione [GlobalFree](/windows/desktop/api/winbase/nf-winbase-globalfree) di Windows sugli handle.

##  <a name="getdevicename"></a>  CPrintDialogEx::GetDeviceName

Chiamare questa funzione dopo la chiamata a [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata o dopo aver chiamato [GetDefaults](#getdefaults) per recuperare il nome della stampante predefinita.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Nome della stampante attualmente selezionata.

### <a name="remarks"></a>Note

`CString` Utilizzare un puntatore all'oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC:: CreateDC](../../mfc/reference/cdc-class.md#createdc).

##  <a name="getdevmode"></a>  CPrintDialogEx::GetDevMode

Chiamare questa funzione dopo avere chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare le informazioni sul dispositivo di stampa.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Struttura dei dati [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) , che contiene informazioni sull'inizializzazione del dispositivo e sull'ambiente di un driver di stampa. È necessario sbloccare la memoria utilizzata da questa struttura con la funzione [funzione GlobalUnlock](/windows/desktop/api/winbase/nf-winbase-globalunlock) di Windows, descritta nella Windows SDK.

##  <a name="getdrivername"></a>  CPrintDialogEx::GetDriverName

Chiamare questa funzione dopo avere chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome del driver di dispositivo della stampante definito dal sistema.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che specifica il nome del driver definito dal sistema.

### <a name="remarks"></a>Note

`CString` Usare un puntatore all'oggetto restituito da `GetDriverName` come valore di *lpszDriverName* in una chiamata a [CDC:: CreateDC](../../mfc/reference/cdc-class.md#createdc).

##  <a name="getportname"></a>  CPrintDialogEx::GetPortName

Chiamare questa funzione dopo avere chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Nome della porta stampante attualmente selezionata.

##  <a name="getprinterdc"></a>  CPrintDialogEx::GetPrinterDC

Restituisce un handle per il contesto di dispositivo stampante.

```
HDC GetPrinterDC() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di dispositivo stampante.

### <a name="remarks"></a>Note

È necessario chiamare la funzione [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) di Windows per eliminare il contesto di dispositivo al termine dell'utilizzo.

##  <a name="m_pdex"></a>  CPrintDialogEx::m_pdex

Struttura PRINTDLGEX i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.

```
PRINTDLGEX m_pdex;
```

### <a name="remarks"></a>Note

Dopo la costruzione di `CPrintDialogEx` un oggetto, è possibile `m_pdex` utilizzare per impostare vari aspetti della finestra di dialogo prima di chiamare la funzione membro [DoModal](#domodal) . Per ulteriori informazioni sulla `m_pdex` struttura, vedere [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa) nel Windows SDK.

Se si modifica direttamente `m_pdex` il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

##  <a name="printall"></a>  CPrintDialogEx::PrintAll

Chiamare questa funzione dopo la `DoModal` chiamata a per determinare se stampare tutte le pagine del documento.

```
BOOL PrintAll() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se tutte le pagine del documento devono essere stampate; in caso contrario, FALSE.

##  <a name="printcollate"></a>  CPrintDialogEx::PrintCollate

Chiamare questa funzione dopo la `DoModal` chiamata a per determinare se la stampante deve raccogliere tutte le copie stampate del documento.

```
BOOL PrintCollate() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'utente seleziona la casella di controllo COLLATE nella finestra di dialogo; in caso contrario, FALSE.

##  <a name="printcurrentpage"></a>  CPrintDialogEx::PrintCurrentPage

Chiamare questa funzione dopo la `DoModal` chiamata a per determinare se stampare la pagina corrente nel documento.

```
BOOL PrintCurrentPage() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la **pagina stampa corrente** è selezionata nella finestra di dialogo di stampa. in caso contrario, FALSE.

##  <a name="printrange"></a>  CPrintDialogEx::PrintRange

Chiamare questa funzione dopo la `DoModal` chiamata a per determinare se stampare solo un intervallo di pagine nel documento.

```
BOOL PrintRange() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se deve essere stampato solo un intervallo di pagine nel documento; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Gli intervalli di pagine specificati possono essere determinati da [m_pdex](#m_pdex) ( `nPageRanges`vedere `nMaxPageRanges`, e `lpPageRanges` nella struttura [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa) nel Windows SDK).

##  <a name="printselection"></a>  CPrintDialogEx::PrintSelection

Chiamare questa funzione dopo la `DoModal` chiamata a per determinare se stampare solo gli elementi attualmente selezionati.

```
BOOL PrintSelection() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se devono essere stampati solo gli elementi selezionati; in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
