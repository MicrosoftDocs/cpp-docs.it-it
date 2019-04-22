---
title: Classe CMFCKeyMapDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::DoModal
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::FormatItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::GetCommandKeys
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnInsertItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintHeader
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnSetColumns
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::PrintKeyMap
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::SetColumnsWidth
helpviewer_keywords:
- CMFCKeyMapDialog [MFC], CMFCKeyMapDialog
- CMFCKeyMapDialog [MFC], DoModal
- CMFCKeyMapDialog [MFC], FormatItem
- CMFCKeyMapDialog [MFC], GetCommandKeys
- CMFCKeyMapDialog [MFC], OnInsertItem
- CMFCKeyMapDialog [MFC], OnPrintHeader
- CMFCKeyMapDialog [MFC], OnPrintItem
- CMFCKeyMapDialog [MFC], OnSetColumns
- CMFCKeyMapDialog [MFC], PrintKeyMap
- CMFCKeyMapDialog [MFC], SetColumnsWidth
ms.assetid: 5feb4942-d636-462d-a162-0104dd320f4e
ms.openlocfilehash: 65aa5ab0f24999ee23a97f383577b69584825502
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58774789"
---
# <a name="cmfckeymapdialog-class"></a>Classe CMFCKeyMapDialog

Il `CMFCKeyMapDialog` classe supporta un controllo che esegue il mapping di comandi ai tasti sulla tastiera.

## <a name="syntax"></a>Sintassi

```
class CMFCKeyMapDialog : public CDialogEx
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCKeyMapDialog::CMFCKeyMapDialog](#cmfckeymapdialog)|Costruisce un oggetto `CMFCKeyMapDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCKeyMapDialog::DoModal](#domodal)|Visualizza una finestra di dialogo di mappatura della tastiera.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCKeyMapDialog::FormatItem](#formatitem)|Chiamato dal framework per compilare una stringa che descrive un mapping delle chiavi. Per impostazione predefinita, la stringa contiene il nome del comando di tasti usate e la descrizione tasti di scelta rapida.|
|[CMFCKeyMapDialog::GetCommandKeys](#getcommandkeys)|Recupera una stringa che contiene un elenco di tasti di scelta rapida associato al comando specificato.|
|[CMFCKeyMapDialog::OnInsertItem](#oninsertitem)|Chiamato dal framework prima dell'inserimento di un nuovo elemento nel controllo elenco interno che supporta il controllo di mappatura della tastiera.|
|[CMFCKeyMapDialog::OnPrintHeader](#onprintheader)|Chiamato dal framework per stampare l'intestazione per la mappa della tastiera in una nuova pagina.|
|[CMFCKeyMapDialog::OnPrintItem](#onprintitem)|Chiamato dal framework per stampare una voce di mappatura della tastiera.|
|[CMFCKeyMapDialog::OnSetColumns](#onsetcolumns)|Chiamato dal framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.|
|[CMFCKeyMapDialog::PrintKeyMap](#printkeymap)|Chiamato dal framework quando un utente sceglie il **stampa** pulsante.|
|[CMFCKeyMapDialog::SetColumnsWidth](#setcolumnswidth)|Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.|

## <a name="remarks"></a>Note

Usare il `CMFCKeyMapDialog` classe per implementare una finestra di dialogo mapping della tastiera ridimensionabile. La finestra di dialogo Usa un controllo visualizzazione elenco per visualizzare i tasti di scelta rapida e i relativi comandi.

Usare la `CMFCKeyMapDialog` classe in un'applicazione, passare un puntatore alla finestra cornice principale come un parametro per il `CMFCKeyMapDialog` costruttore. Chiamare quindi il `DoModal` metodo per avviare una finestra di dialogo modale.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCKeyMapDialog](../../mfc/reference/cmfckeymapdialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxkeymapdialog.h

##  <a name="cmfckeymapdialog"></a>  CMFCKeyMapDialog::CMFCKeyMapDialog

Costruisce un oggetto `CMFCKeyMapDialog`.

```
CMFCKeyMapDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bEnablePrint=FALSE);
```

### <a name="parameters"></a>Parametri

*pWndParentFrame*<br/>
[in] Un puntatore alla finestra padre del `CMFCKeyMapDialog` oggetto.

*bEnablePrint*<br/>
[in] TRUE se l'elenco di tasti di scelta rapida può essere stampato; in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCKeyMapDialog` classe. In questo esempio fa parte di [esempio dimostrativo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#21](../../mfc/codesnippet/cpp/cmfckeymapdialog-class_1.cpp)]

##  <a name="domodal"></a>  CMFCKeyMapDialog::DoModal

Visualizza una finestra di dialogo di mappatura della tastiera.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Un intero con segno, ad esempio IDOK o IDCANCEL, che viene passato per il [CDialog::EndDialog](../../mfc/reference/cdialog-class.md#enddialog) (metodo). Il metodo, a sua volta, chiude la finestra di dialogo. Per altre informazioni, vedere [CDialog::DoModal](../../mfc/reference/cdialog-class.md#domodal).

### <a name="remarks"></a>Note

La finestra di dialogo della tastiera mapping consente di selezionare e assegnare tasti di scelta rapida per diverse categorie di comandi. Inoltre, è possibile copiare negli Appunti i tasti di scelta rapida selezionato e la relativa descrizione.

##  <a name="formatitem"></a>  CMFCKeyMapDialog::FormatItem

Chiamato dal framework per compilare una stringa che descrive un mapping delle chiavi. Per impostazione predefinita, la stringa contiene il nome del comando di tasti usate e la descrizione tasti di scelta rapida.

```
virtual CString FormatItem(int nItem) const;
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
[in] Indice a base zero di un elemento nell'elenco interno di mapping di chiavi.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` oggetto che contiene il testo formattato dell'elemento.

### <a name="remarks"></a>Note

##  <a name="getcommandkeys"></a>  CMFCKeyMapDialog::GetCommandKeys

Recupera un valore di stringa. La stringa contiene un elenco di tasti di scelta rapida sono associati a un comando specificato.

```
virtual CString GetCommandKeys(UINT uiCmdID) const;
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
[in] Un ID di comando.

### <a name="return-value"></a>Valore restituito

Delimitato da punto e virgola (';') elenco dei tasti di scelta rapida associato con il comando specificato.

### <a name="remarks"></a>Note

##  <a name="oninsertitem"></a>  CMFCKeyMapDialog::OnInsertItem

Chiamato dal framework prima di un nuovo elemento viene inserito in un controllo elenco interno che supporta il controllo di mappatura della tastiera.

```
virtual void OnInsertItem(
    CMFCToolBarButton* pButton,
    int nItem);
```

### <a name="parameters"></a>Parametri

*pButton*<br/>
[in] Un puntatore a un pulsante della barra degli strumenti che consente di eseguire il mapping di una combinazione di tasti della tastiera a un nome di comando e una descrizione. L'elemento della mappa di chiavi viene archiviato in un controllo elenco interno.

*nItem*<br/>
[in] Indice in base zero che specifica dove inserire il nuovo elemento della mappa di chiavi nel controllo elenco interno.

### <a name="remarks"></a>Note

##  <a name="onprintheader"></a>  CMFCKeyMapDialog::OnPrintHeader

Chiamato dal framework per stampare l'intestazione per la mappa della tastiera in una nuova pagina.

```
virtual int OnPrintHeader(
    CDC& dc,
    int nPage,
    int cx) const;
```

### <a name="parameters"></a>Parametri

*dc*<br/>
[in] Il contesto di dispositivo per la stampante.

*nPage*<br/>
[in] Il numero di pagina da stampare.

*cx*<br/>
[in] L'offset orizzontale dell'intestazione, in pixel.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, l'altezza del testo stampato. Per altre informazioni, vedere la sezione di valore restituito di [CDC](../../mfc/reference/cdc-class.md#drawtext).

### <a name="remarks"></a>Note

Il framework utilizza questo metodo per stampare la mappa della tastiera. Per impostazione predefinita, questo metodo visualizza il numero di pagina, nome dell'applicazione e titolo della finestra di dialogo.

##  <a name="onprintitem"></a>  CMFCKeyMapDialog::OnPrintItem

Chiamato dal framework per stampare una voce di mappatura della tastiera.

```
virtual int OnPrintItem(
    CDC& dc,
    int nItem,
    int y,
    int cx,
    BOOL bCalcHeight) const;
```

### <a name="parameters"></a>Parametri

*dc*<br/>
[in] Il contesto di dispositivo della stampante.

*nItem*<br/>
[in] Indice a base zero dell'elemento da stampare.

*y*<br/>
[in] L'offset verticale tra la parte superiore della pagina e la posizione dell'elemento.

*cx*<br/>
[in] L'offset orizzontale tra sinistra della pagina e la posizione dell'elemento.

*bCalcHeight*<br/>
[in] TRUE per calcolare l'altezza ottimo per l'elemento di stampa. FALSE per l'elemento stampa verrà troncato in modo che quest'ultima rientri lo spazio predefinito.

### <a name="return-value"></a>Valore restituito

L'altezza dell'elemento stampata.

### <a name="remarks"></a>Note

Il framework chiama questo metodo per stampare un elemento di finestra di dialogo mappa di chiavi. Per impostazione predefinita, questo metodo visualizza il nome di comando, tasti di scelta rapida e descrizione comando dell'elemento.

##  <a name="onsetcolumns"></a>  CMFCKeyMapDialog::OnSetColumns

Chiamato dal framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.

```
virtual void OnSetColumns();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo ottiene le didascalie per le colonne da tre risorse. La didascalia della colonna comando proviene da IDS_AFXBARRES_COMMAND, la didascalia della colonna chiave è da IDS_AFXBARRES_KEYS e la didascalia colonna Descrizione proviene da IDS_AFXBARRES_DESCRIPTION.

##  <a name="printkeymap"></a>  CMFCKeyMapDialog::PrintKeyMap

Chiamato dal framework quando un utente sceglie il **stampa** pulsante.

```
virtual void PrintKeyMap();
```

### <a name="remarks"></a>Note

Il `PrintKeyMap` metodo consente di stampare la mappa di chiavi. Avvia un nuovo processo di stampa e quindi chiama ripetutamente i [CMFCKeyMapDialog::OnPrintHeader](#onprintheader) e [CMFCKeyMapDialog::OnPrintItem](#onprintitem) metodi fino a quando non vengono stampati tutti i mapping di chiavi.

##  <a name="setcolumnswidth"></a>  CMFCKeyMapDialog::SetColumnsWidth

Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.

```
virtual void SetColumnsWidth();
```

### <a name="remarks"></a>Note

Questo metodo imposta l'elenco interno le colonne del controllo alla larghezza delle colonne predefinito. In primo luogo, viene calcolata la larghezza della colonna di tasti di scelta rapida. Quindi un terzo della parte rimanente viene allocato per la colonna del comando e i due terzi restanti viene allocato per la colonna di descrizione.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)
