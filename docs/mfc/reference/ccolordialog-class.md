---
title: Classe CColorDialog
ms.date: 11/04/2016
f1_keywords:
- CColorDialog
- AFXDLGS/CColorDialog
- AFXDLGS/CColorDialog::CColorDialog
- AFXDLGS/CColorDialog::DoModal
- AFXDLGS/CColorDialog::GetColor
- AFXDLGS/CColorDialog::GetSavedCustomColors
- AFXDLGS/CColorDialog::SetCurrentColor
- AFXDLGS/CColorDialog::OnColorOK
- AFXDLGS/CColorDialog::m_cc
helpviewer_keywords:
- CColorDialog [MFC], CColorDialog
- CColorDialog [MFC], DoModal
- CColorDialog [MFC], GetColor
- CColorDialog [MFC], GetSavedCustomColors
- CColorDialog [MFC], SetCurrentColor
- CColorDialog [MFC], OnColorOK
- CColorDialog [MFC], m_cc
ms.assetid: d013dc25-9290-4b5d-a97e-95ad7208e13b
ms.openlocfilehash: f5c235008b72996424e01ee912ca78ecffab450a
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70741581"
---
# <a name="ccolordialog-class"></a>Classe CColorDialog

Consente di incorporare una finestra di dialogo di selezione dei colori nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CColorDialog : public CCommonDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CColorDialog:: CColorDialog](#ccolordialog)|Costruisce un oggetto `CColorDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CColorDialog::D oModal](#domodal)|Visualizza una finestra di dialogo colore e consente all'utente di effettuare una selezione.|
|[CColorDialog:: GetColor](#getcolor)|Restituisce una `COLORREF` struttura contenente i valori del colore selezionato.|
|[CColorDialog:: GetSavedCustomColors](#getsavedcustomcolors)|Recupera i colori personalizzati creati dall'utente.|
|[CColorDialog:: SetCurrentColor](#setcurrentcolor)|Forza la selezione del colore corrente sul colore specificato.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CColorDialog:: OnColorOK](#oncolorok)|Eseguire l'override di per convalidare il colore immesso nella finestra di dialogo.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CColorDialog:: m_cc](#m_cc)|Struttura utilizzata per personalizzare le impostazioni della finestra di dialogo.|

## <a name="remarks"></a>Note

Un `CColorDialog` oggetto è una finestra di dialogo con un elenco di colori definiti per il sistema di visualizzazione. L'utente può selezionare o creare un colore specifico dall'elenco, che viene quindi segnalato all'applicazione quando viene chiusa la finestra di dialogo.

Per costruire un `CColorDialog` oggetto, usare il costruttore fornito o derivare una nuova classe e usare un costruttore personalizzato.

Una volta creata la finestra di dialogo, è possibile impostare o modificare i valori nella struttura [m_cc](#m_cc) per inizializzare i valori dei controlli della finestra di dialogo. La struttura *m_cc* è di tipo [le CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora~r1).

Dopo aver inizializzato i controlli della finestra di dialogo `DoModal` , chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare un colore. `DoModal`Restituisce la selezione dell'utente del pulsante OK (IDOK) o Annulla (IDCANCEL) della finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile usare una delle `CColorDialog`funzioni membro di per recuperare l'input di informazioni da parte dell'utente.

È possibile utilizzare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ottenere ulteriori informazioni sull'errore.

`CColorDialog`si basa su COMMDLG. File DLL fornito con le versioni di Windows 3,1 e successive.

Per personalizzare la finestra di dialogo, derivare una `CColorDialog`classe da, fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe di base.

Non è necessario personalizzare la funzione hook.

> [!NOTE]
>  In alcune installazioni l' `CColorDialog` oggetto non viene visualizzato con uno sfondo grigio se è stato utilizzato il Framework per rendere grigio `CDialog` altri oggetti.

Per altre informazioni sull'uso `CColorDialog`di, vedere [classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CColorDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="ccolordialog"></a>CColorDialog:: CColorDialog

Costruisce un oggetto `CColorDialog`.

```
CColorDialog(
    COLORREF clrInit = 0,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*clrInit*<br/>
Selezione di colori predefinita. Se non viene specificato alcun valore, il valore predefinito è RGB (0, 0, 0) (nero).

*dwFlags*<br/>
Set di flag che personalizzano la funzione e l'aspetto della finestra di dialogo. Per ulteriori informazioni, vedere la struttura [le CHOOSECOLOR.](/windows/win32/api/commdlg/ns-commdlg-choosecolora~r1) nel Windows SDK.

*pParentWnd*<br/>
Puntatore alla finestra padre o proprietaria della finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#49](../../mfc/codesnippet/cpp/ccolordialog-class_1.cpp)]

##  <a name="domodal"></a>CColorDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo colore comune di Windows e consentire all'utente di selezionare un colore.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Note

Se si desidera inizializzare le varie opzioni della finestra di dialogo dei colori impostando i membri della struttura [m_cc](#m_cc) , è necessario eseguire questa `DoModal` operazione prima di chiamare ma dopo la costruzione dell'oggetto finestra di dialogo.

Dopo aver `DoModal`chiamato, è possibile chiamare altre funzioni membro per recuperare le impostazioni o l'input di informazioni da parte dell'utente nella finestra di dialogo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CColorDialog:: CColorDialog](#ccolordialog).

##  <a name="getcolor"></a>CColorDialog:: GetColor

Chiamare questa funzione dopo la `DoModal` chiamata a per recuperare le informazioni sul colore selezionato dall'utente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene le informazioni RGB per il colore selezionato nella finestra di dialogo colore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#50](../../mfc/codesnippet/cpp/ccolordialog-class_2.cpp)]

##  <a name="getsavedcustomcolors"></a>CColorDialog:: GetSavedCustomColors

`CColorDialog`gli oggetti consentono all'utente, oltre a scegliere i colori, di definire un massimo di 16 colori personalizzati.

```
static COLORREF* PASCAL GetSavedCustomColors();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una matrice di 16 valori di colore RGB che archivia i colori personalizzati creati dall'utente.

### <a name="remarks"></a>Note

La `GetSavedCustomColors` funzione membro fornisce l'accesso a questi colori. Questi colori possono essere recuperati dopo che [DoModal](#domodal) restituisce IDOK.

Ognuno dei 16 valori RGB nella matrice restituita viene inizializzato su RGB (255255255) (bianco). I colori personalizzati scelti dall'utente vengono salvati solo tra le chiamate della finestra di dialogo all'interno dell'applicazione. Se si desidera salvare questi colori tra le chiamate dell'applicazione, è necessario salvarli in un altro modo, ad esempio in un'inizializzazione (. INI).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#51](../../mfc/codesnippet/cpp/ccolordialog-class_3.cpp)]

##  <a name="m_cc"></a>CColorDialog:: m_cc

Struttura di tipo [le CHOOSECOLOR.](/windows/win32/api/commdlg/ns-commdlg-choosecolora~r1), i cui membri archiviano le caratteristiche e i valori della finestra di dialogo.

```
CHOOSECOLOR m_cc;
```

### <a name="remarks"></a>Note

Dopo la costruzione di `CColorDialog` un oggetto, è possibile utilizzare *m_cc* per impostare vari aspetti della finestra di dialogo prima di chiamare la funzione membro [DoModal](#domodal) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#53](../../mfc/codesnippet/cpp/ccolordialog-class_4.cpp)]

##  <a name="oncolorok"></a>CColorDialog:: OnColorOK

Eseguire l'override di per convalidare il colore immesso nella finestra di dialogo.

```
virtual BOOL OnColorOK();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra di dialogo non deve essere rilasciata; in caso contrario, 0 per accettare il colore immesso.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione solo se si desidera fornire la convalida personalizzata del colore selezionato dall'utente nella finestra di dialogo colore.

L'utente può selezionare un colore per uno dei due metodi seguenti:

- Fare clic su un colore nella tavolozza dei colori. I valori RGB del colore selezionato vengono quindi riflessi nelle caselle di modifica RGB appropriate.

- Immissione di valori nelle caselle di modifica RGB

L'override `OnColorOK` di consente di rifiutare un colore che l'utente immette in una finestra di dialogo di colore comune per qualsiasi motivo specifico dell'applicazione.

In genere, non è necessario usare questa funzione perché il Framework fornisce la convalida predefinita dei colori e visualizza una finestra di messaggio se viene immesso un colore non valido.

È possibile chiamare [SetCurrentColor](#setcurrentcolor) dall'interno `OnColorOK` di per forzare una selezione di colori. Una `OnColorOK` volta che è stato attivato, ovvero l'utente fa clic su **OK** per accettare la modifica del colore, è possibile chiamare [GetColor](#getcolor) per ottenere il valore RGB del nuovo colore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#52](../../mfc/codesnippet/cpp/ccolordialog-class_5.cpp)]

##  <a name="setcurrentcolor"></a>CColorDialog:: SetCurrentColor

Chiamare questa funzione dopo la `DoModal` chiamata di per forzare la selezione di colore corrente sul valore del colore specificato in *CLR*.

```
void SetCurrentColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*clr*<br/>
Valore di colore RGB.

### <a name="remarks"></a>Note

Questa funzione viene chiamata dall'interno di un gestore di `OnColorOK`messaggi o. La finestra di dialogo aggiornerà automaticamente la selezione dell'utente in base al valore del parametro *CLR* .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CColorDialog:: OnColorOK](#oncolorok).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DRAWCLI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
