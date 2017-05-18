---
title: Struttura AFX_GLOBAL_DATA | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- GLOBAL_DATA
dev_langs:
- C++
helpviewer_keywords:
- AFX_GLOBAL_DATA structure
- AFX_GLOBAL_DATA constructor
ms.assetid: c7abf2fb-ad5e-4336-a01d-260c29ed53a2
caps.latest.revision: 30
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: c490b3d744aa691331500f491444435dfe583d13
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

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
|[AFX_GLOBAL_DATA::Cleanup](#cleanup)|Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.|  
|[AFX_GLOBAL_DATA::D2D1MakeRotateMatrix](#d2d1makerotatematrix)|Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.|  
|[AFX_GLOBAL_DATA::DrawParentBackground](#drawparentbackground)|Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.|  
|[AFX_GLOBAL_DATA::DrawTextOnGlass](#drawtextonglass)|Disegna il testo specificato nello stile di visualizzazione del tema specificato.|  
|[AFX_GLOBAL_DATA::ExcludeTag](#excludetag)|Rimuove la coppia di tag XML specificata da un determinato buffer.|  
|[AFX_GLOBAL_DATA::getColor](#getcolor)|Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.|  
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
|[AFX_GLOBAL_DATA::IsDwmCompositionEnabled](#isdwmcompositionenabled)|Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) di Windows.|  
|[AFX_GLOBAL_DATA::IsHighContrastMode](#ishighcontrastmode)|Indica se le immagini sono attualmente visualizzate con contrasto elevato.|  
|[AFX_GLOBAL_DATA::OnSettingChange](#onsettingchange)|Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.|  
|[AFX_GLOBAL_DATA::RegisterWindowClass](#registerwindowclass)|Registra la classe di finestre MFC specificata.|  
|[AFX_GLOBAL_DATA::ReleaseTaskBarRefs](#releasetaskbarrefs)|Rilascia le interfacce ottenute tramite i metodi GetITaskbarList e GetITaskbarList3.|  
|[AFX_GLOBAL_DATA::Resume](#resume)|Reinizializza i puntatori a funzione interna che hanno accesso ai metodi che supportano [temi e stili di visualizzazione](https://msdn.microsoft.com/library/windows/desktop/hh270423.aspx)di Windows.|  
|[AFX_GLOBAL_DATA::SetLayeredAttrib](#setlayeredattrib)|Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) di Windows.|  
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
  
### <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)


## <a name="bisosalphablendingsupport"></a>AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport
Indica se il sistema operativo supporta la fusione alfa.  
  
  
```  
BOOL  bIsOSAlphaBlendingSupport;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`indica la fusione alfa è supportata. in caso contrario, `FALSE`.  
  

## <a name="cleanup"></a>AFX_GLOBAL_DATA::Cleanup
Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.  
  
  
```  
void CleanUp();
```  
## <a name="d2d1makerotatematrix"></a>AFX_GLOBAL_DATA::D2D1MakeRotateMatrix
Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.  
  
  
```  
HRESULT D2D1MakeRotateMatrix(
    FLOAT angle,  
    D2D1_POINT_2F center,  
    D2D1_MATRIX_3X2_F *matrix);
```  
  
### <a name="parameters"></a>Parametri   
 `angle`  
 L'angolo di rotazione in senso orario, in gradi.  
  
 `center`  
 Il punto su cui eseguire la rotazione.  
  
 `matrix`  
 Quando questo metodo viene restituito, contiene la nuova trasformazione di rotazione. Per questo parametro, è necessario allocare spazio di archiviazione.  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce S_OK se ha esito positivo o un valore di errore.  
  
## <a name="drawparentbackground"></a>AFX_GLOBAL_DATA::DrawParentBackground
Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.  
  
  
```  
BOOL DrawParentBackground(
    CWnd* pWnd,   
    CDC* pDC,   
    LPRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `pWnd`  
 Puntatore a una finestra del controllo.  
  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `lpRect`  
 Puntatore a un rettangolo che limita l'area in cui disegnare. Il valore predefinito è `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
## <a name="drawtextonglass"></a>AFX_GLOBAL_DATA::DrawTextOnGlass
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
 [in] `hTheme`  
 Handle ai dati del tema di una finestra o `NULL`. Il framework usa il tema specificato per disegnare il testo se questo parametro non è `NULL` e i temi sono supportati. In caso contrario, il framework non usa un tema per disegnare il testo.  
  
 Usare il metodo [OpenThemeData](http://msdn.microsoft.com/library/windows/desktop/bb759821) per creare un `HTHEME`.  
  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `iPartId`  
 La parte del controllo che presenta l'aspetto desiderato per il testo. Per altre informazioni vedere la colonna Parti della tabella in [Parti e stati](http://msdn.microsoft.com/library/windows/desktop/bb773210). Se questo valore è 0, il testo viene disegnato nel tipo di carattere predefinito o in un tipo di carattere selezionato nel contesto di dispositivo.  
  
 [in] `iStateId`  
 Lo stato del controllo che presenta l'aspetto desiderato per il testo. Per altre informazioni vedere la colonna Stati della tabella in [Parti e stati](http://msdn.microsoft.com/library/windows/desktop/bb773210).  
  
 [in] `strText`  
 Testo da disegnare.  
  
 [in] `rect`  
 Il limite dell'area in cui il testo specificato viene disegnato.  
  
 [in] `dwFlags`  
 Una combinazione bit per bit (OR) di flag che specifica in che modo viene disegnato il testo specificato.  
  
 Se il `hTheme` parametro `NULL` o se i temi non sono supportati e abilitati, il `nFormat` parametro del [CDC](../../mfc/reference/cdc-class.md#drawtext) metodo descrive i flag validi. Se i temi sono supportati, il parametro `dwFlags` del metodo [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) descrive i flag validi.  
  
 [in] `nGlowSize`  
 La dimensione di un effetto alone che viene disegnato sullo sfondo prima che venga disegnato il testo specificato. Il valore predefinito è 0.  
  
 [in] `clrText`  
 Il colore in cui il testo specificato viene disegnato. Il valore predefinito è il colore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene usato un tema per disegnare il testo specificato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Un tema definisce lo stile di visualizzazione di un'applicazione. Non viene usato un tema per disegnare il testo se il parametro `hTheme` è `NULL`o se il metodo [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) non è supportato o ancora se la composizione [Gestione finestre desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540) (DWM) è disabilitata.  
  
### <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [Parti e stati](http://msdn.microsoft.com/library/windows/desktop/bb773210)   
 [CDC](../../mfc/reference/cdc-class.md#drawtext)   
 [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317)   
 [Gestione finestre desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Abilitare e controllare la composizione DWM](http://msdn.microsoft.com/library/windows/desktop/aa969538)

## <a name="enableaccessibilitysupport"></a>AFX_GLOBAL_DATA::EnableAccessibilitySupport
Abilita o disabilita il supporto di Microsoft Active Accessibility.  
  
  
```  
void EnableAccessibilitySupport(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `bEnable`  
 `TRUE` per abilitare il supporto per l'accessibilità; `FALSE` per disabilitare il supporto per l'accessibilità. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 L'accessibilità attiva è una tecnologia basata su COM che migliora il modo in cui i programmi e il sistema operativo Windows lavorano insieme ai prodotti di Assistive Technology. Fornisce metodi affidabili per l'esposizione di informazioni sugli elementi dell'interfaccia utente. Tuttavia, è ora disponibile un nuovo modello di accessibilità denominato Automazione dell'interfaccia utente Microsoft. Per un confronto tra le due tecnologie, vedere [automazione interfaccia utente e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility).  
  
 Utilizzare il [AFX_GLOBAL_DATA::IsAccessibilitySupport](#isaccessibilitysupport) metodo per determinare se è abilitato il supporto di Microsoft Active Accessibility.  
  
 
### <a name="see-also"></a>Vedere anche  
 [Automazione interfaccia utente e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility)   
 [AFX_GLOBAL_DATA::IsAccessibilitySupport](#isaccessibilitysupport)

## <a name="excludetag"></a>AFX_GLOBAL_DATA::ExcludeTag
Rimuove la coppia di tag XML specificata da un determinato buffer.  
  
  
```  
BOOL ExcludeTag(
    CString& strBuffer,  
    LPCTSTR lpszTag,  
    CString& strTag,  
    BOOL bIsCharsList = FALSE);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `strBuffer`  
 Un buffer di testo.  
  
 [in] `lpszTag`  
 Il nome di una coppia di apertura e chiusura di tag XML.  
  
 [out] `strTag`  
 Quando termina, questo metodo il `strTag` parametro contiene il testo che si trova tra i tag XML tag che sono denominate per il `lpszTag` parametro. Gli spazi vuoti iniziali o finali vengono tagliati dal risultato.  
  
 [in] `bIsCharsList`  
 `TRUE`Per convertire i simboli per i caratteri di escape di `strTag` parametro in caratteri di escape effettivo; `FALSE` per non eseguire la conversione. Il valore predefinito è `FALSE`. Per altre informazioni, vedere la sezione Note.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Una coppia di tag XML costituito da denominato tag che indicano l'inizio e fine di una sequenza di testo nel buffer specificato. Il `strBuffer` parametro specifica il buffer e `lpszTag` parametro specifica il nome del tag XML.  
  
 Utilizzare i simboli nella tabella seguente per codificare un set di caratteri di escape nel buffer specificato. Specificare `TRUE` per il `bIsCharsList` parametro da convertire i simboli nel `strTag` parametro in caratteri di escape effettivo. Nella tabella seguente viene utilizzato il [t ()](../../c-runtime-library/data-type-mappings.md) (macro) per specificare il simbolo e stringhe di caratteri di escape.  
  
|Simbolo|Carattere di escape|  
|------------|----------------------|  
|_T("\\\t")|_T("\t")|  
|_T("\\\n")|_T("\n")|  
|_T("\\\r")|_T("\r")|  
|_T("\\\b")|_T("\b")|  
|_T("LT")|_T("\<")|  
|_T("GT")|_T(">")|  
|_T("AMP")|_T("&")|  
  
## <a name="getcolor"></a>AFX_GLOBAL_DATA::getColor
Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.  
  
  
```  
COLORREF GetColor(int nColor);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `nColor`  
 Valore che specifica un elemento dell'interfaccia utente il cui colore viene recuperato. Per un elenco di valori validi, vedere il `nIndex` parametro il [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Valore di colore RGB dell'elemento dell'interfaccia utente specificato. Per altre informazioni, vedere la sezione Note.  
  
### <a name="remarks"></a>Note  
 Se il parametro `nColor` non è incluso nell'intervallo, il valore restituito è zero. Poiché anche zero è un valore RGB valido, non è possibile utilizzare questo metodo per determinare se un colore di sistema è supportato dal sistema operativo corrente. Utilizzare invece il [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927) metodo, che restituisce `NULL` se il colore non è supportato.  
  
### <a name="see-also"></a>Vedere anche  

 [Funzione GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927)

## <a name="getdirect2dfactory"></a>AFX_GLOBAL_DATA::GetDirect2dFactory
 Restituisce un puntatore all'interfaccia ID2D1Factory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.  
  
  
```  
ID2D1Factory* GetDirect2dFactory();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia ID2D1Factory se ha esito positivo, la creazione di una factory o NULL se si verifica un errore di creazione o il sistema operativo corrente non dispone del supporto D2D.  
  
## <a name="gethandcursor"></a>AFX_GLOBAL_DATA::GetHandCursor
Recupera il cursore predefinito che rappresenta una mano e il cui identificatore è `IDC_HAND`.  
  
  
```  
HCURSOR GetHandCursor();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del cursore mano.  

## <a name="getnonclientmetrics"></a>AFX_GLOBAL_DATA::GetNonClientMetrics
Recupera la metrica associata all'area non client delle finestre non ridotte a icona.  
  
  
```  
BOOL GetNonClientMetrics(NONCLIENTMETRICS& info);
```  
  
### <a name="parameters"></a>Parametri   
 [in, out] `info`  
 Oggetto [NONCLIENTMETRICS](http://msdn.microsoft.com/library/windows/desktop/ff729175) struttura che contiene le metriche scalabile associate all'area non client di una finestra non ridotta a icona.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo ha esito positivo. in caso contrario, `FALSE`.  
 
  
### <a name="see-also"></a>Vedere anche   
 [Struttura NONCLIENTMETRICS](http://msdn.microsoft.com/library/windows/desktop/ff729175)

## <a name="gettextheight"></a>AFX_GLOBAL_DATA::GetTextHeight
 Recupera l'altezza dei caratteri di testo nel tipo di carattere corrente.  
  
  
```  
int GetTextHeight(BOOL bHorz = TRUE);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `bHorz`  
 `TRUE`per recuperare l'altezza dei caratteri quando il testo scorre orizzontalmente. `FALSE` per recuperare l'altezza dei caratteri quando il testo scorre in senso verticale. Il valore predefinito è `TRUE`.  
  
### <a name="return-value"></a>Valore restituito  
 Altezza del tipo di carattere corrente, che viene misurato dal relativo elemento ascendente al relativo discendente.  
  
## <a name="getwicfactory"></a>AFX_GLOBAL_DATA::GetWICFactory
Restituisce un puntatore all'interfaccia IWICImagingFactory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.  
  
  
```  
IWICImagingFactory* GetWICFactory();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IWICImagingFactory se ha esito positivo, la creazione di una factory o NULL se si verifica un errore di creazione o il sistema operativo corrente non dispone del supporto WIC.  
  
## <a name="getwritefactory"></a>AFX_GLOBAL_DATA::GetWriteFactory
Restituisce un puntatore a interfaccia IDWriteFactory viene archiviato nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.  
  
  
```  
IDWriteFactory* GetWriteFactory();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IDWriteFactory se ha esito positivo, la creazione di una factory o NULL se si verifica un errore di creazione o il sistema operativo corrente non dispone del supporto DirectWrite.  
 
## <a name="initd2d"></a>AFX_GLOBAL_DATA::InitD2D
Inizializza la factory DirectWrite o D2D e WIC. Chiamare questo metodo prima dell'inizializzazione della finestra principale.  
  
  
```  
BOOL InitD2D(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,  
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```  
  
### <a name="parameters"></a>Parametri   
 `d2dFactoryType`  
 Il modello di threading di factory D2D e le risorse viene creato.  
  
 `writeFactoryType`  
 Un valore che specifica se l'oggetto factory di scrittura verrà condiviso o isolato  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se la factory sono state inizializzate, - FALSE in caso contrario  
  
## <a name="is32biticons"></a>AFX_GLOBAL_DATA::Is32BitIcons
Indica se sono supportate le icone a 32 bit predefinite.  
  
  
```  
BOOL Is32BitIcons() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se le icone di 32 bit predefinite sono supportate. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce `TRUE` se il framework supporta icone predefinite 32 bit, il sistema operativo supporti i 16 bit per pixel o superiore e se non vengono visualizzate le immagini di contrasto elevato.  
  
## <a name="isaccessibilitysupport"></a>AFX_GLOBAL_DATA::IsAccessibilitySupport
Indica se il supporto di Microsoft Active Accessibility è abilitato.  
  
  
```  
BOOL IsAccessibilitySupport() const; 
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è abilitato il supporto di accessibilità; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Microsoft Active Accessibility è la soluzione precedente per rendere accessibili le applicazioni. Automazione interfaccia utente di Microsoft è il nuovo modello di accessibilità di Microsoft Windows e deve soddisfare le esigenze di prodotti assistive technology e strumenti di test automatizzati.   
  
 Utilizzare il [AFX_GLOBAL_DATA::EnableAccessibilitySupport](#enableaccessibilitysupport) metodo per abilitare o disabilitare il supporto Active Accessibility.  
  

### <a name="see-also"></a>Vedere anche  
 [Automazione interfaccia utente e Microsoft Active Accessibility](/dotnet/framework/ui-automation/ui-automation-and-microsoft-active-accessibility)

## <a name="isd2dinitialized"></a>AFX_GLOBAL_DATA::IsD2DInitialized
 Determina se è stato inizializzato il D2D  
  
  
```  
BOOL IsD2DInitialized() const; 
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato inizializzato D2D; in caso contrario FALSE.  
  
## <a name="isdwmcompositionenabled"></a>AFX_GLOBAL_DATA::IsDwmCompositionEnabled
Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) di Windows.  
  
  
```  
BOOL IsDwmCompositionEnabled();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se [Gestione finestre Desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540) composizione (DWM) è abilitato; in caso contrario, `FALSE`.  
  
### <a name="see-also"></a>Vedere anche    
 [Gestione finestre desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Abilitare e controllare la composizione DWM](http://msdn.microsoft.com/library/windows/desktop/aa969538)

## <a name="ishighcontrastmode"></a>AFX_GLOBAL_DATA::IsHighContrastMode
 Indica se le immagini sono attualmente visualizzate con contrasto elevato.    
```  
BOOL IsHighContrastMode() const; 
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se le immagini attualmente visualizzate in modalità a contrasto elevato bianchi o neri. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 In modalità a contrasto elevato nero, lati rivolti verso la luce sono bianchi e lo sfondo è nero. In modalità a contrasto elevato bianco, lati rivolti verso la luce sono neri e lo sfondo è bianco.  
  
## <a name="iswindowslayersupportavailable"></a>AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable
Indica se il sistema operativo supporta le finestre sovrapposte.  
  
  
```  
BOOL IsWindowsLayerSupportAvailable() const; 
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se sono supportate le finestre sovrapposte. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se sono supportate le finestre sovrapposte, *ancoraggio intelligente* marcatori utilizzano finestre sovrapposte.  
  
## <a name="m_busebuiltin32biticons"></a>AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons
Indica se il framework usa icone predefinite con colori a 32 bit o icone con una risoluzione più bassa.  
  
  
```  
BOOL  m_bUseBuiltIn32BitIcons;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`Specifica che il framework di utilizzare le icone di colori a 32 bit; `FALSE` specifica icone risoluzione inferiore. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a `TRUE`.  
  
 Questo membro deve essere impostato all'avvio dell'applicazione.  
  
## <a name="m_busesystemfont"></a>AFX_GLOBAL_DATA::m_bUseSystemFont
Indica se un tipo di carattere di sistema viene usato per i menu, le barre degli strumenti e le barre multifunzione.  
  
  
```  
BOOL m_bUseSystemFont;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`Specifica per l'utilizzo di un tipo di carattere di sistema. in caso contrario, `FALSE`. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a `FALSE`.  
  
 Test di questo membro non è l'unico modo per il framework determinare il tipo di carattere da utilizzare. Il `AFX_GLOBAL_DATA::UpdateFonts` metodo verifica inoltre i tipi di carattere predefiniti e alternativi per determinare quali gli stili di visualizzazione disponibili da applicare al menu, barre degli strumenti e le barre multifunzione.  
  
## <a name="m_hcurhand"></a>AFX_GLOBAL_DATA::m_hcurHand
Archivia l'handle per il cursore a forma di mano.  
  
  
```  
HCURSOR m_hcurHand;  
```  
  
## <a name="m_hcurstretch"></a>AFX_GLOBAL_DATA::m_hcurStretch
Archivia l'handle per il cursore di adattamento orizzontale.  
  
  
```  
HCURSOR m_hcurStretch;  
```  

## <a name="m_hcurstretchvert"></a>AFX_GLOBAL_DATA::m_hcurStretchVert
Archivia l'handle per il cursore di adattamento verticale.  
  
  
```  
HCURSOR m_hcurStretchVert;  
```  
  
## <a name="m_hicontool"></a>AFX_GLOBAL_DATA::m_hiconTool
Archivia l'handle per l'icona dello strumento.  
  
  
```  
HICON m_hiconTool;  
```  
## <a name="m_nautohidetoolbarmargin"></a>AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin
Specifica l'offset dalla barra degli strumenti a scomparsa automatica che si trova più a sinistra al lato sinistro della barra ancorabile a schede.  
  
  
```  
int  m_nAutoHideToolBarMargin;  
```  
  
### <a name="remarks"></a>Note  
 Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.  
  
## <a name="m_nautohidetoolbarspacing"></a>AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing
Specifica la distanza tra le barre degli strumenti che si nascondono automaticamente.  
  
  
```  
int   m_nAutoHideToolBarSpacing;  
```  
  
### <a name="remarks"></a>Note  
 Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a 14 pixel.  
  
## <a name="m_ndragframethicknessdock"></a>AFX_GLOBAL_DATA::m_nDragFrameThicknessDock

Specifica lo spessore del frame trascinamento che viene utilizzato per indicare lo stato ancorato.  
  
  
```  
int  m_nDragFrameThicknessDock;  
```  
  
### <a name="remarks"></a>Note  
 Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a 3 pixel.  
  
## <a name="m_ndragframethicknessfloat"></a>AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat
Specifica lo spessore del frame trascinamento che viene utilizzato per indicare lo stato a virgola mobile.  
  
  
```  
int  m_nDragFrameThicknessFloat;  
```  
  
### <a name="remarks"></a>Note  
 Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.  
  
## <a name="onsettingchange"></a>AFX_GLOBAL_DATA::OnSettingChange
Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.  
  
  
```  
void OnSettingChange();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta le variabili di framework per lo stato di alcuni attributi del desktop dell'utente. Questo metodo rileva lo stato corrente di animazione dei menu, dissolvenza dei menu e barra funzionalità Nascondi automaticamente.  
  
## <a name="registerwindowclass"></a>AFX_GLOBAL_DATA::RegisterWindowClass
Registra la classe di finestre MFC specificata.  
  
  
```  
CString RegisterWindowClass(LPCTSTR lpszClassNamePrefix);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `lpszClassNamePrefix`  
 Il nome della classe della finestra da registrare.  
  
### <a name="return-value"></a>Valore restituito  
 Il nome completo della classe registrato se questo metodo ha esito positivo. in caso contrario, un [eccezione risorse](http://msdn.microsoft.com/library/ddd99292-819b-4fa4-8371-b1954ed5856d).  
  
### <a name="remarks"></a>Note  
 Il valore restituito è un elenco delimitato da virgola di `lpszClassNamePrefix` parametro stringa e le rappresentazioni esadecimali di handle dell'istanza dell'applicazione corrente; il cursore dell'applicazione, ovvero il cursore a freccia il cui identificatore è IDC_ARROW; e il pennello di sfondo. Per ulteriori informazioni sulla registrazione di classi di finestre MFC, vedere [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass).  
  
### <a name="see-also"></a>Vedere anche    
 [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass)   
 [AfxThrowResourceException](../../mfc/reference/exception-processing.md#afxthrowresourceexception)

## <a name="resume"></a>AFX_GLOBAL_DATA::Resume
 Reinizializza i puntatori di funzione interna che accedono ai metodi che supportano i temi di Windows e gli stili di visualizzazione. 
  
  
```  
BOOL Resume();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo ha esito positivo. in caso contrario, `FALSE`. In modalità debug, questo metodo indica se questo metodo ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando il framework riceve il [WM_POWERBROADCAST](http://msdn.microsoft.com/library/windows/desktop/aa373247) messaggio.  
  
## <a name="setlayeredattrib"></a>AFX_GLOBAL_DATA::SetLayeredAttrib
Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) di Windows.  
  
  
```  
BOOL SetLayeredAttrib(
    HWND hwnd,  
    COLORREF crKey,  
    BYTE bAlpha,  
    DWORD dwFlags);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `hwnd`  
 Handle alla finestra sovrapposta.  
  
 [in] `crKey`  
 Chiave di colore di trasparenza di [Gestione finestre Desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540) viene utilizzato per creare la finestra sovrapposta.  
  
 [in] `bAlpha`  
 Valore alfa utilizzato per descrivere l'opacità della finestra sovrapposta.  
  
 [in] `dwFlags`  
 Combinazione bit per bit (OR) di flag che specificano quali parametri del metodo utilizzare. Specificare LWA_COLORKEY per utilizzare il parametro `crKey` come colore di trasparenza. Specificare LWA_ALPHA per utilizzare il parametro `bAlpha` per determinare l'opacità della finestra sovrapposta.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo ha esito positivo. in caso contrario, `FALSE`.   
 
### <a name="see-also"></a>Vedere anche   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540)

## <a name="setmenufont"></a>AFX_GLOBAL_DATA::SetMenuFont
Crea il tipo di carattere logico specificato.  
  
  
```  
BOOL SetMenuFont(
    LPLOGFONT lpLogFont,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri   
 [in] `lpLogFont`  
 Puntatore a una struttura che contiene gli attributi di un tipo di carattere.  
  
 [in] `bHorz`  
 `TRUE`Per specificare che le sequenze di testo orizzontalmente. `FALSE` per specificare che il testo viene eseguito in senso verticale.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo ha esito positivo. in caso contrario, `FALSE`. In modalità debug, questo metodo indica se questo metodo ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un carattere normale orizzontale, un carattere sottolineato, e un tipo di carattere grassetto è usato predefinita voci di menu. Facoltativamente, questo metodo crea un tipo di carattere verticale regolare. Per ulteriori informazioni sui tipi di carattere logiche, vedere [CFont:: CreateFontIndirect](../../mfc/reference/cfont-class.md#createfontindirect).  
  
## <a name="updatefonts"></a>AFX_GLOBAL_DATA::UpdateFonts
Reinizializza i tipi di carattere logici usati dal framework.  
  
  
```  
void UpdateFonts();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui tipi di carattere logiche, vedere `CFont::CreateFontIndirect`.  
  
## <a name="updatesyscolors"></a>AFX_GLOBAL_DATA::UpdateSysColors
Inizializza i colori, l'intensità di colore, i pennelli, le penne e le immagini usati dal framework.  
  
  
```  
void UpdateSysColors();
```  
  
## <a name="biswindows7"></a>AFX_GLOBAL_DATA::bIsWindows7
Indica se l'applicazione viene eseguita in Windows 7 o versione successiva.  
  
  
```  
BOOL bIsWindows7;  
```  
  
## <a name="clractivecaptiongradient"></a>AFX_GLOBAL_DATA::clrActiveCaptionGradient
Specifica il colore sfumato della didascalia attiva. Viene in genere usato per i riquadri ancorabili.  
  
  
```  
COLORREF clrActiveCaptionGradient;  
```  
  
## <a name="clrinactivecaptiongradient"></a>AFX_GLOBAL_DATA::clrInactiveCaptionGradient
Specifica il colore sfumato della didascalia inattiva. Viene in genere usato per i riquadri ancorabili.  
  
  
```  
COLORREF clrInactiveCaptionGradient;  
```  
  
## <a name="getitaskbarlist"></a>AFX_GLOBAL_DATA::GetITaskbarList
Crea e archivia i dati globali in un puntatore di `ITaskBarList` interfaccia.  
  
  
```  
ITaskbarList *GetITaskbarList();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `ITaskbarList` interfaccia se la creazione di una barra oggetto elenco delle attività ha esito positivo. `NULL` se la creazione non riesce o se il sistema operativo corrente è inferiore a Windows 7.  
  
## <a name="getitaskbarlist3"></a>AFX_GLOBAL_DATA::GetITaskbarList3
Crea e archivia i dati globali in un puntatore di `ITaskBarList3` interfaccia.  
  
  
```  
ITaskbarList3 *GetITaskbarList3();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `ITaskbarList3` interfaccia se la creazione di una barra oggetto elenco delle attività ha esito positivo. `NULL` se la creazione non riesce o se il sistema operativo corrente è inferiore a Windows 7.  
  
## <a name="getshellautohidebars"></a>AFX_GLOBAL_DATA::GetShellAutohideBars
Determina le posizioni delle barre della Shell che si nascondono automaticamente.  
  
  
```  
int GetShellAutohideBars();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore integer con flag codificato che specificano le posizioni di auto nascondere le barre. È possibile combinare i valori seguenti: AFX_AUTOHIDE_BOTTOM, AFX_AUTOHIDE_TOP, AFX_AUTOHIDE_LEFT, AFX_AUTOHIDE_RIGHT.  
  
## <a name="releasetaskbarrefs"></a>AFX_GLOBAL_DATA::ReleaseTaskBarRefs
Rilascia le interfacce ottenute tramite il `GetITaskbarList` e `GetITaskbarList3` metodi.  
  
  
```  
void ReleaseTaskBarRefs();
```  
  
## <a name="shellcreateitemfromparsingname"></a>AFX_GLOBAL_DATA::ShellCreateItemFromParsingName
Crea e inizializza un oggetto Shell da un nome di analisi.  
  
  
```  
HRESULT ShellCreateItemFromParsingName(
    PCWSTR pszPath,  
    IBindCtx *pbc,  
    REFIID riid,  
    void **ppv);
```  
  
### <a name="parameters"></a>Parametri   
 `pszPath`  
 [in] Puntatore a un nome visualizzato.  
  
 `pbc`  
 Puntatore a un contesto di associazione che controlla l'operazione di analisi.  
  
 `riid`  
 Un riferimento all'ID di interfaccia.  
  
 `ppv`  
 [out] Quando questa funzione viene restituito, contiene il puntatore di interfaccia richiesto `riid`. Ciò corrisponderà in genere `IShellItem` o `IShellItem2`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se ha esito positivo. un valore di errore in caso contrario.  


