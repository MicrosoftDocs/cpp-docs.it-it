---
title: Classe CKeyboardManager | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c705f3da0b4b0681271353f1ce9d9aa2474f09a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46420816"
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
|[CKeyboardManager::CleanUp](#cleanup)|Cancella le tabelle di tasti di scelta rapida.|
|[CKeyboardManager::FindDefaultAccelerator](#finddefaultaccelerator)|Recupera il tasto di scelta rapida predefiniti per il comando specificato e una finestra.|
|[CKeyboardManager::IsKeyHandled](#iskeyhandled)|Determina se una chiave viene gestita dalla tabella di tasti di scelta rapida.|
|[CKeyboardManager::IsKeyPrintable](#iskeyprintable)|Indica se un carattere stampabile.|
|[CKeyboardManager::IsShowAllAccelerators](#isshowallaccelerators)|Indica se i menu mostrano tutti i tasti di scelta rapida per un comando o solo il tasto di scelta rapida predefinito.|
|[CKeyboardManager::LoadState](#loadstate)|Carica le tabelle di tasti di scelta rapida dal Registro di sistema Windows.|
|[CKeyboardManager::ResetAll](#resetall)|Ricarica le tabelle di tasti di scelta rapida dalla risorsa di application.|
|[CKeyboardManager::SaveState](#savestate)|Salva il collegamento tabelle della chiave del Registro di sistema di Windows.|
|[Ckeyboardmanager:: Showallaccelerators](#showallaccelerators)|Specifica se il framework Visualizza tutti i tasti di scelta rapida per tutti i comandi o un tasto di scelta rapida singolo per ogni comando. Questo metodo non influenza i comandi che hanno un solo tasto di scelta rapida.|
|[CKeyboardManager::TranslateCharToUpper](#translatechartoupper)|Converte un carattere per il proprio registro superiore.|
|[CKeyboardManager::UpdateAccelTable](#updateacceltable)|Aggiorna una tabella di tasti di scelta rapida con una nuova tabella di tasti di scelta rapida.|

## <a name="remarks"></a>Note

I membri di questa classe consentono di salvare e caricare tabelle di tasti di scelta rapida nel Registro di sistema di Windows, usare un modello per aggiornare le tabelle di tasti di scelta rapida e trovare il tasto di scelta rapida predefiniti per un comando in una finestra cornice. Inoltre, il `CKeyboardManager` oggetto consente di controllare la modalità di visualizzazione dei tasti di scelta rapida per l'utente.

Non è necessario creare un `CKeyboardManager` oggetto manualmente. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore al gestore della tastiera per l'applicazione, chiamare [CWinAppEx::GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CKeyboardManager` dell'oggetto da un `CWinAppEx` classe e su come visualizzare tutti i tasti di scelta rapida associati con i comandi di menu. Questo frammento di codice fa parte il [esempio di pagine personalizzate](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#5](../../mfc/reference/codesnippet/cpp/ckeyboardmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxkeyboardmanager.h

##  <a name="ckeyboardmanager"></a>  CKeyboardManager::CKeyboardManager

Costruisce un oggetto `CKeyboardManager`.

```
CKeyboardManager();
```

### <a name="remarks"></a>Note

Nella maggior parte dei casi, non è necessario creare un `CKeyboardManager` direttamente. Per impostazione predefinita, il framework crea uno automaticamente. Per ottenere un puntatore per il `CKeyboardManager`, chiamare [CWinAppEx::GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager). Se si crea uno manualmente, è necessario inizializzarlo con il metodo [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager).

##  <a name="cleanup"></a>  CKeyboardManager::CleanUp

Libera la `CKeyboardManager` risorse e Cancella tutti i mapping dei tasti di scelta rapida.

```
static void CleanUp();
```

### <a name="remarks"></a>Note

Per altre informazioni sui tasti di scelta rapida, vedere [personalizzazione di tastiera e Mouse](../../mfc/keyboard-and-mouse-customization.md).

Non è necessario chiamare questa funzione quando viene chiusa l'applicazione perché il framework chiama automaticamente durante la chiusura dell'applicazione.

##  <a name="finddefaultaccelerator"></a>  CKeyboardManager::FindDefaultAccelerator

Recupera il tasto di scelta rapida predefiniti per il comando specificato e una finestra.

```
static BOOL FindDefaultAccelerator(
    UINT uiCmd,
    CString& str,
    CFrameWnd* pWndFrame,
    BOOL bIsDefaultFrame);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] ID del comando.

*str*<br/>
[out] Un riferimento a un `CString` oggetto.

*pWndFrame*<br/>
[in] Puntatore a una finestra cornice.

*bIsDefaultFrame*<br/>
[in] Specifica se la finestra cornice è la finestra cornice predefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene trovato lo scelta rapida. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo cerca il comando specificato dalla *uiCmd* e recupera il tasto di scelta rapida predefinito. Quindi il metodo accetta la stringa associata a questo tasto di scelta rapida e scrive il valore per il *str* parametro.

##  <a name="iskeyhandled"></a>  CKeyboardManager::IsKeyHandled

Determina se la chiave specificata viene gestita mediante il [classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).

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
|*nKey*|[in] Chiave da controllare.|
|*fVirt*|[in] Specifica il comportamento del tasto di scelta rapida. Per un elenco di valori possibili, vedere [accelerazione struttura](/windows/desktop/api/winuser/ns-winuser-tagaccel).|
|*pWndFrame*|[in] Una finestra cornice. Questo metodo determina se un tasto di scelta rapida viene gestito in questo frame.|
|*bIsDefaultFrame*|[in] Un parametro booleano che indica se *pWndFrame* è la finestra cornice predefinito.|

### <a name="return-value"></a>Valore restituito

TRUE se il tasto di scelta rapida viene gestito. FALSE se la chiave non viene gestita oppure se *pWndFrame* è NULL.

### <a name="remarks"></a>Note

I parametri di input devono corrispondere alla voce il tasto di scelta rapida tabella sia per *nKey* e *fVirt* per determinare se un tasto di scelta rapida viene gestito nel *pWndFrame*.

##  <a name="iskeyprintable"></a>  CKeyboardManager::IsKeyPrintable

Indica se un carattere stampabile.

```
static BOOL __stdcall IsKeyPrintable(const UINT nChar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*NChar*|[in] Il carattere che questo metodo controlla.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se il carattere stampabile, zero in caso contrario.

### <a name="remarks"></a>Note

Questo metodo non riesce se una chiamata a [GetKeyboardState](https://msdn.microsoft.com/library/windows/desktop/ms646299) ha esito negativo.

##  <a name="isshowallaccelerators"></a>  CKeyboardManager::IsShowAllAccelerators

Indica se i menu mostrano tutti i tasti di scelta rapida associati con i comandi di menu o solo i tasti di scelta rapida predefiniti.

```
static BOOL IsShowAllAccelerators();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'applicazione sono elencati tutti i tasti di scelta rapida per i comandi di menu. 0 se l'applicazione visualizza solo i tasti di scelta rapida predefinito.

### <a name="remarks"></a>Note

L'applicazione sono elencati i tasti di scelta rapida per i comandi di menu nella barra dei menu. Utilizzare la funzione [ckeyboardmanager:: Showallaccelerators](#showallaccelerators) per controllare se l'applicazione sono elencati tutti i tasti di scelta rapida o solo i tasti di scelta rapida predefinito.

##  <a name="loadstate"></a>  CKeyboardManager::LoadState

Carica le tabelle di tasti di scelta rapida dal Registro di sistema Windows.

```
BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Il percorso del Registro di sistema in cui `CKeyboardManager` i dati vengono salvati.

*pDefaultFrame*<br/>
[in] Puntatore a una finestra cornice da utilizzare come la finestra predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo stato è stato caricato correttamente oppure 0 in caso contrario.

### <a name="remarks"></a>Note

Se il *lpszProfileName* parametro è NULL, questo metodo controlla il percorso del Registro di sistema predefinito per `CKeyboardManager` dei dati. Viene specificato il percorso del Registro di sistema predefinito per il [classe CWinAppEx](../../mfc/reference/cwinappex-class.md). I dati devono essere scritti in precedenza con il metodo [CKeyboardManager::SaveState](#savestate).

Se non si specifica una finestra predefinito, verrà utilizzata la finestra cornice principale dell'applicazione.

##  <a name="resetall"></a>  CKeyboardManager::ResetAll

Ricarica le tabelle di tasti di scelta rapida dalla risorsa di application.

```
void ResetAll();
```

### <a name="remarks"></a>Note

Questa funzione Cancella i tasti di scelta rapida archiviati nel `CKeyboardManager` istanza. Verrà quindi ricaricare lo stato della gestione della tastiera dalla risorsa di applicazione.

##  <a name="savestate"></a>  CKeyboardManager::SaveState

Salva il collegamento tabelle della chiave del Registro di sistema di Windows.

```
BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    CFrameWnd* pDefaultFrame = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Il percorso del Registro di sistema per il salvataggio di `CKeyboardManager` dello stato.

*pDefaultFrame*<br/>
[in] Puntatore a una finestra cornice che diventa la finestra predefinita.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato salvato lo stato di gestione della tastiera, oppure 0 in caso contrario.

### <a name="remarks"></a>Note

Se il *lpszProfileName* parametro è NULL, questo metodo scriverà il `CKeyboardManager` allo stato nel percorso predefinito specificato per il [classe CWinAppEx](../../mfc/reference/cwinappex-class.md). Se si specifica un percorso, è possibile caricare i dati in un secondo momento usando il metodo [CKeyboardManager::LoadState](#loadstate).

Se non si specifica una finestra predefinita, la finestra cornice principale verrà considerata come la finestra predefinita.

##  <a name="showallaccelerators"></a>  Ckeyboardmanager:: Showallaccelerators

Mostra tutti i tasti di scelta rapida associati con i comandi di menu.

```
static void ShowAllAccelerators(
    BOOL bShowAll = TRUE,
    LPCTSTR lpszDelimiter = _afxDefaultAcceleratorDelimiter);
```

### <a name="parameters"></a>Parametri

*bShowAll*<br/>
[in] Se TRUE, tutti i tasti di scelta rapida verranno visualizzate. Se FALSE, verrà visualizzato solo il primo tasto di scelta rapida.

*lpszDelimiter*<br/>
[in] Stringa da inserire tra i tasti di scelta rapida. In questo delimitatore non ha alcun effetto se un tasto di scelta rapida viene visualizzato solo una.

### <a name="remarks"></a>Note

Per impostazione predefinita, se un comando contiene più di un tasto di scelta rapida associato, verrà visualizzato solo il primo tasto di scelta rapida. Questa funzione consente di elencare tutti i tasti di scelta rapida associati a tutti i comandi.

Verranno elencati i tasti di scelta rapida accanto al comando sulla barra dei menu. Se vengono visualizzate tutti i tasti di scelta rapida, la stringa fornita dal *lpszDelimiter* separeranno tasti di scelta rapida singoli.

##  <a name="translatechartoupper"></a>  CKeyboardManager::TranslateCharToUpper

Converte un carattere per il proprio registro superiore.

```
static UINT TranslateCharToUpper(const UINT nChar);
```

### <a name="parameters"></a>Parametri

*NChar*<br/>
[in] Carattere da convertire.

### <a name="return-value"></a>Valore restituito

Il carattere che è il registro superiore del parametro di input.

##  <a name="updateacceltable"></a>  CKeyboardManager::UpdateAccelTable

Aggiorna una tabella di tasti di scelta rapida con una nuova tabella di tasti di scelta rapida.

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
[in] Puntatore a un modello di documento.

*lpAccel*<br/>
[in] Puntatore al nuovo tasto di scelta rapida.

*nSize*<br/>
[in] Le dimensioni della nuova tabella di scelta rapida.

*pDefaultFrame*<br/>
[in] Puntatore alla finestra cornice predefinito.

*hAccelNew*<br/>
[in] Handle per la nuova tabella di scelta rapida.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Utilizzare questa funzione per sostituire la tabella di collegamento esistente con nuovi tasti di scelta rapida per diversi oggetti della finestra cornice. La funzione riceve un modello di documento come parametro per ottenere l'accesso a tutti gli oggetti finestra frame connessi al modello di documento specificato.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)<br/>
[CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager)<br/>
[Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)



