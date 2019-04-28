---
title: Classe CFindReplaceDialog
ms.date: 11/04/2016
f1_keywords:
- CFindReplaceDialog
- AFXDLGS/CFindReplaceDialog
- AFXDLGS/CFindReplaceDialog::CFindReplaceDialog
- AFXDLGS/CFindReplaceDialog::Create
- AFXDLGS/CFindReplaceDialog::FindNext
- AFXDLGS/CFindReplaceDialog::GetFindString
- AFXDLGS/CFindReplaceDialog::GetNotifier
- AFXDLGS/CFindReplaceDialog::GetReplaceString
- AFXDLGS/CFindReplaceDialog::IsTerminating
- AFXDLGS/CFindReplaceDialog::MatchCase
- AFXDLGS/CFindReplaceDialog::MatchWholeWord
- AFXDLGS/CFindReplaceDialog::ReplaceAll
- AFXDLGS/CFindReplaceDialog::ReplaceCurrent
- AFXDLGS/CFindReplaceDialog::SearchDown
- AFXDLGS/CFindReplaceDialog::m_fr
helpviewer_keywords:
- CFindReplaceDialog [MFC], CFindReplaceDialog
- CFindReplaceDialog [MFC], Create
- CFindReplaceDialog [MFC], FindNext
- CFindReplaceDialog [MFC], GetFindString
- CFindReplaceDialog [MFC], GetNotifier
- CFindReplaceDialog [MFC], GetReplaceString
- CFindReplaceDialog [MFC], IsTerminating
- CFindReplaceDialog [MFC], MatchCase
- CFindReplaceDialog [MFC], MatchWholeWord
- CFindReplaceDialog [MFC], ReplaceAll
- CFindReplaceDialog [MFC], ReplaceCurrent
- CFindReplaceDialog [MFC], SearchDown
- CFindReplaceDialog [MFC], m_fr
ms.assetid: 610f0b5d-b398-4ef6-8c05-e9d6641e50a8
ms.openlocfilehash: de48d8f495802bdf1c5f69e7a4edc41153c9599f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62206013"
---
# <a name="cfindreplacedialog-class"></a>Classe CFindReplaceDialog

Consente di implementare le finestre di dialogo Trova/Sostituisci stringhe standard nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CFindReplaceDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog)|Chiamare questa funzione per costruire un `CFindReplaceDialog` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog::Create](#create)|Crea e visualizza un `CFindReplaceDialog` nella finestra di dialogo.|
|[CFindReplaceDialog::FindNext](#findnext)|Chiamare questa funzione per determinare se l'utente vuole trovare l'occorrenza successiva della stringa di ricerca.|
|[CFindReplaceDialog::GetFindString](#getfindstring)|Chiamare questa funzione per recuperare la stringa di ricerca corrente.|
|[CFindReplaceDialog::GetNotifier](#getnotifier)|Chiamare questa funzione per recuperare il `FINDREPLACE` struttura nel gestore messaggio registrato.|
|[CFindReplaceDialog::GetReplaceString](#getreplacestring)|Chiamare questa funzione per recuperare la stringa di sostituzione corrente.|
|[CFindReplaceDialog::IsTerminating](#isterminating)|Chiamare questa funzione per determinare se la finestra di dialogo verrà terminato.|
|[CFindReplaceDialog::MatchCase](#matchcase)|Chiamare questa funzione per determinare se l'utente deve corrispondere esattamente al caso della stringa di ricerca.|
|[CFindReplaceDialog::MatchWholeWord](#matchwholeword)|Chiamare questa funzione per determinare se l'utente desidera individuare solo parole intere.|
|[CFindReplaceDialog::ReplaceAll](#replaceall)|Chiamare questa funzione per determinare se si desidera ottenere tutte le occorrenze della stringa da sostituire.|
|[CFindReplaceDialog::ReplaceCurrent](#replacecurrent)|Chiamare questa funzione per determinare se l'utente desidera utilizzare la parola corrente da sostituire.|
|[CFindReplaceDialog::SearchDown](#searchdown)|Chiamare questa funzione per determinare se l'utente desidera utilizzare la ricerca per procedere verso il basso.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog::m_fr](#m_fr)|Una struttura utilizzata per personalizzare un `CFindReplaceDialog` oggetto.|

## <a name="remarks"></a>Note

A differenza di altri Windows finestre di dialogo comuni, `CFindReplaceDialog` gli oggetti sono non modali, che consente agli utenti di interagire con altre finestre mentre si trovano sullo schermo. Esistono due tipi di `CFindReplaceDialog` oggetti: Sono disponibili le finestre di dialogo e finestre di dialogo Trova/Sostituisci. Anche se le finestre di dialogo consentono all'utente di ricerca di input e le stringhe di ricerca e sostituzione, non viene eseguita la ricerca o sostituzione di funzioni. È necessario aggiungerli all'applicazione.

Per costruire un `CFindReplaceDialog` oggetto, usare il costruttore specificato (che non dispone di argomenti). Poiché si tratta di una finestra di dialogo non modale, allocare l'oggetto nell'heap usando la **nuovo** operatore, invece che nello stack.

Una volta una `CFindReplaceDialog` oggetto è stato costruito, è necessario chiamare il [Create](#create) funzione membro per creare e visualizzare la finestra di dialogo.

Usare la [m_fr](#m_fr) struttura per inizializzare la finestra di dialogo prima di chiamare `Create`. Il `m_fr` struttura JE typu [FINDREPLACE](/windows/desktop/api/commdlg/ns-commdlg-tagfindreplacea). Per altre informazioni su questa struttura, vedere il SDK di Windows.

Affinché la finestra padre ricevere una notifica di richieste di ricerca e sostituzione, è necessario utilizzare il Windows [RegisterWindowMessage](/windows/desktop/api/winuser/nf-winuser-registerwindowmessagea) funzione, utilizzare il [ON_REGISTERED_MESSAGE](message-map-macros-mfc.md#on_registered_message) macro della mappa messaggi nel frame finestra che gestisce il messaggio registrato.

È possibile determinare se l'utente ha deciso di terminare la finestra di dialogo con la `IsTerminating` funzione membro.

`CFindReplaceDialog` si basa sul COMMDLG. File DLL che viene fornito con Windows 3.1 e versioni successive.

Per personalizzare la finestra di dialogo, derivare una classe da `CFindReplaceDialog`, offrono un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base.

La funzione hook di personalizzazione non è obbligatorio.

Per altre informazioni sull'uso `CFindReplaceDialog`, vedere [classi di finestra di dialogo comuni](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CFindReplaceDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="cfindreplacedialog"></a>  CFindReplaceDialog::CFindReplaceDialog

Costruisce un oggetto `CFindReplaceDialog`.

```
CFindReplaceDialog();
```

### <a name="remarks"></a>Note

Poiché il `CFindReplaceDialog` oggetto è una finestra di dialogo non modale, è necessario creare nell'heap tramite il **nuovi** operatore.

Durante la distruzione di $, il framework tenta di eseguire un' **elimini** sull'indicatore di misura alla finestra di dialogo. Se è stata creata la finestra di dialogo nello stack, il **ciò** puntatore non esiste e potrebbe causare un comportamento indefinito.

Per ulteriori informazioni sulla costruzione delle `CFindReplaceDialog` oggetti, vedere la [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md) Panoramica. Usare la [CFindReplaceDialog::Create](#create) funzione membro per visualizzare la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#170](../../mfc/codesnippet/cpp/cfindreplacedialog-class_1.cpp)]

##  <a name="create"></a>  CFindReplaceDialog::Create

Crea e visualizza una ricerca o Trova/Sostituisci oggetto finestra di dialogo, in base al valore `bFindDialogOnly`.

```
virtual BOOL Create(
    BOOL bFindDialogOnly,
    LPCTSTR lpszFindWhat,
    LPCTSTR lpszReplaceWith = NULL,
    DWORD dwFlags = FR_DOWN,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*bFindDialogOnly*<br/>
Impostare questo parametro su TRUE per visualizzare un **trovare** nella finestra di dialogo. Impostarla su FALSE per non visualizzare una **Trova/Sostituisci** nella finestra di dialogo.

*lpszFindWhat*<br/>
Puntatore alla stringa di ricerca predefinito quando viene visualizzata la finestra di dialogo. Se NULL, la finestra di dialogo non contiene una stringa di ricerca predefinito.

*lpszReplaceWith*<br/>
Puntatore alla stringa di sostituzione predefinito quando viene visualizzata la finestra di dialogo. Se NULL, la finestra di dialogo non contiene una stringa di sostituzione predefinito.

*dwFlags*<br/>
Uno o più flag che è possibile usare per personalizzare le impostazioni della finestra di dialogo, combinati usando l'operatore OR bit per bit. Il valore predefinito è FR_DOWN, che specifica che la ricerca deve procedere verso il basso. Vedere le [FINDREPLACE](/windows/desktop/api/commdlg/ns-commdlg-tagfindreplacea) struttura nel SDK di Windows per altre informazioni su questi flag.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo. Questa è la finestra che verrà visualizzato il messaggio speciale che indica che è richiesta un'azione Trova/Sostituisci. Se NULL, viene utilizzata la finestra principale dell'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto finestra di dialogo è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Note

Affinché la finestra padre ricevere una notifica di richieste di ricerca e sostituzione, è necessario utilizzare il Windows [RegisterWindowMessage](/windows/desktop/api/winuser/nf-winuser-registerwindowmessagea) funzione il cui valore restituito è un numero di messaggio univoco per l'istanza dell'applicazione. La finestra cornice deve avere una voce della mappa messaggi che dichiara la funzione di callback ( `OnFindReplace` nell'esempio che segue) che gestisce il messaggio registrato. Il frammento di codice seguente è un esempio di come eseguire questa operazione per una classe della finestra cornice denominata `CMyRichEditView`:

[!code-cpp[NVC_MFCDocView#171](../../mfc/codesnippet/cpp/cfindreplacedialog-class_2.h)]

[!code-cpp[NVC_MFCDocView#172](../../mfc/codesnippet/cpp/cfindreplacedialog-class_3.cpp)]

[!code-cpp[NVC_MFCDocView#173](../../mfc/codesnippet/cpp/cfindreplacedialog-class_4.cpp)]

All'interno di `OnFindReplace` funzione, si interpretano le intenzioni dell'utente tramite il [CFindReplaceDialog::FindNext](#findnext) e [CFindReplaceDialog::IsTerminating](#isterminating) metodi e si crea il codice per le operazioni di ricerca e sostituzione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).

##  <a name="findnext"></a>  CFindReplaceDialog::FindNext

Chiamare questa funzione dalla funzione di callback per determinare se l'utente vuole trovare l'occorrenza successiva della stringa di ricerca.

```
BOOL FindNext() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente vuole trovare l'occorrenza successiva della stringa di ricerca; in caso contrario 0.

##  <a name="getfindstring"></a>  CFindReplaceDialog::GetFindString

Chiamare questa funzione dalla funzione di callback per recuperare la stringa predefinita da trovare.

```
CString GetFindString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa predefinita da trovare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]

##  <a name="getnotifier"></a>  CFindReplaceDialog::GetNotifier

Chiamare questa funzione per recuperare un puntatore alla finestra di dialogo Sostituisci corrente.

```
static CFindReplaceDialog* PASCAL GetNotifier(LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*lParam*<br/>
Il *lparam* valore passato alla finestra cornice `OnFindReplace` funzione membro.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra di dialogo corrente.

### <a name="remarks"></a>Note

Deve essere usato all'interno della funzione di callback per accedere alla finestra di dialogo, chiamare il relativo membro, funzioni e l'accesso di `m_fr` struttura.

### <a name="example"></a>Esempio

Visualizzare [CFindReplaceDialog::Create](#create) per un esempio di come registrare il gestore OnFindReplace per ricevere le notifiche nella finestra di dialogo Sostituisci.

[!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]

##  <a name="getreplacestring"></a>  CFindReplaceDialog::GetReplaceString

Chiamare questa funzione per recuperare la stringa di sostituzione corrente.

```
CString GetReplaceString() const;
```

### <a name="return-value"></a>Valore restituito

La stringa predefinita con cui sostituire le stringhe trovate.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFindReplaceDialog::GetFindString](#getfindstring).

##  <a name="isterminating"></a>  CFindReplaceDialog::IsTerminating

Chiamare questa funzione all'interno della funzione di callback per determinare se l'utente ha deciso di terminare la finestra di dialogo.

```
BOOL IsTerminating() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha deciso di terminare la finestra di dialogo; in caso contrario 0.

### <a name="remarks"></a>Note

Se questa funzione restituisce diverso da zero, è necessario chiamare il `DestroyWindow` funzione membro della finestra di dialogo corrente finestra e impostare qualsiasi variabile di puntatore finestra di dialogo su NULL. Facoltativamente, è anche possibile archiviare il testo di ricerca/sostituzione ultimo immesso e usarla per inizializzare la finestra di dialogo Trova/Sostituisci successiva.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFindReplaceDialog::GetFindString](#getfindstring).

##  <a name="m_fr"></a>  CFindReplaceDialog::m_fr

Usato per personalizzare un `CFindReplaceDialog` oggetto.

```
FINDREPLACE m_fr;
```

### <a name="remarks"></a>Note

`m_fr` è una struttura di tipo [FINDREPLACE](/windows/desktop/api/commdlg/ns-commdlg-tagfindreplacea). I relativi membri memorizzano le caratteristiche dell'oggetto finestra di dialogo. Dopo la costruzione di un `CFindReplaceDialog` dell'oggetto, è possibile usare `m_fr` modificare diversi valori nella finestra di dialogo.

Per altre informazioni su questa struttura, vedere il `FINDREPLACE` struttura nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).

##  <a name="matchcase"></a>  CFindReplaceDialog::MatchCase

Chiamare questa funzione per determinare se l'utente deve corrispondere esattamente al caso della stringa di ricerca.

```
BOOL MatchCase() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera cercare occorrenze della stringa di ricerca che corrispondono esattamente i case della stringa di ricerca; in caso contrario 0.

##  <a name="matchwholeword"></a>  CFindReplaceDialog::MatchWholeWord

Chiamare questa funzione per determinare se l'utente desidera individuare solo parole intere.

```
BOOL MatchWholeWord() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera individuare solo le parole intere della stringa di ricerca; in caso contrario 0.

##  <a name="replaceall"></a>  CFindReplaceDialog::ReplaceAll

Chiamare questa funzione per determinare se si desidera ottenere tutte le occorrenze della stringa da sostituire.

```
BOOL ReplaceAll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha richiesto che tutte le stringhe corrispondenti alla stringa di sostituzione sostituiti; in caso contrario 0.

##  <a name="replacecurrent"></a>  CFindReplaceDialog::ReplaceCurrent

Chiamare questa funzione per determinare se l'utente desidera utilizzare la parola corrente da sostituire.

```
BOOL ReplaceCurrent() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha richiesto che la stringa attualmente selezionata deve essere sostituita con la stringa di sostituzione. in caso contrario 0.

##  <a name="searchdown"></a>  CFindReplaceDialog::SearchDown

Chiamare questa funzione per determinare se l'utente desidera utilizzare la ricerca per procedere verso il basso.

```
BOOL SearchDown() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente richiede la ricerca per procedere verso il basso; 0 se l'utente richiede la ricerca per procedere verso l'alto.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
