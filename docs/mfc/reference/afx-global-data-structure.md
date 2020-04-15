---
title: AFX_GLOBAL_DATA (struttura)
ms.date: 11/04/2016
f1_keywords:
- AFX_GLOBAL_DATA
- AFXGLOBALS/AFX_GLOBAL_DATA::AFX_GLOBAL_DATA
- AFXGLOBALS/AFX_GLOBAL_DATA::~AFX_GLOBAL_DATA
- AFXGLOBALS/AFX_GLOBAL_DATA::CleanUp
- AFXGLOBALS/AFX_GLOBAL_DATA::D2D1MakeRotateMatrix
- AFXGLOBALS/AFX_GLOBAL_DATA::DrawParentBackground
- AFXGLOBALS/AFX_GLOBAL_DATA::DrawTextOnGlass
- AFXGLOBALS/AFX_GLOBAL_DATA::ExcludeTag
- AFXGLOBALS/AFX_GLOBAL_DATA::GetColor
- AFXGLOBALS/AFX_GLOBAL_DATA::GetDirect2dFactory
- AFXGLOBALS/AFX_GLOBAL_DATA::GetHandCursor
- AFXGLOBALS/AFX_GLOBAL_DATA::GetITaskbarList
- AFXGLOBALS/AFX_GLOBAL_DATA::GetITaskbarList3
- AFXGLOBALS/AFX_GLOBAL_DATA::GetNonClientMetrics
- AFXGLOBALS/AFX_GLOBAL_DATA::GetShellAutohideBars
- AFXGLOBALS/AFX_GLOBAL_DATA::GetTextHeight
- AFXGLOBALS/AFX_GLOBAL_DATA::GetWICFactory
- AFXGLOBALS/AFX_GLOBAL_DATA::GetWriteFactory
- AFXGLOBALS/AFX_GLOBAL_DATA::InitD2D
- AFXGLOBALS/AFX_GLOBAL_DATA::Is32BitIcons
- AFXGLOBALS/AFX_GLOBAL_DATA::IsD2DInitialized
- AFXGLOBALS/AFX_GLOBAL_DATA::IsDwmCompositionEnabled
- AFXGLOBALS/AFX_GLOBAL_DATA::IsHighContrastMode
- AFXGLOBALS/AFX_GLOBAL_DATA::OnSettingChange
- AFXGLOBALS/AFX_GLOBAL_DATA::RegisterWindowClass
- AFXGLOBALS/AFX_GLOBAL_DATA::ReleaseTaskBarRefs
- AFXGLOBALS/AFX_GLOBAL_DATA::Resume
- AFXGLOBALS/AFX_GLOBAL_DATA::SetLayeredAttrib
- AFXGLOBALS/AFX_GLOBAL_DATA::SetMenuFont
- AFXGLOBALS/AFX_GLOBAL_DATA::ShellCreateItemFromParsingName
- AFXGLOBALS/AFX_GLOBAL_DATA::UpdateFonts
- AFXGLOBALS/AFX_GLOBAL_DATA::UpdateSysColors
- AFXGLOBALS/AFX_GLOBAL_DATA::EnableAccessibilitySupport
- AFXGLOBALS/AFX_GLOBAL_DATA::IsAccessibilitySupport
- AFXGLOBALS/AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable
- AFXGLOBALS/AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport
- AFXGLOBALS/AFX_GLOBAL_DATA::bIsWindows7
- AFXGLOBALS/AFX_GLOBAL_DATA::clrActiveCaptionGradient
- AFXGLOBALS/AFX_GLOBAL_DATA::clrInactiveCaptionGradient
- AFXGLOBALS/AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons
- AFXGLOBALS/AFX_GLOBAL_DATA::m_bUseSystemFont
- AFXGLOBALS/AFX_GLOBAL_DATA::m_hcurHand
- AFXGLOBALS/AFX_GLOBAL_DATA::m_hcurStretch
- AFXGLOBALS/AFX_GLOBAL_DATA::m_hcurStretchVert
- AFXGLOBALS/AFX_GLOBAL_DATA::m_hiconTool
- AFXGLOBALS/AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin
- AFXGLOBALS/AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing
- AFXGLOBALS/AFX_GLOBAL_DATA::m_nDragFrameThicknessDock
- AFXGLOBALS/AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat
helpviewer_keywords:
- AFX_GLOBAL_DATA structure [MFC]
- AFX_GLOBAL_DATA constructor
ms.assetid: c7abf2fb-ad5e-4336-a01d-260c29ed53a2
ms.openlocfilehash: 60f7513075e8da7e17f2113c01b954af5a690aaf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363674"
---
# <a name="afx_global_data-structure"></a>AFX_GLOBAL_DATA (struttura)

La struttura `AFX_GLOBAL_DATA` contiene i campi e i metodi usati per gestire il framework o per personalizzare l'aspetto e il comportamento dell'applicazione.

## <a name="syntax"></a>Sintassi

```
struct AFX_GLOBAL_DATA
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`AFX_GLOBAL_DATA::AFX_GLOBAL_DATA`|Costruisce una struttura `AFX_GLOBAL_DATA` .|
|`AFX_GLOBAL_DATA::~AFX_GLOBAL_DATA`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[AFX_GLOBAL_DATA::CleanUp](#cleanup)|Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.|
|[AFX_GLOBAL_DATA::D2D1MakeRotateMatrix](#d2d1makerotatematrix)|Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.|
|[AFX_GLOBAL_DATA::DrawParentBackground](#drawparentbackground)|Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.|
|[AFX_GLOBAL_DATA::DrawTextOnGlass](#drawtextonglass)|Disegna il testo specificato nello stile di visualizzazione del tema specificato.|
|[AFX_GLOBAL_DATA::ExcludeTag](#excludetag)|Rimuove la coppia di tag XML specificata da un determinato buffer.|
|[AFX_GLOBAL_DATA::GetColor](#getcolor)|Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.|
|[AFX_GLOBAL_DATA::GetDirect2dFactory](#getdirect2dfactory)|Restituisce un puntatore all'interfaccia `ID2D1Factory` archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.|
|[AFX_GLOBAL_DATA::GetHandCursor](#gethandcursor)|Recupera il cursore predefinito che rappresenta una mano e il cui identificatore è `IDC_HAND`.|
|[AFX_GLOBAL_DATA::GetITaskbarList](#getitaskbarlist)|Crea e archivia nei dati globali un puntatore all'interfaccia ITaskBarList.|
|[AFX_GLOBAL_DATA::GetITaskbarList3](#getitaskbarlist3)|Crea e archivia nei dati globali un puntatore all'interfaccia ITaskBarList3.|
|[AFX_GLOBAL_DATA::GetNonClientMetrics](#getnonclientmetrics)|Recupera la metrica associata all'area non client delle finestre non ridotte a icona.|
|[AFX_GLOBAL_DATA::GetShellAutohideBars](#getshellautohidebars)|Determina le posizioni delle barre della Shell che si nascondono automaticamente.|
|[AFX_GLOBAL_DATA::GetTextHeight](#gettextheight)|Recupera l'altezza dei caratteri di testo nel tipo di carattere corrente.|
|[AFX_GLOBAL_DATA::GetWICFactory](#getwicfactory)|Restituisce un puntatore all'interfaccia `IWICImagingFactory` archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.|
|[AFX_GLOBAL_DATA::GetWriteFactory](#getwritefactory)|Restituisce un puntatore all'interfaccia `IDWriteFactory` archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.|
|[AFX_GLOBAL_DATA::InitD2D](#initd2d)|Inizializza le factory `D2D`, `DirectWrite`e `WIC` . Chiamare questo metodo prima dell'inizializzazione della finestra principale.|
|[AFX_GLOBAL_DATA::Is32BitIcons](#is32biticons)|Indica se sono supportate le icone a 32 bit predefinite.|
|[AFX_GLOBAL_DATA::IsD2DInitialized](#isd2dinitialized)|Determina se la factory `D2D` è stata inizializzata.|
|[AFX_GLOBAL_DATA::IsDwmCompositionEnabled](#isdwmcompositionenabled)|Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](/windows/win32/api/dwmapi/nf-dwmapi-dwmiscompositionenabled) di Windows.|
|[AFX_GLOBAL_DATA::IsHighContrastMode](#ishighcontrastmode)|Indica se le immagini sono attualmente visualizzate con contrasto elevato.|
|[AFX_GLOBAL_DATA::OnSettingChange](#onsettingchange)|Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.|
|[AFX_GLOBAL_DATA::RegisterWindowClass](#registerwindowclass)|Registra la classe di finestre MFC specificata.|
|[AFX_GLOBAL_DATA::ReleaseTaskBarRefs](#releasetaskbarrefs)|Rilascia le interfacce ottenute tramite i metodi GetITaskbarList e GetITaskbarList3.|
|[AFX_GLOBAL_DATA::Resume](#resume)|Reinizializza i puntatori a funzione interna che hanno accesso ai metodi che supportano [temi e stili di visualizzazione](/windows/win32/Controls/visual-styles-overview)di Windows.|
|[AFX_GLOBAL_DATA::SetLayeredAttrib](#setlayeredattrib)|Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-setlayeredwindowattributes) di Windows.|
|[AFX_GLOBAL_DATA::SetMenuFont](#setmenufont)|Crea il tipo di carattere logico specificato.|
|[AFX_GLOBAL_DATA::ShellCreateItemFromParsingName](#shellcreateitemfromparsingname)|Crea e inizializza un oggetto Shell da un nome di analisi.|
|[AFX_GLOBAL_DATA::UpdateFonts](#updatefonts)|Reinizializza i tipi di carattere logici usati dal framework.|
|[AFX_GLOBAL_DATA::UpdateSysColors](#updatesyscolors)|Inizializza i colori, l'intensità di colore, i pennelli, le penne e le immagini usati dal framework.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[AFX_GLOBAL_DATA::EnableAccessibilitySupport](#enableaccessibilitysupport)|Abilita o disabilita il supporto di Microsoft Active Accessibility. In Active Accessibility sono disponibili metodi affidabili per l'esposizione di informazioni sugli elementi dell'interfaccia utente.|
|[AFX_GLOBAL_DATA::IsAccessibilitySupport](#isaccessibilitysupport)|Indica se il supporto di Microsoft Active Accessibility è abilitato.|
|[AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable](#iswindowslayersupportavailable)|Indica se il sistema operativo supporta le finestre sovrapposte.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport](#bisosalphablendingsupport)|Indica se il sistema operativo corrente supporta la fusione alfa.|
|[AFX_GLOBAL_DATA::bIsWindows7](#biswindows7)|Indica se l'applicazione è in esecuzione in un sistema operativo Windows 7 o versione successiva.|
|[AFX_GLOBAL_DATA::clrActiveCaptionGradient](#clractivecaptiongradient)|Specifica il colore sfumato della didascalia attiva. Viene in genere usato per i riquadri ancorabili.|
|[AFX_GLOBAL_DATA::clrInactiveCaptionGradient](#clrinactivecaptiongradient)|Specifica il colore sfumato della didascalia inattiva. Viene in genere usato per i riquadri ancorabili.|
|[AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons](#m_busebuiltin32biticons)|Indica se il framework usa icone predefinite con colori a 32 bit o icone con una risoluzione più bassa.|
|[AFX_GLOBAL_DATA::m_bUseSystemFont](#m_busesystemfont)|Indica se un tipo di carattere di sistema viene usato per i menu, le barre degli strumenti e le barre multifunzione.|
|[AFX_GLOBAL_DATA::m_hcurHand](#m_hcurhand)|Archivia l'handle per il cursore a forma di mano.|
|[AFX_GLOBAL_DATA::m_hcurStretch](#m_hcurstretch)|Archivia l'handle per il cursore di adattamento orizzontale.|
|[AFX_GLOBAL_DATA::m_hcurStretchVert](#m_hcurstretchvert)|Archivia l'handle per il cursore di adattamento verticale.|
|[AFX_GLOBAL_DATA::m_hiconTool](#m_hicontool)|Archivia l'handle per l'icona dello strumento.|
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin](#m_nautohidetoolbarmargin)|Specifica l'offset dalla barra degli strumenti che si nasconde automaticamente più a sinistra nel lato sinistro della barra ancorabile.|
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing](#m_nautohidetoolbarspacing)|Specifica la distanza tra le barre degli strumenti che si nascondono automaticamente.|
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](#m_ndragframethicknessdock)|Specifica lo spessore del frame di trascinamento usato per comunicare lo stato ancorato.|
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](#m_ndragframethicknessfloat)|Specifica lo spessore del frame di trascinamento usato per comunicare lo stato mobile.|

### <a name="remarks"></a>Osservazioni

La maggior parte dei dati della struttura `AFX_GLOBAL_DATA` viene inizializzata all'avvio dell'applicazione.

### <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`AFX_GLOBAL_DATA`

### <a name="requirements"></a>Requisiti

**Intestazione:** afxglobals.h

## <a name="afx_global_databisosalphablendingsupport"></a><a name="bisosalphablendingsupport"></a>AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport

Indica se il sistema operativo supporta la fusione alfa.

```
BOOL  bIsOSAlphaBlendingSupport;
```

### <a name="remarks"></a>Osservazioni

TRUE indica che la fusione alfa è supportata; in caso contrario, FALSE.

## <a name="afx_global_datacleanup"></a><a name="cleanup"></a>AFX_GLOBAL_DATA::Pulizia

Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.

```
void CleanUp();
```

## <a name="afx_global_datad2d1makerotatematrix"></a><a name="d2d1makerotatematrix"></a>AFX_GLOBAL_DATA::D2D1MakeRotateMatrix

Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.

```
HRESULT D2D1MakeRotateMatrix(
    FLOAT angle,
    D2D1_POINT_2F center,
    D2D1_MATRIX_3X2_F *matrix);
```

### <a name="parameters"></a>Parametri

*angle*<br/>
Angolo di rotazione in senso antiorario espresso in gradi.

*center*<br/>
Punto su cui ruotare.

*Matrice*<br/>
Quando termina, questo metodo contiene la nuova trasformazione di rotazione. È necessario allocare spazio di archiviazione per questo parametro.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un valore di errore in caso contrario.

## <a name="afx_global_datadrawparentbackground"></a><a name="drawparentbackground"></a>AFX_GLOBAL_DATA::DrawParentBackground

Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.

```
BOOL DrawParentBackground(
    CWnd* pWnd,
    CDC* pDC,
    LPRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Puntatore alla finestra di un controllo.

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*Lprect*<br/>
[in] Puntatore a un rettangolo che delimita l'area da disegnare. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="afx_global_datadrawtextonglass"></a><a name="drawtextonglass"></a>AFX_GLOBAL_DATA::DrawTextOnGlass

Disegna il testo specificato nello stile di visualizzazione del tema specificato.

```
BOOL DrawTextOnGlass(
    HTHEME hTheme,
    CDC* pDC,
    int iPartId,
    int iStateId,
    CString strText,
    CRect rect,
    DWORD dwFlags,
    int nGlowSize = 0,
    COLORREF clrText = (COLORREF)-1);
```

### <a name="parameters"></a>Parametri

*hTema*<br/>
[in] Gestire i dati del tema di una finestra o NULL. Il framework utilizza il tema specificato per disegnare il testo se questo parametro non è NULL e i temi sono supportati. In caso contrario, il framework non usa un tema per disegnare il testo.

Utilizzare il [metodo OpenThemeData](/windows/win32/api/uxtheme/nf-uxtheme-openthemedata) per creare un HTHEME.

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*IPartId (informazioni in stato inattivo)*<br/>
[in] La parte di controllo con l'aspetto del testo desiderato. Per altre informazioni vedere la colonna Parti della tabella in [Parti e stati](/windows/win32/controls/parts-and-states). Se questo valore è 0, il testo viene disegnato nel tipo di carattere predefinito o in un tipo di carattere selezionato nel contesto di dispositivo.

*iStateId (informazioni in stato di instato)*<br/>
[in] Stato del controllo con l'aspetto del testo desiderato. Per altre informazioni vedere la colonna Stati della tabella in [Parti e stati](/windows/win32/controls/parts-and-states).

*strText (testo str)*<br/>
[in] Testo da disegnare.

*Rect*<br/>
[in] Il contorno dell'area in cui viene disegnato il testo specificato.

*dwFlags*<br/>
[in] Combinazione bit per bit (OR) di flag che specificano la modalità di disegno del testo specificato.

Se il parametro `NULL` *hTheme* è o se i temi non sono supportati e abilitati, il parametro *nFormat* del metodo [CDC::DrawText](../../mfc/reference/cdc-class.md#drawtext) descrive i flag validi. Se i temi sono supportati, il parametro *dwFlags* del metodo [DrawThemeTextEx](/windows/win32/api/uxtheme/nf-uxtheme-drawthemetextex) descrive i flag validi.

*nGlowSize (Informazioni in stati ingrandissi*<br/>
[in] Dimensioni di un effetto alone disegnato sullo sfondo prima di disegnare il testo specificato. Il valore predefinito è 0.

*clrText*<br/>
[in] Colore in cui viene disegnato il testo specificato. Il valore predefinito è il colore predefinito.

### <a name="return-value"></a>Valore restituito

TRUESe un tema viene utilizzato per disegnare il testo specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Un tema definisce lo stile di visualizzazione di un'applicazione. Un tema non viene utilizzato per disegnare il testo se il *hTheme* parametro è NULL, o se il [DrawThemeTextEx](/windows/win32/api/uxtheme/nf-uxtheme-drawthemetextex) metodo non è supportato o se la composizione di [Gestione finestre Desktop](/windows/win32/dwm/dwm-overview) (DWM) è disabilitato.

## <a name="afx_global_dataenableaccessibilitysupport"></a><a name="enableaccessibilitysupport"></a>AFX_GLOBAL_DATA::EnableAccessibilitySupport

Abilita o disabilita il supporto di Microsoft Active Accessibility.

```
void EnableAccessibilitySupport(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare il supporto per l'accessibilità; FALSE per disabilitare il supporto dell'accessibilità. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

L'accessibilità attiva è una tecnologia basata su COM che migliora il modo in cui i programmi e il sistema operativo Windows lavorano insieme ai prodotti di Assistive Technology. Fornisce metodi affidabili per l'esposizione di informazioni sugli elementi dell'interfaccia utente. Tuttavia, è ora disponibile un nuovo modello di accessibilità denominato Automazione dell'interfaccia utente Microsoft. Per un confronto tra le due tecnologie, vedere [Automazione interfaccia utenteUI Automation e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility).

Utilizzare il metodo [AFX_GLOBAL_DATA::IsAccessibilitySupport](#isaccessibilitysupport) per determinare se è abilitato il supporto Microsoft Active Accessibility.

## <a name="afx_global_dataexcludetag"></a><a name="excludetag"></a>AFX_GLOBAL_DATA::ExcludeTag

Rimuove la coppia di tag XML specificata da un determinato buffer.

```
BOOL ExcludeTag(
    CString& strBuffer,
    LPCTSTR lpszTag,
    CString& strTag,
    BOOL bIsCharsList = FALSE);
```

### <a name="parameters"></a>Parametri

*strBuffer (strBuffer)*<br/>
[in] Un buffer di testo.

*lpszTag (tag)*<br/>
[in] Nome di una coppia di tag XML di apertura e chiusura.

*strTag (strTag)*<br/>
[fuori] Quando termina, il parametro *strTag* contiene il testo compreso tra i tag XML di apertura e chiusura denominati dal parametro *lpszTag.* Qualsiasi spazio vuoto iniziale o finale viene tagliato dal risultato.

*bIsCharsList*<br/>
[in] TRUE per convertire i simboli per i caratteri di escape nel parametro *strTag* in caratteri di escape effettivi; FALSE per non eseguire la conversione. Il valore predefinito è FALSE. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Una coppia di tag XML è costituita da tag di apertura e chiusura denominati che indicano l'inizio e la fine di una conduzione di testo nel buffer specificato. Il parametro *strBuffer* consente di specificare il buffer e il parametro *lpszTag* specifica il nome dei tag XML.

Utilizzare i simboli nella tabella seguente per codificare un set di caratteri di escape nel buffer specificato. Specificare TRUE per il *bIsCharsList* parametro per convertire i simboli nel *strTag* parametro in caratteri di escape effettivi. Nella tabella seguente viene utilizzata la macro [_T()](../../c-runtime-library/data-type-mappings.md) per specificare il simbolo e le stringhe di caratteri di escape.

|Simbolo|Carattere di escape|
|------------|----------------------|
|_T("T")\\|_T("-t")|
|_T("\\n")|_T("n")|
|_T("R")\\|_T("'r")|
|_T("\\b")|_T("'b")|
|_T("LT")|_T("\<")|
|_T("GT")|_T(">")|
|_T("AMP")|_T("&")|

## <a name="afx_global_datagetcolor"></a><a name="getcolor"></a>AFX_GLOBAL_DATA::GetColor

Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.

```
COLORREF GetColor(int nColor);
```

### <a name="parameters"></a>Parametri

*nColore*<br/>
[in] Valore che specifica un elemento dell'interfaccia utente il cui colore viene recuperato. Per un elenco dei valori validi, vedere il parametro *nIndex* del metodo [GetSysColor.](/windows/win32/api/winuser/nf-winuser-getsyscolor)

### <a name="return-value"></a>Valore restituito

Valore di colore RGB dell'elemento dell'interfaccia utente specificato. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Se il *nColor* parametro non è compreso nell'intervallo, il valore restituito è zero. Poiché anche zero è un valore RGB valido, non è possibile utilizzare questo metodo per determinare se un colore di sistema è supportato dal sistema operativo corrente. Utilizzare invece il [GetSysColorBrush](/windows/win32/api/winuser/nf-winuser-getsyscolorbrush) metodo, che restituisce NULL se il colore non è supportato.

## <a name="afx_global_datagetdirect2dfactory"></a><a name="getdirect2dfactory"></a>AFX_GLOBAL_DATA::GetDirect2dFactory

Restituisce un puntatore all'interfaccia ID2D1Factory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.

```
ID2D1Factory* GetDirect2dFactory();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia ID2D1Factory se la creazione di una factory ha esito positivo o NULL se la creazione non riesce o il sistema operativo corrente non dispone del supporto D2D.

## <a name="afx_global_datagethandcursor"></a><a name="gethandcursor"></a>AFX_GLOBAL_DATA::GetHandCursor

Recupera il cursore predefinito simile a una mano e il cui identificatore è IDC_HAND.

```
HCURSOR GetHandCursor();
```

### <a name="return-value"></a>Valore restituito

Handle del cursore a mano.

## <a name="afx_global_datagetnonclientmetrics"></a><a name="getnonclientmetrics"></a>AFX_GLOBAL_DATA::GetNonClientMetrics

Recupera la metrica associata all'area non client delle finestre non ridotte a icona.

```
BOOL GetNonClientMetrics(NONCLIENTMETRICS& info);
```

### <a name="parameters"></a>Parametri

*info*<br/>
[in, out] Struttura [NONCLIENTMETRICS](/windows/win32/api/winuser/ns-winuser-nonclientmetricsw) che contiene le metriche scalabili associate all'area non client di una finestra non ridotta a icona.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="afx_global_datagettextheight"></a><a name="gettextheight"></a>AFX_GLOBAL_DATA::GetTextHeight

Recupera l'altezza dei caratteri di testo nel tipo di carattere corrente.

```
int GetTextHeight(BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
[in] TRUE per recuperare l'altezza dei caratteri quando il testo viene eseguito orizzontalmente; FALSE per recuperare l'altezza dei caratteri quando il testo viene eseguito verticalmente. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Altezza del tipo di carattere corrente, misurata dall'ascendente al discendente.

## <a name="afx_global_datagetwicfactory"></a><a name="getwicfactory"></a>AFX_GLOBAL_DATA::GetWICFactory

Restituisce un puntatore all'interfaccia IWICImagingFactory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.

```
IWICImagingFactory* GetWICFactory();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IWICImagingFactory se la creazione di una factory ha esito positivo o NULL se la creazione non riesce o il sistema operativo corrente non dispone del supporto WIC.

## <a name="afx_global_datagetwritefactory"></a><a name="getwritefactory"></a>AFX_GLOBAL_DATA::GetWriteFactory

Restituisce un puntatore all'interfaccia IDWriteFactory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.

```
IDWriteFactory* GetWriteFactory();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IDWriteFactory se la creazione di una factory ha esito positivo oppure NULL se la creazione non riesce o il sistema operativo corrente non dispone del supporto DirectWrite.

## <a name="afx_global_datainitd2d"></a><a name="initd2d"></a>AFX_GLOBAL_DATA::InitD2D

Inizializza le factory D2D, DirectWrite e WIC. Chiamare questo metodo prima dell'inizializzazione della finestra principale.

```
BOOL InitD2D(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```

### <a name="parameters"></a>Parametri

*Tipod d2dFactoryType*<br/>
Il modello di threading della factory D2D e le risorse che crea.

*writeFactoryType (tipo scrittore)*<br/>
Valore che specifica se l'oggetto factory di scrittura verrà condiviso o isolato

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se le fabbriche erano intilalizrd, FALSE - in caso contrario

## <a name="afx_global_datais32biticons"></a><a name="is32biticons"></a>AFX_GLOBAL_DATA:Is32BitIcons

Indica se sono supportate le icone a 32 bit predefinite.

```
BOOL Is32BitIcons() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe sono supportate le icone predefinite a 32 bit. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce TRUE se il framework supporta le icone predefinite a 32 bit e se il sistema operativo supporta 16 bit per pixel o più e se le immagini non vengono visualizzate a contrasto elevato.

## <a name="afx_global_dataisaccessibilitysupport"></a><a name="isaccessibilitysupport"></a>AFX_GLOBAL_DATA::IsAccessibilitySupport

Indica se il supporto di Microsoft Active Accessibility è abilitato.

```
BOOL IsAccessibilitySupport() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il supporto per l'accessibilità è abilitato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Microsoft Active Accessibility era la soluzione precedente per rendere accessibili le applicazioni. Microsoft UI Automation è il nuovo modello di accessibilità per Microsoft Windows e ha lo scopo di soddisfare le esigenze dei prodotti di assistive technology e degli strumenti di test automatizzati.

Utilizzare il metodo [AFX_GLOBAL_DATA::EnableAccessibilitySupport](#enableaccessibilitysupport) per abilitare o disabilitare il supporto di Active Accessibility.

## <a name="afx_global_dataisd2dinitialized"></a><a name="isd2dinitialized"></a>AFX_GLOBAL_DATA::IsD2DInitialized

Determina se il D2D è stato inizializzato

```
BOOL IsD2DInitialized() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe D2D è stato inizializzato. in caso contrario, FALSE.

## <a name="afx_global_dataisdwmcompositionenabled"></a><a name="isdwmcompositionenabled"></a>AFX_GLOBAL_DATA::IsDwmCompositionEnabled

Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](/windows/win32/api/dwmapi/nf-dwmapi-dwmiscompositionenabled) di Windows.

```
BOOL IsDwmCompositionEnabled();
```

### <a name="return-value"></a>Valore restituito

TRUESe la composizione di [Gestione finestre desktop](/windows/win32/dwm/dwm-overview) (DWM) è abilitata; in caso contrario, FALSE.

## <a name="afx_global_dataishighcontrastmode"></a><a name="ishighcontrastmode"></a>AFX_GLOBAL_DATA::IsHighContrastMode

Indica se le immagini sono attualmente visualizzate con contrasto elevato.

```
BOOL IsHighContrastMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe le immagini sono attualmente visualizzate in modalità a contrasto elevato nero o bianco; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In modalità a contrasto elevato nero, i bordi rivolti verso la luce sono bianchi e lo sfondo è nero. In modalità a contrasto elevato bianco, i bordi rivolti verso la luce sono neri e lo sfondo è bianco.

## <a name="afx_global_dataiswindowslayersupportavailable"></a><a name="iswindowslayersupportavailable"></a>AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable

Indica se il sistema operativo supporta le finestre sovrapposte.

```
BOOL IsWindowsLayerSupportAvailable() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe sono supportate le finestre sovrapposte. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se le finestre sovrapposte sono supportate, gli indicatori di *ancoraggio intelligenti* utilizzano finestre sovrapposte.

## <a name="afx_global_datam_busebuiltin32biticons"></a><a name="m_busebuiltin32biticons"></a>AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons

Indica se il framework usa icone predefinite con colori a 32 bit o icone con una risoluzione più bassa.

```
BOOL  m_bUseBuiltIn32BitIcons;
```

### <a name="remarks"></a>Osservazioni

TRUE specifica che il framework utilizza icone a colori a 32 bit. FALSE specifica icone a risoluzione inferiore. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza questo membro su TRUE.

Questo membro deve essere impostato all'avvio dell'applicazione.

## <a name="afx_global_datam_busesystemfont"></a><a name="m_busesystemfont"></a>AFX_GLOBAL_DATA::m_bUseSystemFont

Indica se un tipo di carattere di sistema viene usato per i menu, le barre degli strumenti e le barre multifunzione.

```
BOOL m_bUseSystemFont;
```

### <a name="remarks"></a>Osservazioni

TRUE specifica di utilizzare un tipo di carattere di sistema. in caso contrario, FALSE. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza questo membro su FALSE.

Il test di questo membro non è l'unico modo per il framework per determinare il tipo di carattere da utilizzare. Il `AFX_GLOBAL_DATA::UpdateFonts` metodo verifica inoltre i tipi di carattere predefiniti e alternativi per determinare gli stili di visualizzazione disponibili per l'applicazione a menu, barre degli strumenti e barre multifunzione.

## <a name="afx_global_datam_hcurhand"></a><a name="m_hcurhand"></a>AFX_GLOBAL_DATA::m_hcurHand

Archivia l'handle per il cursore a forma di mano.

```
HCURSOR m_hcurHand;
```

## <a name="afx_global_datam_hcurstretch"></a><a name="m_hcurstretch"></a>AFX_GLOBAL_DATA::m_hcurStretch

Archivia l'handle per il cursore di adattamento orizzontale.

```
HCURSOR m_hcurStretch;
```

## <a name="afx_global_datam_hcurstretchvert"></a><a name="m_hcurstretchvert"></a>AFX_GLOBAL_DATA::m_hcurStretchVert

Archivia l'handle per il cursore di adattamento verticale.

```
HCURSOR m_hcurStretchVert;
```

## <a name="afx_global_datam_hicontool"></a><a name="m_hicontool"></a>AFX_GLOBAL_DATA::m_hiconTool

Archivia l'handle per l'icona dello strumento.

```
HICON m_hiconTool;
```

## <a name="afx_global_datam_nautohidetoolbarmargin"></a><a name="m_nautohidetoolbarmargin"></a>AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin

Specifica l'offset dalla barra degli strumenti a scomparsa automatica che si trova più a sinistra al lato sinistro della barra ancorabile a schede.

```
int  m_nAutoHideToolBarMargin;
```

### <a name="remarks"></a>Osservazioni

Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.

## <a name="afx_global_datam_nautohidetoolbarspacing"></a><a name="m_nautohidetoolbarspacing"></a>AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing

Specifica la distanza tra le barre degli strumenti che si nascondono automaticamente.

```
int   m_nAutoHideToolBarSpacing;
```

### <a name="remarks"></a>Osservazioni

Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza questo membro su 14 pixel.

## <a name="afx_global_datam_ndragframethicknessdock"></a><a name="m_ndragframethicknessdock"></a>AFX_GLOBAL_DATA::m_nDragFrameThicknessDock

Specifica lo spessore del riquadro di trascinamento utilizzato per indicare lo stato ancorato.

```
int  m_nDragFrameThicknessDock;
```

### <a name="remarks"></a>Osservazioni

Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza questo membro su 3 pixel.

## <a name="afx_global_datam_ndragframethicknessfloat"></a><a name="m_ndragframethicknessfloat"></a>AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat

Specifica lo spessore del riquadro di trascinamento utilizzato per indicare lo stato mobile.

```
int  m_nDragFrameThicknessFloat;
```

### <a name="remarks"></a>Osservazioni

Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.

## <a name="afx_global_dataonsettingchange"></a><a name="onsettingchange"></a>AFX_GLOBAL_DATA::OnSettingChange

Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.

```
void OnSettingChange();
```

### <a name="remarks"></a>Osservazioni

Questo metodo imposta le variabili del framework sullo stato di determinati attributi del desktop dell'utente. Questo metodo rileva lo stato corrente delle funzionalità di animazione dei menu, dissolvenza dei menu e Nascondi automaticamente barra delle applicazioni.

## <a name="afx_global_dataregisterwindowclass"></a><a name="registerwindowclass"></a>AFX_GLOBAL_DATA::RegisterWindowClass

Registra la classe di finestre MFC specificata.

```
CString RegisterWindowClass(LPCTSTR lpszClassNamePrefix);
```

### <a name="parameters"></a>Parametri

*lpszClassNamePrefix (Prefisso nomeclasse)*<br/>
[in] Nome della classe finestra da registrare.

### <a name="return-value"></a>Valore restituito

Nome completo della classe registrata se questo metodo ha esito positivo; in caso contrario, [un'eccezione di risorsa](exception-processing.md#afxthrowresourceexception).

### <a name="remarks"></a>Osservazioni

Il valore restituito è un elenco delimitato da due punti della stringa del parametro *lpszClassNamePrefix* e le rappresentazioni di testo esadecimali degli handle dell'istanza dell'applicazione corrente. il cursore dell'applicazione, ovvero il cursore a freccia il cui identificatore è IDC_ARROW; e il pennello di sfondo. Per ulteriori informazioni sulla registrazione delle classi finestra MFC, vedere [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass).

## <a name="afx_global_dataresume"></a><a name="resume"></a>AFX_GLOBAL_DATA::Riprendi

Reinizializza i puntatori a funzione interna che hanno accesso ai metodi che supportano temi e stili di visualizzazione di Windows.

```
BOOL Resume();
```

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE. In modalità di debug, questo metodo asserisce se questo metodo ha esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato quando il framework riceve il messaggio [di WM_POWERBROADCAST.](/windows/win32/Power/wm-powerbroadcast)

## <a name="afx_global_datasetlayeredattrib"></a><a name="setlayeredattrib"></a>AFX_GLOBAL_DATA::SetLayeredAttrib

Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-setlayeredwindowattributes) di Windows.

```
BOOL SetLayeredAttrib(
    HWND hwnd,
    COLORREF crKey,
    BYTE bAlpha,
    DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*Hwnd*<br/>
[in] Manedfare alla finestra a più livelli.

*crKey (Chiave cr)*<br/>
[in] Chiave di colore trasparenza utilizzata da [Gestione finestre desktop](/windows/win32/dwm/dwm-overview) per comporre la finestra a più livelli.

*bAlfa*<br/>
[in] Valore alfa utilizzato per descrivere l'opacità della finestra a più livelli.

*dwFlags*<br/>
[in] Combinazione bit per bit (OR) di flag che specificano i parametri del metodo da utilizzare. Specificare LWA_COLORKEY utilizzare il parametro *crKey* come colore della trasparenza. Specificare LWA_ALPHA utilizzare il parametro *bAlpha* per determinare l'opacità della finestra sovrapposta.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="afx_global_datasetmenufont"></a><a name="setmenufont"></a>AFX_GLOBAL_DATA::SetMenuFont

Crea il tipo di carattere logico specificato.

```
BOOL SetMenuFont(
    LPLOGFONT lpLogFont,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*Carattere lpLogFont*<br/>
[in] Puntatore a una struttura che contiene gli attributi di un tipo di carattere.

*bHorz*<br/>
[in] TRUE per specificare che il testo viene eseguito orizzontalmente; FALSE per specificare che il testo viene eseguito verticalmente.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE. In modalità di debug, questo metodo asserisce se questo metodo ha esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un tipo di carattere normale orizzontale, un tipo di carattere sottolineato e un carattere in grassetto utilizzato nelle voci di menu predefinite. Questo metodo crea facoltativamente un normale tipo di carattere verticale. Per ulteriori informazioni sui tipi di carattere logici, vedere [CFont::CreateFontIndirect](../../mfc/reference/cfont-class.md#createfontindirect).

## <a name="afx_global_dataupdatefonts"></a><a name="updatefonts"></a>AFX_GLOBAL_DATA::UpdateFonts

Reinizializza i tipi di carattere logici usati dal framework.

```
void UpdateFonts();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui `CFont::CreateFontIndirect`tipi di carattere logici, vedere .

## <a name="afx_global_dataupdatesyscolors"></a><a name="updatesyscolors"></a>AFX_GLOBAL_DATA::UpdateSysColors

Inizializza i colori, l'intensità di colore, i pennelli, le penne e le immagini usati dal framework.

```
void UpdateSysColors();
```

## <a name="afx_global_databiswindows7"></a><a name="biswindows7"></a>AFX_GLOBAL_DATA::bIsWindows7

Indica se l'applicazione viene eseguita in Windows 7 o versione successiva.

```
BOOL bIsWindows7;
```

## <a name="afx_global_dataclractivecaptiongradient"></a><a name="clractivecaptiongradient"></a>AFX_GLOBAL_DATA::clrActiveCaptionGradient

Specifica il colore sfumato della didascalia attiva. Viene in genere usato per i riquadri ancorabili.

```
COLORREF clrActiveCaptionGradient;
```

## <a name="afx_global_dataclrinactivecaptiongradient"></a><a name="clrinactivecaptiongradient"></a>AFX_GLOBAL_DATA::clrInactiveCaptionGradient

Specifica il colore sfumato della didascalia inattiva. Viene in genere usato per i riquadri ancorabili.

```
COLORREF clrInactiveCaptionGradient;
```

## <a name="afx_global_datagetitaskbarlist"></a><a name="getitaskbarlist"></a>AFX_GLOBAL_DATA::GetITaskbarList

Crea e archivia nei dati `ITaskBarList` globali un puntatore all'interfaccia.

```
ITaskbarList *GetITaskbarList();
```

### <a name="return-value"></a>Valore restituito

Un puntatore `ITaskbarList` all'interfaccia se la creazione di un oggetto elenco della barra delle applicazioni ha esito positivo; NULL se la creazione non riesce o se il sistema operativo corrente è minore di Windows 7.

## <a name="afx_global_datagetitaskbarlist3"></a><a name="getitaskbarlist3"></a>AFX_GLOBAL_DATA::GetITaskbarList3

Crea e archivia nei dati `ITaskBarList3` globali un puntatore all'interfaccia.

```
ITaskbarList3 *GetITaskbarList3();
```

### <a name="return-value"></a>Valore restituito

Un puntatore `ITaskbarList3` all'interfaccia se la creazione di un oggetto elenco della barra delle applicazioni ha esito positivo; NULL se la creazione non riesce o se il sistema operativo corrente è minore di Windows 7.

## <a name="afx_global_datagetshellautohidebars"></a><a name="getshellautohidebars"></a>AFX_GLOBAL_DATA::GetShellAutohideBars

Determina le posizioni delle barre della Shell che si nascondono automaticamente.

```
int GetShellAutohideBars();
```

### <a name="return-value"></a>Valore restituito

Un valore intero con flag codificati che specificano le posizioni delle barre nascoste automaticamente. Può combinare i seguenti valori: AFX_AUTOHIDE_BOTTOM, AFX_AUTOHIDE_TOP, AFX_AUTOHIDE_LEFT, AFX_AUTOHIDE_RIGHT.

## <a name="afx_global_datareleasetaskbarrefs"></a><a name="releasetaskbarrefs"></a>AFX_GLOBAL_DATA::ReleaseTaskBarRefs

Rilascia le interfacce `GetITaskbarList` `GetITaskbarList3` ottenute tramite i metodi e .

```
void ReleaseTaskBarRefs();
```

## <a name="afx_global_datashellcreateitemfromparsingname"></a><a name="shellcreateitemfromparsingname"></a>AFX_GLOBAL_DATA::ShellCreateItemFromParsingName

Crea e inizializza un oggetto Shell da un nome di analisi.

```
HRESULT ShellCreateItemFromParsingName(
    PCWSTR pszPath,
    IBindCtx *pbc,
    REFIID riid,
    void **ppv);
```

### <a name="parameters"></a>Parametri

*pszPath (percorso pszPath)*<br/>
[in] Puntatore a un nome visualizzato.

*Pbc*<br/>
Puntatore a un contesto di associazione che controlla l'operazione di analisi.

*Riid*<br/>
Riferimento a un ID di interfaccia.

*Ppv*<br/>
[fuori] Quando termina, questa funzione contiene il puntatore a interfaccia richiesto in *riid*. Questo sarà `IShellItem` in `IShellItem2`genere o .

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo; un valore di errore in caso contrario.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../hierarchy-chart.md)<br/>
[Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md)<br/>
[COLORREF](/windows/win32/gdi/colorref)<br/>
[Parti e stati](/windows/win32/controls/parts-and-states)<br/>
[CDC::DrawText](cdc-class.md#drawtext)<br/>
[DrawThemeTextEx](/windows/win32/api/uxtheme/nf-uxtheme-drawthemetextex)<br/>
[Gestione finestre desktop](/windows/win32/dwm/dwm-overview)<br/>
[Abilitare e controllare la composizione DWM](/windows/win32/dwm/composition-ovw)<br/>
[Automazione interfaccia utente e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility)<br/>
[Funzione GetSysColor](/windows/win32/api/winuser/nf-winuser-getsyscolor)<br/>
[Metodo GetSysColorBrush](/windows/win32/api/winuser/nf-winuser-getsyscolorbrush)<br/>
[Struttura NONCLIENTMETRICS](/windows/win32/api/winuser/ns-winuser-nonclientmetricsw)<br/>
[AfxRegisterClass](application-information-and-management.md#afxregisterclass)<br/>
[AfxThrowResourceException](exception-processing.md#afxthrowresourceexception)<br/>
[SetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-setlayeredwindowattributes)
