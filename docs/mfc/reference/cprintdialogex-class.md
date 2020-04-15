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
ms.openlocfilehash: 52e992cf021a592198daeddf0a4321fcea487f72
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364037"
---
# <a name="cprintdialogex-class"></a>Classe CPrintDialogEx

Incapsula i servizi forniti dalla finestra delle proprietà Stampa di Windows.

## <a name="syntax"></a>Sintassi

```
class CPrintDialogEx : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialogEx::CPrintDialogEx](#cprintdialogex)|Costruisce un oggetto `CPrintDialogEx`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialogEx::CreatePrinterDC](#createprinterdc)|Crea un contesto di periferica della stampante senza visualizzare la finestra di dialogo Stampa.|
|[CPrintDialogEx::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare selezioni.|
|[CPrintDialogEx::GetCopies](#getcopies)|Recupera il numero di copie richieste.|
|[CPrintDialogEx::GetDefaults](#getdefaults)|Recupera le impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|
|[CPrintDialogEx::GetDeviceName](#getdevicename)|Recupera il nome della periferica di stampa attualmente selezionata.|
|[CPrintDialogEx::GetDevMode](#getdevmode)|Recupera la `DEVMODE` struttura.|
|[CPrintDialogEx::NomeDriver](#getdrivername)|Recupera il nome del driver di periferica della stampante definito dal sistema.|
|[CPrintDialogEx::NomePorta](#getportname)|Recupera il nome della porta stampante attualmente selezionata.|
|[CPrintDialogEx::GetPrinterDC](#getprinterdc)|Recupera un handle per il contesto di periferica della stampante.|
|[CPrintDialogEx::PrintAll](#printall)|Determina se stampare tutte le pagine del documento.|
|[CPrintDialogEx::PrintCollate](#printcollate)|Determina se le copie fascicolate sono richieste.|
|[CPrintDialogEx::PrintCurrentPage](#printcurrentpage)|Determina se stampare la pagina corrente del documento.|
|[CPrintDialogEx::PrintRange](#printrange)|Determina se stampare solo un intervallo di pagine specificato.|
|[CPrintDialogEx::PrintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialogEx::m_pdex](#m_pdex)|Struttura utilizzata per `CPrintDialogEx` personalizzare un oggetto.|

## <a name="remarks"></a>Osservazioni

È possibile fare affidamento sul framework per gestire molti aspetti del processo di stampa per l'applicazione. Per ulteriori informazioni sull'utilizzo del framework per gestire le attività di stampa, vedere l'articolo [Stampa](../../mfc/printing.md).

Se si desidera che l'applicazione gestisca la stampa `CPrintDialogEx` senza il coinvolgimento del framework, è possibile utilizzare la `CPrintDialogEx` classe "così com'è" con il costruttore fornito oppure è possibile derivare la propria classe di finestra di dialogo da e scrivere un costruttore in base alle proprie esigenze. In entrambi i casi, queste finestre di dialogo si comporterà come finestre di dialogo MFC standard perché derivano dalla classe `CCommonDialog`.

Per utilizzare `CPrintDialogEx` un oggetto, creare `CPrintDialogEx` innanzitutto l'oggetto utilizzando il costruttore . Una volta costruita la finestra di dialogo, è possibile impostare o modificare i valori nella struttura [m_pdex](#m_pdex) per inizializzare i valori dei controlli della finestra di dialogo. La `m_pdex` struttura è di tipo [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw). Per ulteriori informazioni su questa struttura, vedere Windows SDK.

Se non si forniscono `m_pdex` i `hDevMode` propri `hDevNames` handle per i membri `GlobalFree` e , assicurarsi di chiamare la funzione di Windows per questi handle al termine della finestra di dialogo.

Dopo l'inizializzazione dei controlli `DoModal` della finestra di dialogo, chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. Quando `DoModal` viene restituito, è possibile determinare se l'utente ha selezionato il pulsante OK, Applica o Annulla.

Se l'utente ha premuto OK, è possibile utilizzare `CPrintDialogEx`le funzioni membro 's per recuperare le informazioni immesse dall'utente.

La `CPrintDialogEx::GetDefaults` funzione membro è utile per recuperare le impostazioni predefinite della stampante corrente senza visualizzare una finestra di dialogo. Questo metodo non richiede alcuna interazione da parte dell'utente.

È possibile utilizzare `CommDlgExtendedError` la funzione Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedere Windows SDK.

Per ulteriori informazioni `CPrintDialogEx`sull'utilizzo di , vedere Classi di [finestre di dialogo comuni](../../mfc/common-dialog-classes.md).

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

**Intestazione:** afxdlgs.h

## <a name="cprintdialogexcprintdialogex"></a><a name="cprintdialogex"></a>CPrintDialogEx::CPrintDialogEx

Costruisce una finestra delle proprietà Windows Print.

```
CPrintDialogEx(
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS       | PD_HIDEPRINTTOFILE | PD_NOSELECTION | PD_NOCURRENTPAGE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo, combinate utilizzando l'operatore OR bit per bit. Ad esempio, il flag PD_ALLPAGES imposta l'intervallo di stampa predefinito su tutte le pagine del documento. Per ulteriori informazioni su questi flag, vedere la struttura [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw) in Windows SDK.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre o proprietario della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro costruisce solo l'oggetto. Utilizzare `DoModal` la funzione membro per visualizzare la finestra di dialogo.

## <a name="cprintdialogexcreateprinterdc"></a><a name="createprinterdc"></a>CPrintDialogEx::CreatePrinterDC

Crea un contesto di periferica (DC) della stampante dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES.](/windows/win32/api/commdlg/ns-commdlg-devnames)

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Gestire il contesto di periferica della stampante appena creato.

### <a name="remarks"></a>Osservazioni

Il controller di dominio restituito `hDC` viene archiviato anche nel membro di [m_pdex](#m_pdex).

Si presuppone che il controller di dominio sia il controller di dominio della stampante corrente e tutti gli altri controller di dominio della stampante ottenuti in precedenza devono essere eliminati. Questa funzione può essere chiamata e il controller di dominio risultante utilizzato, senza mai visualizzare la finestra di dialogo Stampa.

## <a name="cprintdialogexdomodal"></a><a name="domodal"></a>CPrintDialogEx::DoModal

Chiamare questa funzione per visualizzare la finestra delle proprietà Stampa di Windows e consentire all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, l'intervallo di pagine e se le copie devono essere fascicolate.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Il INT_PTR valore restituito è in realtà un HRESULT. Vedere la sezione Valori restituiti in [PrintDlgEx](/previous-versions/windows/desktop/legacy/ms646942\(v=vs.85\)) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare le varie opzioni `m_pdex` della finestra di dialogo `DoModal`di stampa impostando i membri della struttura, è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Dopo `DoModal`aver chiamato , è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

Se il flag PD_RETURNDC `DoModal`viene utilizzato quando si chiama `hDC` , verrà restituito un controller di dominio della stampante nel membro di [m_pdex](#m_pdex). Questo controller di dominio deve essere liberato con `CPrintDialogEx`una chiamata a [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) dal chiamante di .

## <a name="cprintdialogexgetcopies"></a><a name="getcopies"></a>CPrintDialogEx::GetCopies

Chiamare questa funzione `DoModal` dopo la chiamata per recuperare il numero di copie richieste.

```
int GetCopies() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di copie richieste.

## <a name="cprintdialogexgetdefaults"></a><a name="getdefaults"></a>CPrintDialogEx::GetDefaults

Chiamare questa funzione per recuperare le impostazioni predefinite del dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.

```
BOOL GetDefaults();
```

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

Crea un contesto di periferica (DC) della stampante dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES.](/windows/win32/api/commdlg/ns-commdlg-devnames)

`GetDefaults`non viene visualizzata la finestra delle proprietà Stampa. Vengono invece `hDevNames` impostati i membri di `hDevMode` [m_pdex](#m_pdex) per gli handle per le strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) inizializzate per la stampante predefinita del sistema. Entrambi `hDevNames` `hDevMode` e devono essere `GetDefaults` NULL o ha esito negativo.

Se il flag PD_RETURNDC è impostato, `hDevNames` questa `hDevMode` funzione `m_pdex.hDevNames` non `m_pdex.hDevMode`solo restituirà e (situato in `m_pdex.hDC`e ) al chiamante, ma restituirà anche un controller di dominio della stampante in . È responsabilità del chiamante eliminare il controller di dominio della stampante e chiamare `CPrintDialogEx` la funzione [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree) di Windows sugli handle al termine dell'utilizzo dell'oggetto.

## <a name="cprintdialogexgetdevicename"></a><a name="getdevicename"></a>CPrintDialogEx::GetDeviceName

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata o dopo aver chiamato [GetDefaults](#getdefaults) per recuperare il nome della stampante predefinita.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della stampante attualmente selezionata.

### <a name="remarks"></a>Osservazioni

Utilizzare un puntatore `CString` all'oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="cprintdialogexgetdevmode"></a><a name="getdevmode"></a>CPrintDialogEx::GetDevMode

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare informazioni sulla periferica di stampa.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Struttura di dati [DEVMODE,](/windows/win32/api/wingdi/ns-wingdi-devmodea) che contiene informazioni sull'inizializzazione del dispositivo e sull'ambiente di un driver di stampa. È necessario sbloccare la memoria acquisita da questa struttura con la funzione [Windows GlobalUnlock,](/windows/win32/api/winbase/nf-winbase-globalunlock) descritta in Windows SDK.

## <a name="cprintdialogexgetdrivername"></a><a name="getdrivername"></a>CPrintDialogEx::NomeDriver

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome del driver di periferica della stampante definito dal sistema.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che specifica il nome del driver definito dal sistema.

### <a name="remarks"></a>Osservazioni

Utilizzare un puntatore `CString` all'oggetto restituito da `GetDriverName` come valore di *lpszDriverName* in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="cprintdialogexgetportname"></a><a name="getportname"></a>CPrintDialogEx::NomePorta

Chiamare questa funzione dopo aver chiamato [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome della porta della stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della porta stampante attualmente selezionata.

## <a name="cprintdialogexgetprinterdc"></a><a name="getprinterdc"></a>CPrintDialogEx::GetPrinterDC

Restituisce un handle per il contesto di periferica della stampante.

```
HDC GetPrinterDC() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di periferica della stampante.

### <a name="remarks"></a>Osservazioni

È necessario chiamare la funzione [DeleteDC](/windows/win32/api/wingdi/nf-wingdi-deletedc) di Windows per eliminare il contesto di dispositivo al termine dell'utilizzo.

## <a name="cprintdialogexm_pdex"></a><a name="m_pdex"></a>CPrintDialogEx::m_pdex

Struttura PRINTDLGEX i cui membri memorizzano le caratteristiche dell'oggetto finestra di dialogo.

```
PRINTDLGEX m_pdex;
```

### <a name="remarks"></a>Osservazioni

Dopo aver `CPrintDialogEx` creato un oggetto, è possibile utilizzare `m_pdex` per impostare vari aspetti della finestra di dialogo prima di chiamare il [DoModal](#domodal) funzione membro. Per ulteriori informazioni `m_pdex` sulla struttura, vedere [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw) in Windows SDK.

Se si `m_pdex` modifica direttamente il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

## <a name="cprintdialogexprintall"></a><a name="printall"></a>CPrintDialogEx::PrintAll

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare tutte le pagine del documento.

```
BOOL PrintAll() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe tutte le pagine del documento devono essere stampate. in caso contrario, FALSE.

## <a name="cprintdialogexprintcollate"></a><a name="printcollate"></a>CPrintDialogEx::PrintCollate

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se la stampante deve fascicolare tutte le copie stampate del documento.

```
BOOL PrintCollate() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe l'utente seleziona la casella di controllo fascicola nella finestra di dialogo. in caso contrario, FALSE.

## <a name="cprintdialogexprintcurrentpage"></a><a name="printcurrentpage"></a>CPrintDialogEx::PrintCurrentPage

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare la pagina corrente nel documento.

```
BOOL PrintCurrentPage() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe **Stampa pagina corrente** è selezionata nella finestra di dialogo di stampa; in caso contrario, FALSE.

## <a name="cprintdialogexprintrange"></a><a name="printrange"></a>CPrintDialogEx::PrintRange

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare solo un intervallo di pagine nel documento.

```
BOOL PrintRange() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe deve essere stampato solo un intervallo di pagine del documento; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Gli intervalli di pagine specificati `nPageRanges`possono `nMaxPageRanges`essere `lpPageRanges` determinati da [m_pdex](#m_pdex) (vedere , , e nella struttura [PRINTDLGEX](/windows/win32/api/commdlg/ns-commdlg-printdlgexw) in Windows SDK).

## <a name="cprintdialogexprintselection"></a><a name="printselection"></a>CPrintDialogEx::PrintSelection

Chiamare questa funzione `DoModal` dopo la chiamata per determinare se stampare solo gli elementi attualmente selezionati.

```
BOOL PrintSelection() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe devono essere stampati solo gli elementi selezionati. in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
