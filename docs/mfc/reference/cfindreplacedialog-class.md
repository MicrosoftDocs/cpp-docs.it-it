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
ms.openlocfilehash: 7a12d0520d070d74afd9fa91e828970d14c82700
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373846"
---
# <a name="cfindreplacedialog-class"></a>Classe CFindReplaceDialog

Consente di implementare le finestre di dialogo Trova/Sostituisci stringa standard nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CFindReplaceDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog)|Chiamare questa funzione `CFindReplaceDialog` per costruire un oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog::Create](#create)|Crea e `CFindReplaceDialog` visualizza una finestra di dialogo.|
|[CFindReplaceDialog::FindNext](#findnext)|Chiamare questa funzione per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.|
|[CFindReplaceDialog::GetFindString](#getfindstring)|Chiamare questa funzione per recuperare la stringa di ricerca corrente.|
|[CFindReplaceDialog::GetNotifier](#getnotifier)|Chiamare questa funzione `FINDREPLACE` per recuperare la struttura nel gestore di messaggi registrato.|
|[CFindReplaceDialog::GetReplaceString](#getreplacestring)|Chiamare questa funzione per recuperare la stringa di sostituzione corrente.|
|[CFindReplaceDialog::IsTerminating (Finestra di chiusura)](#isterminating)|Chiamare questa funzione per determinare se la finestra di dialogo sta terminando.|
|[CFindReplaceDialog::MatchCase](#matchcase)|Chiamare questa funzione per determinare se l'utente desidera trovare esattamente la combinazione di maiuscole e minuscole della stringa di ricerca.|
|[CFindReplaceDialog::MatchWholeWord](#matchwholeword)|Chiamare questa funzione per determinare se l'utente desidera trovare la corrispondenza solo con parole intere.|
|[CFindReplaceDialog::ReplaceAll](#replaceall)|Chiamare questa funzione per determinare se l'utente desidera sostituire tutte le occorrenze della stringa.|
|[CFindReplaceDialog::ReplaceCurrent](#replacecurrent)|Chiamare questa funzione per determinare se l'utente desidera sostituire la parola corrente.|
|[CFindReplaceDialog::SearchDown](#searchdown)|Chiamare questa funzione per determinare se l'utente desidera che la ricerca proceda verso il basso.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFindReplaceDialog::m_fr](#m_fr)|Struttura utilizzata per `CFindReplaceDialog` personalizzare un oggetto.|

## <a name="remarks"></a>Osservazioni

A differenza delle altre `CFindReplaceDialog` finestre di dialogo comuni di Windows, gli oggetti sono non modali e consentono agli utenti di interagire con altre finestre mentre sono sullo schermo. Esistono due tipi `CFindReplaceDialog` di oggetti: trova finestre di dialogo e Trova/Sostituisci finestre di dialogo. Sebbene le finestre di dialogo consentano all'utente di immettere stringhe di ricerca e di ricerca/sostituzione, non eseguono alcuna delle funzioni di ricerca o sostituzione. È necessario aggiungerli all'applicazione.

Per costruire `CFindReplaceDialog` un oggetto, utilizzare il costruttore fornito (che non dispone di argomenti). Poiché si tratta di una finestra di dialogo non modale, allocare l'oggetto nell'heap utilizzando l'operatore **new,** anziché nello stack.

Una `CFindReplaceDialog` volta costruito un oggetto, è necessario chiamare il [Create](#create) funzione membro per creare e visualizzare la finestra di dialogo.

Utilizzare la struttura [m_fr](#m_fr) per inizializzare la finestra di dialogo prima di chiamare `Create`. La `m_fr` struttura è di tipo [FINDREPLACE](/windows/win32/api/commdlg/ns-commdlg-findreplacew). Per ulteriori informazioni su questa struttura, vedere Windows SDK.

Affinché la finestra padre riceva una notifica delle richieste di ricerca/sostituzione, è necessario utilizzare la funzione [Windows RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew) e la macro della mappa messaggi [ON_REGISTERED_MESSAGE](message-map-macros-mfc.md#on_registered_message) nella finestra cornice che gestisce il messaggio registrato.

È possibile determinare se l'utente ha deciso `IsTerminating` di terminare la finestra di dialogo con la funzione membro.

`CFindReplaceDialog`si basa su COMMDLG. DLL fornito con Windows 3.1 e versioni successive.

Per personalizzare la finestra di `CFindReplaceDialog`dialogo, derivare una classe da , fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe base.

La personalizzazione della funzione hook non è necessaria.

Per ulteriori informazioni `CFindReplaceDialog`sull'utilizzo di , vedere Classi di [finestre di dialogo comuni](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CFindReplaceDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="cfindreplacedialogcfindreplacedialog"></a><a name="cfindreplacedialog"></a>CFindReplaceDialog::CFindReplaceDialog

Costruisce un oggetto `CFindReplaceDialog`.

```
CFindReplaceDialog();
```

### <a name="remarks"></a>Osservazioni

Poiché `CFindReplaceDialog` l'oggetto è una finestra di dialogo non modale, è necessario costruirlo nell'heap utilizzando l'operatore **new.**

Durante l'eliminazione, il framework tenta di eseguire **un'eliminazione questo** sul puntatore alla finestra di dialogo. Se è stata creata la finestra di dialogo nello stack, il puntatore **this** non esiste e potrebbe verificarsi un comportamento non definito.

Per ulteriori informazioni sulla `CFindReplaceDialog` costruzione di oggetti, vedere il [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md) cenni preliminari. Utilizzare la funzione membro [CFindReplaceDialog::Create](#create) per visualizzare la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#170](../../mfc/codesnippet/cpp/cfindreplacedialog-class_1.cpp)]

## <a name="cfindreplacedialogcreate"></a><a name="create"></a>CFindReplaceDialog::Create

Crea e visualizza un oggetto della finestra di dialogo `bFindDialogOnly`Trova o Trova/Sostituisci, a seconda del valore di .

```
virtual BOOL Create(
    BOOL bFindDialogOnly,
    LPCTSTR lpszFindWhat,
    LPCTSTR lpszReplaceWith = NULL,
    DWORD dwFlags = FR_DOWN,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*bTrovaDialogOnly*<br/>
Impostare questo parametro su TRUE per visualizzare una finestra di dialogo **Trova.** Impostarla su FALSE per visualizzare una finestra di dialogo **Trova/Sostituisci.**

*lpszTrovaCio*<br/>
Puntatore alla stringa di ricerca predefinita quando viene visualizzata la finestra di dialogo. Se NULL, la finestra di dialogo non contiene una stringa di ricerca predefinita.

*lpszReplaceWith (finestra di opzione)*<br/>
Puntatore alla stringa di sostituzione predefinita quando viene visualizzata la finestra di dialogo. Se NULL, la finestra di dialogo non contiene una stringa di sostituzione predefinita.

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo, combinate utilizzando l'operatore OR bit per bit. Il valore predefinito è FR_DOWN, che specifica che la ricerca deve procedere in direzione verso il basso. Vedere la struttura [FINDREPLACE](/windows/win32/api/commdlg/ns-commdlg-findreplacew) in Windows SDK per ulteriori informazioni su questi flag.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre o proprietario della finestra di dialogo. Questa è la finestra che riceverà il messaggio speciale che indica che è richiesta un'azione di ricerca/sostituzione. Se NULL, viene utilizzata la finestra principale dell'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto finestra di dialogo è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Affinché la finestra padre riceva una notifica delle richieste di ricerca/sostituzione, è necessario utilizzare la funzione Windows [RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew) il cui valore restituito è un numero di messaggio univoco per l'istanza dell'applicazione. La finestra cornice deve avere una voce della `OnFindReplace` mappa messaggi che dichiara la funzione di callback (nell'esempio che segue) che gestisce questo messaggio registrato. Il frammento di codice seguente è un esempio di `CMyRichEditView`come eseguire questa operazione per una classe finestra cornice denominata :

[!code-cpp[NVC_MFCDocView#171](../../mfc/codesnippet/cpp/cfindreplacedialog-class_2.h)]

[!code-cpp[NVC_MFCDocView#172](../../mfc/codesnippet/cpp/cfindreplacedialog-class_3.cpp)]

[!code-cpp[NVC_MFCDocView#173](../../mfc/codesnippet/cpp/cfindreplacedialog-class_4.cpp)]

All'interno della `OnFindReplace` funzione, interpretare le intenzioni dell'utente utilizzando il [CFindReplaceDialog::FindNext](#findnext) e [CFindReplaceDialog::IsTerminating](#isterminating) metodi e si crea il codice per le operazioni di ricerca/sostituzione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).

## <a name="cfindreplacedialogfindnext"></a><a name="findnext"></a>CFindReplaceDialog::FindNext

Chiamare questa funzione dalla funzione di callback per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.

```
BOOL FindNext() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca; in caso contrario 0.

## <a name="cfindreplacedialoggetfindstring"></a><a name="getfindstring"></a>CFindReplaceDialog::GetFindString

Chiamare questa funzione dalla funzione di callback per recuperare la stringa predefinita da trovare.

```
CString GetFindString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa predefinita da trovare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]

## <a name="cfindreplacedialoggetnotifier"></a><a name="getnotifier"></a>CFindReplaceDialog::GetNotifier

Chiamare questa funzione per recuperare un puntatore alla finestra di dialogo Trova sostituisci corrente.

```
static CFindReplaceDialog* PASCAL GetNotifier(LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*lParam*<br/>
Valore *lparam* passato alla funzione `OnFindReplace` membro della finestra cornice.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra di dialogo corrente.

### <a name="remarks"></a>Osservazioni

Deve essere utilizzato all'interno della funzione di callback per accedere alla `m_fr` finestra di dialogo corrente, chiamare le relative funzioni membro e accedere alla struttura.

### <a name="example"></a>Esempio

Vedere [CFindReplaceDialog::Create](#create) per un esempio di come registrare il gestore OnFindReplace per ricevere notifiche dalla finestra di dialogo Trova sostituisci.

[!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]

## <a name="cfindreplacedialoggetreplacestring"></a><a name="getreplacestring"></a>CFindReplaceDialog::GetReplaceString

Chiamare questa funzione per recuperare la stringa di sostituzione corrente.

```
CString GetReplaceString() const;
```

### <a name="return-value"></a>Valore restituito

Stringa predefinita con cui sostituire le stringhe trovate.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog::GetFindString](#getfindstring).

## <a name="cfindreplacedialogisterminating"></a><a name="isterminating"></a>CFindReplaceDialog::IsTerminating (Finestra di chiusura)

Chiamare questa funzione all'interno della funzione di callback per determinare se l'utente ha deciso di terminare la finestra di dialogo.

```
BOOL IsTerminating() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha deciso di terminare la finestra di dialogo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se questa funzione restituisce un `DestroyWindow` valore diverso da zero, è necessario chiamare la funzione membro della finestra di dialogo corrente e impostare qualsiasi variabile puntatore della finestra di dialogo su NULL. Facoltativamente, è anche possibile archiviare il testo di ricerca/sostituzione immesso per ultimo e utilizzarlo per inizializzare la successiva finestra di dialogo Trova/Sostituisci.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog::GetFindString](#getfindstring).

## <a name="cfindreplacedialogm_fr"></a><a name="m_fr"></a>CFindReplaceDialog::m_fr

Utilizzato per `CFindReplaceDialog` personalizzare un oggetto.

```
FINDREPLACE m_fr;
```

### <a name="remarks"></a>Osservazioni

`m_fr`è una struttura di tipo [FINDREPLACE](/windows/win32/api/commdlg/ns-commdlg-findreplacew). I relativi membri archiviano le caratteristiche dell'oggetto finestra di dialogo. Dopo aver `CFindReplaceDialog` creato un oggetto, è possibile utilizzare `m_fr` per modificare vari valori nella finestra di dialogo.

Per ulteriori informazioni su questa `FINDREPLACE` struttura, vedere la struttura in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).

## <a name="cfindreplacedialogmatchcase"></a><a name="matchcase"></a>CFindReplaceDialog::MatchCase

Chiamare questa funzione per determinare se l'utente desidera trovare esattamente la combinazione di maiuscole e minuscole della stringa di ricerca.

```
BOOL MatchCase() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera trovare le occorrenze della stringa di ricerca che corrispondono esattamente alla combinazione di maiuscole e minuscole della stringa di ricerca; in caso contrario 0.

## <a name="cfindreplacedialogmatchwholeword"></a><a name="matchwholeword"></a>CFindReplaceDialog::MatchWholeWord

Chiamare questa funzione per determinare se l'utente desidera trovare la corrispondenza solo con parole intere.

```
BOOL MatchWholeWord() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera trovare una corrispondenza solo con le parole intere della stringa di ricerca; in caso contrario 0.

## <a name="cfindreplacedialogreplaceall"></a><a name="replaceall"></a>CFindReplaceDialog::ReplaceAll

Chiamare questa funzione per determinare se l'utente desidera sostituire tutte le occorrenze della stringa.

```
BOOL ReplaceAll() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha richiesto la sostituzione di tutte le stringhe corrispondenti alla stringa di sostituzione; in caso contrario 0.

## <a name="cfindreplacedialogreplacecurrent"></a><a name="replacecurrent"></a>CFindReplaceDialog::ReplaceCurrent

Chiamare questa funzione per determinare se l'utente desidera sostituire la parola corrente.

```
BOOL ReplaceCurrent() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha richiesto che la stringa attualmente selezionata venga sostituita con la stringa di sostituzione; in caso contrario 0.

## <a name="cfindreplacedialogsearchdown"></a><a name="searchdown"></a>CFindReplaceDialog::SearchDown

Chiamare questa funzione per determinare se l'utente desidera che la ricerca proceda verso il basso.

```
BOOL SearchDown() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente desidera che la ricerca proceda in direzione verso il basso; 0 se l'utente desidera che la ricerca proceda verso l'alto.

## <a name="see-also"></a>Vedere anche

[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
