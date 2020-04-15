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
ms.openlocfilehash: ab8d934ca0c40c7073f2fc6d88549eb8db595b3f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352230"
---
# <a name="ccolordialog-class"></a>Classe CColorDialog

Consente di incorporare una finestra di dialogo di selezione del colore nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CColorDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CColorDialog::CColorDialog](#ccolordialog)|Costruisce un oggetto `CColorDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CColorDialog::DoModal](#domodal)|Visualizza una finestra di dialogo a colori e consente all'utente di effettuare una selezione.|
|[CColorDialog::GetColor](#getcolor)|Restituisce `COLORREF` una struttura contenente i valori del colore selezionato.|
|[CColorDialog::GetSavedCustomColors](#getsavedcustomcolors)|Recupera i colori personalizzati creati dall'utente.|
|[CColorDialog::SetCurrentColor](#setcurrentcolor)|Forza la selezione del colore corrente al colore specificato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CColorDialog::OnColorOK](#oncolorok)|Eseguire l'override per convalidare il colore immesso nella finestra di dialogo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CColorDialog::m_cc](#m_cc)|Struttura utilizzata per personalizzare le impostazioni della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Un `CColorDialog` oggetto è una finestra di dialogo con un elenco di colori definiti per il sistema di visualizzazione. L'utente può selezionare o creare un colore particolare dall'elenco, che viene quindi segnalato all'applicazione alla chiusura della finestra di dialogo.

Per costruire `CColorDialog` un oggetto, utilizzare il costruttore fornito o derivare una nuova classe e utilizzare il proprio costruttore personalizzato.

Una volta costruita la finestra di dialogo, è possibile impostare o modificare i valori nella struttura [m_cc](#m_cc) per inizializzare i valori dei controlli della finestra di dialogo. La struttura *m_cc* è di tipo [CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora~r1).

Dopo aver inizializzato i controlli della `DoModal` finestra di dialogo, chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare un colore. `DoModal`restituisce la selezione dell'utente del pulsante OK (IDOK) o Annulla (IDCANCEL) della finestra di dialogo.

Se `DoModal` restituisce IDOK, è `CColorDialog`possibile utilizzare una delle funzioni membro di 's per recuperare le informazioni immesse dall'utente.

È possibile utilizzare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.

`CColorDialog`si basa su COMMDLG. DLL fornito con Windows 3.1 e versioni successive.

Per personalizzare la finestra di `CColorDialog`dialogo, derivare una classe da , fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe base.

La personalizzazione della funzione hook non è necessaria.

> [!NOTE]
> In alcune installazioni l'oggetto `CColorDialog` non verrà visualizzato con uno sfondo `CDialog` grigio se è stato utilizzato il framework per rendere grigi altri oggetti.

Per ulteriori informazioni `CColorDialog`sull'utilizzo di , vedere Classi di [finestre di dialogo comuniFor more information](../../mfc/common-dialog-classes.md) on using , see Common Dialog Classes

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CColorDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="ccolordialogccolordialog"></a><a name="ccolordialog"></a>CColorDialog::CColorDialog

Costruisce un oggetto `CColorDialog`.

```
CColorDialog(
    COLORREF clrInit = 0,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*ClrInit (informazioni in base al fatto di essere*<br/>
Selezione colore predefinita. Se non viene specificato alcun valore, il valore predefinito è RGB(0,0,0) (nero).

*dwFlags*<br/>
Set di flag che personalizzano la funzione e l'aspetto della finestra di dialogo. Per ulteriori informazioni, vedere la struttura [CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora~r1) in Windows SDK.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre o proprietario della finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#49](../../mfc/codesnippet/cpp/ccolordialog-class_1.cpp)]

## <a name="ccolordialogdomodal"></a><a name="domodal"></a>CColorDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo colore comune di Windows e consentire all'utente di selezionare un colore.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare le varie opzioni della finestra di dialogo di `DoModal` colore impostando i membri della [struttura m_cc,](#m_cc) è necessario eseguire questa operazione prima di chiamare, ma dopo la costruzione dell'oggetto finestra di dialogo.

Dopo `DoModal`aver chiamato , è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CColorDialog::CColorDialog](#ccolordialog).

## <a name="ccolordialoggetcolor"></a><a name="getcolor"></a>CColorDialog::GetColor

Chiamare questa funzione `DoModal` dopo la chiamata per recuperare le informazioni sul colore selezionato dall'utente.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene le informazioni RGB per il colore selezionato nella finestra di dialogo dei colori.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#50](../../mfc/codesnippet/cpp/ccolordialog-class_2.cpp)]

## <a name="ccolordialoggetsavedcustomcolors"></a><a name="getsavedcustomcolors"></a>CColorDialog::GetSavedCustomColors

`CColorDialog`oggetti consentono all'utente, oltre a scegliere i colori, di definire fino a 16 colori personalizzati.

```
static COLORREF* PASCAL GetSavedCustomColors();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una matrice di 16 valori di colore RGB in cui sono memorizzati i colori personalizzati creati dall'utente.

### <a name="remarks"></a>Osservazioni

La `GetSavedCustomColors` funzione membro fornisce l'accesso a questi colori. Questi colori possono essere recuperati dopo DoModal restituisce IDOK.These colors can be retrieved after [DoModal](#domodal) returns IDOK.

Ognuno dei 16 valori RGB nell'array restituito viene inizializzato su RGB(255,255,255) (bianco). I colori personalizzati scelti dall'utente vengono salvati solo tra le chiamate di finestra di dialogo all'interno dell'applicazione. Se si desidera salvare questi colori tra le chiamate dell'applicazione, è necessario salvarli in un altro modo, ad esempio in un'inizializzazione (. INI).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#51](../../mfc/codesnippet/cpp/ccolordialog-class_3.cpp)]

## <a name="ccolordialogm_cc"></a><a name="m_cc"></a>CColorDialog::m_cc

Struttura di tipo [CHOOSECOLOR](/windows/win32/api/commdlg/ns-commdlg-choosecolora~r1), i cui membri memorizzano le caratteristiche e i valori della finestra di dialogo.

```
CHOOSECOLOR m_cc;
```

### <a name="remarks"></a>Osservazioni

Dopo aver `CColorDialog` creato un oggetto, è possibile utilizzare *m_cc* per impostare vari aspetti della finestra di dialogo prima di chiamare il [DoModal](#domodal) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#53](../../mfc/codesnippet/cpp/ccolordialog-class_4.cpp)]

## <a name="ccolordialogoncolorok"></a><a name="oncolorok"></a>CColorDialog::OnColorOK

Eseguire l'override per convalidare il colore immesso nella finestra di dialogo.

```
virtual BOOL OnColorOK();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra di dialogo non deve essere chiusa; in caso contrario, 0 per accettare il colore immesso.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione solo se si desidera fornire la convalida personalizzata del colore selezionato dall'utente nella finestra di dialogo del colore.

L'utente può selezionare un colore in uno dei due metodi seguenti:

- Facendo clic su un colore nella tavolozza dei colori. I valori RGB del colore selezionato vengono quindi riflessi nelle caselle di modifica RGB appropriate.

- Immissione di valori nelle caselle di modifica RGB

L'override `OnColorOK` consente di rifiutare un colore che l'utente immette in una finestra di dialogo di colore comune per qualsiasi motivo specifico dell'applicazione.

In genere, non è necessario utilizzare questa funzione perché il framework fornisce la convalida predefinita dei colori e visualizza una finestra di messaggio se viene immesso un colore non valido.

È possibile chiamare [SetCurrentColor](#setcurrentcolor) dall'interno `OnColorOK` per forzare una selezione di colori. Una `OnColorOK` volta che è stato attivato (vale a dire, l'utente fa clic **su OK** per accettare la modifica del colore), è possibile chiamare [GetColor](#getcolor) per ottenere il valore RGB del nuovo colore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#52](../../mfc/codesnippet/cpp/ccolordialog-class_5.cpp)]

## <a name="ccolordialogsetcurrentcolor"></a><a name="setcurrentcolor"></a>CColorDialog::SetCurrentColor

Chiamare questa funzione `DoModal` dopo aver chiamato per forzare la selezione del colore corrente sul valore di colore specificato in *clr*.

```
void SetCurrentColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*Clr*<br/>
Valore di colore RGB.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata dall'interno di un gestore messaggi o `OnColorOK`. La finestra di dialogo aggiornerà automaticamente la selezione dell'utente in base al valore del parametro *clr.*

### <a name="example"></a>Esempio

  Vedere l'esempio per [CColorDialog::OnColorOK](#oncolorok).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DRAWCLI](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
