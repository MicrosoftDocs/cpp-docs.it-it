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
ms.openlocfilehash: 22aa006ce214ca720192bb761e2ff2b35a64fce3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374406"
---
# <a name="cmfckeymapdialog-class"></a>Classe CMFCKeyMapDialog

La `CMFCKeyMapDialog` classe supporta un controllo che esegue il mapping dei comandi ai tasti della tastiera.

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
|[CMFCKeyMapDialog::FormatItem](#formatitem)|Chiamato dal framework per compilare una stringa che descrive un mapping dei tasti. Per impostazione predefinita, la stringa contiene il nome del comando, i tasti di scelta rapida utilizzati e la descrizione del tasto di scelta rapida.|
|[CMFCKeyMapDialog::GetCommandKeys](#getcommandkeys)|Recupera una stringa che contiene un elenco di tasti di scelta rapida associati al comando specificato.|
|[CMFCKeyMapDialog::OnInsertItem](#oninsertitem)|Chiamato dal framework prima che un nuovo elemento viene inserito nel controllo elenco interno che supporta il controllo di mapping della tastiera.|
|[CMFCKeyMapDialog::OnPrintHeader](#onprintheader)|Chiamato dal framework per stampare l'intestazione per la mappa della tastiera in una nuova pagina.|
|[CMFCKeyMapDialog::OnPrintItem](#onprintitem)|Chiamato dal framework per stampare un elemento di mapping della tastiera.|
|[CMFCKeyMapDialog::OnSetColumns](#onsetcolumns)|Chiamato dal framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo di mapping della tastiera.|
|[CMFCKeyMapDialog::PrintKeyMap](#printkeymap)|Chiamato dal framework quando un utente fa clic sul pulsante **Stampa.**|
|[CMFCKeyMapDialog::SetColumnsWidth](#setcolumnswidth)|Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo di mapping della tastiera.|

## <a name="remarks"></a>Osservazioni

Utilizzare `CMFCKeyMapDialog` la classe per implementare una finestra di dialogo di mapping della tastiera ridimensionabile. La finestra di dialogo utilizza un controllo visualizzazione elenco per visualizzare i tasti di scelta rapida e i comandi associati.

Per utilizzare `CMFCKeyMapDialog` la classe in un'applicazione, passare un puntatore `CMFCKeyMapDialog` alla finestra cornice principale come parametro al costruttore. Chiamare quindi `DoModal` il metodo per avviare una finestra di dialogo modale.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCKeyMapDialog](../../mfc/reference/cmfckeymapdialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxkeymapdialog.h

## <a name="cmfckeymapdialogcmfckeymapdialog"></a><a name="cmfckeymapdialog"></a>CMFCKeyMapDialog::CMFCKeyMapDialog

Costruisce un oggetto `CMFCKeyMapDialog`.

```
CMFCKeyMapDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bEnablePrint=FALSE);
```

### <a name="parameters"></a>Parametri

*pWndParentFrame (fotogramma pWndParentFrame)*<br/>
[in] Puntatore alla finestra padre `CMFCKeyMapDialog` dell'oggetto.

*bAbilitareStampa*<br/>
[in] TRUESe l'elenco dei tasti di scelta rapida può essere stampato. in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

Nell'esempio `CMFCKeyMapDialog` seguente viene illustrato come costruire un oggetto della classe. Questo esempio fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#21](../../mfc/codesnippet/cpp/cmfckeymapdialog-class_1.cpp)]

## <a name="cmfckeymapdialogdomodal"></a><a name="domodal"></a>CMFCKeyMapDialog::DoModal

Visualizza una finestra di dialogo di mappatura della tastiera.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Intero con segno, ad esempio IDOK o IDCANCEL, che viene passato al [metodo CDialog::EndDialog.](../../mfc/reference/cdialog-class.md#enddialog) Il metodo, a sua volta, chiude la finestra di dialogo. Per ulteriori informazioni, vedere [CDialog::DoModal](../../mfc/reference/cdialog-class.md#domodal).

### <a name="remarks"></a>Osservazioni

La finestra di dialogo di mappatura della tastiera consente di selezionare e assegnare i tasti di scelta rapida a varie categorie di comandi. Inoltre, è possibile copiare i tasti di scelta rapida selezionati e la relativa descrizione negli Appunti.

## <a name="cmfckeymapdialogformatitem"></a><a name="formatitem"></a>CMFCKeyMapDialog::FormatItem

Chiamato dal framework per compilare una stringa che descrive un mapping dei tasti. Per impostazione predefinita, la stringa contiene il nome del comando, i tasti di scelta rapida utilizzati e la descrizione del tasto di scelta rapida.

```
virtual CString FormatItem(int nItem) const;
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
[in] Indice in base zero di un elemento nell'elenco interno dei mapping dei tasti.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il testo dell'elemento formattato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfckeymapdialoggetcommandkeys"></a><a name="getcommandkeys"></a>CMFCKeyMapDialog::GetCommandKeys

Recupera un valore stringa. La stringa contiene un elenco di tasti di scelta rapida associati a un comando specificato.

```
virtual CString GetCommandKeys(UINT uiCmdID) const;
```

### <a name="parameters"></a>Parametri

*uiCmdID (informazioni in questo icomando)*<br/>
[in] Un ID di comando.

### <a name="return-value"></a>Valore restituito

Elenco delimitato da punto e virgola (';') di tasti di scelta rapida associati al comando specificato.

### <a name="remarks"></a>Osservazioni

## <a name="cmfckeymapdialogoninsertitem"></a><a name="oninsertitem"></a>CMFCKeyMapDialog::OnInsertItem

Chiamato dal framework prima che un nuovo elemento viene inserito in un controllo elenco interno che supporta il controllo di mapping della tastiera.

```
virtual void OnInsertItem(
    CMFCToolBarButton* pButton,
    int nItem);
```

### <a name="parameters"></a>Parametri

*pButton (Pulsante)*<br/>
[in] Puntatore a un pulsante della barra degli strumenti utilizzato per eseguire il mapping di una combinazione di tasti della tastiera a un nome di comando e una descrizione. L'elemento della mappa chiave viene archiviato in un controllo elenco interno.

*nVoce*<br/>
[in] Indice in base zero che specifica dove inserire il nuovo elemento della mappa chiave nel controllo elenco interno.

### <a name="remarks"></a>Osservazioni

## <a name="cmfckeymapdialogonprintheader"></a><a name="onprintheader"></a>CMFCKeyMapDialog::OnPrintHeader

Chiamato dal framework per stampare l'intestazione per la mappa della tastiera in una nuova pagina.

```
virtual int OnPrintHeader(
    CDC& dc,
    int nPage,
    int cx) const;
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
[in] Contesto di periferica per la stampante.

*nPagina*<br/>
[in] Numero di pagina da stampare.

*Cx*<br/>
[in] Offset orizzontale dell'intestazione, in pixel.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'altezza del testo stampato. Per ulteriori informazioni, vedere la sezione Valore restituito di [CDC::DrawText](../../mfc/reference/cdc-class.md#drawtext).

### <a name="remarks"></a>Osservazioni

Il framework utilizza questo metodo per stampare la mappa della tastiera. Per impostazione predefinita, questo metodo stampa il numero di pagina, il nome dell'applicazione e il titolo della finestra di dialogo.

## <a name="cmfckeymapdialogonprintitem"></a><a name="onprintitem"></a>CMFCKeyMapDialog::OnPrintItem

Chiamato dal framework per stampare un elemento di mapping della tastiera.

```
virtual int OnPrintItem(
    CDC& dc,
    int nItem,
    int y,
    int cx,
    BOOL bCalcHeight) const;
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
[in] Contesto di periferica della stampante.

*nVoce*<br/>
[in] Indice in base zero dell'elemento da stampare.

*Y*<br/>
[in] Offset verticale tra la parte superiore della pagina e la posizione dell'elemento.

*Cx*<br/>
[in] L'offset orizzontale tra la sinistra della pagina e la posizione dell'elemento.

*bAltezzACalco*<br/>
[in] TRUE per calcolare l'altezza migliore per l'elemento di stampa; FALSE per troncare l'elemento di stampa in modo che si adatti allo spazio predefinito.

### <a name="return-value"></a>Valore restituito

Altezza dell'elemento stampato.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo per stampare un elemento della finestra di dialogo mappa chiave. Per impostazione predefinita, questo metodo stampa il nome del comando dell'elemento, i tasti di scelta rapida e la descrizione del comando.

## <a name="cmfckeymapdialogonsetcolumns"></a><a name="onsetcolumns"></a>CMFCKeyMapDialog::OnSetColumns

Chiamato dal framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo di mapping della tastiera.

```
virtual void OnSetColumns();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo ottiene le didascalie per le colonne da tre risorse. La didascalia della colonna del comando proviene da IDS_AFXBARRES_COMMAND, la didascalia della colonna chiave proviene da IDS_AFXBARRES_KEYS e la didascalia della colonna della descrizione IDS_AFXBARRES_DESCRIPTION.

## <a name="cmfckeymapdialogprintkeymap"></a><a name="printkeymap"></a>CMFCKeyMapDialog::PrintKeyMap

Chiamato dal framework quando un utente fa clic sul pulsante **Stampa.**

```
virtual void PrintKeyMap();
```

### <a name="remarks"></a>Osservazioni

Il `PrintKeyMap` metodo stampa la mappa chiave. Avvia un nuovo processo di stampa e quindi chiama ripetutamente il [CMFCKeyMapDialog::OnPrintHeader](#onprintheader) e [CMFCKeyMapDialog::OnPrintItem](#onprintitem) metodi fino a quando non vengono stampati tutti i mapping dei tasti.

## <a name="cmfckeymapdialogsetcolumnswidth"></a><a name="setcolumnswidth"></a>CMFCKeyMapDialog::SetColumnsWidth

Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo di mapping della tastiera.

```
virtual void SetColumnsWidth();
```

### <a name="remarks"></a>Osservazioni

Questo metodo imposta le colonne del controllo elenco interno sulle larghezze predefinite. Innanzitutto, viene calcolata la larghezza della colonna dei tasti di scelta rapida. Quindi un terzo della larghezza rimanente viene allocato alla colonna di comando e i due terzi rimanenti vengono allocati alla colonna description.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)
