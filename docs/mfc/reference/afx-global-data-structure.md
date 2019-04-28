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
- AFXGLOBALS/AFX_GLOBAL_DATA::IsD2DInitialized
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
ms.openlocfilehash: 0fd8143564beecccd8943f3ceba531e8697151d1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62212922"
---
# <a name="afxglobaldata-structure"></a>AFX_GLOBAL_DATA (struttura)

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
|[AFX_GLOBAL_DATA::IsD2DInitialized](#isd2dinitialized)|Inizializza le factory `D2D`, `DirectWrite`e `WIC` . Chiamare questo metodo prima dell'inizializzazione della finestra principale.|
|[AFX_GLOBAL_DATA::Is32BitIcons](#is32biticons)|Indica se sono supportate le icone a 32 bit predefinite.|
|[AFX_GLOBAL_DATA::IsD2DInitialized](#isd2dinitialized)|Determina se la factory `D2D` è stata inizializzata.|
|[AFX_GLOBAL_DATA::IsDwmCompositionEnabled](#isdwmcompositionenabled)|Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](/windows/desktop/api/dwmapi/nf-dwmapi-dwmiscompositionenabled) di Windows.|
|[AFX_GLOBAL_DATA::IsHighContrastMode](#ishighcontrastmode)|Indica se le immagini sono attualmente visualizzate con contrasto elevato.|
|[AFX_GLOBAL_DATA::OnSettingChange](#onsettingchange)|Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.|
|[AFX_GLOBAL_DATA::RegisterWindowClass](#registerwindowclass)|Registra la classe di finestre MFC specificata.|
|[AFX_GLOBAL_DATA::ReleaseTaskBarRefs](#releasetaskbarrefs)|Rilascia le interfacce ottenute tramite i metodi GetITaskbarList e GetITaskbarList3.|
|[AFX_GLOBAL_DATA::Resume](#resume)|Reinizializza i puntatori a funzione interna che hanno accesso ai metodi che supportano [temi e stili di visualizzazione](/windows/desktop/Controls/visual-styles-overview)di Windows.|
|[AFX_GLOBAL_DATA::SetLayeredAttrib](#setlayeredattrib)|Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](/windows/desktop/api/winuser/nf-winuser-setlayeredwindowattributes) di Windows.|
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

### <a name="data-members"></a>Membri di dati

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

### <a name="remarks"></a>Note

La maggior parte dei dati della struttura `AFX_GLOBAL_DATA` viene inizializzata all'avvio dell'applicazione.

### <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`AFX_GLOBAL_DATA`

### <a name="requirements"></a>Requisiti

**Intestazione:** afxglobals.h

## <a name="bisosalphablendingsupport"></a> AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport

Indica se il sistema operativo supporta la fusione alfa.

```
BOOL  bIsOSAlphaBlendingSupport;
```

### <a name="remarks"></a>Note

TRUE indica che la fusione alfa è supportata. in caso contrario, FALSE.

## <a name="cleanup"></a> AFX_GLOBAL_DATA::CleanUp

Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.

```
void CleanUp();
```

## <a name="d2d1makerotatematrix"></a> AFX_GLOBAL_DATA::D2D1MakeRotateMatrix

Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.

```
HRESULT D2D1MakeRotateMatrix(
    FLOAT angle,
    D2D1_POINT_2F center,
    D2D1_MATRIX_3X2_F *matrix);
```

### <a name="parameters"></a>Parametri

*angle*<br/>
L'angolo di rotazione in senso orario espresso in gradi.

*center*<br/>
Punto intorno al quale ruotare.

*matrix*<br/>
Quando termina, questo metodo contiene la nuova trasformazione di rotazione. È necessario allocare spazio di archiviazione per questo parametro.

### <a name="return-value"></a>Valore restituito

In caso contrario, restituisce S_OK se l'operazione riesce, oppure come valore di errore.

## <a name="drawparentbackground"></a> AFX_GLOBAL_DATA::DrawParentBackground

Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.

```
BOOL DrawParentBackground(
    CWnd* pWnd,
    CDC* pDC,
    LPRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in] Puntatore alla finestra di un controllo.

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*lpRect*<br/>
[in] Puntatore a un rettangolo che delimita l'area da disegnare. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

## <a name="drawtextonglass"></a> AFX_GLOBAL_DATA::DrawTextOnGlass

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

*hTheme*<br/>
[in] Handle per i dati del tema di una finestra, oppure NULL. Il framework Usa il tema specificato per disegnare il testo se questo parametro non NULL e i temi sono supportati. In caso contrario, il framework non usa un tema per disegnare il testo.

Usare la [OpenThemeData](/windows/desktop/api/uxtheme/nf-uxtheme-openthemedata) metodo per creare un HTHEME.

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*iPartId*<br/>
[in] La parte del controllo che ha l'aspetto del testo desiderato. Per altre informazioni vedere la colonna Parti della tabella in [Parti e stati](/windows/desktop/controls/parts-and-states). Se questo valore è 0, il testo viene disegnato nel tipo di carattere predefinito o in un tipo di carattere selezionato nel contesto di dispositivo.

*iStateId*<br/>
[in] Lo stato del controllo che ha l'aspetto del testo desiderato. Per altre informazioni vedere la colonna Stati della tabella in [Parti e stati](/windows/desktop/controls/parts-and-states).

*strText*<br/>
[in] Testo da disegnare.

*rect*<br/>
[in] Il limite dell'area in cui viene disegnato il testo specificato.

*dwFlags*<br/>
[in] Una combinazione bit per bit (OR) di flag che specificano il modo in cui viene disegnato il testo specificato.

Se il *hTheme* parametro è `NULL` o se i temi non sono supportati e abilitati, il *nFormat* parametro del [CDC](../../mfc/reference/cdc-class.md#drawtext) descrive validi (metodo) flag. Se i temi sono supportati, il *dwFlags* parametro delle [DrawThemeTextEx](/windows/desktop/api/uxtheme/nf-uxtheme-drawthemetextex) metodo descrive i flag validi.

*nGlowSize*<br/>
[in] Le dimensioni di un effetto di alone che viene disegnata sullo sfondo prima di disegnare il testo specificato. Il valore predefinito è 0.

*clrText*<br/>
[in] Il colore in cui viene disegnato il testo specificato. Il valore predefinito è il colore predefinito.

### <a name="return-value"></a>Valore restituito

TRUE se viene usato un tema per disegnare il testo specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Un tema definisce lo stile di visualizzazione di un'applicazione. Non viene usato un tema per disegnare il testo se il *hTheme* parametro è NULL, o se il [DrawThemeTextEx](/windows/desktop/api/uxtheme/nf-uxtheme-drawthemetextex) metodo non è supportato, o se [Gestione finestre Desktop](/windows/desktop/dwm/dwm-overview) composizione è disabilitato.

## <a name="enableaccessibilitysupport"></a> AFX_GLOBAL_DATA::EnableAccessibilitySupport

Abilita o disabilita il supporto di Microsoft Active Accessibility.

```
void EnableAccessibilitySupport(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare il supporto di accessibilità. FALSE per disabilitare il supporto di accessibilità. Il valore predefinito è TRUE.

### <a name="remarks"></a>Note

L'accessibilità attiva è una tecnologia basata su COM che migliora il modo in cui i programmi e il sistema operativo Windows lavorano insieme ai prodotti di Assistive Technology. Fornisce metodi affidabili per l'esposizione di informazioni sugli elementi dell'interfaccia utente. Tuttavia, è ora disponibile un nuovo modello di accessibilità denominato Automazione dell'interfaccia utente Microsoft. Per un confronto tra le due tecnologie, vedere [automazione interfaccia utente e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility).

Usare la [AFX_GLOBAL_DATA::IsAccessibilitySupport](#isaccessibilitysupport) metodo per determinare se il supporto di Microsoft Active Accessibility è abilitato.

## <a name="excludetag"></a> AFX_GLOBAL_DATA::ExcludeTag

Rimuove la coppia di tag XML specificata da un determinato buffer.

```
BOOL ExcludeTag(
    CString& strBuffer,
    LPCTSTR lpszTag,
    CString& strTag,
    BOOL bIsCharsList = FALSE);
```

### <a name="parameters"></a>Parametri

*strBuffer*<br/>
[in] Un buffer di testo.

*lpszTag*<br/>
[in] Il nome di una coppia di apertura e chiusura di tag XML.

*strTag*<br/>
[out] Quando questo metodo termina, il *strTag* parametro contiene il testo presente tra i tag XML tra i tag che vengono denominati in base il *lpszTag* parametro. Vengono tagliati gli spazi vuoti iniziali o finali dal risultato.

*bIsCharsList*<br/>
[in] True per convertire i simboli dei caratteri di escape nel *strTag* parametro in caratteri di escape effettivo; FALSE per non eseguire la conversione. Il valore predefinito è FALSE. Per altre informazioni, vedere la sezione Note.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Una coppia di tag XML costituito da denominato di apertura e chiusura di tag che indicano l'inizio e fine di una sequenza di testo nel buffer specificato. Il *strBuffer* parametro specifica il buffer e il *lpszTag* parametro specifica il nome del tag XML.

Usare i simboli nella tabella seguente per codificare un set di caratteri di escape nel buffer specificato. Specificare TRUE per il *bIsCharsList* parametro per convertire i simboli nel *strTag* parametro in caratteri di escape effettivo. Nella tabella seguente viene utilizzata la [ciò](../../c-runtime-library/data-type-mappings.md) macro per specificare il simbolo e stringhe di caratteri di escape.

|Simbolo|Carattere di escape|
|------------|----------------------|
|_T("\\\t")|_T("\t")|
|_T("\\\n")|_T("\n")|
|_T("\\\r")|_T("\r")|
|_T("\\\b")|_T("\b")|
|_T("LT")|_T("\<")|
|_T("GT")|_T(">")|
|_T("AMP")|_T("&")|

## <a name="getcolor"></a> AFX_GLOBAL_DATA::GetColor

Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.

```
COLORREF GetColor(int nColor);
```

### <a name="parameters"></a>Parametri

*nColor*<br/>
[in] Un valore che specifica un elemento dell'interfaccia utente il cui colore viene recuperato. Per un elenco di valori validi, vedere la *nIndex* parametro delle [GetSysColor](/windows/desktop/api/winuser/nf-winuser-getsyscolor) (metodo).

### <a name="return-value"></a>Valore restituito

Valore di colore RGB dell'elemento dell'interfaccia utente specificato. Per altre informazioni, vedere la sezione Note.

### <a name="remarks"></a>Note

Se il *nColor* parametro non è compreso nell'intervallo, il valore restituito è uguale a zero. Poiché anche zero è un valore RGB valido, non è possibile utilizzare questo metodo per determinare se un colore di sistema è supportato dal sistema operativo corrente. Usare invece i [GetSysColorBrush](/windows/desktop/api/winuser/nf-winuser-getsyscolorbrush) metodo, che restituisce NULL se il colore non è supportato.

## <a name="getdirect2dfactory"></a> AFX_GLOBAL_DATA::GetDirect2dFactory

Restituisce un puntatore all'interfaccia ID2D1Factory che viene archiviato nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.

```
ID2D1Factory* GetDirect2dFactory();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a interfaccia ID2D1Factory se ha esito positivo, la creazione di una factory oppure NULL se non è possibile creare o sistema operativo corrente non dispone del supporto D2D.

## <a name="gethandcursor"></a>  AFX_GLOBAL_DATA::GetHandCursor

Recupera il cursore predefinito che rappresenta una mano e il cui identificatore è IDC_HAND.

```
HCURSOR GetHandCursor();
```

### <a name="return-value"></a>Valore restituito

L'handle del cursore manualmente.

## <a name="getnonclientmetrics"></a> AFX_GLOBAL_DATA::GetNonClientMetrics

Recupera la metrica associata all'area non client delle finestre non ridotte a icona.

```
BOOL GetNonClientMetrics(NONCLIENTMETRICS& info);
```

### <a name="parameters"></a>Parametri

*info*<br/>
[in, out] Oggetto [NONCLIENTMETRICS](/windows/desktop/api/winuser/ns-winuser-tagnonclientmetricsa) struttura che contiene le metriche scalabile associate con l'area non client di una finestra non ridotta a icona.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

## <a name="gettextheight"></a> AFX_GLOBAL_DATA::GetTextHeight

Recupera l'altezza dei caratteri di testo nel tipo di carattere corrente.

```
int GetTextHeight(BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*bHorz*<br/>
[in] TRUE per recuperare l'altezza dei caratteri quando il testo scorre orizzontalmente. FALSE per recuperare l'altezza dei caratteri quando il testo scorre in senso verticale. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

L'altezza del tipo di carattere corrente, misurato dal relativo ascender al relativo tratto discendente.

## <a name="getwicfactory"></a> AFX_GLOBAL_DATA::GetWICFactory

Restituisce un puntatore all'interfaccia IWICImagingFactory che viene archiviato nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.

```
IWICImagingFactory* GetWICFactory();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a interfaccia IWICImagingFactory se ha esito positivo, la creazione di una factory oppure NULL se non è possibile creare o sistema operativo corrente non dispone del supporto WIC.

## <a name="getwritefactory"></a> AFX_GLOBAL_DATA::GetWriteFactory

Restituisce un puntatore all'interfaccia IDWriteFactory archiviato nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.

```
IDWriteFactory* GetWriteFactory();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a interfaccia IDWriteFactory se ha esito positivo, la creazione di una factory oppure NULL se non è possibile creare o sistema operativo corrente non dispone del supporto DirectWrite.

## <a name="initd2d"></a> AFX_GLOBAL_DATA::InitD2D

Inizializza la factory DirectWrite o D2D e WIC. Chiamare questo metodo prima dell'inizializzazione della finestra principale.

```
BOOL InitD2D(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```

### <a name="parameters"></a>Parametri

*d2dFactoryType*<br/>
Il modello di threading la factory D2D e delle risorse viene creato.

*writeFactoryType*<br/>
Un valore che specifica se l'oggetto factory di scrittura verrà condiviso o isolato

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la factory sono state inizializzate, FALSE: in caso contrario

## <a name="is32biticons"></a> AFX_GLOBAL_DATA::Is32BitIcons

Indica se sono supportate le icone a 32 bit predefinite.

```
BOOL Is32BitIcons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se le icone a 32 bit predefinite sono supportate. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo restituisce TRUE se il framework supporta le icone predefinite 32 bit e se il sistema operativo supporta 16 bit per pixel o superiore, e se le immagini non vengono visualizzate con contrasto elevato.

## <a name="isaccessibilitysupport"></a> AFX_GLOBAL_DATA::IsAccessibilitySupport

Indica se il supporto di Microsoft Active Accessibility è abilitato.

```
BOOL IsAccessibilitySupport() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è abilitato il supporto dell'accessibilità. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Microsoft Active Accessibility ha rappresentato la soluzione precedente per rendere accessibili le applicazioni. Automazione interfaccia utente Microsoft è il nuovo modello di accessibilità per Microsoft Windows e consente di soddisfare le esigenze di prodotti assistive technology e strumenti di test automatizzati.

Usare la [AFX_GLOBAL_DATA::EnableAccessibilitySupport](#enableaccessibilitysupport) metodo per abilitare o disabilitare il supporto per Active Accessibility.

## <a name="isd2dinitialized"></a> AFX_GLOBAL_DATA::IsD2DInitialized

Determina se è stato inizializzato il D2D

```
BOOL IsD2DInitialized() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è stata inizializzata D2D. in caso contrario, FALSE.

## <a name="isdwmcompositionenabled"></a> AFX_GLOBAL_DATA::IsDwmCompositionEnabled

Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](/windows/desktop/api/dwmapi/nf-dwmapi-dwmiscompositionenabled) di Windows.

```
BOOL IsDwmCompositionEnabled();
```

### <a name="return-value"></a>Valore restituito

TRUE se [Gestione finestre Desktop](/windows/desktop/dwm/dwm-overview) composizione (DWM) è abilitato; in caso contrario, FALSE.

## <a name="ishighcontrastmode"></a> AFX_GLOBAL_DATA::IsHighContrastMode

Indica se le immagini sono attualmente visualizzate con contrasto elevato.
```
BOOL IsHighContrastMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se le immagini sono attualmente visualizzate in modalità a contrasto elevato bianchi o neri. in caso contrario, FALSE.

### <a name="remarks"></a>Note

In modalità nero a contrasto elevato, i lati rivolti verso la luce sono il bianchi e lo sfondo è nero. In modalità di bianco a contrasto elevato, i lati rivolti verso la luce sono neri e lo sfondo è bianco.

## <a name="iswindowslayersupportavailable"></a> AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable

Indica se il sistema operativo supporta le finestre sovrapposte.

```
BOOL IsWindowsLayerSupportAvailable() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se le finestre sovrapposte sono supportate. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se le finestre sovrapposte sono supportate, *ancoraggio intelligente* marcatori di usano le finestre sovrapposte.

## <a name="m_busebuiltin32biticons"></a> AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons

Indica se il framework usa icone predefinite con colori a 32 bit o icone con una risoluzione più bassa.

```
BOOL  m_bUseBuiltIn32BitIcons;
```

### <a name="remarks"></a>Note

TRUE specifica che il framework di usare le icone di colori a 32 bit; FALSE specifica icone risoluzione inferiore. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza questo membro su TRUE.

Questo membro deve essere impostato all'avvio dell'applicazione.

## <a name="m_busesystemfont"></a> AFX_GLOBAL_DATA::m_bUseSystemFont

Indica se un tipo di carattere di sistema viene usato per i menu, le barre degli strumenti e le barre multifunzione.

```
BOOL m_bUseSystemFont;
```

### <a name="remarks"></a>Note

TRUE specifica per l'uso di un tipo di carattere di sistema; in caso contrario, FALSE. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza questo membro su FALSE.

Test di questo membro non è l'unico modo per il framework determinare il tipo di carattere da utilizzare. Il `AFX_GLOBAL_DATA::UpdateFonts` metodo testa anche i tipi di carattere predefiniti e alternativi per determinare quali gli stili di visualizzazione disponibili da applicare al menu, barre degli strumenti e le barre multifunzione.

## <a name="m_hcurhand"></a> AFX_GLOBAL_DATA::m_hcurHand

Archivia l'handle per il cursore a forma di mano.

```
HCURSOR m_hcurHand;
```

## <a name="m_hcurstretch"></a> AFX_GLOBAL_DATA::m_hcurStretch

Archivia l'handle per il cursore di adattamento orizzontale.

```
HCURSOR m_hcurStretch;
```

## <a name="m_hcurstretchvert"></a> AFX_GLOBAL_DATA::m_hcurStretchVert

Archivia l'handle per il cursore di adattamento verticale.

```
HCURSOR m_hcurStretchVert;
```

## <a name="m_hicontool"></a> AFX_GLOBAL_DATA::m_hiconTool

Archivia l'handle per l'icona dello strumento.

```
HICON m_hiconTool;
```

## <a name="m_nautohidetoolbarmargin"></a> AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin

Specifica l'offset dalla barra degli strumenti a scomparsa automatica che si trova più a sinistra al lato sinistro della barra ancorabile a schede.

```
int  m_nAutoHideToolBarMargin;
```

### <a name="remarks"></a>Note

Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.

## <a name="m_nautohidetoolbarspacing"></a> AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing

Specifica la distanza tra le barre degli strumenti che si nascondono automaticamente.

```
int   m_nAutoHideToolBarSpacing;
```

### <a name="remarks"></a>Note

Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a 14 pixel.

## <a name="m_ndragframethicknessdock"></a> AFX_GLOBAL_DATA::m_nDragFrameThicknessDock

Specifica lo spessore del frame di trascinamento che viene usato per indicare lo stato ancorato.

```
int  m_nDragFrameThicknessDock;
```

### <a name="remarks"></a>Note

Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a 3 pixel.

## <a name="m_ndragframethicknessfloat"></a> AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat

Specifica lo spessore del frame di trascinamento che viene usato per indicare lo stato mobile.

```
int  m_nDragFrameThicknessFloat;
```

### <a name="remarks"></a>Note

Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.

## <a name="onsettingchange"></a> AFX_GLOBAL_DATA::OnSettingChange

Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.

```
void OnSettingChange();
```

### <a name="remarks"></a>Note

Questo metodo imposta le variabili di framework per lo stato di alcuni attributi del desktop dell'utente. Questo metodo consente di rilevare lo stato corrente dell'animazione dei menu, menu tramite dissolvenza ed elementi della barra Nascondi automaticamente funzionalità.

## <a name="registerwindowclass"></a> AFX_GLOBAL_DATA::RegisterWindowClass

Registra la classe di finestre MFC specificata.

```
CString RegisterWindowClass(LPCTSTR lpszClassNamePrefix);
```

### <a name="parameters"></a>Parametri

*lpszClassNamePrefix*<br/>
[in] Il nome della classe della finestra da registrare.

### <a name="return-value"></a>Valore restituito

Il nome completo della classe registrato se questo metodo ha esito positivo; in caso contrario, un [eccezione risorse](exception-processing.md#afxthrowresourceexception).

### <a name="remarks"></a>Note

Il valore restituito è un elenco delimitato da punti del *lpszClassNamePrefix* parametro stringa e le rappresentazioni di testo esadecimale dei quadratini di ridimensionamento dell'istanza di applicazione corrente; il cursore dell'applicazione, ovvero la freccia cursore il cui identificatore è IDC_ARROW; e il pennello di sfondo. Per altre informazioni sulla registrazione di classi di finestre MFC, vedere [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass).

## <a name="resume"></a> AFX_GLOBAL_DATA::Resume

Reinizializza i puntatori a funzione interna che accedono ai metodi che supportano i temi di Windows e gli stili di visualizzazione.

```
BOOL Resume();
```

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE. In modalità debug, questo metodo indica se questo metodo ha esito negativo.

### <a name="remarks"></a>Note

Questo metodo viene chiamato quando il framework riceve la [WM_POWERBROADCAST](/windows/desktop/Power/wm-powerbroadcast) messaggio.

## <a name="setlayeredattrib"></a> AFX_GLOBAL_DATA::SetLayeredAttrib

Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](/windows/desktop/api/winuser/nf-winuser-setlayeredwindowattributes) di Windows.

```
BOOL SetLayeredAttrib(
    HWND hwnd,
    COLORREF crKey,
    BYTE bAlpha,
    DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*hwnd*<br/>
[in] Handle per la finestra sovrapposta.

*crKey*<br/>
[in] Il colore di trasparenza della chiave che il [Gestione finestre Desktop](/windows/desktop/dwm/dwm-overview) Usa per creare la finestra sovrapposta.

*bAlpha*<br/>
[in] Il valore alfa utilizzato per descrivere l'opacità della finestra sovrapposta.

*dwFlags*<br/>
[in] Una combinazione bit per bit (OR) di flag che specificano quali parametri del metodo da usare. Specificare LWA_COLORKEY per utilizzare il *crKey* parametro come il colore di trasparenza. Specificare LWA_ALPHA per utilizzare il *bAlpha* parametro per determinare l'opacità della finestra sovrapposta.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

## <a name="setmenufont"></a> AFX_GLOBAL_DATA::SetMenuFont

Crea il tipo di carattere logico specificato.

```
BOOL SetMenuFont(
    LPLOGFONT lpLogFont,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
[in] Puntatore a una struttura che contiene gli attributi di un tipo di carattere.

*bHorz*<br/>
[in] TRUE per specificare che le sequenze di testo orizzontalmente. FALSE per specificare che le sequenze di testo in verticale.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE. In modalità debug, questo metodo indica se questo metodo ha esito negativo.

### <a name="remarks"></a>Note

Questo metodo crea un carattere normale orizzontale, un carattere sottolineato, e un tipo di carattere in grassetto è predefinita utilizzata voci di menu. Facoltativamente, questo metodo crea un tipo di carattere verticale regolari. Per altre informazioni sui tipi di carattere logici, vedere [CFont:: CreateFontIndirect](../../mfc/reference/cfont-class.md#createfontindirect).

## <a name="updatefonts"></a> AFX_GLOBAL_DATA::UpdateFonts

Reinizializza i tipi di carattere logici usati dal framework.

```
void UpdateFonts();
```

### <a name="remarks"></a>Note

Per altre informazioni sui tipi di carattere logici, vedere `CFont::CreateFontIndirect`.

## <a name="updatesyscolors"></a> AFX_GLOBAL_DATA::UpdateSysColors

Inizializza i colori, l'intensità di colore, i pennelli, le penne e le immagini usati dal framework.

```
void UpdateSysColors();
```

## <a name="biswindows7"></a> AFX_GLOBAL_DATA::bIsWindows7

Indica se l'applicazione è in esecuzione in Windows 7 o versione successiva.

```
BOOL bIsWindows7;
```

## <a name="clractivecaptiongradient"></a> AFX_GLOBAL_DATA::clrActiveCaptionGradient

Specifica il colore sfumato della didascalia attiva. Viene in genere usato per i riquadri ancorabili.

```
COLORREF clrActiveCaptionGradient;
```

## <a name="clrinactivecaptiongradient"></a> AFX_GLOBAL_DATA::clrInactiveCaptionGradient

Specifica il colore sfumato della didascalia inattiva. Viene in genere usato per i riquadri ancorabili.

```
COLORREF clrInactiveCaptionGradient;
```

## <a name="getitaskbarlist"></a> AFX_GLOBAL_DATA::GetITaskbarList

Crea e archivia nei dati globali un puntatore di `ITaskBarList` interfaccia.

```
ITaskbarList *GetITaskbarList();
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `ITaskbarList` interfaccia se ha esito positivo la creazione di un oggetto elenco di elementi della barra. NULL se non è possibile creare o se il sistema operativo corrente è inferiore a Windows 7.

## <a name="getitaskbarlist3"></a> AFX_GLOBAL_DATA::GetITaskbarList3

Crea e archivia nei dati globali un puntatore di `ITaskBarList3` interfaccia.

```
ITaskbarList3 *GetITaskbarList3();
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `ITaskbarList3` interfaccia se ha esito positivo la creazione di un oggetto elenco di elementi della barra. NULL se non è possibile creare o se il sistema operativo corrente è inferiore a Windows 7.

## <a name="getshellautohidebars"></a> AFX_GLOBAL_DATA::GetShellAutohideBars

Determina le posizioni delle barre della Shell che si nascondono automaticamente.

```
int GetShellAutohideBars();
```

### <a name="return-value"></a>Valore restituito

Valore intero con codificato flag che specificano le posizioni di auto nascondere le barre. È possibile combinare i valori seguenti: AFX_AUTOHIDE_BOTTOM, AFX_AUTOHIDE_TOP, AFX_AUTOHIDE_LEFT, AFX_AUTOHIDE_RIGHT.

## <a name="releasetaskbarrefs"></a> AFX_GLOBAL_DATA::ReleaseTaskBarRefs

Rilascia le interfacce ottenute tramite il `GetITaskbarList` e `GetITaskbarList3` metodi.

```
void ReleaseTaskBarRefs();
```

## <a name="shellcreateitemfromparsingname"></a> AFX_GLOBAL_DATA::ShellCreateItemFromParsingName

Crea e inizializza un oggetto Shell da un nome di analisi.

```
HRESULT ShellCreateItemFromParsingName(
    PCWSTR pszPath,
    IBindCtx *pbc,
    REFIID riid,
    void **ppv);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
[in] Puntatore a un nome visualizzato.

*pbc*<br/>
Puntatore a un contesto di associazione che controlla l'operazione di analisi.

*riid*<br/>
Un riferimento all'ID di interfaccia.

*ppv*<br/>
[out] Quando questa funzione viene restituito, contiene il puntatore a interfaccia richiesto *riid*. In genere si tratterà `IShellItem` o `IShellItem2`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'esito positivo. un valore di errore in caso contrario.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../hierarchy-chart.md)<br/>
[Strutture, stili, callback e mappe messaggi](structures-styles-callbacks-and-message-maps.md)<br/>
[COLORREF](/windows/desktop/gdi/colorref)<br/>
[Parti e stati](/windows/desktop/controls/parts-and-states)<br/>
[CDC::DrawText](cdc-class.md#drawtext)<br/>
[DrawThemeTextEx](/windows/desktop/api/uxtheme/nf-uxtheme-drawthemetextex)<br/>
[Gestione finestre desktop](/windows/desktop/dwm/dwm-overview)<br/>
[Abilitare e controllare la composizione DWM](/windows/desktop/dwm/composition-ovw)<br/>
[Automazione interfaccia utente e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility)<br/>
[Funzione GetSysColor](/windows/desktop/api/winuser/nf-winuser-getsyscolor)<br/>
[GetSysColorBrush](/windows/desktop/api/winuser/nf-winuser-getsyscolorbrush)<br/>
[Struttura NONCLIENTMETRICS](/windows/desktop/api/winuser/ns-winuser-tagnonclientmetricsa)<br/>
[AfxRegisterClass](application-information-and-management.md#afxregisterclass)<br/>
[AfxThrowResourceException](exception-processing.md#afxthrowresourceexception)<br/>
[SetLayeredWindowAttributes](/windows/desktop/api/winuser/nf-winuser-setlayeredwindowattributes)
