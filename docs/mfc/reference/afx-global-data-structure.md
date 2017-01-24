---
title: "Struttura AFX_GLOBAL_DATA | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GLOBAL_DATA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX_GLOBAL_DATA (struttura)"
  - "AFX_GLOBAL_DATA (costruttore)"
ms.assetid: c7abf2fb-ad5e-4336-a01d-260c29ed53a2
caps.latest.revision: 30
caps.handback.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura AFX_GLOBAL_DATA
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

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
|[AFX_GLOBAL_DATA::Cleanup](#afx_global_data__cleanup)|Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.|  
|[AFX_GLOBAL_DATA::D2D1MakeRotateMatrix](#afx_global_data__d2d1makerotatematrix)|Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.|  
|[AFX_GLOBAL_DATA::DrawParentBackground](#afx_global_data__drawparentbackground)|Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.|  
|[AFX_GLOBAL_DATA::DrawTextOnGlass](#afx_global_data__drawtextonglass)|Disegna il testo specificato nello stile di visualizzazione del tema specificato.|  
|[AFX_GLOBAL_DATA::ExcludeTag](#afx_global_data__excludetag)|Rimuove la coppia di tag XML specificata da un determinato buffer.|  
|[AFX_GLOBAL_DATA::getColor](#afx_global_data__getcolor)|Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.|  
|[AFX_GLOBAL_DATA::GetDirect2dFactory](#afx_global_data__getdirect2dfactory)|Restituisce un puntatore all'interfaccia `ID2D1Factory` archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.|  
|[AFX_GLOBAL_DATA::GetHandCursor](#afx_global_data__gethandcursor)|Recupera il cursore predefinito che rappresenta una mano e il cui identificatore è `IDC_HAND`.|  
|[AFX_GLOBAL_DATA::GetITaskbarList](#afx_global_data__getitaskbarlist)|Crea e archivia nei dati globali un puntatore all'interfaccia ITaskBarList.|  
|[AFX_GLOBAL_DATA::GetITaskbarList3](#afx_global_data__getitaskbarlist3)|Crea e archivia nei dati globali un puntatore all'interfaccia ITaskBarList3.|  
|[AFX_GLOBAL_DATA::GetNonClientMetrics](#afx_global_data__getnonclientmetrics)|Recupera la metrica associata all'area non client delle finestre non ridotte a icona.|  
|[AFX_GLOBAL_DATA::GetShellAutohideBars](#afx_global_data__getshellautohidebars)|Determina le posizioni delle barre della Shell che si nascondono automaticamente.|  
|[AFX_GLOBAL_DATA::GetTextHeight](#afx_global_data__gettextheight)|Recupera l'altezza dei caratteri di testo nel tipo di carattere corrente.|  
|[AFX_GLOBAL_DATA::GetWICFactory](#afx_global_data__getwicfactory)|Restituisce un puntatore all'interfaccia `IWICImagingFactory` archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.|  
|[AFX_GLOBAL_DATA::GetWriteFactory](#afx_global_data__getwritefactory)|Restituisce un puntatore all'interfaccia `IDWriteFactory` archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.|  
|[AFX_GLOBAL_DATA::IsD2DInitialized](#afx_global_data__isd2dinitialized)|Inizializza le factory `D2D`, `DirectWrite`e `WIC` . Chiamare questo metodo prima dell'inizializzazione della finestra principale.|  
|[AFX_GLOBAL_DATA::Is32BitIcons](#afx_global_data__is32biticons)|Indica se sono supportate le icone a 32 bit predefinite.|  
|[AFX_GLOBAL_DATA::IsD2DInitialized](#afx_global_data__isd2dinitialized)|Determina se la factory `D2D` è stata inizializzata.|  
|[AFX_GLOBAL_DATA::IsDwmCompositionEnabled](#afx_global_data__isdwmcompositionenabled)|Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) di Windows.|  
|[AFX_GLOBAL_DATA::IsHighContrastMode](#afx_global_data__ishighcontrastmode)|Indica se le immagini sono attualmente visualizzate con contrasto elevato.|  
|[AFX_GLOBAL_DATA::OnSettingChange](#afx_global_data__onsettingchange)|Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.|  
|[AFX_GLOBAL_DATA::RegisterWindowClass](#afx_global_data__registerwindowclass)|Registra la classe di finestre MFC specificata.|  
|[AFX_GLOBAL_DATA::ReleaseTaskBarRefs](#afx_global_data__releasetaskbarrefs)|Rilascia le interfacce ottenute tramite i metodi GetITaskbarList e GetITaskbarList3.|  
|[AFX_GLOBAL_DATA::Resume](#afx_global_data__resume)|Reinizializza i puntatori a funzione interna che hanno accesso ai metodi che supportano [temi e stili di visualizzazione](https://msdn.microsoft.com/library/windows/desktop/hh270423.aspx)di Windows.|  
|[AFX_GLOBAL_DATA::SetLayeredAttrib](#afx_global_data__setlayeredattrib)|Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) di Windows.|  
|[AFX_GLOBAL_DATA::SetMenuFont](#afx_global_data__setmenufont)|Crea il tipo di carattere logico specificato.|  
|[AFX_GLOBAL_DATA::ShellCreateItemFromParsingName](#afx_global_data__shellcreateitemfromparsingname)|Crea e inizializza un oggetto Shell da un nome di analisi.|  
|[AFX_GLOBAL_DATA::UpdateFonts](#afx_global_data__updatefonts)|Reinizializza i tipi di carattere logici usati dal framework.|  
|[AFX_GLOBAL_DATA::UpdateSysColors](#afx_global_data__updatesyscolors)|Inizializza i colori, l'intensità di colore, i pennelli, le penne e le immagini usati dal framework.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::EnableAccessibilitySupport](#afx_global_data__enableaccessibilitysupport)|Abilita o disabilita il supporto di Microsoft Active Accessibility. In Active Accessibility sono disponibili metodi affidabili per l'esposizione di informazioni sugli elementi dell'interfaccia utente.|  
|[AFX_GLOBAL_DATA::IsAccessibilitySupport](#afx_global_data__isaccessibilitysupport)|Indica se il supporto di Microsoft Active Accessibility è abilitato.|  
|[AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable](#afx_global_data__iswindowslayersupportavailable)|Indica se il sistema operativo supporta le finestre sovrapposte.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport](#afx_global_data__bisosalphablendingsupport)|Indica se il sistema operativo corrente supporta la fusione alfa.|  
|[AFX_GLOBAL_DATA::bIsWindows7](#afx_global_data__biswindows7)|Indica se l'applicazione è in esecuzione in un sistema operativo Windows 7 o versione successiva.|  
|[AFX_GLOBAL_DATA::clrActiveCaptionGradient](#afx_global_data__clractivecaptiongradient)|Specifica il colore sfumato della didascalia attiva. Viene in genere usato per i riquadri ancorabili.|  
|[AFX_GLOBAL_DATA::clrInactiveCaptionGradient](#afx_global_data__clrinactivecaptiongradient)|Specifica il colore sfumato della didascalia inattiva. Viene in genere usato per i riquadri ancorabili.|  
|[AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons](#afx_global_data__m_busebuiltin32biticons)|Indica se il framework usa icone predefinite con colori a 32 bit o icone con una risoluzione più bassa.|  
|[AFX_GLOBAL_DATA::m_bUseSystemFont](#afx_global_data__m_busesystemfont)|Indica se un tipo di carattere di sistema viene usato per i menu, le barre degli strumenti e le barre multifunzione.|  
|[AFX_GLOBAL_DATA::m_hcurHand](#afx_global_data__m_hcurhand)|Archivia l'handle per il cursore a forma di mano.|  
|[AFX_GLOBAL_DATA::m_hcurStretch](#afx_global_data__m_hcurstretch)|Archivia l'handle per il cursore di adattamento orizzontale.|  
|[AFX_GLOBAL_DATA::m_hcurStretchVert](#afx_global_data__m_hcurstretchvert)|Archivia l'handle per il cursore di adattamento verticale.|  
|[AFX_GLOBAL_DATA::m_hiconTool](#afx_global_data__m_hicontool)|Archivia l'handle per l'icona dello strumento.|  
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin](#afx_global_data__m_nautohidetoolbarmargin)|Specifica l'offset dalla barra degli strumenti che si nasconde automaticamente più a sinistra nel lato sinistro della barra ancorabile.|  
|[AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing](#afx_global_data__m_nautohidetoolbarspacing)|Specifica la distanza tra le barre degli strumenti che si nascondono automaticamente.|  
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](#afx_global_data__m_ndragframethicknessdock)|Specifica lo spessore del frame di trascinamento usato per comunicare lo stato ancorato.|  
|[AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](#afx_global_data__m_ndragframethicknessfloat)|Specifica lo spessore del frame di trascinamento usato per comunicare lo stato mobile.|  
  
## <a name="remarks"></a>Note  
 La maggior parte dei dati della struttura `AFX_GLOBAL_DATA` viene inizializzata all'avvio dell'applicazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxglobals.h  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)


## <a name="a-nameafxglobaldatabisosalphablendingsupporta-afxglobaldatabisosalphablendingsupport"></a><a name="afx_global_data__bisosalphablendingsupport"></a> AFX_GLOBAL_DATA::bIsOSAlphaBlendingSupport
Indica se il sistema operativo supporta la fusione alfa.  
  
  
```  
BOOL  bIsOSAlphaBlendingSupport;  
```  
  
## <a name="remarks"></a>Note  
 `TRUE` indica la fusione alfa è supportata. in caso contrario, `FALSE`.  
  

## <a name="a-nameafxglobaldatacleanupa-afxglobaldatacleanup"></a><a name="afx_global_data__cleanup"></a> AFX_GLOBAL_DATA::Cleanup
Rilascia le risorse allocate dal framework, ad esempio pennelli, tipi di carattere e DLL.  
  
  
```  
void CleanUp();
```  
## <a name="a-nameafxglobaldatad2d1makerotatematrixa-afxglobaldatad2d1makerotatematrix"></a><a name="afx_global_data__d2d1makerotatematrix"></a> AFX_GLOBAL_DATA::D2D1MakeRotateMatrix
Crea una trasformazione di rotazione che ruota di un angolo specificato intorno a un punto definito.  
  
  
```  
HRESULT D2D1MakeRotateMatrix(
    FLOAT angle,  
    D2D1_POINT_2F center,  
    D2D1_MATRIX_3X2_F *matrix);
```  
  
#### <a name="parameters"></a>Parametri  
 `angle`  
 L'angolo di rotazione in senso orario, in gradi.  
  
 `center`  
 Il punto su cui eseguire la rotazione.  
  
 `matrix`  
 Quando termina, questo metodo contiene la nuova trasformazione di rotazione. È necessario allocare spazio di archiviazione per questo parametro.  
  
## <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce S_OK se ha esito positivo o un valore di errore.  
  
## <a name="a-nameafxglobaldatadrawparentbackgrounda-afxglobaldatadrawparentbackground"></a><a name="afx_global_data__drawparentbackground"></a> AFX_GLOBAL_DATA::DrawParentBackground
Disegna lo sfondo dell'elemento padre di un controllo nell'area specificata.  
  
  
```  
BOOL DrawParentBackground(
    CWnd* pWnd,   
    CDC* pDC,   
    LPRECT lpRect = NULL);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore a una finestra del controllo.  
  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `lpRect`  
 Puntatore a un rettangolo che limita l'area in cui disegnare. Il valore predefinito è `NULL`.  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
## <a name="a-nameafxglobaldatadrawtextonglassa-afxglobaldatadrawtextonglass"></a><a name="afx_global_data__drawtextonglass"></a> AFX_GLOBAL_DATA::DrawTextOnGlass
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
  
#### <a name="parameters"></a>Parametri  
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
  
 Se il `hTheme` parametro `NULL` o se i temi non sono supportati e abilitati, il `nFormat` parametro del [CDC](../../mfc/reference/cdc-class.md#cdc__drawtext) metodo vengono descritti i flag validi. Se i temi sono supportati, il parametro `dwFlags` del metodo [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) descrive i flag validi.  
  
 [in] `nGlowSize`  
 La dimensione di un effetto alone che viene disegnato sullo sfondo prima che venga disegnato il testo specificato. Il valore predefinito è 0.  
  
 [in] `clrText`  
 Il colore in cui il testo specificato viene disegnato. Il valore predefinito è il colore predefinito.  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se un tema viene utilizzato per disegnare il testo specificato. in caso contrario, `FALSE`.  
  
## <a name="remarks"></a>Note  
 Un tema definisce lo stile di visualizzazione di un'applicazione. Non viene usato un tema per disegnare il testo se il parametro `hTheme` è `NULL`o se il metodo [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) non è supportato o ancora se la composizione [Gestione finestre desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540) (DWM) è disabilitata.  
  
 
## <a name="see-also"></a>Vedere anche  
 [AFX_GLOBAL_DATA (struttura)](../../mfc/reference/afx-global-data-structure.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [Parti e degli Stati](http://msdn.microsoft.com/library/windows/desktop/bb773210)   
 [CDC](../../mfc/reference/cdc-class.md#cdc__drawtext)   
 [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317)   
 [Gestione finestre desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Abilitare e controllare la composizione DWM](http://msdn.microsoft.com/library/windows/desktop/aa969538)

## <a name="a-nameafxglobaldataenableaccessibilitysupporta-afxglobaldataenableaccessibilitysupport"></a><a name="afx_global_data__enableaccessibilitysupport"></a> AFX_GLOBAL_DATA::EnableAccessibilitySupport
Abilita o disabilita il supporto di Microsoft Active Accessibility.  
  
  
```  
void EnableAccessibilitySupport(BOOL bEnable=TRUE);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE` per abilitare il supporto per l'accessibilità; `FALSE` per disabilitare il supporto per l'accessibilità. Il valore predefinito è `TRUE`.  
  
## <a name="remarks"></a>Note  
 L'accessibilità attiva è una tecnologia basata su COM che migliora il modo in cui i programmi e il sistema operativo Windows lavorano insieme ai prodotti di Assistive Technology. Fornisce metodi affidabili per l'esposizione di informazioni sugli elementi dell'interfaccia utente. Tuttavia, è ora disponibile un nuovo modello di accessibilità denominato Automazione dell'interfaccia utente Microsoft. Per un confronto delle due tecnologie, vedere [automazione interfaccia Utente e Microsoft Active Accessibility](../Topic/UI%20Automation%20and%20Microsoft%20Active%20Accessibility.md).  
  
 Utilizzare il [AFX_GLOBAL_DATA::IsAccessibilitySupport](#afx_global_data__IsAccessibilitySupport.md) metodo per determinare se è abilitato il supporto di Microsoft Active Accessibility.  
  
 
## <a name="see-also"></a>Vedere anche  
 [Automazione interfaccia Utente e Microsoft Active Accessibility](../Topic/UI%20Automation%20and%20Microsoft%20Active%20Accessibility.md)   
 [AFX_GLOBAL_DATA::IsAccessibilitySupport](#afx_global_data__IsAccessibilitySupport.md)

## <a name="a-nameafxglobaldataexcludetaga-afxglobaldataexcludetag"></a><a name="afx_global_data__excludetag"></a> AFX_GLOBAL_DATA::ExcludeTag
Rimuove la coppia di tag XML specificata da un determinato buffer.  
  
  
```  
BOOL ExcludeTag(
    CString& strBuffer,  
    LPCTSTR lpszTag,  
    CString& strTag,  
    BOOL bIsCharsList = FALSE);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `strBuffer`  
 Un buffer di testo.  
  
 [in] `lpszTag`  
 Il nome di una coppia di tag XML.  
  
 [out] `strTag`  
 Quando termina, questo metodo il `strTag` parametro contiene il testo presente tra i tag XML tra i tag sono denominati per il `lpszTag` parametro. Gli spazi vuoti iniziali o finali vengono tagliati dal risultato.  
  
 [in] `bIsCharsList`  
 `TRUE` Per convertire i simboli per i caratteri di escape di `strTag` parametro in caratteri di escape effettivo; `FALSE` di non eseguire la conversione. Il valore predefinito è `FALSE`. Per altre informazioni, vedere la sezione Note.  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
## <a name="remarks"></a>Note  
 Una coppia di tag XML costituito da nome tag che indicano l'inizio e fine di una sequenza di testo nel buffer specificato. Il `strBuffer` parametro specifica il buffer e `lpszTag` parametro specifica il nome del tag XML.  
  
 Utilizzare i simboli nella tabella seguente per codificare un set di caratteri di escape nel buffer specificato. Specificare `TRUE` per il `bIsCharsList` parametro da convertire i simboli di `strTag` parametro in caratteri di escape effettivo. Nella tabella seguente viene utilizzato il [t ()](../../c-runtime-library/data-type-mappings.md) (macro) per specificare il simbolo e stringhe di caratteri di escape.  
  
|Simbolo|Carattere di escape|  
|------------|----------------------|  
|_T("\\\t")|_T("\t")|  
|_T("\\\n")|_T("\n")|  
|_T("\\\r")|_T("\r")|  
|_T("\\\b")|_T("\b")|  
|_T("LT")|_T("\<")|  
|_T("GT")|_T(">")|  
|_T("AMP")|_T("&")|  
  
## <a name="a-nameafxglobaldatagetcolora-afxglobaldatagetcolor"></a><a name="afx_global_data__getcolor"></a> AFX_GLOBAL_DATA::getColor
Recupera il colore corrente dell'elemento dell'interfaccia utente specificato.  
  
  
```  
COLORREF GetColor(int nColor);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `nColor`  
 Valore che specifica un elemento dell'interfaccia utente il cui colore viene recuperato. Per un elenco di valori validi, vedere il `nIndex` del parametro di [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) metodo.  
  
## <a name="return-value"></a>Valore restituito  
 Valore di colore RGB dell'elemento dell'interfaccia utente specificato. Per altre informazioni, vedere la sezione Note.  
  
## <a name="remarks"></a>Note  
 Se il parametro `nColor` non è incluso nell'intervallo, il valore restituito è zero. Poiché anche zero è un valore RGB valido, non è possibile utilizzare questo metodo per determinare se un colore di sistema è supportato dal sistema operativo corrente. Utilizzare invece il [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927) metodo, che restituisce `NULL` Se il colore non è supportato.  
  
## <a name="see-also"></a>Vedere anche  

 [Funzione GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927)

## <a name="a-nameafxglobaldatagetdirect2dfactorya-afxglobaldatagetdirect2dfactory"></a><a name="afx_global_data__getdirect2dfactory"></a> AFX_GLOBAL_DATA::GetDirect2dFactory
 Restituisce un puntatore all'interfaccia ID2D1Factory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.  
  
  
```  
ID2D1Factory* GetDirect2dFactory();
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia ID2D1Factory se ha esito positivo, la creazione di una factory o NULL se la creazione non riesce o il sistema operativo corrente non dispone del supporto D2D.  
  
AFX_GLOBAL_DATA::GetHandCursor recupera il cursore predefinito simile a una mano e il cui identificatore è `IDC_HAND`.  
  
  
```  
HCURSOR GetHandCursor();
```  
  
## <a name="return-value"></a>Valore restituito  
 L'handle del cursore mano.  

## <a name="a-nameafxglobaldatagetnonclientmetricsa-afxglobaldatagetnonclientmetrics"></a><a name="afx_global_data__getnonclientmetrics"></a> AFX_GLOBAL_DATA::GetNonClientMetrics
Recupera la metrica associata all'area non client delle finestre non ridotte a icona.  
  
  
```  
BOOL GetNonClientMetrics(NONCLIENTMETRICS& info);
```  
  
#### <a name="parameters"></a>Parametri  
 [in, out] `info`  
 Oggetto [NONCLIENTMETRICS](http://msdn.microsoft.com/library/windows/desktop/ff729175) struttura che contiene le metriche scalabile associate all'area non client di una finestra non ridotta a icona.  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se questo metodo ha esito positivo; in caso contrario, `FALSE`.  
 
  
## <a name="see-also"></a>Vedere anche   
 [Struttura NONCLIENTMETRICS](http://msdn.microsoft.com/library/windows/desktop/ff729175)

## <a name="a-nameafxglobaldatagettextheighta-afxglobaldatagettextheight"></a><a name="afx_global_data__gettextheight"></a> AFX_GLOBAL_DATA::GetTextHeight
 Recupera l'altezza dei caratteri di testo nel tipo di carattere corrente.  
  
  
```  
int GetTextHeight(BOOL bHorz = TRUE);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `bHorz`  
 `TRUE` per recuperare l'altezza dei caratteri quando il testo scorre orizzontalmente. `FALSE` per recuperare l'altezza dei caratteri quando il testo scorre in senso verticale. Il valore predefinito è `TRUE`.  
  
## <a name="return-value"></a>Valore restituito  
 Altezza del tipo di carattere corrente, che viene misurato dal relativo elemento ascendente per il tratto discendente.  
  
## <a name="a-nameafxglobaldatagetwicfactorya-afxglobaldatagetwicfactory"></a><a name="afx_global_data__getwicfactory"></a> AFX_GLOBAL_DATA::GetWICFactory
Restituisce un puntatore all'interfaccia IWICImagingFactory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.  
  
  
```  
IWICImagingFactory* GetWICFactory();
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IWICImagingFactory se la creazione di una factory riesce oppure NULL se si verifica un errore di creazione o il sistema operativo corrente non dispone del supporto WIC.  
  
## <a name="a-nameafxglobaldatagetwritefactorya-afxglobaldatagetwritefactory"></a><a name="afx_global_data__getwritefactory"></a> AFX_GLOBAL_DATA::GetWriteFactory
Restituisce un puntatore all'interfaccia IDWriteFactory archiviata nei dati globali. Se l'interfaccia non è inizializzata, viene creata con i parametri predefiniti.  
  
  
```  
IDWriteFactory* GetWriteFactory();
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IDWriteFactory se ha esito positivo, la creazione di una factory o NULL se la creazione non riesce o il sistema operativo corrente non dispone del supporto DirectWrite.  
 
## <a name="a-nameafxglobaldatainitd2da-afxglobaldatainitd2d"></a><a name="afx_global_data__initd2d"></a> AFX_GLOBAL_DATA::InitD2D
Inizializza la factory D2D, DirectWrite e WIC. Chiamare questo metodo prima dell'inizializzazione della finestra principale.  
  
  
```  
BOOL InitD2D(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,  
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```  
  
#### <a name="parameters"></a>Parametri  
 `d2dFactoryType`  
 Il modello di threading della factory del D2D e le risorse viene creato.  
  
 `writeFactoryType`  
 Un valore che specifica se l'oggetto factory di scrittura verrà condiviso o isolato  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se la factory sono state inizializzate, FALSE: in caso contrario  
  
## <a name="a-nameafxglobaldatais32biticonsa-afxglobaldatais32biticons"></a><a name="afx_global_data__is32biticons"></a> AFX_GLOBAL_DATA::Is32BitIcons
Indica se sono supportate le icone a 32 bit predefinite.  
  
  
```  
BOOL Is32BitIcons() const;

 
```  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se sono supportate le icone a 32 bit predefinite. in caso contrario, `FALSE`.  
  
## <a name="remarks"></a>Note  
 Questo metodo restituisce `TRUE` se framework supporta le icone predefinite a 32 bit e se il sistema operativo supporta 16 bit per pixel o superiore e se le immagini non vengono visualizzate in contrasto elevato.  
  
## <a name="a-nameafxglobaldataisaccessibilitysupporta-afxglobaldataisaccessibilitysupport"></a><a name="afx_global_data__isaccessibilitysupport"></a> AFX_GLOBAL_DATA::IsAccessibilitySupport
Indica se il supporto di Microsoft Active Accessibility è abilitato.  
  
  
```  
BOOL IsAccessibilitySupport() const;

 
```  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se è abilitato il supporto dell'accessibilità. in caso contrario, `FALSE`.  
  
## <a name="remarks"></a>Note  
 Microsoft Active Accessibility è la soluzione precedente per rendere accessibili le applicazioni. Automazione interfaccia Utente Microsoft è il nuovo modello di accessibilità per Microsoft Windows e viene usato per soddisfare le esigenze di prodotti di assistive technology e strumenti di test automatizzati. Per ulteriori informazioni, vedere [automazione interfaccia Utente e Microsoft Active Accessibility](../Topic/UI%20Automation%20and%20Microsoft%20Active%20Accessibility.md).  
  
 Utilizzare il [AFX_GLOBAL_DATA::EnableAccessibilitySupport](#afx_global_data__EnableAccessibilitySupport.md) metodo per abilitare o disabilitare il supporto per Active Accessibility.  
  

## <a name="see-also"></a>Vedere anche  
 [Automazione interfaccia Utente e Microsoft Active Accessibility](../Topic/UI%20Automation%20and%20Microsoft%20Active%20Accessibility.md)

## <a name="a-nameafxglobaldataisd2dinitializeda-afxglobaldataisd2dinitialized"></a><a name="afx_global_data__isd2dinitialized"></a> AFX_GLOBAL_DATA::IsD2DInitialized
 Determina se è stato inizializzato il D2D  
  
  
```  
BOOL IsD2DInitialized() const;

 
```  
  
## <a name="return-value"></a>Valore restituito  
 TRUE se è stato inizializzato D2D; in caso contrario FALSE.  
  
## <a name="a-nameafxglobaldataisdwmcompositionenableda-afxglobaldataisdwmcompositionenabled"></a><a name="afx_global_data__isdwmcompositionenabled"></a> AFX_GLOBAL_DATA::IsDwmCompositionEnabled
Offre un modo semplice per chiamare il metodo [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) di Windows.  
  
  
```  
BOOL IsDwmCompositionEnabled();
```  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se [Gestione finestre Desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540) composizione (DWM) è abilitato; in caso contrario, `FALSE`.  
  
## <a name="see-also"></a>Vedere anche    
 [Gestione finestre desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Abilitare e controllare la composizione DWM](http://msdn.microsoft.com/library/windows/desktop/aa969538)

## <a name="a-nameafxglobaldataishighcontrastmodea-afxglobaldataishighcontrastmode"></a><a name="afx_global_data__ishighcontrastmode"></a> AFX_GLOBAL_DATA::IsHighContrastMode
 Indica se le immagini sono attualmente visualizzate con contrasto elevato.    
```  
BOOL IsHighContrastMode() const;

 
```  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se le immagini vengono visualizzate in modalità contrasto elevato bianchi o neri. in caso contrario, `FALSE`.  
  
## <a name="remarks"></a>Note  
 In modalità a contrasto elevato nero, lati rivolti verso la luce sono bianchi e lo sfondo è nero. In modalità a contrasto elevato bianco, lati rivolti verso la luce sono neri e lo sfondo è bianco.  
  
## <a name="a-nameafxglobaldataiswindowslayersupportavailablea-afxglobaldataiswindowslayersupportavailable"></a><a name="afx_global_data__iswindowslayersupportavailable"></a> AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable
Indica se il sistema operativo supporta le finestre sovrapposte.  
  
  
```  
BOOL IsWindowsLayerSupportAvailable() const;

 
```  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se sono supportate le finestre sovrapposte. in caso contrario, `FALSE`.  
  
## <a name="remarks"></a>Note  
 Se sono supportate le finestre sovrapposte, *ancoraggio intelligente* marcatori utilizzano finestre sovrapposte.  
  
## <a name="a-nameafxglobaldatambusebuiltin32biticonsa-afxglobaldatambusebuiltin32biticons"></a><a name="afx_global_data__m_busebuiltin32biticons"></a> AFX_GLOBAL_DATA::m_bUseBuiltIn32BitIcons
Indica se il framework usa icone predefinite con colori a 32 bit o icone con una risoluzione più bassa.  
  
  
```  
BOOL  m_bUseBuiltIn32BitIcons;  
```  
  
## <a name="remarks"></a>Note  
 `TRUE` Specifica che il framework di utilizzare le icone di colore a 32 bit; `FALSE` specifica icone risoluzione inferiore. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a `TRUE`.  
  
 Questo membro deve essere impostato all'avvio dell'applicazione.  
  
## <a name="a-nameafxglobaldatambusesystemfonta-afxglobaldatambusesystemfont"></a><a name="afx_global_data__m_busesystemfont"></a> AFX_GLOBAL_DATA::m_bUseSystemFont
Indica se un tipo di carattere di sistema viene usato per i menu, le barre degli strumenti e le barre multifunzione.  
  
  
```  
BOOL m_bUseSystemFont;  
```  
  
## <a name="remarks"></a>Note  
 `TRUE` Specifica per l'utilizzo di un tipo di carattere di sistema; in caso contrario, `FALSE`. Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a `FALSE`.  
  
 Test di questo membro non è l'unico modo per il framework determinare il tipo di carattere da utilizzare. Il `AFX_GLOBAL_DATA::UpdateFonts` metodo controlla inoltre i tipi di carattere predefiniti e alternativi per determinare quali gli stili di visualizzazione sono disponibili da applicare al menu, barre degli strumenti e le barre multifunzione.  
  
## <a name="a-nameafxglobaldatamhcurhanda-afxglobaldatamhcurhand"></a><a name="afx_global_data__m_hcurhand"></a> AFX_GLOBAL_DATA::m_hcurHand
Archivia l'handle per il cursore a forma di mano.  
  
  
```  
HCURSOR m_hcurHand;  
```  
  
## <a name="a-nameafxglobaldatamhcurstretcha-afxglobaldatamhcurstretch"></a><a name="afx_global_data__m_hcurstretch"></a> AFX_GLOBAL_DATA::m_hcurStretch
Archivia l'handle per il cursore di adattamento orizzontale.  
  
  
```  
HCURSOR m_hcurStretch;  
```  

## <a name="a-nameafxglobaldatamhcurstretchverta-afxglobaldatamhcurstretchvert"></a><a name="afx_global_data__m_hcurstretchvert"></a> AFX_GLOBAL_DATA::m_hcurStretchVert
Archivia l'handle per il cursore di adattamento verticale.  
  
  
```  
HCURSOR m_hcurStretchVert;  
```  
  
## <a name="a-nameafxglobaldatamhicontoola-afxglobaldatamhicontool"></a><a name="afx_global_data__m_hicontool"></a> AFX_GLOBAL_DATA::m_hiconTool
Archivia l'handle per l'icona dello strumento.  
  
  
```  
HICON m_hiconTool;  
```  
## <a name="a-nameafxglobaldatamnautohidetoolbarmargina-afxglobaldatamnautohidetoolbarmargin"></a><a name="afx_global_data__m_nautohidetoolbarmargin"></a> AFX_GLOBAL_DATA::m_nAutoHideToolBarMargin
Specifica l'offset dalla barra degli strumenti a scomparsa automatica che si trova più a sinistra al lato sinistro della barra ancorabile a schede.  
  
  
```  
int   m_nAutoHideToolBarMargin;  
```  
  
## <a name="remarks"></a>Note  
 Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.  
  
## <a name="a-nameafxglobaldatamnautohidetoolbarspacinga-afxglobaldatamnautohidetoolbarspacing"></a><a name="afx_global_data__m_nautohidetoolbarspacing"></a> AFX_GLOBAL_DATA::m_nAutoHideToolBarSpacing
Specifica la distanza tra le barre degli strumenti che si nascondono automaticamente.  
  
  
```  
int   m_nAutoHideToolBarSpacing;  
```  
  
## <a name="remarks"></a>Note  
 Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a 14 pixel.  
  
## <a name="a-nameafxglobaldatamndragframethicknessdocka-afxglobaldatamndragframethicknessdock"></a><a name="afx_global_data__m_ndragframethicknessdock"></a> AFX_GLOBAL_DATA::m_nDragFrameThicknessDock

Specifica lo spessore del frame trascinare che viene utilizzato per indicare lo stato ancorato.  
  
  
```  
int   m_nDragFrameThicknessDock;  
```  
  
## <a name="remarks"></a>Note  
 Il `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` costruttore inizializza il membro a 3 pixel.  
  
## <a name="a-nameafxglobaldatamndragframethicknessfloata-afxglobaldatamndragframethicknessfloat"></a><a name="afx_global_data__m_ndragframethicknessfloat"></a> AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat
Specifica lo spessore del frame trascinare che viene utilizzato per indicare lo stato a virgola mobile.  
  
  
```  
int   m_nDragFrameThicknessFloat;  
```  
  
## <a name="remarks"></a>Note  
 Il costruttore `AFX_GLOBAL_DATA::AFX_GLOBAL_DATA` inizializza il membro a 4 pixel.  
  
## <a name="a-nameafxglobaldataonsettingchangea-afxglobaldataonsettingchange"></a><a name="afx_global_data__onsettingchange"></a> AFX_GLOBAL_DATA::OnSettingChange
Rileva lo stato corrente delle funzionalità di animazione del menu del desktop e della barra delle applicazioni che si nasconde automaticamente.  
  
  
```  
void OnSettingChange();
```  
  
## <a name="remarks"></a>Note  
 Questo metodo imposta le variabili di framework per lo stato di determinati attributi del desktop dell'utente. Questo metodo individua lo stato corrente di animazione dei menu, menu tramite dissolvenza, barra funzionalità Nascondi automaticamente.  
  
## <a name="a-nameafxglobaldataregisterwindowclassa-afxglobaldataregisterwindowclass"></a><a name="afx_global_data__registerwindowclass"></a> AFX_GLOBAL_DATA::RegisterWindowClass
Registra la classe di finestre MFC specificata.  
  
  
```  
CString RegisterWindowClass(LPCTSTR lpszClassNamePrefix);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `lpszClassNamePrefix`  
 Il nome di classe della finestra per la registrazione.  
  
## <a name="return-value"></a>Valore restituito  
 Il nome completo della classe registrato se questo metodo ha esito positivo; in caso contrario, un [eccezione risorse](../Topic/AfxThrowResourceException.md).  
  
## <a name="remarks"></a>Note  
 Il valore restituito è un elenco delimitato da virgola di `lpszClassNamePrefix` parametro stringa e le rappresentazioni esadecimali di handle dell'istanza dell'applicazione corrente; il cursore dell'applicazione, ovvero il cursore a freccia il cui identificatore è IDC_ARROW; e il pennello di sfondo. Per ulteriori informazioni sulla registrazione di classi di finestre MFC, vedere [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass).  
  
## <a name="see-also"></a>Vedere anche    
 [AfxRegisterClass](../../mfc/reference/application-information-and-management.md#afxregisterclass)   
 [AfxThrowResourceException](../../mfc/reference/exception-processing.md#afxthrowresourceexception)

## <a name="a-nameafxglobaldataresumea-afxglobaldataresume"></a><a name="afx_global_data__resume"></a> AFX_GLOBAL_DATA::Resume
 Reinizializza i puntatori a funzione interna che accedono ai metodi che supportano i temi di Windows e gli stili di visualizzazione. 
  
  
```  
BOOL Resume();
```  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se questo metodo ha esito positivo; in caso contrario, `FALSE`. In modalità debug, questo metodo indica se questo metodo ha esito negativo.  
  
## <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando il framework riceve la [WM_POWERBROADCAST](http://msdn.microsoft.com/library/windows/desktop/aa373247) messaggio.  
  
## <a name="a-nameafxglobaldatasetlayeredattriba-afxglobaldatasetlayeredattrib"></a><a name="afx_global_data__setlayeredattrib"></a> AFX_GLOBAL_DATA::SetLayeredAttrib
Offre un modo semplice per chiamare il metodo [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) di Windows.  
  
  
```  
BOOL SetLayeredAttrib(
    HWND hwnd,  
    COLORREF crKey,  
    BYTE bAlpha,  
    DWORD dwFlags);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `hwnd`  
 Handle alla finestra sovrapposta.  
  
 [in] `crKey`  
 Chiave di colore di trasparenza che la [Gestione finestre Desktop](http://msdn.microsoft.com/library/windows/desktop/aa969540) viene utilizzato per creare la finestra sovrapposta.  
  
 [in] `bAlpha`  
 Valore alfa utilizzato per descrivere l'opacità della finestra sovrapposta.  
  
 [in] `dwFlags`  
 Combinazione bit per bit (OR) di flag che specificano quali parametri del metodo utilizzare. Specificare LWA_COLORKEY per utilizzare il parametro `crKey` come colore di trasparenza. Specificare LWA_ALPHA per utilizzare il parametro `bAlpha` per determinare l'opacità della finestra sovrapposta.  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se questo metodo ha esito positivo; in caso contrario, `FALSE`.   
 
## <a name="see-also"></a>Vedere anche   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540)

## <a name="a-nameafxglobaldatasetmenufonta-afxglobaldatasetmenufont"></a><a name="afx_global_data__setmenufont"></a> AFX_GLOBAL_DATA::SetMenuFont
Crea il tipo di carattere logico specificato.  
  
  
```  
BOOL SetMenuFont(
    LPLOGFONT lpLogFont,  
    BOOL bHorz);
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `lpLogFont`  
 Puntatore a una struttura che contiene gli attributi del tipo di carattere.  
  
 [in] `bHorz`  
 `TRUE` Per specificare che le sequenze di testo orizzontalmente. `FALSE` per specificare che le sequenze di testo in verticale.  
  
## <a name="return-value"></a>Valore restituito  
 `TRUE` Se questo metodo ha esito positivo; in caso contrario, `FALSE`. In modalità debug, questo metodo indica se questo metodo ha esito negativo.  
  
## <a name="remarks"></a>Note  
 Questo metodo crea un carattere normale orizzontale, un carattere sottolineato e utilizzato un carattere grassetto predefinita voci di menu. Facoltativamente, questo metodo crea un tipo di carattere verticale regolari. Per ulteriori informazioni sui tipi di carattere logiche, vedere [CFont:: CreateFontIndirect](../../mfc/reference/cfont-class.md#cfont__createfontindirect).  
  
## <a name="a-nameafxglobaldataupdatefontsa-afxglobaldataupdatefonts"></a><a name="afx_global_data__updatefonts"></a> AFX_GLOBAL_DATA::UpdateFonts
Reinizializza i tipi di carattere logici usati dal framework.  
  
  
```  
void UpdateFonts();
```  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sui tipi di carattere logiche, vedere `CFont::CreateFontIndirect`.  
  
## <a name="a-nameafxglobaldataupdatesyscolorsa-afxglobaldataupdatesyscolors"></a><a name="afx_global_data__updatesyscolors"></a> AFX_GLOBAL_DATA::UpdateSysColors
Inizializza i colori, l'intensità di colore, i pennelli, le penne e le immagini usati dal framework.  
  
  
```  
void UpdateSysColors();
```  
  
## <a name="a-nameafxglobaldatabiswindows7a-afxglobaldatabiswindows7"></a><a name="afx_global_data__biswindows7"></a> AFX_GLOBAL_DATA::bIsWindows7
Indica se l'applicazione viene eseguita in Windows 7 o versione successiva.  
  
  
```  
BOOL bIsWindows7;  
```  
  
## <a name="a-nameafxglobaldataclractivecaptiongradienta-afxglobaldataclractivecaptiongradient"></a><a name="afx_global_data__clractivecaptiongradient"></a> AFX_GLOBAL_DATA::clrActiveCaptionGradient
Specifica il colore sfumato della didascalia attiva. Viene in genere usato per i riquadri ancorabili.  
  
  
```  
COLORREF clrActiveCaptionGradient;  
```  
  
## <a name="a-nameafxglobaldataclrinactivecaptiongradienta-afxglobaldataclrinactivecaptiongradient"></a><a name="afx_global_data__clrinactivecaptiongradient"></a> AFX_GLOBAL_DATA::clrInactiveCaptionGradient
Specifica il colore sfumato della didascalia inattiva. Viene in genere usato per i riquadri ancorabili.  
  
  
```  
COLORREF clrInactiveCaptionGradient;  
```  
  
## <a name="a-nameafxglobaldatagetitaskbarlista-afxglobaldatagetitaskbarlist"></a><a name="afx_global_data__getitaskbarlist"></a> AFX_GLOBAL_DATA::GetITaskbarList
Crea e archivia i dati globali in un puntatore di `ITaskBarList` interfaccia.  
  
  
```  
ITaskbarList *GetITaskbarList();
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore per il `ITaskbarList` interfaccia se la creazione di una barra oggetto elenco delle attività ha esito positivo; `NULL` Se la creazione non riesce o se il sistema operativo corrente è minore di Windows 7.  
  
## <a name="a-nameafxglobaldatagetitaskbarlist3a-afxglobaldatagetitaskbarlist3"></a><a name="afx_global_data__getitaskbarlist3"></a> AFX_GLOBAL_DATA::GetITaskbarList3
Crea e archivia i dati globali in un puntatore di `ITaskBarList3` interfaccia.  
  
  
```  
ITaskbarList3 *GetITaskbarList3();
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore per il `ITaskbarList3` interfaccia se la creazione di una barra oggetto elenco delle attività ha esito positivo; `NULL` Se la creazione non riesce o se il sistema operativo corrente è minore di Windows 7.  
  
## <a name="a-nameafxglobaldatagetshellautohidebarsa-afxglobaldatagetshellautohidebars"></a><a name="afx_global_data__getshellautohidebars"></a> AFX_GLOBAL_DATA::GetShellAutohideBars
Determina le posizioni delle barre della Shell che si nascondono automaticamente.  
  
  
```  
int GetShellAutohideBars();
```  
  
## <a name="return-value"></a>Valore restituito  
 Valore integer con codificato flag che specificano le posizioni di auto nascondere barre. È possibile combinare i valori seguenti: AFX_AUTOHIDE_BOTTOM, AFX_AUTOHIDE_TOP, AFX_AUTOHIDE_LEFT, AFX_AUTOHIDE_RIGHT.  
  
## <a name="a-nameafxglobaldatareleasetaskbarrefsa-afxglobaldatareleasetaskbarrefs"></a><a name="afx_global_data__releasetaskbarrefs"></a> AFX_GLOBAL_DATA::ReleaseTaskBarRefs
Rilascia le interfacce ottenute tramite il `GetITaskbarList` e `GetITaskbarList3` metodi.  
  
  
```  
void ReleaseTaskBarRefs();
```  
  
## <a name="a-nameafxglobaldatashellcreateitemfromparsingnamea-afxglobaldatashellcreateitemfromparsingname"></a><a name="afx_global_data__shellcreateitemfromparsingname"></a> AFX_GLOBAL_DATA::ShellCreateItemFromParsingName
Crea e inizializza un oggetto Shell da un nome di analisi.  
  
  
```  
HRESULT ShellCreateItemFromParsingName(
    PCWSTR pszPath,  
    IBindCtx *pbc,  
    REFIID riid,  
    void **ppv);
```  
  
#### <a name="parameters"></a>Parametri  
 `pszPath`  
 [in] Un puntatore a un nome visualizzato.  
  
 `pbc`  
 Un puntatore a un contesto di associazione che controlla l'operazione di analisi.  
  
 `riid`  
 Un riferimento a un ID di interfaccia.  
  
 `ppv`  
 [out] Quando questa funzione viene restituito, contiene il puntatore di interfaccia richiesto `riid`. In genere si tratterà `IShellItem` o `IShellItem2`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se ha esito positivo. un valore di errore in caso contrario.  

