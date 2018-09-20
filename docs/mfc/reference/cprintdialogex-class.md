---
title: Classe CPrintDialogEx | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 39cbd2c920f2a69f5ba322883a550d31e57f04c4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46387516"
---
# <a name="cprintdialogex-class"></a>Classe CPrintDialogEx

Incapsula i servizi forniti dalla finestra delle proprietà di stampa di Windows.

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
|[CPrintDialogEx::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante senza visualizzare la finestra di dialogo di stampa.|
|[CPrintDialogEx::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare selezioni.|
|[CPrintDialogEx::GetCopies](#getcopies)|Recupera il numero di copie richiesto.|
|[CPrintDialogEx::GetDefaults](#getdefaults)|Recupera le impostazioni predefinite dispositivo senza visualizzare una finestra di dialogo.|
|[CPrintDialogEx::GetDeviceName](#getdevicename)|Recupera il nome di dispositivo stampante attualmente selezionata.|
|[CPrintDialogEx::GetDevMode](#getdevmode)|Recupera il `DEVMODE` struttura.|
|[CPrintDialogEx::GetDriverName](#getdrivername)|Recupera il nome del driver di dispositivo stampante definito dal sistema.|
|[CPrintDialogEx::GetPortName](#getportname)|Recupera il nome della porta stampante attualmente selezionata.|
|[CPrintDialogEx::GetPrinterDC](#getprinterdc)|Recupera un handle al contesto di dispositivo stampante.|
|[CPrintDialogEx::PrintAll](#printall)|Determina se stampare tutte le pagine del documento.|
|[CPrintDialogEx::PrintCollate](#printcollate)|Determina se confrontati copie vengono richiesti.|
|[CPrintDialogEx::PrintCurrentPage](#printcurrentpage)|Determina se stampare la pagina corrente del documento.|
|[CPrintDialogEx::PrintRange](#printrange)|Determina se solo un intervallo specificato delle pagine di stampa.|
|[CPrintDialogEx::PrintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPrintDialogEx::m_pdex](#m_pdex)|Una struttura utilizzata per personalizzare un `CPrintDialogEx` oggetto.|

## <a name="remarks"></a>Note

È possibile basarsi su framework per gestire molti aspetti del processo di stampa per l'applicazione. Per altre informazioni sull'utilizzo di framework per gestire le attività di stampa, vedere l'articolo [stampa](../../mfc/printing.md).

Se si desidera che l'applicazione per gestire la stampa senza coinvolgimento del framework, è possibile usare la `CPrintDialogEx` classe con il costruttore fornito "com'è", oppure è possibile derivare la propria classe di finestra di dialogo da `CPrintDialogEx` e scrivere un costruttore in base alle esigenze. In entrambi i casi, queste finestre di dialogo si comporta come finestre di dialogo MFC standard derivano dalla classe `CCommonDialog`.

Usare un `CPrintDialogEx` dell'oggetto, creare prima l'oggetto usando il `CPrintDialogEx` costruttore. Una volta la finestra di dialogo è stata costruita, è possibile impostare o modificare i valori di [m_pdex](#m_pdex) struttura per inizializzare i valori dei controlli della finestra di dialogo. Il `m_pdex` struttura JE typu [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa). Per altre informazioni su questa struttura, vedere il SDK di Windows.

Se non si fornisce i proprio handle in `m_pdex` per il `hDevMode` e `hDevNames` membri, accertarsi di chiamare la funzione Windows `GlobalFree` per questi handle al termine della finestra di dialogo.

Dopo l'inizializzazione i controlli di finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. Quando si `DoModal` viene restituito, è possibile determinare se l'utente ha selezionato il pulsante OK, applica o Annulla.

Se l'utente ha premuto OK, è possibile usare `CPrintDialogEx`di funzioni membro per recuperare le informazioni di input dall'utente.

Il `CPrintDialogEx::GetDefaults` funzione membro è utile per recuperare le impostazioni predefinite della stampante corrente senza visualizzare una finestra di dialogo. Questo metodo è necessario alcun intervento dell'utente.

È possibile utilizzare il Windows `CommDlgExtendedError` funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per altre informazioni sull'errore. Per altre informazioni su questa funzione, vedere il SDK di Windows.

Per altre informazioni sull'uso `CPrintDialogEx`, vedere [classi di finestra di dialogo comuni](../../mfc/common-dialog-classes.md).

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

Crea una finestra delle proprietà di stampa di Windows.

```
CPrintDialogEx(
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS       | PD_HIDEPRINTTOFILE | PD_NOSELECTION | PD_NOCURRENTPAGE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno o più flag che è possibile usare per personalizzare le impostazioni della finestra di dialogo, combinati usando l'operatore OR bit per bit. Ad esempio, il flag PD_ALLPAGES imposta l'intervallo di stampa predefinite per tutte le pagine del documento. Vedere le [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa) struttura nel SDK di Windows per altre informazioni su questi flag.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo.

### <a name="remarks"></a>Note

Questa funzione membro crea solo l'oggetto. Usare il `DoModal` funzione membro per visualizzare la finestra di dialogo.

##  <a name="createprinterdc"></a>  CPrintDialogEx::CreatePrinterDC

Crea un contesto di periferica (DC) della stampante dal [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture.

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Handle al contesto di dispositivo stampante appena creato.

### <a name="remarks"></a>Note

Il controller di dominio restituito viene archiviato nel `hDC` appartenente [m_pdex](#m_pdex).

Si presuppone che il controller di dominio sia il controller di dominio la stampante corrente e qualsiasi altro ottenuto in precedenza stampante che i controller di dominio devono essere eliminati. Questa funzione può essere chiamata e il controller di dominio risultante utilizzato, senza mai visualizzare la finestra di dialogo di stampa.

##  <a name="domodal"></a>  CPrintDialogEx::DoModal

Chiamare questa funzione per visualizzare la finestra delle proprietà di stampa Windows e consentire all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, intervallo di pagine, e se devono essere collazionate copie.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

INT_PTR il valore restituito è effettivamente un HRESULT. Nella sezione Return Values [PrintDlgEx](https://msdn.microsoft.com/library/windows/desktop/ms646942) nel SDK di Windows.

### <a name="remarks"></a>Note

Se si desidera inizializzare le varie opzioni di finestra di dialogo Stampa impostando i membri del `m_pdex` struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Dopo aver chiamato `DoModal`, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input di informazioni dall'utente nella finestra di dialogo.

Se viene utilizzato il flag PD_RETURNDC quando si chiama `DoModal`, verrà restituita una controller di dominio della stampante il `hDC` membro del [m_pdex](#m_pdex). Questo controller di dominio devono essere liberati con una chiamata a [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) dal chiamante di `CPrintDialogEx`.

##  <a name="getcopies"></a>  CPrintDialogEx::GetCopies

Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il numero di copie richiesto.

```
int GetCopies() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di copie richiesto.

##  <a name="getdefaults"></a>  CPrintDialogEx::GetDefaults

Chiamare questa funzione per recuperare le impostazioni predefinite di dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.

```
BOOL GetDefaults();
```

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo, in caso contrario, FALSE.

### <a name="remarks"></a>Note

Crea un contesto di periferica (DC) della stampante dal [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture.

`GetDefaults` non viene visualizzata la finestra delle proprietà di stampa. Invece, viene impostato il `hDevNames` e `hDevMode` i membri del [m_pdex](#m_pdex) per gli handle per il [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture che vengono inizializzate per il stampante predefinita di sistema. Entrambe `hDevNames` e `hDevMode` devono essere NULL o `GetDefaults` ha esito negativo.

Se è impostato il flag PD_RETURNDC, questa funzione non solo restituirà `hDevNames` e `hDevMode` (che si trova `m_pdex.hDevNames` e `m_pdex.hDevMode`) al chiamante, ma restituirà anche una controller di dominio della stampante in `m_pdex.hDC`. È responsabilità del chiamante per eliminare il controller di dominio della stampante e chiamare il Windows [GlobalFree](/windows/desktop/api/winbase/nf-winbase-globalfree) funzione sugli handle quando si usa più il `CPrintDialogEx` oggetto.

##  <a name="getdevicename"></a>  CPrintDialogEx::GetDeviceName

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata oppure, dopo aver chiamato [GetDefaults](#getdefaults) per recuperare il nome della stampante predefinita.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della stampante attualmente selezionata.

### <a name="remarks"></a>Note

Usare un puntatore per il `CString` oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

##  <a name="getdevmode"></a>  CPrintDialogEx::GetDevMode

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) oppure [GetDefaults](#getdefaults) per recuperare informazioni sul dispositivo di stampa.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Il [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) struttura dei dati, che contiene informazioni sull'inizializzazione di dispositivi e l'ambiente di un driver di stampa. È necessario sbloccare la memoria utilizzata da questa struttura con il Windows [GlobalUnlock](/windows/desktop/api/winbase/nf-winbase-globalunlock) funzione, che è descritti nel SDK di Windows.

##  <a name="getdrivername"></a>  CPrintDialogEx::GetDriverName

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) oppure [GetDefaults](#getdefaults) per recuperare il nome del driver di dispositivo stampante definito dal sistema.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` specificando il nome del driver definiti dal sistema.

### <a name="remarks"></a>Note

Usare un puntatore per il `CString` oggetto restituito da `GetDriverName` come valore di *lpszDriverName* in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

##  <a name="getportname"></a>  CPrintDialogEx::GetPortName

Chiamare questa funzione dopo la chiamata [DoModal](#domodal) oppure [GetDefaults](#getdefaults) per recuperare il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della porta stampante attualmente selezionata.

##  <a name="getprinterdc"></a>  CPrintDialogEx::GetPrinterDC

Restituisce un handle al contesto di dispositivo stampante.

```
HDC GetPrinterDC() const;
```

### <a name="return-value"></a>Valore restituito

Un handle al contesto di dispositivo stampante.

### <a name="remarks"></a>Note

È necessario chiamare il Windows [DeleteDC](/windows/desktop/api/wingdi/nf-wingdi-deletedc) (funzione) per eliminare il contesto di dispositivo al termine utilizzarlo.

##  <a name="m_pdex"></a>  CPrintDialogEx::m_pdex

Struttura PRINTDLGEX i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.

```
PRINTDLGEX m_pdex;
```

### <a name="remarks"></a>Note

Dopo la costruzione di un `CPrintDialogEx` dell'oggetto, è possibile usare `m_pdex` per impostare i vari aspetti della finestra di dialogo prima di chiamare le [DoModal](#domodal) funzione membro. Per altre informazioni sul `m_pdex` struttura, vedere [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa) nel SDK di Windows.

Se si modifica il `m_pdex` membro dati direttamente, si eseguirà l'override di qualsiasi comportamento predefinito.

##  <a name="printall"></a>  CPrintDialogEx::PrintAll

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se stampare tutte le pagine del documento.

```
BOOL PrintAll() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se tutte le pagine del documento devono essere stampate; in caso contrario, FALSE.

##  <a name="printcollate"></a>  CPrintDialogEx::PrintCollate

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se la stampante deve collate stampate tutte le copie del documento.

```
BOOL PrintCollate() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se l'utente seleziona la casella di controllo collate nella finestra di dialogo; in caso contrario, FALSE.

##  <a name="printcurrentpage"></a>  CPrintDialogEx::PrintCurrentPage

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se si desidera stampare la pagina corrente nel documento.

```
BOOL PrintCurrentPage() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se **stampa pagina corrente** è selezionato nella finestra di dialogo Stampa; in caso contrario, FALSE.

##  <a name="printrange"></a>  CPrintDialogEx::PrintRange

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se eseguire solo un intervallo di pagine nel documento di stampa.

```
BOOL PrintRange() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se solo un intervallo di pagine nel documento devono essere stampate; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Gli intervalli di pagine specificato possono essere determinati dagli [m_pdex](#m_pdex) (vedere `nPageRanges`, `nMaxPageRanges`, e `lpPageRanges` nel [PRINTDLGEX](/windows/desktop/api/commdlg/ns-commdlg-tagpdexa) struttura nel SDK di Windows).

##  <a name="printselection"></a>  CPrintDialogEx::PrintSelection

Chiamare questa funzione dopo la chiamata `DoModal` per determinare se visualizzare solo gli elementi attualmente selezionati.

```
BOOL PrintSelection() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se solo gli elementi selezionati devono essere stampate; in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
