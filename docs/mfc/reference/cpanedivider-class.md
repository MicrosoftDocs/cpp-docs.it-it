---
description: 'Altre informazioni su: classe CPaneDivider'
title: Classe CPaneDivider
ms.date: 11/04/2016
f1_keywords:
- CPaneDivider
- AFXPANEDIVIDER/CPaneDivider
- AFXPANEDIVIDER/CPaneDivider::CPaneDivider
- AFXPANEDIVIDER/CPaneDivider::AddPaneContainer
- AFXPANEDIVIDER/CPaneDivider::AddPane
- AFXPANEDIVIDER/CPaneDivider::AddRecentPane
- AFXPANEDIVIDER/CPaneDivider::CalcExpectedDockedRect
- AFXPANEDIVIDER/CPaneDivider::CalcFixedLayout
- AFXPANEDIVIDER/CPaneDivider::CheckVisibility
- AFXPANEDIVIDER/CPaneDivider::CreateEx
- AFXPANEDIVIDER/CPaneDivider::DoesAllowDynInsertBefore
- AFXPANEDIVIDER/CPaneDivider::DoesContainFloatingPane
- AFXPANEDIVIDER/CPaneDivider::FindPaneContainer
- AFXPANEDIVIDER/CPaneDivider::FindTabbedPane
- AFXPANEDIVIDER/CPaneDivider::GetDefaultWidth
- AFXPANEDIVIDER/CPaneDivider::GetFirstPane
- AFXPANEDIVIDER/CPaneDivider::GetPaneDividerStyle
- AFXPANEDIVIDER/CPaneDivider::GetRootContainerRect
- AFXPANEDIVIDER/CPaneDivider::GetWidth
- AFXPANEDIVIDER/CPaneDivider::Init
- AFXPANEDIVIDER/CPaneDivider::InsertPane
- AFXPANEDIVIDER/CPaneDivider::IsAutoHideMode
- AFXPANEDIVIDER/CPaneDivider::IsDefault
- AFXPANEDIVIDER/CPaneDivider::IsHorizontal
- AFXPANEDIVIDER/CPaneDivider::Move
- AFXPANEDIVIDER/CPaneDivider::NotifyAboutRelease
- AFXPANEDIVIDER/CPaneDivider::OnShowPane
- AFXPANEDIVIDER/CPaneDivider::ReleaseEmptyPaneContainers
- AFXPANEDIVIDER/CPaneDivider::RemovePane
- AFXPANEDIVIDER/CPaneDivider::ReplacePane
- AFXPANEDIVIDER/CPaneDivider::RepositionPanes
- AFXPANEDIVIDER/CPaneDivider::Serialize
- AFXPANEDIVIDER/CPaneDivider::SetAutoHideMode
- AFXPANEDIVIDER/CPaneDivider::SetPaneContainerManager
- AFXPANEDIVIDER/CPaneDivider::ShowWindow
- AFXPANEDIVIDER/CPaneDivider::StoreRecentDockSiteInfo
- AFXPANEDIVIDER/CPaneDivider::StoreRecentTabRelatedInfo
- AFXPANEDIVIDER/CPaneDivider::GetPanes
- AFXPANEDIVIDER/CPaneDivider::GetPaneDividers
- AFXPANEDIVIDER/CPaneDivider::m_nDefaultWidth
- AFXPANEDIVIDER/CPaneDivider::m_pSliderRTC
helpviewer_keywords:
- CPaneDivider [MFC], CPaneDivider
- CPaneDivider [MFC], AddPaneContainer
- CPaneDivider [MFC], AddPane
- CPaneDivider [MFC], AddRecentPane
- CPaneDivider [MFC], CalcExpectedDockedRect
- CPaneDivider [MFC], CalcFixedLayout
- CPaneDivider [MFC], CheckVisibility
- CPaneDivider [MFC], CreateEx
- CPaneDivider [MFC], DoesAllowDynInsertBefore
- CPaneDivider [MFC], DoesContainFloatingPane
- CPaneDivider [MFC], FindPaneContainer
- CPaneDivider [MFC], FindTabbedPane
- CPaneDivider [MFC], GetDefaultWidth
- CPaneDivider [MFC], GetFirstPane
- CPaneDivider [MFC], GetPaneDividerStyle
- CPaneDivider [MFC], GetRootContainerRect
- CPaneDivider [MFC], GetWidth
- CPaneDivider [MFC], Init
- CPaneDivider [MFC], InsertPane
- CPaneDivider [MFC], IsAutoHideMode
- CPaneDivider [MFC], IsDefault
- CPaneDivider [MFC], IsHorizontal
- CPaneDivider [MFC], Move
- CPaneDivider [MFC], NotifyAboutRelease
- CPaneDivider [MFC], OnShowPane
- CPaneDivider [MFC], ReleaseEmptyPaneContainers
- CPaneDivider [MFC], RemovePane
- CPaneDivider [MFC], ReplacePane
- CPaneDivider [MFC], RepositionPanes
- CPaneDivider [MFC], Serialize
- CPaneDivider [MFC], SetAutoHideMode
- CPaneDivider [MFC], SetPaneContainerManager
- CPaneDivider [MFC], ShowWindow
- CPaneDivider [MFC], StoreRecentDockSiteInfo
- CPaneDivider [MFC], StoreRecentTabRelatedInfo
- CPaneDivider [MFC], GetPanes
- CPaneDivider [MFC], GetPaneDividers
- CPaneDivider [MFC], m_nDefaultWidth
- CPaneDivider [MFC], m_pSliderRTC
ms.assetid: 8e828a5d-232f-4127-b8e3-7fa45a7a476e
ms.openlocfilehash: f2541483f7881ab0b303750e69af776c2c3bc7a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301516"
---
# <a name="cpanedivider-class"></a>Classe CPaneDivider

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

La `CPaneDivider` classe divide due riquadri, divide due gruppi di riquadri o separa un gruppo di riquadri dall'area client della finestra cornice principale.

## <a name="syntax"></a>Sintassi

```
class CPaneDivider : public CBasePane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CPaneDivider:: CPaneDivider](#cpanedivider)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPaneDivider:: AddPaneContainer](#addpanecontainer)||
|[CPaneDivider:: AddPane](#addpane)||
|[CPaneDivider:: AddRecentPane](#addrecentpane)||
|[CPaneDivider:: CalcExpectedDockedRect](#calcexpecteddockedrect)||
|[CPaneDivider:: CalcFixedLayout](#calcfixedlayout)|Esegue l'override di [CBasePane:: CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).|
|[CPaneDivider:: CheckVisibility](#checkvisibility)||
|[CPaneDivider:: CreateEx](#createex)|Esegue l'override di [CBasePane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).|
|[CPaneDivider::D oesAllowDynInsertBefore](#doesallowdyninsertbefore)|Esegue l'override di [CBasePane::D oesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).|
|[CPaneDivider::D oesContainFloatingPane](#doescontainfloatingpane)||
|[CPaneDivider:: FindPaneContainer](#findpanecontainer)||
|[CPaneDivider:: FindTabbedPane](#findtabbedpane)||
|[CPaneDivider:: GetDefaultWidth](#getdefaultwidth)||
|[CPaneDivider:: GetFirstPane](#getfirstpane)||
|[CPaneDivider:: GetPaneDividerStyle](#getpanedividerstyle)||
|[CPaneDivider:: GetRootContainerRect](#getrootcontainerrect)||
|[CPaneDivider:: GetWidth](#getwidth)||
|[CPaneDivider:: init](#init)||
|[CPaneDivider:: InsertPane](#insertpane)||
|[CPaneDivider:: IsAutoHideMode](#isautohidemode)|Esegue l'override di [CBasePane:: IsAutoHideMode](../../mfc/reference/cbasepane-class.md#isautohidemode).|
|[CPaneDivider:: IsDefault](#isdefault)||
|[CPaneDivider:: Horizontal](#ishorizontal)|Esegue l'override di [CBasePane:: Horizontal](../../mfc/reference/cbasepane-class.md#ishorizontal).|
|[CPaneDivider:: Move](#move)||
|[CPaneDivider:: NotifyAboutRelease](#notifyaboutrelease)||
|[CPaneDivider:: OnShowPane](#onshowpane)||
|[CPaneDivider:: ReleaseEmptyPaneContainers](#releaseemptypanecontainers)||
|[CPaneDivider:: RemovePane](#removepane)||
|[CPaneDivider:: ReplacePane](#replacepane)||
|[CPaneDivider:: RepositionPanes](#repositionpanes)||
|[CPaneDivider:: Serialize](#serialize)|Esegue l'override di `CBasePane::Serialize`.|
|[CPaneDivider:: SetAutoHideMode](#setautohidemode)||
|[CPaneDivider:: SetPaneContainerManager](#setpanecontainermanager)||
|[CPaneDivider:: ShowWindow](#showwindow)||
|[CPaneDivider:: StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||
|[CPaneDivider:: StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPaneDivider:: getpanes](#getpanes)|Restituisce l'elenco dei riquadri che si trovano nella [classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md). Questo metodo deve essere chiamato solo per i divisori predefiniti dei riquadri.|
|[CPaneDivider:: GetPaneDividers](#getpanedividers)|Restituisce l'elenco dei divisori del riquadro che risiedono nella [classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md). Questo metodo deve essere chiamato solo per i divisori predefiniti dei riquadri.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CPaneDivider:: m_nDefaultWidth](#m_ndefaultwidth)|Specifica la larghezza predefinita, in pixel, dei divisori di tutti i riquadri nell'applicazione.|
|[CPaneDivider:: m_pSliderRTC](#m_psliderrtc)|Include un puntatore alle informazioni sulla classe di runtime relative a un `CPaneDivider` oggetto derivato da.|

## <a name="remarks"></a>Commenti

Il Framework crea `CPaneDivider` automaticamente oggetti quando un riquadro è ancorato.

Esistono due tipi di divisori dei riquadri:

- Quando un gruppo di riquadri è ancorato a un lato della finestra cornice principale, viene creato un divisore di riquadro predefinito. Il divisore del riquadro predefinito include un puntatore alla [classe CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md) e reindirizza la maggior parte delle operazioni nel gruppo di riquadri, ad esempio il ridimensionamento di un riquadro o l'ancoraggio di un altro riquadro o contenitore, a gestione contenitori. Ogni riquadro ancorato mantiene un puntatore al relativo divisore predefinito del riquadro.

- Un divisore di riquadro normale divide due riquadri in un contenitore. Per ulteriori informazioni, vedere la [classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come chiamare un oggetto `CPaneDivider` da un oggetto `CWorkspaceBar`. Questo frammento di codice fa parte dell' [esempio demo sulle schede MDI](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MDITabsDemo#5](../../mfc/reference/codesnippet/cpp/cpanedivider-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
&nbsp;[CCmdTarget](../../mfc/reference/ccmdtarget-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;└ &nbsp; [CWnd](../../mfc/reference/cwnd-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CBasePane](../../mfc/reference/cbasepane-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CPaneDivider](../../mfc/reference/cpanedivider-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxPaneDivider. h

## <a name="cpanedividersetautohidemode"></a><a name="setautohidemode"></a> CPaneDivider:: SetAutoHideMode

```cpp
void SetAutoHideMode(BOOL bMode);
```

### <a name="parameters"></a>Parametri

in *bMode*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividersetpanecontainermanager"></a><a name="setpanecontainermanager"></a> CPaneDivider:: SetPaneContainerManager

```cpp
void SetPaneContainerManager(CPaneContainerManager* p);
```

### <a name="parameters"></a>Parametri

in *p*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedivideraddpane"></a><a name="addpane"></a> CPaneDivider:: AddPane

```
virtual void AddPane(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedivideraddpanecontainer"></a><a name="addpanecontainer"></a> CPaneDivider:: AddPaneContainer

```
virtual BOOL AddPaneContainer(
    CPaneContainerManager& barContainerManager,
    BOOL bOuterEdge);

virtual BOOL AddPaneContainer(
    CDockablePane* pTargetBar,
    CPaneContainerManager& barContainerManager,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

in *barContainerManager*<br/>
in *bOuterEdge*<br/>
in *pTargetBar*<br/>
in *dwAlignment*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedivideraddrecentpane"></a><a name="addrecentpane"></a> CPaneDivider:: AddRecentPane

```
virtual CDockablePane* AddRecentPane(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividercalcexpecteddockedrect"></a><a name="calcexpecteddockedrect"></a> CPaneDivider:: CalcExpectedDockedRect

```
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### <a name="parameters"></a>Parametri

in *pWndToDock*<br/>
in *ptMouse*<br/>
in *rectResult*<br/>
in *bDrawTab*<br/>
in *ppTargetBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividercalcfixedlayout"></a><a name="calcfixedlayout"></a> CPaneDivider:: CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

in *bStretch*<br/>
in *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividercheckvisibility"></a><a name="checkvisibility"></a> CPaneDivider:: CheckVisibility

```
virtual BOOL CheckVisibility();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividercpanedivider"></a><a name="cpanedivider"></a> CPaneDivider:: CPaneDivider

```
CPaneDivider();

CPaneDivider(
    BOOL bDefaultSlider,
    CWnd* pParent = NULL);
```

### <a name="parameters"></a>Parametri

in *bDefaultSlider*<br/>
in *pParent*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividercreateex"></a><a name="createex"></a> CPaneDivider:: CreateEx

```
virtual BOOL CreateEx(
    DWORD dwStyleEx,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    CCreateContext* pContext);
```

### <a name="parameters"></a>Parametri

in *dwStyleEx*<br/>
in *dwStyle*<br/>
[in] *rect*<br/>
in *pParentWnd*<br/>
in *NID*<br/>
in *pContext*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerdoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a> CPaneDivider::D oesAllowDynInsertBefore

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerdoescontainfloatingpane"></a><a name="doescontainfloatingpane"></a> CPaneDivider::D oesContainFloatingPane

```
virtual BOOL DoesContainFloatingPane();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerfindpanecontainer"></a><a name="findpanecontainer"></a> CPaneDivider:: FindPaneContainer

```
CPaneContainer* FindPaneContainer(
    CDockablePane* pBar,
    BOOL& bLeftBar);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>
in *bLeftBar*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerfindtabbedpane"></a><a name="findtabbedpane"></a> CPaneDivider:: FindTabbedPane

```
CDockablePane* FindTabbedPane(UINT nID);
```

### <a name="parameters"></a>Parametri

in *NID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividergetdefaultwidth"></a><a name="getdefaultwidth"></a> CPaneDivider:: GetDefaultWidth

```
static int __stdcall GetDefaultWidth();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividergetfirstpane"></a><a name="getfirstpane"></a> CPaneDivider:: GetFirstPane

```
const CBasePane* GetFirstPane() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividergetpanedividers"></a><a name="getpanedividers"></a> CPaneDivider:: GetPaneDividers

Restituisce l'elenco dei divisori del riquadro che risiedono nella [classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md). Questo metodo deve essere chiamato solo per i divisori predefiniti dei riquadri.

```cpp
void GetPaneDividers(CObList& lstSliders);
```

### <a name="parameters"></a>Parametri

*lstSliders*<br/>
out Contiene l'elenco dei divisori del riquadro che risiedono nel contenitore dei riquadri.

### <a name="remarks"></a>Commenti

Questo metodo deve essere chiamato solo per i divisori predefiniti dei riquadri. Un divisore di riquadro predefinito è un divisore che ridimensiona l'intero contenitore del riquadro.

## <a name="cpanedividergetpanedividerstyle"></a><a name="getpanedividerstyle"></a> CPaneDivider:: GetPaneDividerStyle

```
DWORD GetPaneDividerStyle() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividergetpanes"></a><a name="getpanes"></a> CPaneDivider:: getpanes

Restituisce l'elenco dei riquadri che si trovano nella [classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md). Questo metodo deve essere chiamato solo per recuperare i divisori predefiniti del riquadro.

```cpp
void GetPanes(CObList& lstBars);
```

### <a name="parameters"></a>Parametri

*lstBars*<br/>
out Contiene l'elenco dei riquadri che risiedono nel contenitore dei riquadri.

### <a name="remarks"></a>Commenti

Questo metodo deve essere chiamato solo per i divisori predefiniti dei riquadri. Un divisore di riquadro predefinito è un divisore che ridimensiona l'intero contenitore del riquadro.

## <a name="cpanedividergetrootcontainerrect"></a><a name="getrootcontainerrect"></a> CPaneDivider:: GetRootContainerRect

```
CRect GetRootContainerRect();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividergetwidth"></a><a name="getwidth"></a> CPaneDivider:: GetWidth

```
int GetWidth() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerinit"></a><a name="init"></a> CPaneDivider:: init

```cpp
void Init(
    BOOL bDefaultSlider = FALSE,
    CWnd* pParent = NULL);
```

### <a name="parameters"></a>Parametri

in *bDefaultSlider*<br/>
in *pParent*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerinsertpane"></a><a name="insertpane"></a> CPaneDivider:: InsertPane

```
virtual BOOL InsertPane(
    CDockablePane* pBarToInsert,
    CDockablePane* pTargetBar,
    DWORD dwAlignment,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

in *pBarToInsert*<br/>
in *pTargetBar*<br/>
in *dwAlignment*<br/>
in *lpRect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerisautohidemode"></a><a name="isautohidemode"></a> CPaneDivider:: IsAutoHideMode

```
BOOL IsAutoHideMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerisdefault"></a><a name="isdefault"></a> CPaneDivider:: IsDefault

```
BOOL IsDefault() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerishorizontal"></a><a name="ishorizontal"></a> CPaneDivider:: Horizontal

```
BOOL IsHorizontal() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerm_ndefaultwidth"></a><a name="m_ndefaultwidth"></a> CPaneDivider:: m_nDefaultWidth

Specifica la larghezza predefinita, in pixel, di tutti i divisori dei riquadri nell'applicazione.

```
AFX_IMPORT_DATA static int m_nDefaultWidth;
```

## <a name="cpanedividermove"></a><a name="move"></a> CPaneDivider:: Move

```
virtual void Move(
    CPoint& ptOffset,
    BOOL bAdjustLayout = TRUE);
```

### <a name="parameters"></a>Parametri

in *ptOffset*<br/>
in *bAdjustLayout*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerm_psliderrtc"></a><a name="m_psliderrtc"></a> CPaneDivider:: m_pSliderRTC

Include un puntatore alle informazioni sulla classe di runtime relative a un `CPaneDivider` oggetto derivato da.

```
AFX_IMPORT_DATA static CRuntimeClass* m_pSliderRTC;
```

### <a name="remarks"></a>Commenti

Impostare questa variabile membro se si crea un divisore di riquadro personalizzato. Ciò consente al Framework di creare il divisore del riquadro quando viene disegnato il riquadro.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare la `m_pSliderRTC` variabile membro:

```
class CMySplitter : public CPaneDivider
{
...
};

CPaneDivider::m_pSliderRTC = RUNTIME_CLASS(CMySpliter);
```

## <a name="cpanedividernotifyaboutrelease"></a><a name="notifyaboutrelease"></a> CPaneDivider:: NotifyAboutRelease

```
virtual void NotifyAboutRelease();
```

### <a name="remarks"></a>Commenti

## <a name="cpanedivideronshowpane"></a><a name="onshowpane"></a> CPaneDivider:: OnShowPane

```
virtual void OnShowPane(
    CDockablePane* pBar,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>
in *bShow*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerreleaseemptypanecontainers"></a><a name="releaseemptypanecontainers"></a> CPaneDivider:: ReleaseEmptyPaneContainers

```cpp
void ReleaseEmptyPaneContainers();
```

### <a name="remarks"></a>Commenti

## <a name="cpanedividerremovepane"></a><a name="removepane"></a> CPaneDivider:: RemovePane

```
virtual void RemovePane(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerreplacepane"></a><a name="replacepane"></a> CPaneDivider:: ReplacePane

```
virtual BOOL ReplacePane(
    CDockablePane* pBarToReplace,
    CDockablePane* pBarToReplaceWith);
```

### <a name="parameters"></a>Parametri

in *pBarToReplace*<br/>
in *pBarToReplaceWith*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cpanedividerrepositionpanes"></a><a name="repositionpanes"></a> CPaneDivider:: RepositionPanes

```
virtual void RepositionPanes(
    CRect& rectNew,
    HDWP& hdwp);
```

### <a name="parameters"></a>Parametri

in *RectNew*<br/>
in *hdwp*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerserialize"></a><a name="serialize"></a> CPaneDivider:: Serialize

```cpp
void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

[in] *ar*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividershowwindow"></a><a name="showwindow"></a> CPaneDivider:: ShowWindow

```cpp
void ShowWindow(int nCmdShow);
```

### <a name="parameters"></a>Parametri

in *nCmdShow*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerstorerecentdocksiteinfo"></a><a name="storerecentdocksiteinfo"></a> CPaneDivider:: StoreRecentDockSiteInfo

```cpp
void StoreRecentDockSiteInfo(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="cpanedividerstorerecenttabrelatedinfo"></a><a name="storerecenttabrelatedinfo"></a> CPaneDivider:: StoreRecentTabRelatedInfo

```cpp
void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,
    CDockablePane* pTabbedBar);
```

### <a name="parameters"></a>Parametri

in *pDockingBar*<br/>
in *pTabbedBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md)<br/>
[Classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md)<br/>
[Classe CDockingManager](../../mfc/reference/cdockingmanager-class.md)<br/>
[Classe CBasePane](../../mfc/reference/cbasepane-class.md)
