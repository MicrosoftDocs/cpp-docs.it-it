---
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
ms.openlocfilehash: 3e86ce3e0179ff7c7a47a7083b6c168fea91ccbc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662436"
---
# <a name="cprintdialog-class"></a>Classe CPrintDialog

Incapsula i servizi forniti dalla finestra di dialogo comune di Windows per la stampa.

## <a name="syntax"></a>Sintassi

```
class CPrintDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialog::CPrintDialog](#cprintdialog)|Costruisce un oggetto `CPrintDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialog::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante senza visualizzare la finestra di dialogo di stampa.|
|[CPrintDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CPrintDialog::GetCopies](#getcopies)|Recupera il numero di copie richiesto.|
|[CPrintDialog::GetDefaults](#getdefaults)|Recupera le impostazioni predefinite dispositivo senza visualizzare una finestra di dialogo.|
|[CPrintDialog::GetDeviceName](#getdevicename)|Recupera il nome di dispositivo stampante attualmente selezionata.|
|[CPrintDialog::GetDevMode](#getdevmode)|Recupera il `DEVMODE` struttura.|
|[CPrintDialog::GetDriverName](#getdrivername)|Recupera il nome del driver della stampante attualmente selezionata.|
|[CPrintDialog::GetFromPage](#getfrompage)|Recupera la pagina iniziale dell'intervallo di stampa.|
|[CPrintDialog::GetPortName](#getportname)|Recupera il nome della porta stampante attualmente selezionata.|
|[CPrintDialog::GetPrinterDC](#getprinterdc)|Recupera un handle al contesto di dispositivo stampante.|
|[CPrintDialog::GetToPage](#gettopage)|Recupera la pagina finale dell'intervallo di stampa.|
|[CPrintDialog::PrintAll](#printall)|Determina se stampare tutte le pagine del documento.|
|[CPrintDialog::PrintCollate](#printcollate)|Determina se confrontati copie vengono richiesti.|
|[CPrintDialog::PrintRange](#printrange)|Determina se solo un intervallo specificato delle pagine di stampa.|
|[CPrintDialog::PrintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialog::m_pd](#m_pd)|Una struttura utilizzata per personalizzare un `CPrintDialog` oggetto.|

## <a name="remarks"></a>Note

Finestre di dialogo Stampa comune forniscono un modo semplice per implementare le finestre di dialogo di stampa e stampare il programma di installazione in modo coerente con gli standard di Windows.

> [!NOTE]
>  Il `CPrintDialogEx` classe incapsula i servizi forniti dalla finestra delle proprietà di stampa di Windows. Per altre informazioni vedere la [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md) Panoramica.

`CPrintDialog`della funzionalità è stata sostituita da quella del [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md), che è progettato per fornire una finestra di dialogo comune per entrambi stampa il programma di installazione e impostazione della pagina.

È possibile basarsi su framework per gestire molti aspetti del processo di stampa per l'applicazione. In questo caso, il framework visualizza automaticamente la finestra di dialogo comune di Windows per la stampa. È possibile anche avere l'handle del framework di stampa per l'applicazione ma eseguire l'override di finestra di dialogo Stampa comune con il proprio finestra di dialogo Stampa. Per altre informazioni sull'utilizzo di framework per gestire le attività di stampa, vedere l'articolo [stampa](../../mfc/printing.md).

Se si desidera che l'applicazione per gestire la stampa senza coinvolgimento del framework, è possibile usare la `CPrintDialog` classe con il costruttore fornito "com'è", oppure è possibile derivare la propria classe di finestra di dialogo da `CPrintDialog` e scrivere un costruttore in base alle esigenze. In entrambi i casi, queste finestre di dialogo si comporta come finestre di dialogo MFC standard derivano dalla classe `CCommonDialog`.

Usare un `CPrintDialog` dell'oggetto, creare prima l'oggetto usando il `CPrintDialog` costruttore. Una volta la finestra di dialogo è stata costruita, è possibile impostare o modificare i valori di [m_pd](#m_pd) struttura per inizializzare i valori dei controlli della finestra di dialogo. Il `m_pd` struttura JE typu [PRINTDLG](/windows/desktop/api/commdlg/ns-commdlg-tagpda). Per altre informazioni su questa struttura, vedere il SDK di Windows.

Se non si fornisce i proprio handle in `m_pd` per il `hDevMode` e `hDevNames` membri, accertarsi di chiamare la funzione Windows `GlobalFree` per questi handle al termine della finestra di dialogo. Quando si usa l'implementazione di impostazioni di stampa del framework forniti da `CWinApp::OnFilePrintSetup`, non è necessario liberare gli handle. Gli handle vengono gestiti dagli `CWinApp` e vengono liberati `CWinApp`del distruttore. È necessario liberare gli handle quando si usa solo `CPrintDialog` autonomo.

Dopo l'inizializzazione i controlli di finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal` Restituisce se l'utente ha selezionato il pulsante OK (IDOK) o annullare (IDCANCEL).

Se `DoModal` restituisce IDOK, è possibile usare uno dei `CPrintDialog`di funzioni membro per recuperare le informazioni di input dall'utente.

Il `CPrintDialog::GetDefaults` funzione membro è utile per recuperare le impostazioni predefinite della stampante corrente senza visualizzare una finestra di dialogo. Questa funzione membro è necessario alcun intervento dell'utente.

È possibile utilizzare il Windows `CommDlgExtendedError` funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per altre informazioni sull'errore. Per altre informazioni su questa funzione, vedere il SDK di Windows.

`CPrintDialog` si basa sul COMMDLG. File DLL che viene fornito con Windows 3.1 e versioni successive.

Per personalizzare la finestra di dialogo, derivare una classe da `CPrintDialog`, offrono un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base. La funzione hook di personalizzazione non è obbligatorio.

Per elaborare lo stesso messaggio in modo diverso a seconda se la finestra di dialogo è Print o impostazioni di stampa, è necessario derivare una classe per ogni finestra di dialogo. È inoltre necessario sostituire il Windows `AttachOnSetup` funzione, che gestisce la creazione di una nuova finestra di dialogo quando si seleziona il pulsante di stampa il programma di installazione all'interno di una finestra di dialogo di stampa.

Per altre informazioni sull'uso `CPrintDialog`, vedere [classi di finestra di dialogo comuni](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPrintDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="cprintdialog"></a>  CPrintDialog::CPrintDialog

Costruisce l'oggetto finestra di dialogo di stampa di Windows o il programma di installazione di stampa.

```
CPrintDialog(
    BOOL bPrintSetupOnly,
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE | PD_NOSELECTION,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*bPrintSetupOnly*<br/>
Specifica se viene visualizzata la finestra di dialogo Stampa il programma di installazione o la finestra di dialogo di stampa di Windows standard. Impostare questo parametro su true per visualizzare la finestra di dialogo Impostazioni di stampa di Windows standard. Impostarla su FALSE per non visualizzare la finestra di dialogo di stampa di Windows. Se *bPrintSetupOnly* è FALSE, un programma di installazione di stampa pulsante di opzione è ancora visualizzato nella finestra di dialogo Stampa.

*dwFlags*<br/>
Uno o più flag che è possibile usare per personalizzare le impostazioni della finestra di dialogo, combinati usando l'operatore OR bit per bit. Ad esempio, il flag PD_ALLPAGES imposta l'intervallo di stampa predefinite per tutte le pagine del documento. Vedere le [PRINTDLG](/windows/desktop/api/commdlg/ns-commdlg-tagpda) struttura nel SDK di Windows per altre informazioni su questi flag.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo.

### <a name="remarks"></a>Note

Questa funzione membro crea solo l'oggetto. Usare il `DoModal` funzione membro per visualizzare la finestra di dialogo.

Si noti che quando si chiama il costruttore con *bPrintSetupOnly* impostato su FALSE, viene utilizzato automaticamente il flag PD_RETURNDC. Dopo avere chiamato `DoModal`, `GetDefaults`, o `GetPrinterDC`, verrà restituita una controller di dominio della stampante `m_pd.hDC`. Questo controller di dominio devono essere liberati con una chiamata a [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) dal chiamante di `CPrintDialog`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#174](../../mfc/codesnippet/cpp/cprintdialog-class_1.cpp)]

##  <a name="createprinterdc"></a>  CPrintDialog::CreatePrinterDC

Crea un contesto di periferica (DC) della stampante dal [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture.

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Handle al contesto di dispositivo stampante appena creato.

### <a name="remarks"></a>Note

Si presuppone che il controller di dominio sia il controller di dominio la stampante corrente e qualsiasi altro ottenuto in precedenza stampante che i controller di dominio devono essere eliminati dall'utente. Questa funzione può essere chiamata e il controller di dominio risultante utilizzato, senza mai visualizzare la finestra di dialogo di stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#106](../../mfc/codesnippet/cpp/cprintdialog-class_2.cpp)]

##  <a name="domodal"></a>  CPrintDialog::DoModal

Visualizza la finestra di dialogo Stampa comune di Windows e consente all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, intervallo di pagine, e se devono essere collazionate copie.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore.

IDOK e IDCANCEL sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Note

Se si desidera inizializzare le varie opzioni di finestra di dialogo Stampa impostando i membri del `m_pd` struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Dopo aver chiamato `DoModal`, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input di informazioni dall'utente nella finestra di dialogo.

Si noti che quando si chiama il costruttore con *bPrintSetupOnly* impostato su FALSE, viene utilizzato automaticamente il flag PD_RETURNDC. Dopo avere chiamato `DoModal`, `GetDefaults`, o `GetPrinterDC`, verrà restituita una controller di dominio della stampante `m_pd.hDC`. Questo controller di dominio devono essere liberati con una chiamata a [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) dal chiamante di `CPrintDialog`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog::CreatePrinterDC](#createprinterdc).

##  <a name="getcopies"></a>  CPrintDialog::GetCopies

Recupera il numero di copie richiesto.

```
int GetCopies() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di copie richiesto.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il numero di copie richiesto.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog::PrintCollate](#printcollate).

##  <a name="getdefaults"></a>  CPrintDialog::GetDefaults

Recupera le impostazioni predefinite di dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.

```
BOOL GetDefaults();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

I valori recuperati sono collocati nella `m_pd` struttura.

In alcuni casi, una chiamata a questa funzione chiamerà il [costruttore](#cprintdialog) per `CPrintDialog` con *bPrintSetupOnly* impostato su FALSE. In questi casi, un controller di dominio della stampante e `hDevNames` e `hDevMode` (due punti di controllo che si trova nel `m_pd` membro dati) vengono allocati automaticamente.

Se il costruttore per `CPrintDialog` è stato chiamato con *bPrintSetupOnly* impostato su FALSE, questa funzione non solo restituirà `hDevNames` e `hDevMode` che si trova `m_pd.hDevNames` e `m_pd.hDevMode`) al chiamante, ma restituirà anche una controller di dominio della stampante in `m_pd.hDC`. È responsabilità del chiamante per eliminare il controller di dominio della stampante e chiamare il Windows [GlobalFree](/windows/desktop/api/winbase/nf-winbase-globalfree) funzione sugli handle quando si usa più il `CPrintDialog` oggetto.

### <a name="example"></a>Esempio

Questo frammento di codice ottiene il contesto di dispositivo della stampante predefinita e segnala all'utente la risoluzione della stampante in punti per pollice. (Questo attributo di funzionalità della stampante è noto anche come valore DPI.)

[!code-cpp[NVC_MFCDocView#107](../../mfc/codesnippet/cpp/cprintdialog-class_3.cpp)]

##  <a name="getdevicename"></a>  CPrintDialog::GetDeviceName

Recupera il nome di dispositivo stampante attualmente selezionata.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della stampante attualmente selezionata.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata oppure, dopo aver chiamato [GetDefaults](#getdefaults) per recuperare i valori predefiniti correnti device della stampante predefinita. Usare un puntatore per il `CString` oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

### <a name="example"></a>Esempio

Questo frammento di codice mostra il nome dell'utente predefinito della stampante e la porta che è connesso, insieme al nome di spooler che usa la stampante. Il codice potrebbe visualizzare una finestra di messaggio con la dicitura "la stampante predefinita è HP LaserJet IIIP su \\\server\share mediante winspool.", ad esempio.

[!code-cpp[NVC_MFCDocView#108](../../mfc/codesnippet/cpp/cprintdialog-class_4.cpp)]

##  <a name="getdevmode"></a>  CPrintDialog::GetDevMode

Recupera il `DEVMODE` struttura.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Il [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) struttura dei dati, che contiene informazioni sull'inizializzazione di dispositivi e l'ambiente di un driver di stampa. È necessario sbloccare la memoria utilizzata da questa struttura con il Windows [GlobalUnlock](/windows/desktop/api/winbase/nf-winbase-globalunlock) funzione, che è descritti nel SDK di Windows.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) oppure [GetDefaults](#getdefaults) per recuperare informazioni sul dispositivo di stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog::PrintCollate](#printcollate).

##  <a name="getdrivername"></a>  CPrintDialog::GetDriverName

Recupera il nome del driver della stampante attualmente selezionata.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` specificando il nome del driver definiti dal sistema.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) oppure [GetDefaults](#getdefaults) per recuperare il nome del driver di dispositivo stampante definito dal sistema. Usare un puntatore per il `CString` oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog::GetDeviceName](#getdevicename).

##  <a name="getfrompage"></a>  CPrintDialog::GetFromPage

Recupera la pagina iniziale dell'intervallo di stampa.

```
int GetFromPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagina iniziale dell'intervallo di pagine da stampare.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il numero di pagina iniziale dell'intervallo di pagine da stampare.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog:: M_pd](#m_pd).

##  <a name="getportname"></a>  CPrintDialog::GetPortName

Recupera il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della porta stampante attualmente selezionata.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) oppure [GetDefaults](#getdefaults) per recuperare il nome della porta stampante attualmente selezionata.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog::GetDeviceName](#getdevicename).

##  <a name="getprinterdc"></a>  CPrintDialog::GetPrinterDC

Recupera un handle al contesto di dispositivo stampante.

```
HDC GetPrinterDC() const;
```

### <a name="return-value"></a>Valore restituito

Un handle al contesto di dispositivo stampante se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Se il *bPrintSetupOnly* parametro delle `CPrintDialog` costruttore era FALSE (che indica che viene visualizzata la finestra di dialogo di stampa), quindi `GetPrinterDC` restituisce un handle al contesto di dispositivo stampante. È necessario chiamare il Windows [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) (funzione) per eliminare il contesto di dispositivo al termine utilizzarlo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#109](../../mfc/codesnippet/cpp/cprintdialog-class_5.cpp)]

##  <a name="gettopage"></a>  CPrintDialog::GetToPage

Recupera la pagina finale dell'intervallo di stampa.

```
int GetToPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagina finale dell'intervallo di pagine da stampare.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il numero di pagina finale dell'intervallo di pagine da stampare.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog:: M_pd](#m_pd).

##  <a name="m_pd"></a>  CPrintDialog::m_pd

Struttura i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.

```
PRINTDLG& m_pd;
```

### <a name="remarks"></a>Note

Dopo la costruzione di un `CPrintDialog` dell'oggetto, è possibile usare `m_pd` per impostare i vari aspetti della finestra di dialogo prima di chiamare le [DoModal](#domodal) funzione membro. Per altre informazioni sul `m_pd` struttura, vedere [PRINTDLG](/windows/desktop/api/commdlg/ns-commdlg-tagpda) nel SDK di Windows.

Se si modifica il `m_pd` membro dati direttamente, si eseguirà l'override di qualsiasi comportamento predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#111](../../mfc/codesnippet/cpp/cprintdialog-class_6.cpp)]

##  <a name="printall"></a>  CPrintDialog::PrintAll

Determina se stampare tutte le pagine del documento.

```
BOOL PrintAll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutte le pagine del documento devono essere stampate; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se stampare tutte le pagine del documento.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog:: M_pd](#m_pd).

##  <a name="printcollate"></a>  CPrintDialog::PrintCollate

Determina se confrontati copie vengono richiesti.

```
BOOL PrintCollate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona la casella di controllo collate nella finestra di dialogo; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se la stampante deve collate stampate tutte le copie del documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#110](../../mfc/codesnippet/cpp/cprintdialog-class_7.cpp)]

##  <a name="printrange"></a>  CPrintDialog::PrintRange

Determina se solo un intervallo specificato delle pagine di stampa.

```
BOOL PrintRange() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se solo un intervallo di pagine nel documento devono essere stampate; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se eseguire solo un intervallo di pagine nel documento di stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog:: M_pd](#m_pd).

##  <a name="printselection"></a>  CPrintDialog::PrintSelection

Determina se stampare solo gli elementi attualmente selezionati.

```
BOOL PrintSelection() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se solo gli elementi selezionati devono essere stampate; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se visualizzare solo gli elementi attualmente selezionati.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPrintDialog:: M_pd](#m_pd).

## <a name="see-also"></a>Vedere anche

[Esempio MFC immagine](../../visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
