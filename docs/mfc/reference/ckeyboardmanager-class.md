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
ms.openlocfilehash: 5d0f544943cc8584960bb2668ee7ce326547e2fa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372321"
---
# <a name="ckeyboardmanager-class"></a>Classe CKeyboardManager

Gestisce le tabelle di tasti di scelta rapida per la finestra cornice principale e le finestre cornice figlio.

## <a name="syntax"></a>Sintassi

```
class CKeyboardManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CKeyboardManager::CKeyboardManager](#ckeyboardmanager)|Costruisce un oggetto `CKeyboardManager`.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CKeyboardManager::Pulizia](#cleanup)|Cancella le tabelle dei tasti di scelta rapida.|
|[CKeyboardManager::FindDefaultAccelerator](#finddefaultaccelerator)|Recupera il tasto di scelta rapida predefinito per il comando e la finestra specificati.|
|[CKeyboardManager::IsKeyHandled](#iskeyhandled)|Determina se un tasto viene gestito dalla tabella dei tasti di scelta rapida.|
|[CKeyboardManager::IsKeyPrintable](#iskeyprintable)|Indica se un carattere è stampabile.|
|[CKeyboardManager::IsShowAllAccelerators](#isshowallaccelerators)|Indica se i menu mostrano tutti i tasti di scelta rapida per un comando o solo il tasto di scelta rapida predefinito.|
|[CKeyboardManager::LoadState](#loadstate)|Carica le tabelle dei tasti di scelta rapida dal Registro di sistema di Windows.|
|[CKeyboardManager::ResetAll](#resetall)|Ricarica le tabelle dei tasti di scelta rapida dalla risorsa dell'applicazione.|
|[CKeyboardManager::SaveState](#savestate)|Salva le tabelle dei tasti di scelta rapida nel Registro di sistema di Windows.|
|[CKeyboardManager::ShowAllAccelerators](#showallaccelerators)|Specifica se il framework visualizza tutti i tasti di scelta rapida per tutti i comandi o un singolo tasto di scelta rapida per ogni comando. Questo metodo non influisce sui comandi che dispongono di un solo tasto di scelta rapida associato.|
|[CKeyboardManager::TranslateCharToUpper](#translatechartoupper)|Converte un carattere nel registro superiore.|
|[CKeyboardManager::UpdateAccelTable](#updateacceltable)|Aggiorna una tabella dei tasti di scelta rapida con una nuova tabella dei tasti di scelta rapida.|

## <a name="remarks"></a>Osservazioni

I membri di questa classe consentono di salvare e caricare le tabelle dei tasti di scelta rapida nel Registro di sistema di Windows, utilizzare un modello per aggiornare le tabelle delle chiavi di scelta rapida e trovare il tasto di scelta rapida predefinito per un comando in una finestra cornice. Inoltre, l'oggetto `CKeyboardManager` consente di controllare la modalità di visualizzazione dei tasti di scelta rapida all'utente.

Non creare un `CKeyboardManager` oggetto manualmente. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore al gestore della tastiera per l'applicazione, chiamare [CWinAppEx::GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CKeyboardManager` recuperare `CWinAppEx` un puntatore a un oggetto da una classe e come visualizzare tutti i tasti di scelta rapida associati ai comandi di menu. Questo frammento di codice fa parte [dell'esempio Pagine personalizzate](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#5](../../mfc/reference/codesnippet/cpp/ckeyboardmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxkeyboardmanager.h

## <a name="ckeyboardmanagerckeyboardmanager"></a><a name="ckeyboardmanager"></a>CKeyboardManager::CKeyboardManager

Costruisce un oggetto `CKeyboardManager`.

```
CKeyboardManager();
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, `CKeyboardManager` non è necessario creare direttamente un oggetto . Per impostazione predefinita, il framework ne crea uno automaticamente. Per ottenere un `CKeyboardManager`puntatore a , chiamare [CWinAppEx::GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager). Se si crea uno manualmente, è necessario inizializzarlo con il metodo [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager).

## <a name="ckeyboardmanagercleanup"></a><a name="cleanup"></a>CKeyboardManager::Pulizia

Libera le `CKeyboardManager` risorse e cancella tutti i mapping dei tasti di scelta rapida.

```
static void CleanUp();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui tasti di scelta rapida, vedere [Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md).

Non è necessario chiamare questa funzione alla chiusura dell'applicazione perché il framework la chiama automaticamente durante l'uscita dall'applicazione.

## <a name="ckeyboardmanagerfinddefaultaccelerator"></a><a name="finddefaultaccelerator"></a>CKeyboardManager::FindDefaultAccelerator

Recupera il tasto di scelta rapida predefinito per il comando e la finestra specificati.

```
static BOOL FindDefaultAccelerator(
    UINT uiCmd,
    CString& str,
    CFrameWnd* pWndFrame,
    BOOL bIsDefaultFrame);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID del comando.

*Str*<br/>
[out] Riferimento a un oggetto `CString`.

*pWndFrame (incorniciato)*<br/>
[in] Puntatore a una finestra cornice.

*bIsDefaultFrame (fotogramma)*<br/>
[in] Specifica se la finestra cornice è la finestra cornice predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il collegamento viene trovato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo cerca il comando specificato da *uiCmd* e recupera il tasto di scelta rapida predefinito. Quindi il metodo accetta la stringa associata a questo tasto di scelta rapida e scrive il valore *nel* str parametro.

## <a name="ckeyboardmanageriskeyhandled"></a><a name="iskeyhandled"></a>CKeyboardManager::IsKeyHandled

Determina se la chiave specificata viene gestita dalla [classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).

```
static BOOL __stdcall IsKeyHandled(
    WORD nKey,
    BYTE fVirt,
    CFrameWnd* pWndFrame,
    BOOL bIsDefaultFrame);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*nChiave*|[in] Chiave da controllare.|
|*FVirt (inutile*|[in] Specifica il comportamento del tasto di scelta rapida. Per un elenco dei valori possibili, vedere [Struttura ACCEL](/windows/win32/api/winuser/ns-winuser-accel).|
|*pWndFrame (incorniciato)*|[in] Una finestra cornice. Questo metodo determina se un tasto di scelta rapida viene gestito in questo fotogramma.|
|*bIsDefaultFrame (fotogramma)*|[in] Parametro booleano che indica se *pWndFrame* è la finestra cornice predefinita.|

### <a name="return-value"></a>Valore restituito

TRUESe il tasto di scelta rapida viene gestito. FALSE se la chiave non viene gestita o se *pWndFrame* è NULL.

### <a name="remarks"></a>Osservazioni

I parametri di input devono corrispondere alla voce nella tabella dei tasti di scelta rapida sia per *nKey* che per *fVirt* per determinare se un tasto di scelta rapida viene gestito in *pWndFrame*.

## <a name="ckeyboardmanageriskeyprintable"></a><a name="iskeyprintable"></a>CKeyboardManager::IsKeyPrintable

Indica se un carattere è stampabile.

```
static BOOL __stdcall IsKeyPrintable(const UINT nChar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*Nchar*|[in] Carattere controllato da questo metodo.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se il carattere è stampabile, zero in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se una chiamata a [GetKeyboardState](/windows/win32/api/winuser/nf-winuser-getkeyboardstate) ha esito negativo.

## <a name="ckeyboardmanagerisshowallaccelerators"></a><a name="isshowallaccelerators"></a>CKeyboardManager::IsShowAllAccelerators

Indica se i menu mostrano tutti i tasti di scelta rapida associati ai comandi di menu o solo i tasti di scelta rapida predefiniti.

```
static BOOL IsShowAllAccelerators();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'applicazione elenca tutti i tasti di scelta rapida per i comandi di menu; 0 se l'applicazione visualizza solo i tasti di scelta rapida predefiniti.

### <a name="remarks"></a>Osservazioni

L'applicazione elenca i tasti di scelta rapida per i comandi di menu nella barra dei menu. Utilizzare la funzione [CKeyboardManager::ShowAllAccelerators](#showallaccelerators) per controllare se l'applicazione elenca tutti i tasti di scelta rapida o solo i tasti di scelta rapida predefiniti.

## <a name="ckeyboardmanagerloadstate"></a><a name="loadstate"></a>CKeyboardManager::LoadState

Carica le tabelle dei tasti di scelta rapida dal Registro di sistema di Windows.

```
BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso del `CKeyboardManager` Registro di sistema in cui vengono salvati i dati.

*pDefaultFrame (fotogramma in lingua predefinita)*<br/>
[in] Puntatore a una finestra cornice da utilizzare come finestra predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato caricato correttamente o 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Se il *lpszProfileName* parametro è NULL, questo `CKeyboardManager` metodo controlla il percorso del Registro di sistema predefinito per i dati. Il percorso predefinito del Registro di sistema è specificato dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md). I dati devono essere scritti in precedenza con il metodo [CKeyboardManager::SaveState](#savestate).

Se non si specifica una finestra predefinita, verrà utilizzata la finestra cornice principale dell'applicazione.

## <a name="ckeyboardmanagerresetall"></a><a name="resetall"></a>CKeyboardManager::ResetAll

Ricarica le tabelle dei tasti di scelta rapida dalla risorsa dell'applicazione.

```
void ResetAll();
```

### <a name="remarks"></a>Osservazioni

Questa funzione cancella i collegamenti `CKeyboardManager` memorizzati nell'istanza. Quindi verrà ricaricato lo stato del gestore della tastiera dalla risorsa dell'applicazione.

## <a name="ckeyboardmanagersavestate"></a><a name="savestate"></a>CKeyboardManager::SaveState

Salva le tabelle dei tasti di scelta rapida nel Registro di sistema di Windows.

```
BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso del Registro `CKeyboardManager` di sistema per il salvataggio dello stato.

*pDefaultFrame (fotogramma in lingua predefinita)*<br/>
[in] Puntatore a una finestra cornice che diventa la finestra predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato di gestione della tastiera è stato salvato correttamente o 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Se il *lpszProfileName* parametro è NULL, questo metodo scriverà `CKeyboardManager` lo stato nella posizione predefinita specificata dal [CWinAppEx classe](../../mfc/reference/cwinappex-class.md). Se si specifica un percorso, è possibile caricare i dati in un secondo momento utilizzando il metodo [CKeyboardManager::LoadState](#loadstate).

Se non si specifica una finestra predefinita, la finestra cornice principale verrà utilizzata come finestra predefinita.

## <a name="ckeyboardmanagershowallaccelerators"></a><a name="showallaccelerators"></a>CKeyboardManager::ShowAllAccelerators

Mostra tutti i tasti di scelta rapida associati ai comandi di menu.

```
static void ShowAllAccelerators(
    BOOL bShowAll = TRUE,
    LPCTSTR lpszDelimiter = _afxDefaultAcceleratorDelimiter);
```

### <a name="parameters"></a>Parametri

*bMostraTutto*<br/>
[in] Se TRUE, verranno visualizzati tutti i tasti di scelta rapida. Se FALSE, verrà visualizzato solo il primo tasto di scelta rapida.

*delimitatore lpszDelimiter*<br/>
[in] Stringa da inserire tra i tasti di scelta rapida. Questo delimitatore non ha effetto se viene visualizzato un solo tasto di scelta rapida.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, se a un comando sono associati più tasti di scelta rapida, verrà visualizzato solo il primo tasto di scelta rapida. Questa funzione consente di elencare tutti i tasti di scelta rapida associati a tutti i comandi.

I tasti di scelta rapida verranno elencati accanto al comando nella barra dei menu. Se vengono visualizzati tutti i tasti di scelta rapida, la stringa fornita da *lpszDelimiter* separerà i singoli tasti di scelta rapida.

## <a name="ckeyboardmanagertranslatechartoupper"></a><a name="translatechartoupper"></a>CKeyboardManager::TranslateCharToUpper

Converte un carattere nel registro superiore.

```
static UINT TranslateCharToUpper(const UINT nChar);
```

### <a name="parameters"></a>Parametri

*Nchar*<br/>
[in] Carattere da convertire.

### <a name="return-value"></a>Valore restituito

Carattere che è il registro superiore del parametro di input.

## <a name="ckeyboardmanagerupdateacceltable"></a><a name="updateacceltable"></a>CKeyboardManager::UpdateAccelTable

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

*pModello*<br/>
[in] Puntatore a un modello di documento.

*lpAccel*<br/>
[in] Puntatore al nuovo tasto di scelta rapida.

*nDimensioni*<br/>
[in] Dimensioni della nuova tabella dei collegamenti.

*pDefaultFrame (fotogramma in lingua predefinita)*<br/>
[in] Puntatore alla finestra cornice predefinita.

*hAccelNuovo*<br/>
[in] Handle per la nuova tabella di scelta rapida.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per sostituire la tabella di scelta rapida esistente con nuovi tasti di scelta rapida per diversi oggetti finestra cornice. La funzione riceve un modello di documento come parametro per ottenere l'accesso a tutti gli oggetti finestra cornice connessi al modello di documento specificato.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager)<br/>
[Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)
