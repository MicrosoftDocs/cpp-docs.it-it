---
title: Classe CKeyboardManager
ms.date: 11/04/2016
f1_keywords:
- CKeyboardManager
- AFXKEYBOARDMANAGER/CKeyboardManager
- AFXKEYBOARDMANAGER/CKeyboardManager::CKeyboardManager
- AFXKEYBOARDMANAGER/CKeyboardManager::CleanUp
- AFXKEYBOARDMANAGER/CKeyboardManager::FindDefaultAccelerator
- AFXKEYBOARDMANAGER/CKeyboardManager::IsKeyHandled
- AFXKEYBOARDMANAGER/CKeyboardManager::IsKeyPrintable
- AFXKEYBOARDMANAGER/CKeyboardManager::IsShowAllAccelerators
- AFXKEYBOARDMANAGER/CKeyboardManager::LoadState
- AFXKEYBOARDMANAGER/CKeyboardManager::ResetAll
- AFXKEYBOARDMANAGER/CKeyboardManager::SaveState
- AFXKEYBOARDMANAGER/CKeyboardManager::ShowAllAccelerators
- AFXKEYBOARDMANAGER/CKeyboardManager::TranslateCharToUpper
- AFXKEYBOARDMANAGER/CKeyboardManager::UpdateAccelTable
helpviewer_keywords:
- CKeyboardManager [MFC], CKeyboardManager
- CKeyboardManager [MFC], CleanUp
- CKeyboardManager [MFC], FindDefaultAccelerator
- CKeyboardManager [MFC], IsKeyHandled
- CKeyboardManager [MFC], IsKeyPrintable
- CKeyboardManager [MFC], IsShowAllAccelerators
- CKeyboardManager [MFC], LoadState
- CKeyboardManager [MFC], ResetAll
- CKeyboardManager [MFC], SaveState
- CKeyboardManager [MFC], ShowAllAccelerators
- CKeyboardManager [MFC], TranslateCharToUpper
- CKeyboardManager [MFC], UpdateAccelTable
ms.assetid: 4809ece6-89df-4479-8b53-9bf476ee107b
ms.openlocfilehash: e67bbb18b6a87edfaa4bc4c410ec28eb613ed51d
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841493"
---
# <a name="ckeyboardmanager-class"></a>Classe CKeyboardManager

Gestisce le tabelle di tasti di scelta rapida per la finestra cornice principale e le finestre cornice figlio.

## <a name="syntax"></a>Sintassi

```
class CKeyboardManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|-|-|
|[CKeyboardManager:: CKeyboardManager](#ckeyboardmanager)|Costruisce un oggetto `CKeyboardManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|-|-|
|[CKeyboardManager:: CleanUp](#cleanup)|Cancella le tabelle dei tasti di scelta rapida.|
|[CKeyboardManager:: FindDefaultAccelerator](#finddefaultaccelerator)|Recupera il tasto di scelta rapida predefinito per il comando e la finestra specificati.|
|[CKeyboardManager:: IsKeyHandled](#iskeyhandled)|Determina se una chiave viene gestita dalla tabella dei tasti di scelta rapida.|
|[CKeyboardManager:: IsKeyPrintable](#iskeyprintable)|Indica se un carattere è stampabile.|
|[CKeyboardManager:: IsShowAllAccelerators](#isshowallaccelerators)|Indica se i menu visualizzano tutti i tasti di scelta rapida per un comando o solo il tasto di scelta rapida predefinito.|
|[CKeyboardManager:: LoadState](#loadstate)|Carica le tabelle dei tasti di scelta rapida dal registro di sistema di Windows.|
|[CKeyboardManager:: ResetAll](#resetall)|Ricarica le tabelle dei tasti di scelta rapida dalla risorsa dell'applicazione.|
|[CKeyboardManager:: SaveState](#savestate)|Salva le tabelle dei tasti di scelta rapida nel registro di sistema di Windows.|
|[CKeyboardManager:: ShowAllAccelerators](#showallaccelerators)|Specifica se il Framework Visualizza tutti i tasti di scelta rapida per tutti i comandi o un singolo tasto di scelta rapida per ogni comando. Questo metodo non influisce sui comandi che hanno solo un tasto di scelta rapida associato.|
|[CKeyboardManager:: TranslateCharToUpper](#translatechartoupper)|Converte un carattere nel relativo registro superiore.|
|[CKeyboardManager:: UpdateAccelTable](#updateacceltable)|Aggiorna una tabella dei tasti di scelta rapida con una nuova tabella dei tasti di scelta rapida.|

## <a name="remarks"></a>Osservazioni

I membri di questa classe consentono di salvare e caricare le tabelle dei tasti di scelta rapida nel registro di sistema di Windows, utilizzare un modello per aggiornare le tabelle dei tasti scorciatoie e trovare il tasto di scelta rapida predefinito per un comando in una finestra cornice. Inoltre, l' `CKeyboardManager` oggetto consente di controllare la modalità di visualizzazione dei tasti di scelta rapida per l'utente.

Non è consigliabile creare `CKeyboardManager` manualmente un oggetto. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx:: InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore al gestore della tastiera per l'applicazione, chiamare [CWinAppEx:: GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CKeyboardManager` oggetto da una `CWinAppEx` classe e come visualizzare tutti i tasti di scelta rapida associati ai comandi di menu. Questo frammento di codice fa parte dell' [esempio di pagine personalizzate](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#5](../../mfc/reference/codesnippet/cpp/ckeyboardmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxkeyboardmanager. h

## <a name="ckeyboardmanagerckeyboardmanager"></a><a name="ckeyboardmanager"></a> CKeyboardManager:: CKeyboardManager

Costruisce un oggetto `CKeyboardManager`.

```
CKeyboardManager();
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, non è necessario creare direttamente un oggetto `CKeyboardManager` . Per impostazione predefinita, il Framework ne crea uno. Per ottenere un puntatore a `CKeyboardManager` , chiamare [CWinAppEx:: GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager). Se si crea un'operazione manualmente, è necessario inizializzarla con il metodo [CWinAppEx:: InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager).

## <a name="ckeyboardmanagercleanup"></a><a name="cleanup"></a> CKeyboardManager:: CleanUp

Libera le `CKeyboardManager` risorse e cancella tutti i mapping dei tasti di scelta rapida.

```
static void CleanUp();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui tasti di scelta rapida, vedere [personalizzazione della tastiera e del mouse](../../mfc/keyboard-and-mouse-customization.md).

Non è necessario chiamare questa funzione quando l'applicazione viene chiusa perché il Framework lo chiama automaticamente durante la chiusura dell'applicazione.

## <a name="ckeyboardmanagerfinddefaultaccelerator"></a><a name="finddefaultaccelerator"></a> CKeyboardManager:: FindDefaultAccelerator

Recupera il tasto di scelta rapida predefinito per il comando e la finestra specificati.

```
static BOOL FindDefaultAccelerator(
    UINT uiCmd,
    CString& str,
    CFrameWnd* pWndFrame,
    BOOL bIsDefaultFrame);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID di comando.

*Str*<br/>
[out] Riferimento a un oggetto `CString`.

*pWndFrame*<br/>
in Puntatore a una finestra cornice.

*bIsDefaultFrame*<br/>
in Specifica se la finestra cornice è la finestra cornice predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene trovato il collegamento. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questo metodo cerca il comando specificato da *uiCmd* e recupera il tasto di scelta rapida predefinito. Il metodo accetta quindi la stringa associata a questo tasto di scelta rapida e scrive il valore nel parametro *Str* .

## <a name="ckeyboardmanageriskeyhandled"></a><a name="iskeyhandled"></a> CKeyboardManager:: IsKeyHandled

Determina se la chiave specificata viene gestita dalla [classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).

```
static BOOL __stdcall IsKeyHandled(
    WORD nKey,
    BYTE fVirt,
    CFrameWnd* pWndFrame,
    BOOL bIsDefaultFrame);
```

### <a name="parameters"></a>Parametri

*nPer*\
in Chiave da verificare.

*fVirt*\
in Specifica il comportamento del tasto di scelta rapida. Per un elenco di valori possibili, vedere la pagina relativa alla [struttura di Accel](/windows/win32/api/winuser/ns-winuser-accel).

*pWndFrame*\
in Una finestra cornice. Questo metodo determina se un tasto di scelta rapida viene gestito in questo frame.

*bIsDefaultFrame*\
in Parametro booleano che indica se *pWndFrame* è la finestra cornice predefinita.

### <a name="return-value"></a>Valore restituito

TRUE se il tasto di scelta rapida è gestito. FALSE se la chiave non è gestita o se *pWndFrame* è null.

### <a name="remarks"></a>Osservazioni

I parametri di input devono corrispondere alla voce nella tabella Accelerator sia per *nPer* che per *fVirt* per determinare se un tasto di scelta rapida è gestito in *pWndFrame*.

## <a name="ckeyboardmanageriskeyprintable"></a><a name="iskeyprintable"></a> CKeyboardManager:: IsKeyPrintable

Indica se un carattere è stampabile.

```
static BOOL __stdcall IsKeyPrintable(const UINT nChar);
```

### <a name="parameters"></a>Parametri

*nChar*\
in Carattere verificato da questo metodo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il carattere è stampabile, zero in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se una chiamata a [GetKeyboardState](/windows/win32/api/winuser/nf-winuser-getkeyboardstate) ha esito negativo.

## <a name="ckeyboardmanagerisshowallaccelerators"></a><a name="isshowallaccelerators"></a> CKeyboardManager:: IsShowAllAccelerators

Indica se i menu visualizzano tutti i tasti di scelta rapida associati ai comandi di menu o solo i tasti di scelta rapida predefiniti.

```
static BOOL IsShowAllAccelerators();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'applicazione elenca tutti i tasti di scelta rapida per i comandi di menu; 0 se l'applicazione Visualizza solo i tasti di scelta rapida predefiniti.

### <a name="remarks"></a>Osservazioni

Nell'applicazione sono elencati i tasti di scelta rapida per i comandi di menu nella barra dei menu. Usare la funzione [CKeyboardManager:: ShowAllAccelerators](#showallaccelerators) per controllare se l'applicazione elenca tutti i tasti di scelta rapida o solo i tasti di scelta rapida predefiniti.

## <a name="ckeyboardmanagerloadstate"></a><a name="loadstate"></a> CKeyboardManager:: LoadState

Carica le tabelle dei tasti di scelta rapida dal registro di sistema di Windows.

```
BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso del registro di sistema in cui `CKeyboardManager` vengono salvati i dati.

*pDefaultFrame*<br/>
in Puntatore a una finestra cornice da utilizzare come finestra predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato caricato correttamente o 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Se il parametro *lpszProfileName* è null, questo metodo controlla il percorso del registro di sistema predefinito per i `CKeyboardManager` dati. Il percorso predefinito del registro di sistema viene specificato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md). I dati devono essere scritti in precedenza con il metodo [CKeyboardManager:: SaveState](#savestate).

Se non si specifica una finestra predefinita, verrà usata la finestra cornice principale dell'applicazione.

## <a name="ckeyboardmanagerresetall"></a><a name="resetall"></a> CKeyboardManager:: ResetAll

Ricarica le tabelle dei tasti di scelta rapida dalla risorsa dell'applicazione.

```cpp
void ResetAll();
```

### <a name="remarks"></a>Osservazioni

Questa funzione Cancella i collegamenti archiviati nell'istanza di `CKeyboardManager` . Quindi ricarica lo stato del gestore della tastiera dalla risorsa dell'applicazione.

## <a name="ckeyboardmanagersavestate"></a><a name="savestate"></a> CKeyboardManager:: SaveState

Salva le tabelle dei tasti di scelta rapida nel registro di sistema di Windows.

```
BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso del registro di sistema per il salvataggio dello `CKeyboardManager` stato.

*pDefaultFrame*<br/>
in Puntatore a una finestra cornice che diventa la finestra predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato del gestore della tastiera è stato salvato correttamente oppure 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Se il parametro *lpszProfileName* è null, questo metodo scriverà lo `CKeyboardManager` stato nel percorso predefinito specificato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md). Se si specifica un percorso, è possibile caricare i dati in un secondo momento usando il metodo [CKeyboardManager:: LoadState](#loadstate).

Se non si specifica una finestra predefinita, la finestra cornice principale verrà utilizzata come finestra predefinita.

## <a name="ckeyboardmanagershowallaccelerators"></a><a name="showallaccelerators"></a> CKeyboardManager:: ShowAllAccelerators

Mostra tutti i tasti di scelta rapida associati ai comandi di menu.

```
static void ShowAllAccelerators(
    BOOL bShowAll = TRUE,
    LPCTSTR lpszDelimiter = _afxDefaultAcceleratorDelimiter);
```

### <a name="parameters"></a>Parametri

*bShowAll*<br/>
in Se TRUE, verranno visualizzati tutti i tasti di scelta rapida. Se FALSE, verrà visualizzato solo il primo tasto di scelta rapida.

*lpszDelimiter*<br/>
in Stringa da inserire tra i tasti di scelta rapida. Questo delimitatore non ha alcun effetto se viene visualizzato solo un tasto di scelta rapida.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, se a un comando è associato più di un tasto di scelta rapida, verrà visualizzato solo il primo tasto di scelta rapida. Questa funzione consente di elencare tutti i tasti di scelta rapida associati a tutti i comandi.

I tasti di scelta rapida verranno elencati accanto al comando sulla barra dei menu. Se vengono visualizzati tutti i tasti di scelta rapida, la stringa fornita da *lpszDelimiter* separirà i singoli tasti di scelta rapida.

## <a name="ckeyboardmanagertranslatechartoupper"></a><a name="translatechartoupper"></a> CKeyboardManager:: TranslateCharToUpper

Converte un carattere nel relativo registro superiore.

```
static UINT TranslateCharToUpper(const UINT nChar);
```

### <a name="parameters"></a>Parametri

*nChar*<br/>
in Carattere da convertire.

### <a name="return-value"></a>Valore restituito

Carattere che rappresenta il registro superiore del parametro di input.

## <a name="ckeyboardmanagerupdateacceltable"></a><a name="updateacceltable"></a> CKeyboardManager:: UpdateAccelTable

Aggiorna una tabella dei tasti di scelta rapida con una nuova tabella dei tasti di scelta rapida.

```
BOOL UpdateAccelTable(
    CMultiDocTemplate* pTemplate,
    LPACCEL lpAccel,
    int nSize,
    CFrameWnd* pDefaultFrame = NULL);

BOOL UpdateAccelTable(
    CMultiDocTemplate* pTemplate,
    HACCEL hAccelNew,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*pTemplate*<br/>
in Puntatore a un modello di documento.

*lpAccel*<br/>
in Puntatore al nuovo tasto di scelta rapida.

*nSize*<br/>
in Dimensioni della nuova tabella dei collegamenti.

*pDefaultFrame*<br/>
in Puntatore alla finestra cornice predefinita.

*hAccelNew*<br/>
in Handle per la nuova tabella dei collegamenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Usare questa funzione per sostituire la tabella dei collegamenti esistente con i nuovi tasti di scelta rapida per diversi oggetti della finestra cornice. La funzione riceve un modello di documento come parametro per ottenere l'accesso a tutti gli oggetti della finestra cornice connessi al modello di documento specificato.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[CWinAppEx:: InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager)<br/>
[Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)
