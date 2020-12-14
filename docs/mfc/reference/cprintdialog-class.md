---
description: 'Altre informazioni su: classe CPrintDialog'
title: Classe CPrintDialog
ms.date: 11/04/2016
f1_keywords:
- CPrintDialog
- AFXDLGS/CPrintDialog
- AFXDLGS/CPrintDialog::CPrintDialog
- AFXDLGS/CPrintDialog::CreatePrinterDC
- AFXDLGS/CPrintDialog::DoModal
- AFXDLGS/CPrintDialog::GetCopies
- AFXDLGS/CPrintDialog::GetDefaults
- AFXDLGS/CPrintDialog::GetDeviceName
- AFXDLGS/CPrintDialog::GetDevMode
- AFXDLGS/CPrintDialog::GetDriverName
- AFXDLGS/CPrintDialog::GetFromPage
- AFXDLGS/CPrintDialog::GetPortName
- AFXDLGS/CPrintDialog::GetPrinterDC
- AFXDLGS/CPrintDialog::GetToPage
- AFXDLGS/CPrintDialog::PrintAll
- AFXDLGS/CPrintDialog::PrintCollate
- AFXDLGS/CPrintDialog::PrintRange
- AFXDLGS/CPrintDialog::PrintSelection
- AFXDLGS/CPrintDialog::m_pd
helpviewer_keywords:
- CPrintDialog [MFC], CPrintDialog
- CPrintDialog [MFC], CreatePrinterDC
- CPrintDialog [MFC], DoModal
- CPrintDialog [MFC], GetCopies
- CPrintDialog [MFC], GetDefaults
- CPrintDialog [MFC], GetDeviceName
- CPrintDialog [MFC], GetDevMode
- CPrintDialog [MFC], GetDriverName
- CPrintDialog [MFC], GetFromPage
- CPrintDialog [MFC], GetPortName
- CPrintDialog [MFC], GetPrinterDC
- CPrintDialog [MFC], GetToPage
- CPrintDialog [MFC], PrintAll
- CPrintDialog [MFC], PrintCollate
- CPrintDialog [MFC], PrintRange
- CPrintDialog [MFC], PrintSelection
- CPrintDialog [MFC], m_pd
ms.assetid: 5bdb2424-adf8-433d-a97c-df11a83bc4e4
ms.openlocfilehash: f662f3d2a522dc3a53ea887bb1031e9431df2e3a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343401"
---
# <a name="cprintdialog-class"></a>Classe CPrintDialog

Incapsula i servizi forniti dalla finestra di dialogo comune di Windows per la stampa.

## <a name="syntax"></a>Sintassi

```
class CPrintDialog : public CCommonDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CPrintDialog:: CPrintDialog](#cprintdialog)|Costruisce un oggetto `CPrintDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPrintDialog:: CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante senza visualizzare la finestra di dialogo Stampa.|
|[CPrintDialog::D oModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CPrintDialog:: getcopies](#getcopies)|Recupera il numero di copie richieste.|
|[CPrintDialog:: GetDefaults](#getdefaults)|Recupera le impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|
|[CPrintDialog:: GetDeviceName](#getdevicename)|Recupera il nome del dispositivo di stampa attualmente selezionato.|
|[CPrintDialog:: getdevmode](#getdevmode)|Recupera la `DEVMODE` struttura.|
|[CPrintDialog:: getDriverName](#getdrivername)|Recupera il nome del driver della stampante attualmente selezionato.|
|[CPrintDialog:: GetFromPage](#getfrompage)|Recupera la pagina iniziale dell'intervallo di stampa.|
|[CPrintDialog:: getportaname](#getportname)|Recupera il nome della porta stampante attualmente selezionata.|
|[CPrintDialog:: GetPrinterDC](#getprinterdc)|Recupera un handle per il contesto di dispositivo stampante.|
|[CPrintDialog:: GetToPage](#gettopage)|Recupera la pagina finale dell'intervallo di stampa.|
|[CPrintDialog::P rintAll](#printall)|Determina se stampare tutte le pagine del documento.|
|[CPrintDialog::P rintCollate](#printcollate)|Determina se le copie fascicolate sono richieste.|
|[CPrintDialog::P rintRange](#printrange)|Determina se stampare solo un intervallo di pagine specificato.|
|[CPrintDialog::P rintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CPrintDialog:: m_pd](#m_pd)|Struttura utilizzata per personalizzare un `CPrintDialog` oggetto.|

## <a name="remarks"></a>Commenti

Le finestre di dialogo di stampa comuni rappresentano un modo semplice per implementare le finestre di dialogo di stampa e di stampa in modo coerente con gli standard di Windows.

> [!NOTE]
> La `CPrintDialogEx` classe incapsula i servizi forniti dalla finestra delle proprietà di stampa di Windows. Per altre informazioni, vedere Panoramica di [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md) .

`CPrintDialog`la funzionalità di è sostituita da quella di [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md), progettata per fornire una finestra di dialogo comune per la configurazione di stampa e la configurazione della pagina.

È possibile fare affidamento sul Framework per gestire molti aspetti del processo di stampa per l'applicazione. In questo caso, il Framework Visualizza automaticamente la finestra di dialogo comune di Windows per la stampa. È anche possibile fare in che il Framework gestisca la stampa per l'applicazione, ma eseguire l'override della finestra di dialogo Stampa comune con la finestra di dialogo Stampa. Per ulteriori informazioni sull'utilizzo del Framework per gestire le attività di stampa, vedere l'articolo relativo alla [stampa](../../mfc/printing.md).

Se si vuole che l'applicazione gestisca la stampa senza il coinvolgimento del Framework, è possibile usare la `CPrintDialog` classe "così com'è" con il costruttore fornito oppure è possibile derivare la propria classe di finestra di dialogo da `CPrintDialog` e scrivere un costruttore in base alle esigenze. In entrambi i casi, queste finestre di dialogo si comporteranno come le finestre di dialogo MFC standard perché derivano dalla classe `CCommonDialog` .

Per utilizzare un `CPrintDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `CPrintDialog` costruttore. Una volta creata la finestra di dialogo, è possibile impostare o modificare i valori della struttura [m_pd](#m_pd) per inizializzare i valori dei controlli della finestra di dialogo. La `m_pd` struttura è di tipo [PrintDlg](/windows/win32/api/commdlg/ns-commdlg-printdlga). Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

Se non si forniscono handle personalizzati in `m_pd` per i `hDevMode` `hDevNames` membri e, assicurarsi di chiamare la funzione Windows `GlobalFree` per questi handle al termine della finestra di dialogo. Quando si usa l'implementazione dell'installazione di stampa del Framework fornita da `CWinApp::OnFilePrintSetup` , non è necessario liberare questi handle. Gli handle vengono gestiti da `CWinApp` e vengono liberati nel `CWinApp` distruttore di. È necessario liberare questi handle solo quando si usa `CPrintDialog` autonomamente.

Dopo l'inizializzazione dei controlli della finestra di dialogo, chiamare la `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal` Restituisce un valore che indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL).

Se `DoModal` restituisce IDOK, è possibile usare una delle `CPrintDialog` funzioni membro di per recuperare l'input di informazioni da parte dell'utente.

La `CPrintDialog::GetDefaults` funzione membro è utile per recuperare le impostazioni predefinite della stampante correnti senza visualizzare una finestra di dialogo. Questa funzione membro non richiede alcuna interazione da parte dell'utente.

È possibile utilizzare la `CommDlgExtendedError` funzione Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ottenere ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedere la Windows SDK.

`CPrintDialog` si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.

Per personalizzare la finestra di dialogo, derivare una classe da `CPrintDialog` , fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe di base. Non è necessario personalizzare la funzione hook.

Per elaborare lo stesso messaggio in modo diverso a seconda che la finestra di dialogo sia impostata su stampa o stampa, è necessario derivare una classe per ogni finestra di dialogo. È inoltre necessario eseguire l'override della `AttachOnSetup` funzione Windows, che gestisce la creazione di una nuova finestra di dialogo quando viene selezionato il pulsante Stampa installazione in una finestra di dialogo Stampa.

Per ulteriori informazioni sull'utilizzo di `CPrintDialog` , vedere [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPrintDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

## <a name="cprintdialogcprintdialog"></a><a name="cprintdialog"></a> CPrintDialog:: CPrintDialog

Costruisce un oggetto finestra di dialogo di stampa o di installazione di stampa di Windows.

```
CPrintDialog(
    BOOL bPrintSetupOnly,
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE | PD_NOSELECTION,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*bPrintSetupOnly*<br/>
Specifica se viene visualizzata la finestra di dialogo stampa standard di Windows o la finestra di dialogo Imposta stampa. Impostare questo parametro su TRUE per visualizzare la finestra di dialogo Configurazione stampa standard di Windows. Impostarla su FALSE per visualizzare la finestra di dialogo Stampa di Windows. Se *bPrintSetupOnly* è false, nella finestra di dialogo stampa viene ancora visualizzato un pulsante di opzione per l'installazione di stampa.

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo, combinate tramite l'operatore OR bit per bit. Il flag PD_ALLPAGES, ad esempio, imposta l'intervallo di stampa predefinito su tutte le pagine del documento. Per ulteriori informazioni su questi flag, vedere la struttura [PrintDlg](/windows/win32/api/commdlg/ns-commdlg-printdlga) nel Windows SDK.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo.

### <a name="remarks"></a>Commenti

Questa funzione membro costruisce solo l'oggetto. Utilizzare la `DoModal` funzione membro per visualizzare la finestra di dialogo.

Si noti che quando si chiama il costruttore con *bPrintSetupOnly* impostato su false, viene usato automaticamente il flag PD_RETURNDC. Dopo aver chiamato `DoModal` , `GetDefaults` o `GetPrinterDC` , verrà restituito un controller di dominio della stampante in `m_pd.hDC` . Il controller di dominio deve essere liberato con una chiamata a [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) da parte del chiamante di `CPrintDialog` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#174](../../mfc/codesnippet/cpp/cprintdialog-class_1.cpp)]

## <a name="cprintdialogcreateprinterdc"></a><a name="createprinterdc"></a> CPrintDialog:: CreatePrinterDC

Crea un contesto di dispositivo stampante (DC) dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) .

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di dispositivo stampante appena creato.

### <a name="remarks"></a>Commenti

Si presuppone che il controller di dominio sia il controller di dominio corrente della stampante ed è necessario eliminare tutti gli altri controller di dominio delle stampanti ottenuti in precedenza dall'utente. Questa funzione può essere chiamata e il controller di dominio risultante viene usato senza visualizzare mai la finestra di dialogo Stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#106](../../mfc/codesnippet/cpp/cprintdialog-class_2.cpp)]

## <a name="cprintdialogdomodal"></a><a name="domodal"></a> CPrintDialog::D oModal

Visualizza la finestra di dialogo Stampa comune di Windows e consente all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, l'intervallo di pagine e l'eventuale confronto tra le copie.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Commenti

Se si desidera inizializzare le varie opzioni della finestra di dialogo di stampa impostando i membri della `m_pd` struttura, è necessario eseguire questa operazione prima di chiamare `DoModal` , ma dopo la costruzione dell'oggetto finestra di dialogo.

Dopo aver chiamato `DoModal` , è possibile chiamare altre funzioni membro per recuperare le impostazioni o l'input di informazioni da parte dell'utente nella finestra di dialogo.

Si noti che quando si chiama il costruttore con *bPrintSetupOnly* impostato su false, viene usato automaticamente il flag PD_RETURNDC. Dopo aver chiamato `DoModal` , `GetDefaults` o `GetPrinterDC` , verrà restituito un controller di dominio della stampante in `m_pd.hDC` . Il controller di dominio deve essere liberato con una chiamata a [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) da parte del chiamante di `CPrintDialog` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: CreatePrinterDC](#createprinterdc).

## <a name="cprintdialoggetcopies"></a><a name="getcopies"></a> CPrintDialog:: getcopies

Recupera il numero di copie richieste.

```
int GetCopies() const;
```

### <a name="return-value"></a>Valore restituito

Numero di copie richieste.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo `DoModal` la chiamata a per recuperare il numero di copie richieste.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::P rintcollate](#printcollate).

## <a name="cprintdialoggetdefaults"></a><a name="getdefaults"></a> CPrintDialog:: GetDefaults

Recupera le impostazioni predefinite del dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.

```
BOOL GetDefaults();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

I valori recuperati vengono inseriti nella `m_pd` struttura.

In alcuni casi, una chiamata a questa funzione chiamerà il [Costruttore](#cprintdialog) per `CPrintDialog` con *bPrintSetupOnly* impostato su false. In questi casi, i controller di dominio di una stampante e `hDevNames` e `hDevMode` (due handle presenti nel `m_pd` membro dati) vengono allocati automaticamente.

Se il costruttore per `CPrintDialog` è stato chiamato con *bPrintSetupOnly* impostato su false, questa funzione non solo restituirà `hDevNames` e si troverà `hDevMode` in `m_pd.hDevNames` e nel `m_pd.hDevMode` chiamante, ma restituirà anche un controller di dominio della stampante in `m_pd.hDC` . Al termine dell'oggetto, è responsabilità del chiamante eliminare il controller di dominio della stampante e chiamare la funzione [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree) di Windows sugli handle `CPrintDialog` .

### <a name="example"></a>Esempio

Questo frammento di codice ottiene il contesto di dispositivo della stampante predefinita e segnala all'utente la risoluzione della stampante in punti per pollice. (Questo attributo delle funzionalità della stampante è spesso definito DPI).

[!code-cpp[NVC_MFCDocView#107](../../mfc/codesnippet/cpp/cprintdialog-class_3.cpp)]

## <a name="cprintdialoggetdevicename"></a><a name="getdevicename"></a> CPrintDialog:: GetDeviceName

Recupera il nome del dispositivo di stampa attualmente selezionato.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Nome della stampante attualmente selezionata.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo la chiamata a [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata o dopo aver chiamato [GetDefaults](#getdefaults) per recuperare le impostazioni predefinite correnti del dispositivo della stampante predefinita. Utilizzare un puntatore all' `CString` oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC:: CreateDC](../../mfc/reference/cdc-class.md#createdc).

### <a name="example"></a>Esempio

Questo frammento di codice mostra il nome della stampante predefinita dell'utente e la porta a cui è connessa, insieme al nome dello spooler utilizzato dalla stampante. Il codice potrebbe visualizzare una finestra di messaggio che indica che la stampante predefinita è HP LaserJet IIIP in \\ \server\share con winspool. ", ad esempio.

[!code-cpp[NVC_MFCDocView#108](../../mfc/codesnippet/cpp/cprintdialog-class_4.cpp)]

## <a name="cprintdialoggetdevmode"></a><a name="getdevmode"></a> CPrintDialog:: getdevmode

Recupera la `DEVMODE` struttura.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Struttura dei dati [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) , che contiene informazioni sull'inizializzazione del dispositivo e sull'ambiente di un driver di stampa. È necessario sbloccare la memoria utilizzata da questa struttura con la funzione [funzione GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) di Windows, descritta nella Windows SDK.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo avere chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare le informazioni sul dispositivo di stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::P rintcollate](#printcollate).

## <a name="cprintdialoggetdrivername"></a><a name="getdrivername"></a> CPrintDialog:: getDriverName

Recupera il nome del driver della stampante attualmente selezionato.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto che `CString` specifica il nome del driver definito dal sistema.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo avere chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome del driver di dispositivo della stampante definito dal sistema. Utilizzare un puntatore all' `CString` oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC:: CreateDC](../../mfc/reference/cdc-class.md#createdc).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: GetDeviceName](#getdevicename).

## <a name="cprintdialoggetfrompage"></a><a name="getfrompage"></a> CPrintDialog:: GetFromPage

Recupera la pagina iniziale dell'intervallo di stampa.

```
int GetFromPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero della pagina iniziale nell'intervallo di pagine da stampare.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo la chiamata `DoModal` a per recuperare il numero di pagina iniziale nell'intervallo di pagine da stampare.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: m_pd](#m_pd).

## <a name="cprintdialoggetportname"></a><a name="getportname"></a> CPrintDialog:: getportaname

Recupera il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Nome della porta stampante attualmente selezionata.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo avere chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome della porta stampante attualmente selezionata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: GetDeviceName](#getdevicename).

## <a name="cprintdialoggetprinterdc"></a><a name="getprinterdc"></a> CPrintDialog:: GetPrinterDC

Recupera un handle per il contesto di dispositivo stampante.

```
HDC GetPrinterDC() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di periferica della stampante, se ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Se il parametro *bPrintSetupOnly* del `CPrintDialog` costruttore è false (che indica che è visualizzata la finestra di dialogo Stampa), `GetPrinterDC` restituisce un handle per il contesto di dispositivo stampante. È necessario chiamare la funzione [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) di Windows per eliminare il contesto di dispositivo al termine dell'utilizzo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#109](../../mfc/codesnippet/cpp/cprintdialog-class_5.cpp)]

## <a name="cprintdialoggettopage"></a><a name="gettopage"></a> CPrintDialog:: GetToPage

Recupera la pagina finale dell'intervallo di stampa.

```
int GetToPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagina finale nell'intervallo di pagine da stampare.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo la chiamata `DoModal` a per recuperare il numero di pagina finale nell'intervallo di pagine da stampare.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: m_pd](#m_pd).

## <a name="cprintdialogm_pd"></a><a name="m_pd"></a> CPrintDialog:: m_pd

Struttura i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.

```
PRINTDLG& m_pd;
```

### <a name="remarks"></a>Commenti

Dopo la costruzione di un `CPrintDialog` oggetto, è possibile utilizzare `m_pd` per impostare vari aspetti della finestra di dialogo prima di chiamare la funzione membro [DoModal](#domodal) . Per ulteriori informazioni sulla `m_pd` struttura, vedere [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) nel Windows SDK.

Se si modifica `m_pd` direttamente il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#111](../../mfc/codesnippet/cpp/cprintdialog-class_6.cpp)]

## <a name="cprintdialogprintall"></a><a name="printall"></a> CPrintDialog::P rintAll

Determina se stampare tutte le pagine del documento.

```
BOOL PrintAll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutte le pagine del documento devono essere stampate; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo la chiamata `DoModal` a per determinare se stampare tutte le pagine del documento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: m_pd](#m_pd).

## <a name="cprintdialogprintcollate"></a><a name="printcollate"></a> CPrintDialog::P rintCollate

Determina se le copie fascicolate sono richieste.

```
BOOL PrintCollate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona la casella di controllo COLLATE nella finestra di dialogo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo `DoModal` la chiamata a per determinare se la stampante deve raccogliere tutte le copie stampate del documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#110](../../mfc/codesnippet/cpp/cprintdialog-class_7.cpp)]

## <a name="cprintdialogprintrange"></a><a name="printrange"></a> CPrintDialog::P rintRange

Determina se stampare solo un intervallo di pagine specificato.

```
BOOL PrintRange() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se deve essere stampato solo un intervallo di pagine nel documento; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo `DoModal` la chiamata a per determinare se stampare solo un intervallo di pagine nel documento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: m_pd](#m_pd).

## <a name="cprintdialogprintselection"></a><a name="printselection"></a> CPrintDialog::P rintSelection

Determina se stampare solo gli elementi attualmente selezionati.

```
BOOL PrintSelection() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se solo gli elementi selezionati devono essere stampati; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione dopo `DoModal` la chiamata a per determinare se stampare solo gli elementi attualmente selezionati.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog:: m_pd](#m_pd).

## <a name="see-also"></a>Vedi anche

[DIBLOOK di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
