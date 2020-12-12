---
description: 'Altre informazioni su: classe CFontDialog'
title: Classe CFontDialog
ms.date: 11/04/2016
f1_keywords:
- CFontDialog
- AFXDLGS/CFontDialog
- AFXDLGS/CFontDialog::CFontDialog
- AFXDLGS/CFontDialog::DoModal
- AFXDLGS/CFontDialog::GetCharFormat
- AFXDLGS/CFontDialog::GetColor
- AFXDLGS/CFontDialog::GetCurrentFont
- AFXDLGS/CFontDialog::GetFaceName
- AFXDLGS/CFontDialog::GetSize
- AFXDLGS/CFontDialog::GetStyleName
- AFXDLGS/CFontDialog::GetWeight
- AFXDLGS/CFontDialog::IsBold
- AFXDLGS/CFontDialog::IsItalic
- AFXDLGS/CFontDialog::IsStrikeOut
- AFXDLGS/CFontDialog::IsUnderline
- AFXDLGS/CFontDialog::m_cf
helpviewer_keywords:
- CFontDialog [MFC], CFontDialog
- CFontDialog [MFC], DoModal
- CFontDialog [MFC], GetCharFormat
- CFontDialog [MFC], GetColor
- CFontDialog [MFC], GetCurrentFont
- CFontDialog [MFC], GetFaceName
- CFontDialog [MFC], GetSize
- CFontDialog [MFC], GetStyleName
- CFontDialog [MFC], GetWeight
- CFontDialog [MFC], IsBold
- CFontDialog [MFC], IsItalic
- CFontDialog [MFC], IsStrikeOut
- CFontDialog [MFC], IsUnderline
- CFontDialog [MFC], m_cf
ms.assetid: 6228d500-ed0f-4156-81e5-ab0d57d1dcf4
ms.openlocfilehash: c1f8637a6106db9220721dffe67a2ed1d53b26b7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184348"
---
# <a name="cfontdialog-class"></a>Classe CFontDialog

Consente di incorporare una finestra di dialogo di selezione dei tipi di carattere nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CFontDialog : public CCommonDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CFontDialog:: CFontDialog](#cfontdialog)|Costruisce un oggetto `CFontDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CFontDialog::D oModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CFontDialog:: GetCharFormat](#getcharformat)|Recupera la formattazione dei caratteri del tipo di carattere selezionato.|
|[CFontDialog:: GetColor](#getcolor)|Restituisce il colore del tipo di carattere selezionato.|
|[CFontDialog:: GetCurrentFont](#getcurrentfont)|Assegna le caratteristiche del tipo di carattere attualmente selezionato a una `LOGFONT` struttura.|
|[CFontDialog:: getFacename](#getfacename)|Restituisce il nome del tipo di carattere selezionato.|
|[CFontDialog:: GetSize](#getsize)|Restituisce la dimensione in punti del tipo di carattere selezionato.|
|[CFontDialog:: GetStyleName](#getstylename)|Restituisce il nome dello stile del tipo di carattere selezionato.|
|[CFontDialog:: getWeight](#getweight)|Restituisce lo spessore del tipo di carattere selezionato.|
|[CFontDialog:: sfrontato](#isbold)|Determina se il tipo di carattere è in grassetto.|
|[CFontDialog:: Italic](#isitalic)|Determina se il tipo di carattere è in corsivo.|
|[CFontDialog:: assalto](#isstrikeout)|Determina se il tipo di carattere viene visualizzato con lo stato di attacco.|
|[CFontDialog:: di sottolineatura](#isunderline)|Determina se il tipo di carattere è sottolineato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CFontDialog:: m_cf](#m_cf)|Struttura utilizzata per personalizzare un `CFontDialog` oggetto.|

## <a name="remarks"></a>Commenti

Un `CFontDialog` oggetto è una finestra di dialogo con un elenco di tipi di carattere attualmente installati nel sistema. L'utente può selezionare un tipo di carattere specifico dall'elenco. questa selezione viene quindi restituita all'applicazione.

Per costruire un `CFontDialog` oggetto, usare il costruttore fornito o derivare una nuova sottoclasse e usare un costruttore personalizzato.

Una volta `CFontDialog` creato un oggetto, è possibile utilizzare la `m_cf` struttura per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La struttura [m_cf](#m_cf) è di tipo [ChooseFont](/windows/win32/api/commdlg/ns-commdlg-choosefontw). Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

Dopo l'inizializzazione dei controlli dell'oggetto finestra di dialogo, chiamare la `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare un tipo di carattere. `DoModal` Restituisce un valore che indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL).

Se `DoModal` restituisce IDOK, è possibile usare una delle `CFontDialog` funzioni membro di per recuperare l'input di informazioni da parte dell'utente.

È possibile utilizzare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ottenere ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedere la Windows SDK.

`CFontDialog` si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.

Per personalizzare la finestra di dialogo, derivare una classe da `CFontDialog` , fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi. Tutti i messaggi non elaborati devono essere passati alla classe di base.

Non è necessario personalizzare la funzione hook.

Per ulteriori informazioni sull'utilizzo di `CFontDialog` , vedere [Common Dialog Classes](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CFontDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

## <a name="cfontdialogcfontdialog"></a><a name="cfontdialog"></a> CFontDialog:: CFontDialog

Costruisce un oggetto `CFontDialog`.

```
CFontDialog(
    LPLOGFONT lplfInitial = NULL,
    DWORD dwFlags = CF_EFFECTS | CF_SCREENFONTS,
    CDC* pdcPrinter = NULL,
    CWnd* pParentWnd = NULL);

CFontDialog(
    const CHARFORMAT& charformat,
    DWORD dwFlags = CF_SCREENFONTS,
    CDC* pdcPrinter = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*plfInitial*<br/>
Puntatore a una struttura di dati [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) che consente di impostare alcune delle caratteristiche del tipo di carattere.

*charFormat*<br/>
Puntatore a una struttura di dati [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) che consente di impostare alcune delle caratteristiche del tipo di carattere in un controllo Rich Edit.

*dwFlags*<br/>
Specifica uno o più flag di scelta del tipo di carattere. È possibile combinare valori preimpostati usando l'operatore OR bit per bit. Se si modifica il membro della struttura `m_cf.Flag`s, verificare di usare un operatore OR bit per bit nelle modifiche per mantenere l'integrità del comportamento predefinito. Per informazioni dettagliate su ognuno di questi flag, vedere la descrizione della struttura [ChooseFont](/windows/win32/api/commdlg/ns-commdlg-choosefontw) nel Windows SDK.

*pdcPrinter*<br/>
Un puntatore a un contesto di dispositivo stampante. Se fornito, questo parametro punta a un contesto di dispositivo stampante per la stampante in cui devono essere selezionati i tipi di carattere.

*pParentWnd*<br/>
Un puntatore alla finestra padre o proprietaria della finestra di dialogo del tipo di carattere.

### <a name="remarks"></a>Commenti

Si noti che il costruttore riempie automaticamente i membri della struttura `CHOOSEFONT`, che devono essere modificati solo se la finestra di dialogo del tipo di carattere deve essere diversa da quella predefinita.

> [!NOTE]
> La prima versione di questa funzione esiste solo quando non è presente alcun supporto del controllo Rich Edit.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#78](../../mfc/codesnippet/cpp/cfontdialog-class_1.cpp)]

## <a name="cfontdialogdomodal"></a><a name="domodal"></a> CFontDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo tipo di carattere comune di Windows e consentire all'utente di scegliere un tipo di carattere.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Commenti

Se si desidera inizializzare i vari controlli della finestra di dialogo del tipo di carattere impostando i membri della struttura [m_cf](#m_cf) , è necessario eseguire questa operazione prima di chiamare `DoModal` , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o l'input di informazioni da parte dell'utente nella finestra di dialogo.

### <a name="example"></a>Esempio

  Vedere gli esempi per [CFontDialog:: CFontDialog](#cfontdialog) e [CFontDialog:: GetColor](#getcolor).

## <a name="cfontdialoggetcharformat"></a><a name="getcharformat"></a> CFontDialog:: GetCharFormat

Recupera la formattazione dei caratteri del tipo di carattere selezionato.

```cpp
void GetCharFormat(CHARFORMAT& cf) const;
```

### <a name="parameters"></a>Parametri

*CF*<br/>
Struttura [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) contenente informazioni sulla formattazione dei caratteri del tipo di carattere selezionato.

## <a name="cfontdialoggetcolor"></a><a name="getcolor"></a> CFontDialog:: GetColor

Chiamare questa funzione per recuperare il colore del tipo di carattere selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore del tipo di carattere selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#79](../../mfc/codesnippet/cpp/cfontdialog-class_2.cpp)]

## <a name="cfontdialoggetcurrentfont"></a><a name="getcurrentfont"></a> CFontDialog:: GetCurrentFont

Chiamare questa funzione per assegnare le caratteristiche del tipo di carattere attualmente selezionato ai membri di una struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) .

```cpp
void GetCurrentFont(LPLOGFONT lplf);
```

### <a name="parameters"></a>Parametri

*lplf*<br/>
Puntatore a una `LOGFONT` struttura.

### <a name="remarks"></a>Commenti

`CFontDialog`Sono disponibili altre funzioni membro per accedere a singole caratteristiche del tipo di carattere corrente.

Se questa funzione viene chiamata durante una chiamata a [DoModal](#domodal), restituisce la selezione corrente al momento (ciò che l'utente vede o è stato modificato nella finestra di dialogo). Se questa funzione viene chiamata dopo una chiamata a `DoModal` (solo se `DoModal` restituisce IDOK), restituisce l'elemento effettivamente selezionato dall'utente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#80](../../mfc/codesnippet/cpp/cfontdialog-class_3.cpp)]

## <a name="cfontdialoggetfacename"></a><a name="getfacename"></a> CFontDialog:: getFacename

Chiamare questa funzione per recuperare il nome del tipo di carattere del tipo di carattere selezionato.

```
CString GetFaceName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del tipo di carattere selezionato nella finestra di `CFontDialog` dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#81](../../mfc/codesnippet/cpp/cfontdialog-class_4.cpp)]

## <a name="cfontdialoggetsize"></a><a name="getsize"></a> CFontDialog:: GetSize

Chiamare questa funzione per recuperare le dimensioni del tipo di carattere selezionato.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni del carattere, in decimi di un punto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#82](../../mfc/codesnippet/cpp/cfontdialog-class_5.cpp)]

## <a name="cfontdialoggetstylename"></a><a name="getstylename"></a> CFontDialog:: GetStyleName

Chiamare questa funzione per recuperare il nome dello stile del tipo di carattere selezionato.

```
CString GetStyleName() const;
```

### <a name="return-value"></a>Valore restituito

Nome dello stile del tipo di carattere.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#83](../../mfc/codesnippet/cpp/cfontdialog-class_6.cpp)]

## <a name="cfontdialoggetweight"></a><a name="getweight"></a> CFontDialog:: getWeight

Chiamare questa funzione per recuperare lo spessore del tipo di carattere selezionato.

```
int GetWeight() const;
```

### <a name="return-value"></a>Valore restituito

Spessore del tipo di carattere selezionato.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sul peso di un tipo di carattere, vedere [CFont:: CreateFont](../../mfc/reference/cfont-class.md#createfont).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#84](../../mfc/codesnippet/cpp/cfontdialog-class_7.cpp)]

## <a name="cfontdialogisbold"></a><a name="isbold"></a> CFontDialog:: sfrontato

Chiamare questa funzione per determinare se il tipo di carattere selezionato è in grassetto.

```
BOOL IsBold() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere selezionato ha la caratteristica in grassetto abilitata; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#85](../../mfc/codesnippet/cpp/cfontdialog-class_8.cpp)]

## <a name="cfontdialogisitalic"></a><a name="isitalic"></a> CFontDialog:: Italic

Chiamare questa funzione per determinare se il tipo di carattere selezionato è in corsivo.

```
BOOL IsItalic() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se per il tipo di carattere selezionato è abilitata la caratteristica corsivo; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#86](../../mfc/codesnippet/cpp/cfontdialog-class_9.cpp)]

## <a name="cfontdialogisstrikeout"></a><a name="isstrikeout"></a> CFontDialog:: assalto

Chiamare questa funzione per determinare se il tipo di carattere selezionato viene visualizzato con lo stato di attacco.

```
BOOL IsStrikeOut() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se per il tipo di carattere selezionato è abilitata la caratteristica di attacco; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#87](../../mfc/codesnippet/cpp/cfontdialog-class_10.cpp)]

## <a name="cfontdialogisunderline"></a><a name="isunderline"></a> CFontDialog:: di sottolineatura

Chiamare questa funzione per determinare se il tipo di carattere selezionato è sottolineato.

```
BOOL IsUnderline() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere selezionato ha la caratteristica di sottolineatura abilitata; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#88](../../mfc/codesnippet/cpp/cfontdialog-class_11.cpp)]

## <a name="cfontdialogm_cf"></a><a name="m_cf"></a> CFontDialog:: m_cf

Struttura i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.

```
CHOOSEFONT m_cf;
```

### <a name="remarks"></a>Commenti

Dopo la costruzione di un `CFontDialog` oggetto, è possibile utilizzare `m_cf` per modificare diversi aspetti della finestra di dialogo prima di chiamare la `DoModal` funzione membro. Per ulteriori informazioni su questa struttura, vedere [ChooseFont](/windows/win32/api/commdlg/ns-commdlg-choosefontw) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#89](../../mfc/codesnippet/cpp/cfontdialog-class_12.cpp)]

## <a name="see-also"></a>Vedere anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
