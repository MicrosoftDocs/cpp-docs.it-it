---
title: Classe CFindReplaceDialog.
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
ms.openlocfilehash: 92429bc17301d6615c87de958f38a717528e9544
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212436"
---
# <a name="cfindreplacedialog-class"></a>Classe CFindReplaceDialog.

Consente di implementare le finestre di dialogo Trova/Sostituisci stringa standard nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CFindReplaceDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog.:: CFindReplaceDialog.](#cfindreplacedialog)|Chiamare questa funzione per costruire un `CFindReplaceDialog` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog.:: create](#create)|Crea e visualizza una finestra di `CFindReplaceDialog` dialogo.|
|[CFindReplaceDialog.:: TrovaSuccessivo](#findnext)|Chiamare questa funzione per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.|
|[CFindReplaceDialog.:: GetFindString](#getfindstring)|Chiamare questa funzione per recuperare la stringa di ricerca corrente.|
|[CFindReplaceDialog.:: getnotifier](#getnotifier)|Chiamare questa funzione per recuperare la `FINDREPLACE` struttura nel gestore di messaggi registrato.|
|[CFindReplaceDialog.:: GetReplaceString](#getreplacestring)|Chiamare questa funzione per recuperare la stringa di sostituzione corrente.|
|[CFindReplaceDialog.:: terminazione](#isterminating)|Chiamare questa funzione per determinare se la finestra di dialogo viene terminata.|
|[CFindReplaceDialog.:: MatchCase](#matchcase)|Chiamare questa funzione per determinare se l'utente desidera corrispondere esattamente al case della stringa di ricerca.|
|[CFindReplaceDialog.:: MatchWholeWord](#matchwholeword)|Chiamare questa funzione per determinare se l'utente desidera trovare solo parole intere.|
|[CFindReplaceDialog.:: ReplaceAll](#replaceall)|Chiamare questa funzione per determinare se l'utente desidera che vengano sostituite tutte le occorrenze della stringa.|
|[CFindReplaceDialog.:: ReplaceCurrent](#replacecurrent)|Chiamare questa funzione per determinare se l'utente desidera che la parola corrente venga sostituita.|
|[CFindReplaceDialog.:: SearchDown](#searchdown)|Chiamare questa funzione per determinare se l'utente desidera che la ricerca proceda in direzione verso il basso.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog.:: m_fr](#m_fr)|Struttura utilizzata per personalizzare un `CFindReplaceDialog` oggetto.|

## <a name="remarks"></a>Osservazioni

Diversamente dalle altre finestre di dialogo comuni di Windows, `CFindReplaceDialog` gli oggetti non sono modali, consentendo agli utenti di interagire con altre finestre mentre sono sullo schermo. Sono disponibili due tipi di `CFindReplaceDialog` oggetti: trova finestre di dialogo e finestre di dialogo Trova/Sostituisci. Sebbene le finestre di dialogo consentano all'utente di immettere le stringhe di ricerca e ricerca/sostituzione, non eseguono alcuna delle funzioni di ricerca o sostituzione. È necessario aggiungerli all'applicazione.

Per costruire un `CFindReplaceDialog` oggetto, usare il costruttore fornito, che non ha argomenti. Poiché si tratta di una finestra di dialogo non modale, allocare l'oggetto nell'heap usando l' **`new`** operatore anziché nello stack.

Una volta `CFindReplaceDialog` creato un oggetto, è necessario chiamare la funzione membro [create](#create) per creare e visualizzare la finestra di dialogo.

Utilizzare la struttura [m_fr](#m_fr) per inizializzare la finestra di dialogo prima di chiamare `Create` . La `m_fr` struttura è di tipo [FindReplace](/windows/win32/api/commdlg/ns-commdlg-findreplacew). Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

Per ricevere una notifica delle richieste di ricerca/sostituzione della finestra padre, è necessario utilizzare la funzione [RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew) di Windows e utilizzare la [ON_REGISTERED_MESSAGE](message-map-macros-mfc.md#on_registered_message) macro della mappa messaggi nella finestra cornice che gestisce il messaggio registrato.

È possibile determinare se l'utente ha deciso di terminare la finestra di dialogo con la `IsTerminating` funzione membro.

`CFindReplaceDialog`si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.

Per personalizzare la finestra di dialogo, derivare una classe da `CFindReplaceDialog` , fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe di base.

Non è necessario personalizzare la funzione hook.

Per ulteriori informazioni sull'utilizzo di `CFindReplaceDialog` , vedere [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CFindReplaceDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

## <a name="cfindreplacedialogcfindreplacedialog"></a><a name="cfindreplacedialog"></a>CFindReplaceDialog.:: CFindReplaceDialog.

Costruisce un oggetto `CFindReplaceDialog`.

```
CFindReplaceDialog();
```

### <a name="remarks"></a>Osservazioni

Poiché l' `CFindReplaceDialog` oggetto è una finestra di dialogo non modale, è necessario costruirlo nell'heap usando l' **`new`** operatore.

Durante la distruzione, il Framework tenta di eseguire un' **operazione Delete** sul puntatore alla finestra di dialogo. Se la finestra di dialogo è stata creata nello stack, il **`this`** puntatore non esiste e potrebbe verificarsi un comportamento non definito.

Per ulteriori informazioni sulla costruzione di `CFindReplaceDialog` oggetti, vedere Panoramica di [CFindReplaceDialog.](../../mfc/reference/cfindreplacedialog-class.md) . Utilizzare la funzione membro [CFindReplaceDialog.:: create](#create) per visualizzare la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#170](../../mfc/codesnippet/cpp/cfindreplacedialog-class_1.cpp)]

## <a name="cfindreplacedialogcreate"></a><a name="create"></a>CFindReplaceDialog.:: create

Crea e visualizza un oggetto della finestra di dialogo Trova o Trova/Sostituisci, a seconda del valore di `bFindDialogOnly` .

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
Impostare questo parametro su TRUE per visualizzare una finestra di dialogo **trova** . Impostarla su FALSE per visualizzare una finestra di dialogo **Trova/Sostituisci** .

*lpszFindWhat*<br/>
Puntatore alla stringa di ricerca predefinita quando viene visualizzata la finestra di dialogo. Se è NULL, la finestra di dialogo non contiene una stringa di ricerca predefinita.

*lpszReplaceWith*<br/>
Puntatore alla stringa di sostituzione predefinita quando viene visualizzata la finestra di dialogo. Se è NULL, la finestra di dialogo non contiene una stringa di sostituzione predefinita.

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo, combinate tramite l'operatore OR bit per bit. Il valore predefinito è FR_DOWN, che specifica che la ricerca deve continuare con una direzione verso il basso. Per ulteriori informazioni su questi flag, vedere la struttura [FindReplace](/windows/win32/api/commdlg/ns-commdlg-findreplacew) nel Windows SDK.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo. Si tratta della finestra che riceverà il messaggio speciale che indica che è richiesta un'azione Trova/Sostituisci. Se è NULL, viene utilizzata la finestra principale dell'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto finestra di dialogo è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per ricevere una notifica delle richieste di ricerca/sostituzione della finestra padre, è necessario utilizzare la funzione [RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew) di Windows il cui valore restituito è un numero di messaggio univoco per l'istanza dell'applicazione. La finestra cornice deve contenere una voce della mappa messaggi che dichiara la funzione di callback ( `OnFindReplace` nell'esempio seguente) che gestisce questo messaggio registrato. Il frammento di codice seguente è un esempio di come eseguire questa operazione per una classe della finestra cornice denominata `CMyRichEditView` :

[!code-cpp[NVC_MFCDocView#171](../../mfc/codesnippet/cpp/cfindreplacedialog-class_2.h)]

[!code-cpp[NVC_MFCDocView#172](../../mfc/codesnippet/cpp/cfindreplacedialog-class_3.cpp)]

[!code-cpp[NVC_MFCDocView#173](../../mfc/codesnippet/cpp/cfindreplacedialog-class_4.cpp)]

All'interno della `OnFindReplace` funzione è possibile interpretare le intenzioni dell'utente usando i metodi [CFindReplaceDialog.:: TrovaSuccessivo](#findnext) e [CFindReplaceDialog.:: outterminating](#isterminating) e creare il codice per le operazioni di ricerca/sostituzione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog.:: CFindReplaceDialog.](#cfindreplacedialog).

## <a name="cfindreplacedialogfindnext"></a><a name="findnext"></a>CFindReplaceDialog.:: TrovaSuccessivo

Chiamare questa funzione dalla funzione di callback per determinare se l'utente vuole trovare l'occorrenza successiva della stringa di ricerca.

```
BOOL FindNext() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca; in caso contrario, 0.

## <a name="cfindreplacedialoggetfindstring"></a><a name="getfindstring"></a>CFindReplaceDialog.:: GetFindString

Chiamare questa funzione dalla funzione di callback per recuperare la stringa predefinita da trovare.

```
CString GetFindString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa predefinita da trovare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]

## <a name="cfindreplacedialoggetnotifier"></a><a name="getnotifier"></a>CFindReplaceDialog.:: getnotifier

Chiamare questa funzione per recuperare un puntatore alla finestra di dialogo Trova sostituzione corrente.

```
static CFindReplaceDialog* PASCAL GetNotifier(LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*lParam*<br/>
Valore *lParam* passato alla funzione membro della finestra cornice `OnFindReplace` .

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra di dialogo corrente.

### <a name="remarks"></a>Osservazioni

Deve essere usato all'interno della funzione di callback per accedere alla finestra di dialogo corrente, chiamare le relative funzioni membro e accedere alla `m_fr` struttura.

### <a name="example"></a>Esempio

Vedere [CFindReplaceDialog.:: create](#create) per un esempio di come registrare il gestore OnFindReplace per ricevere notifiche dalla finestra di dialogo Trova sostituzione.

[!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]

## <a name="cfindreplacedialoggetreplacestring"></a><a name="getreplacestring"></a>CFindReplaceDialog.:: GetReplaceString

Chiamare questa funzione per recuperare la stringa di sostituzione corrente.

```
CString GetReplaceString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa predefinita con cui sostituire le stringhe trovate.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog.:: GetFindString](#getfindstring).

## <a name="cfindreplacedialogisterminating"></a><a name="isterminating"></a>CFindReplaceDialog.:: terminazione

Chiamare questa funzione all'interno della funzione di callback per determinare se l'utente ha deciso di terminare la finestra di dialogo.

```
BOOL IsTerminating() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha deciso di terminare la finestra di dialogo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se questa funzione restituisce un valore diverso da zero, è necessario chiamare la `DestroyWindow` funzione membro della finestra di dialogo corrente e impostare qualsiasi variabile del puntatore della finestra di dialogo su null. Facoltativamente, è anche possibile archiviare il testo Trova/Sostituisci per ultimo immesso e utilizzarlo per inizializzare la finestra di dialogo Trova/Sostituisci successiva.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog.:: GetFindString](#getfindstring).

## <a name="cfindreplacedialogm_fr"></a><a name="m_fr"></a>CFindReplaceDialog.:: m_fr

Utilizzato per personalizzare un `CFindReplaceDialog` oggetto.

```
FINDREPLACE m_fr;
```

### <a name="remarks"></a>Osservazioni

`m_fr`è una struttura di tipo [FindReplace](/windows/win32/api/commdlg/ns-commdlg-findreplacew). I membri archivia le caratteristiche dell'oggetto finestra di dialogo. Dopo la costruzione di un `CFindReplaceDialog` oggetto, è possibile utilizzare `m_fr` per modificare diversi valori nella finestra di dialogo.

Per ulteriori informazioni su questa struttura, vedere la `FINDREPLACE` struttura nella Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog.:: CFindReplaceDialog.](#cfindreplacedialog).

## <a name="cfindreplacedialogmatchcase"></a><a name="matchcase"></a>CFindReplaceDialog.:: MatchCase

Chiamare questa funzione per determinare se l'utente desidera corrispondere esattamente al case della stringa di ricerca.

```
BOOL MatchCase() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera trovare le occorrenze della stringa di ricerca che corrispondano esattamente al case della stringa di ricerca; in caso contrario, 0.

## <a name="cfindreplacedialogmatchwholeword"></a><a name="matchwholeword"></a>CFindReplaceDialog.:: MatchWholeWord

Chiamare questa funzione per determinare se l'utente desidera trovare solo parole intere.

```
BOOL MatchWholeWord() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera trovare una corrispondenza solo per le parole intere della stringa di ricerca; in caso contrario, 0.

## <a name="cfindreplacedialogreplaceall"></a><a name="replaceall"></a>CFindReplaceDialog.:: ReplaceAll

Chiamare questa funzione per determinare se l'utente desidera che vengano sostituite tutte le occorrenze della stringa.

```
BOOL ReplaceAll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha richiesto la sostituzione di tutte le stringhe che corrispondono alla stringa di sostituzione. in caso contrario, 0.

## <a name="cfindreplacedialogreplacecurrent"></a><a name="replacecurrent"></a>CFindReplaceDialog.:: ReplaceCurrent

Chiamare questa funzione per determinare se l'utente desidera che la parola corrente venga sostituita.

```
BOOL ReplaceCurrent() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha richiesto la sostituzione della stringa attualmente selezionata con la stringa di sostituzione. in caso contrario, 0.

## <a name="cfindreplacedialogsearchdown"></a><a name="searchdown"></a>CFindReplaceDialog.:: SearchDown

Chiamare questa funzione per determinare se l'utente desidera che la ricerca proceda in direzione verso il basso.

```
BOOL SearchDown() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera che la ricerca proceda in direzione verso il basso; 0 se l'utente desidera che la ricerca continui a una direzione verso l'alto.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
