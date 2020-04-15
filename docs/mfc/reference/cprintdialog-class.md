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
ms.openlocfilehash: 6490e5488c5ab3b808a02e3608b75541e4063d8f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364057"
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
|[CPrintDialog::CreatePrinterDC](#createprinterdc)|Crea un contesto di periferica della stampante senza visualizzare la finestra di dialogo Stampa.|
|[CPrintDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CPrintDialog::GetCopies](#getcopies)|Recupera il numero di copie richieste.|
|[CPrintDialog::GetDefaults](#getdefaults)|Recupera le impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|
|[CPrintDialog::GetDeviceName](#getdevicename)|Recupera il nome della periferica di stampa attualmente selezionata.|
|[CPrintDialog::GetDevMode](#getdevmode)|Recupera la `DEVMODE` struttura.|
|[CPrintDialog::NomeDriver](#getdrivername)|Recupera il nome del driver della stampante attualmente selezionato.|
|[CPrintDialog::GetFromPage](#getfrompage)|Recupera la pagina iniziale dell'intervallo di stampa.|
|[CPrintDialog::NomePorta](#getportname)|Recupera il nome della porta stampante attualmente selezionata.|
|[CPrintDialog::GetPrinterDC](#getprinterdc)|Recupera un handle per il contesto di periferica della stampante.|
|[CPrintDialog::GetToPage](#gettopage)|Recupera la pagina finale dell'intervallo di stampa.|
|[CPrintDialog::PrintAll](#printall)|Determina se stampare tutte le pagine del documento.|
|[CPrintDialog::PrintCollate](#printcollate)|Determina se le copie fascicolate sono richieste.|
|[CPrintDialog::PrintRange](#printrange)|Determina se stampare solo un intervallo di pagine specificato.|
|[CPrintDialog::PrintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialog::m_pd](#m_pd)|Struttura utilizzata per `CPrintDialog` personalizzare un oggetto.|

## <a name="remarks"></a>Osservazioni

Le finestre di dialogo di stampa comuni forniscono un modo semplice per implementare le finestre di dialogo Impostazioni di stampa e stampa in modo coerente con gli standard di Windows.Common print dialog boxes provide an easy way to implement Print and Print Setup dialog boxes in modo coerente con Windows standards.

> [!NOTE]
> La `CPrintDialogEx` classe incapsula i servizi forniti dalla finestra delle proprietà Windows Print. Per altre informazioni, vedere [cenni preliminari su CPrintDialogEx.For](../../mfc/reference/cprintdialogex-class.md) more information see the CPrintDialogEx overview.

`CPrintDialog`La funzionalità di 's è sostituita da quella di [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md), progettata per fornire una finestra di dialogo comune sia per l'impostazione di stampa che per l'impostazione della pagina.

È possibile fare affidamento sul framework per gestire molti aspetti del processo di stampa per l'applicazione. In questo caso, il framework visualizza automaticamente la finestra di dialogo comune di Windows per la stampa. È anche possibile fare in modo che il framework gestisca la stampa per l'applicazione, ma eseguire l'override della finestra di dialogo Stampa comune con la propria finestra di dialogo di stampa. Per ulteriori informazioni sull'utilizzo del framework per gestire le attività di stampa, vedere l'articolo [Stampa](../../mfc/printing.md).

Se si desidera che l'applicazione gestisca la stampa `CPrintDialog` senza il coinvolgimento del framework, è possibile utilizzare la `CPrintDialog` classe "così com'è" con il costruttore fornito oppure è possibile derivare la propria classe di finestra di dialogo da e scrivere un costruttore in base alle proprie esigenze. In entrambi i casi, queste finestre di dialogo si comporterà come finestre di dialogo MFC standard perché derivano dalla classe `CCommonDialog`.

Per utilizzare `CPrintDialog` un oggetto, creare `CPrintDialog` innanzitutto l'oggetto utilizzando il costruttore . Una volta costruita la finestra di dialogo, è possibile impostare o modificare i valori nella struttura [m_pd](#m_pd) per inizializzare i valori dei controlli della finestra di dialogo. La `m_pd` struttura è di tipo [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga). Per ulteriori informazioni su questa struttura, vedere Windows SDK.

Se non si forniscono `m_pd` i `hDevMode` propri `hDevNames` handle per i membri `GlobalFree` e , assicurarsi di chiamare la funzione di Windows per questi handle al termine della finestra di dialogo. Quando si utilizza l'implementazione `CWinApp::OnFilePrintSetup`di Setup di stampa del framework fornita da , non è necessario liberare questi handle. Gli handle vengono `CWinApp` mantenuti da `CWinApp`e vengono liberati nel distruttore. È necessario liberare questi handle `CPrintDialog` solo quando si utilizza nosolo di connessione.

Dopo l'inizializzazione dei controlli `DoModal` della finestra di dialogo, chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal`indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL).

Se `DoModal` restituisce IDOK, è `CPrintDialog`possibile utilizzare una delle funzioni membro di 's per recuperare le informazioni immesse dall'utente.

La `CPrintDialog::GetDefaults` funzione membro è utile per recuperare le impostazioni predefinite della stampante corrente senza visualizzare una finestra di dialogo. Questa funzione membro non richiede alcuna interazione da parte dell'utente.

È possibile utilizzare `CommDlgExtendedError` la funzione Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedere Windows SDK.

`CPrintDialog`si basa su COMMDLG. DLL fornito con Windows 3.1 e versioni successive.

Per personalizzare la finestra di `CPrintDialog`dialogo, derivare una classe da , fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe base. La personalizzazione della funzione hook non è necessaria.

Per elaborare lo stesso messaggio in modo diverso a seconda che la finestra di dialogo sia Stampa o Impostazioni di stampa, è necessario derivare una classe per ogni finestra di dialogo. È inoltre necessario `AttachOnSetup` eseguire l'override della funzione Windows, che gestisce la creazione di una nuova finestra di dialogo quando il pulsante Imposta stampante è selezionato all'interno di una finestra di dialogo Stampa.

Per ulteriori informazioni `CPrintDialog`sull'utilizzo di , vedere Classi di [finestre di dialogo comuni](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPrintDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="cprintdialogcprintdialog"></a><a name="cprintdialog"></a>CPrintDialog::CPrintDialog

Costruisce un oggetto finestra di dialogo Stampa di Windows o Imposta di stampa.

```
CPrintDialog(
    BOOL bPrintSetupOnly,
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE | PD_NOSELECTION,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*bPrintSetupOnly (informazioni in stato instato di stampa)*<br/>
Specifica se visualizzare la finestra di dialogo Stampa standard di Windows o Imposta stampante. Impostare questo parametro su TRUE per visualizzare la finestra di dialogo Impostazioni di stampa standard di Windows. Impostare su FALSE per visualizzare la finestra di dialogo Stampa di Windows. Se *bPrintSetupOnly* è FALSE, nella finestra di dialogo Stampa viene comunque visualizzato un pulsante di opzione Imposta stampante.

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo, combinate utilizzando l'operatore OR bit per bit. Ad esempio, il flag PD_ALLPAGES imposta l'intervallo di stampa predefinito su tutte le pagine del documento. Per ulteriori informazioni su questi flag, vedere la struttura [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) in Windows SDK.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre o proprietario della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro costruisce solo l'oggetto. Utilizzare `DoModal` la funzione membro per visualizzare la finestra di dialogo.

Si noti che quando si chiama il costruttore con *bPrintSetupOnly* impostato su FALSE, il flag PD_RETURNDC viene utilizzato automaticamente. Dopo `DoModal`aver `GetDefaults`chiamato `GetPrinterDC`, , o , `m_pd.hDC`un controller di dominio della stampante verrà restituito in . Questo controller di dominio deve essere liberato con `CPrintDialog`una chiamata a [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) dal chiamante di .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#174](../../mfc/codesnippet/cpp/cprintdialog-class_1.cpp)]

## <a name="cprintdialogcreateprinterdc"></a><a name="createprinterdc"></a>CPrintDialog::CreatePrinterDC

Crea un contesto di periferica (DC) della stampante dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES.](/windows/win32/api/commdlg/ns-commdlg-devnames)

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Gestire il contesto di periferica della stampante appena creato.

### <a name="remarks"></a>Osservazioni

Si presuppone che il controller di dominio sia il controller di dominio della stampante corrente e tutti gli altri controller di dominio della stampante ottenuti in precedenza devono essere eliminati dall'utente. Questa funzione può essere chiamata e il controller di dominio risultante utilizzato, senza mai visualizzare la finestra di dialogo Stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#106](../../mfc/codesnippet/cpp/cprintdialog-class_2.cpp)]

## <a name="cprintdialogdomodal"></a><a name="domodal"></a>CPrintDialog::DoModal

Visualizza la finestra di dialogo Stampa comune di Windows e consente all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, l'intervallo di pagine e se le copie devono essere fascicolate.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare le varie opzioni `m_pd` della finestra di dialogo `DoModal`di stampa impostando i membri della struttura, è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Dopo `DoModal`aver chiamato , è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

Si noti che quando si chiama il costruttore con *bPrintSetupOnly* impostato su FALSE, il flag PD_RETURNDC viene utilizzato automaticamente. Dopo `DoModal`aver `GetDefaults`chiamato `GetPrinterDC`, , o , `m_pd.hDC`un controller di dominio della stampante verrà restituito in . Questo controller di dominio deve essere liberato con `CPrintDialog`una chiamata a [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) dal chiamante di .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::CreatePrinterDC](#createprinterdc).

## <a name="cprintdialoggetcopies"></a><a name="getcopies"></a>CPrintDialog::GetCopies

Recupera il numero di copie richieste.

```
int GetCopies() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di copie richieste.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per recuperare il numero di copie richieste.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::PrintCollate](#printcollate).

## <a name="cprintdialoggetdefaults"></a><a name="getdefaults"></a>CPrintDialog::GetDefaults

Recupera le impostazioni predefinite del dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.

```
BOOL GetDefaults();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

I valori recuperati vengono `m_pd` posizionati nella struttura.

In alcuni casi, una chiamata a questa `CPrintDialog` funzione chiamerà il [costruttore](#cprintdialog) per con *bPrintSetupOnly* impostato su FALSE. In questi casi, un `hDevNames` `hDevMode` controller di dominio `m_pd` della stampante e e (due handle situati nel membro dati) vengono allocati automaticamente.

Se il `CPrintDialog` costruttore per è stato chiamato con *bPrintSetupOnly* `hDevMode` impostato `m_pd.hDevNames` su `m_pd.hDevMode`FALSE, questa funzione non solo restituirà `m_pd.hDC` `hDevNames` e si trova in e ) al chiamante, ma restituirà anche un controller di dominio della stampante in . È responsabilità del chiamante eliminare il controller di dominio della stampante e chiamare `CPrintDialog` la funzione [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree) di Windows sugli handle al termine dell'utilizzo dell'oggetto.

### <a name="example"></a>Esempio

Questo frammento di codice ottiene il contesto di periferica della stampante predefinita e segnala all'utente la risoluzione della stampante in punti per pollice. Questo attributo delle funzionalità della stampante viene spesso definito DPI.

[!code-cpp[NVC_MFCDocView#107](../../mfc/codesnippet/cpp/cprintdialog-class_3.cpp)]

## <a name="cprintdialoggetdevicename"></a><a name="getdevicename"></a>CPrintDialog::GetDeviceName

Recupera il nome della periferica di stampa attualmente selezionata.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della stampante attualmente selezionata.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata o dopo aver chiamato [GetDefaults](#getdefaults) per recuperare le impostazioni predefinite del dispositivo corrente della stampante predefinita. Utilizzare un puntatore `CString` all'oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

### <a name="example"></a>Esempio

Questo frammento di codice mostra il nome della stampante predefinita dell'utente e la porta a cui è connesso, insieme al nome dello spooler utilizzato dalla stampante. Il codice potrebbe visualizzare una finestra di messaggio che dice, "La stampante predefinita è HP LaserJet IIIP su \\sserver - condivisione utilizzando winspool.", ad esempio.

[!code-cpp[NVC_MFCDocView#108](../../mfc/codesnippet/cpp/cprintdialog-class_4.cpp)]

## <a name="cprintdialoggetdevmode"></a><a name="getdevmode"></a>CPrintDialog::GetDevMode

Recupera la `DEVMODE` struttura.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Struttura di dati [DEVMODE,](/windows/win32/api/wingdi/ns-wingdi-devmodea) che contiene informazioni sull'inizializzazione del dispositivo e sull'ambiente di un driver di stampa. È necessario sbloccare la memoria acquisita da questa struttura con la funzione [Windows GlobalUnlock,](/windows/win32/api/winbase/nf-winbase-globalunlock) descritta in Windows SDK.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare informazioni sulla periferica di stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::PrintCollate](#printcollate).

## <a name="cprintdialoggetdrivername"></a><a name="getdrivername"></a>CPrintDialog::NomeDriver

Recupera il nome del driver della stampante attualmente selezionato.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che specifica il nome del driver definito dal sistema.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome del driver di periferica della stampante definito dal sistema. Utilizzare un puntatore `CString` all'oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::GetDeviceName](#getdevicename).

## <a name="cprintdialoggetfrompage"></a><a name="getfrompage"></a>CPrintDialog::GetFromPage

Recupera la pagina iniziale dell'intervallo di stampa.

```
int GetFromPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagina iniziale nell'intervallo di pagine da stampare.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per recuperare il numero di pagina iniziale nell'intervallo di pagine da stampare.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::m_pd](#m_pd).

## <a name="cprintdialoggetportname"></a><a name="getportname"></a>CPrintDialog::NomePorta

Recupera il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della porta stampante attualmente selezionata.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome della porta della stampante attualmente selezionata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::GetDeviceName](#getdevicename).

## <a name="cprintdialoggetprinterdc"></a><a name="getprinterdc"></a>CPrintDialog::GetPrinterDC

Recupera un handle per il contesto di periferica della stampante.

```
HDC GetPrinterDC() const;
```

### <a name="return-value"></a>Valore restituito

Un handle per il contesto di periferica della stampante se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se il *bPrintSetupOnly* `CPrintDialog` del costruttore era FALSE (che indica che `GetPrinterDC` viene visualizzata la finestra di dialogo Stampa), quindi restituisce un handle al contesto di periferica della stampante. È necessario chiamare la funzione [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) di Windows per eliminare il contesto di dispositivo al termine dell'utilizzo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#109](../../mfc/codesnippet/cpp/cprintdialog-class_5.cpp)]

## <a name="cprintdialoggettopage"></a><a name="gettopage"></a>CPrintDialog::GetToPage

Recupera la pagina finale dell'intervallo di stampa.

```
int GetToPage() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagina finale nell'intervallo di pagine da stampare.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per recuperare il numero di pagina finale nell'intervallo di pagine da stampare.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::m_pd](#m_pd).

## <a name="cprintdialogm_pd"></a><a name="m_pd"></a>CPrintDialog::m_pd

Struttura i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.

```
PRINTDLG& m_pd;
```

### <a name="remarks"></a>Osservazioni

Dopo aver `CPrintDialog` creato un oggetto, è possibile utilizzare `m_pd` per impostare vari aspetti della finestra di dialogo prima di chiamare il [DoModal](#domodal) funzione membro. Per ulteriori informazioni `m_pd` sulla struttura, vedere [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) in Windows SDK.

Se si `m_pd` modifica direttamente il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#111](../../mfc/codesnippet/cpp/cprintdialog-class_6.cpp)]

## <a name="cprintdialogprintall"></a><a name="printall"></a>CPrintDialog::PrintAll

Determina se stampare tutte le pagine del documento.

```
BOOL PrintAll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutte le pagine del documento devono essere stampate; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare tutte le pagine del documento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::m_pd](#m_pd).

## <a name="cprintdialogprintcollate"></a><a name="printcollate"></a>CPrintDialog::PrintCollate

Determina se le copie fascicolate sono richieste.

```
BOOL PrintCollate() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente seleziona la casella di controllo fascicola nella finestra di dialogo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se la stampante deve fascicolare tutte le copie stampate del documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#110](../../mfc/codesnippet/cpp/cprintdialog-class_7.cpp)]

## <a name="cprintdialogprintrange"></a><a name="printrange"></a>CPrintDialog::PrintRange

Determina se stampare solo un intervallo di pagine specificato.

```
BOOL PrintRange() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se deve essere stampato solo un intervallo di pagine nel documento; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare solo un intervallo di pagine nel documento.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::m_pd](#m_pd).

## <a name="cprintdialogprintselection"></a><a name="printselection"></a>CPrintDialog::PrintSelection

Determina se stampare solo gli elementi attualmente selezionati.

```
BOOL PrintSelection() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se devono essere stampati solo gli elementi selezionati; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare solo gli elementi attualmente selezionati.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPrintDialog::m_pd](#m_pd).

## <a name="see-also"></a>Vedere anche

[Esempio MFC DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
