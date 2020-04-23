---
title: Classe CPaneFrameWnd
ms.date: 11/04/2016
f1_keywords:
- CPaneFrameWnd
- AFXPANEFRAMEWND/CPaneFrameWnd
- AFXPANEFRAMEWND/CPaneFrameWnd::AddPane
- AFXPANEFRAMEWND/CPaneFrameWnd::AddRemovePaneFromGlobalList
- AFXPANEFRAMEWND/CPaneFrameWnd::AdjustLayout
- AFXPANEFRAMEWND/CPaneFrameWnd::AdjustPaneFrames
- AFXPANEFRAMEWND/CPaneFrameWnd::CalcBorderSize
- AFXPANEFRAMEWND/CPaneFrameWnd::CalcExpectedDockedRect
- AFXPANEFRAMEWND/CPaneFrameWnd::CanBeAttached
- AFXPANEFRAMEWND/CPaneFrameWnd::CanBeDockedToPane
- AFXPANEFRAMEWND/CPaneFrameWnd::CheckGripperVisibility
- AFXPANEFRAMEWND/CPaneFrameWnd::ConvertToTabbedDocument
- AFXPANEFRAMEWND/CPaneFrameWnd::Create
- AFXPANEFRAMEWND/CPaneFrameWnd::CreateEx
- AFXPANEFRAMEWND/CPaneFrameWnd::DockPane
- AFXPANEFRAMEWND/CPaneFrameWnd::FindFloatingPaneByID
- AFXPANEFRAMEWND/CPaneFrameWnd::FrameFromPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionHeight
- AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionRect
- AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionText
- AFXPANEFRAMEWND/CPaneFrameWnd::GetDockingManager
- AFXPANEFRAMEWND/CPaneFrameWnd::GetDockingMode
- AFXPANEFRAMEWND/CPaneFrameWnd::GetFirstVisiblePane
- AFXPANEFRAMEWND/CPaneFrameWnd::GetHotPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::GetPane
- AFXPANEFRAMEWND/CPaneFrameWnd::GetPaneCount
- AFXPANEFRAMEWND/CPaneFrameWnd::GetParent
- AFXPANEFRAMEWND/CPaneFrameWnd::GetPinState
- AFXPANEFRAMEWND/CPaneFrameWnd::GetRecentFloatingRect
- AFXPANEFRAMEWND/CPaneFrameWnd::GetVisiblePaneCount
- AFXPANEFRAMEWND/CPaneFrameWnd::HitTest
- AFXPANEFRAMEWND/CPaneFrameWnd::IsCaptured
- AFXPANEFRAMEWND/CPaneFrameWnd::IsDelayShow
- AFXPANEFRAMEWND/CPaneFrameWnd::IsRollDown
- AFXPANEFRAMEWND/CPaneFrameWnd::IsRollUp
- AFXPANEFRAMEWND/CPaneFrameWnd::KillDockingTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::LoadState
- AFXPANEFRAMEWND/CPaneFrameWnd::OnBeforeDock
- AFXPANEFRAMEWND/CPaneFrameWnd::OnDockToRecentPos
- AFXPANEFRAMEWND/CPaneFrameWnd::OnKillRollUpTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::OnMovePane
- AFXPANEFRAMEWND/CPaneFrameWnd::OnPaneRecalcLayout
- AFXPANEFRAMEWND/CPaneFrameWnd::OnSetRollUpTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::OnShowPane
- AFXPANEFRAMEWND/CPaneFrameWnd::PaneFromPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::Pin
- AFXPANEFRAMEWND/CPaneFrameWnd::RedrawAll
- AFXPANEFRAMEWND/CPaneFrameWnd::RemoveNonValidPanes
- AFXPANEFRAMEWND/CPaneFrameWnd::RemovePane
- AFXPANEFRAMEWND/CPaneFrameWnd::ReplacePane
- AFXPANEFRAMEWND/CPaneFrameWnd::SaveState
- AFXPANEFRAMEWND/CPaneFrameWnd::SetCaptionButtons
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDelayShow
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDockingManager
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDockingTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDockState
- AFXPANEFRAMEWND/CPaneFrameWnd::SetHotPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::SetPreDockState
- AFXPANEFRAMEWND/CPaneFrameWnd::SizeToContent
- AFXPANEFRAMEWND/CPaneFrameWnd::StartTearOff
- AFXPANEFRAMEWND/CPaneFrameWnd::StoreRecentDockSiteInfo
- AFXPANEFRAMEWND/CPaneFrameWnd::StoreRecentTabRelatedInfo
- AFXPANEFRAMEWND/CPaneFrameWnd::OnCheckRollState
- AFXPANEFRAMEWND/CPaneFrameWnd::OnDrawBorder
- AFXPANEFRAMEWND/CPaneFrameWnd::m_bUseSaveBits
helpviewer_keywords:
- CPaneFrameWnd [MFC], AddPane
- CPaneFrameWnd [MFC], AddRemovePaneFromGlobalList
- CPaneFrameWnd [MFC], AdjustLayout
- CPaneFrameWnd [MFC], AdjustPaneFrames
- CPaneFrameWnd [MFC], CalcBorderSize
- CPaneFrameWnd [MFC], CalcExpectedDockedRect
- CPaneFrameWnd [MFC], CanBeAttached
- CPaneFrameWnd [MFC], CanBeDockedToPane
- CPaneFrameWnd [MFC], CheckGripperVisibility
- CPaneFrameWnd [MFC], ConvertToTabbedDocument
- CPaneFrameWnd [MFC], Create
- CPaneFrameWnd [MFC], CreateEx
- CPaneFrameWnd [MFC], DockPane
- CPaneFrameWnd [MFC], FindFloatingPaneByID
- CPaneFrameWnd [MFC], FrameFromPoint
- CPaneFrameWnd [MFC], GetCaptionHeight
- CPaneFrameWnd [MFC], GetCaptionRect
- CPaneFrameWnd [MFC], GetCaptionText
- CPaneFrameWnd [MFC], GetDockingManager
- CPaneFrameWnd [MFC], GetDockingMode
- CPaneFrameWnd [MFC], GetFirstVisiblePane
- CPaneFrameWnd [MFC], GetHotPoint
- CPaneFrameWnd [MFC], GetPane
- CPaneFrameWnd [MFC], GetPaneCount
- CPaneFrameWnd [MFC], GetParent
- CPaneFrameWnd [MFC], GetPinState
- CPaneFrameWnd [MFC], GetRecentFloatingRect
- CPaneFrameWnd [MFC], GetVisiblePaneCount
- CPaneFrameWnd [MFC], HitTest
- CPaneFrameWnd [MFC], IsCaptured
- CPaneFrameWnd [MFC], IsDelayShow
- CPaneFrameWnd [MFC], IsRollDown
- CPaneFrameWnd [MFC], IsRollUp
- CPaneFrameWnd [MFC], KillDockingTimer
- CPaneFrameWnd [MFC], LoadState
- CPaneFrameWnd [MFC], OnBeforeDock
- CPaneFrameWnd [MFC], OnDockToRecentPos
- CPaneFrameWnd [MFC], OnKillRollUpTimer
- CPaneFrameWnd [MFC], OnMovePane
- CPaneFrameWnd [MFC], OnPaneRecalcLayout
- CPaneFrameWnd [MFC], OnSetRollUpTimer
- CPaneFrameWnd [MFC], OnShowPane
- CPaneFrameWnd [MFC], PaneFromPoint
- CPaneFrameWnd [MFC], Pin
- CPaneFrameWnd [MFC], RedrawAll
- CPaneFrameWnd [MFC], RemoveNonValidPanes
- CPaneFrameWnd [MFC], RemovePane
- CPaneFrameWnd [MFC], ReplacePane
- CPaneFrameWnd [MFC], SaveState
- CPaneFrameWnd [MFC], SetCaptionButtons
- CPaneFrameWnd [MFC], SetDelayShow
- CPaneFrameWnd [MFC], SetDockingManager
- CPaneFrameWnd [MFC], SetDockingTimer
- CPaneFrameWnd [MFC], SetDockState
- CPaneFrameWnd [MFC], SetHotPoint
- CPaneFrameWnd [MFC], SetPreDockState
- CPaneFrameWnd [MFC], SizeToContent
- CPaneFrameWnd [MFC], StartTearOff
- CPaneFrameWnd [MFC], StoreRecentDockSiteInfo
- CPaneFrameWnd [MFC], StoreRecentTabRelatedInfo
- CPaneFrameWnd [MFC], OnCheckRollState
- CPaneFrameWnd [MFC], OnDrawBorder
- CPaneFrameWnd [MFC], m_bUseSaveBits
ms.assetid: ea3423a3-2763-482e-b763-817036ded10d
ms.openlocfilehash: 76f7c5c2c21f0e823545db3669ce454c8172317c
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753616"
---
# <a name="cpaneframewnd-class"></a>Classe CPaneFrameWnd

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

Implementa una finestra con mini-cornice contenente un riquadro. Il riquadro riempie l'area client della finestra.

## <a name="syntax"></a>Sintassi

```
class CPaneFrameWnd : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPaneFrameWnd::AddPane](#addpane)|Aggiunge un riquadro.|
|[CPaneFrameWnd::AddRemovePaneFromGlobalList](#addremovepanefromgloballist)|Aggiunge o rimuove un riquadro dall'elenco globale.|
|[CPaneFrameWnd::AdjustLayout](#adjustlayout)|Regola il layout della finestra con mini-cornice.|
|[CPaneFrameWnd::AdjustPaneFrames](#adjustpaneframes)||
|[CPaneFrameWnd::CalcBorderSize](#calcbordersize)|Calcola le dimensioni dei bordi per una finestra con mini-cornice.|
|[CPaneFrameWnd::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcolare il rettangolo previsto di una finestra ancorata.|
|[CPaneFrameWnd::CanBeAttached](#canbeattached)|Determina se il riquadro corrente può essere ancorato a un altro riquadro o a un'altra finestra cornice.|
|[CPaneFrameWnd::CanBeDockedToPane](#canbedockedtopane)|Determina se la finestra con mini-cornice può essere ancorata a un riquadro.|
|[CPaneFrameWnd::CheckGripperVisibility](#checkgrippervisibility)||
|[CPaneFrameWnd::ConvertToTabbedDocument](#converttotabbeddocument)|Converte un riquadro in un documento a schede.|
|[CPaneFrameWnd::Create](#create)|Crea una finestra con mini-cornice e la associa all'oggetto `CPaneFrameWnd`.|
|[CPaneFrameWnd::CreateEx](#createex)|Crea una finestra con mini-cornice e la associa all'oggetto `CPaneFrameWnd`.|
|[CPaneFrameWnd::DockPane](#dockpane)|Ancora il riquadro.|
|[CPaneFrameWnd::FindFloatingPaneByID](#findfloatingpanebyid)|Trova un riquadro con l'ID di controllo specificato nell'elenco globale dei riquadri mobili.|
|[CPaneFrameWnd::FrameFromPoint](#framefrompoint)|Trova la finestra con mini-cornice contenente un punto fornito dall'utente.|
|[CPaneFrameWnd::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza del titolo della finestra con mini-cornice.|
|[CPaneFrameWnd::GetCaptionRect](#getcaptionrect)|Calcola il rettangolo delimitatore di un titolo di finestra con mini-cornice.|
|[CPaneFrameWnd::GetCaptionText](#getcaptiontext)|Restituisce il testo del titolo.|
|[CPaneFrameWnd::GetDockingManager](#getdockingmanager)||
|[CPaneFrameWnd::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio.|
|[CPaneFrameWnd::GetFirstVisiblePane](#getfirstvisiblepane)|Restituisce il primo riquadro visibile contenuto in una finestra con mini-cornice.|
|[CPaneFrameWnd::GetHotPoint](#gethotpoint)||
|[CPaneFrameWnd::GetPane](#getpane)|Restituisce un riquadro contenuto nella finestra con mini-cornice.|
|[CPaneFrameWnd::GetPaneCount](#getpanecount)|Restituisce il numero di riquadri contenuti in una finestra con mini-cornice.|
|[CPaneFrameWnd::GetParent](#getparent)||
|[CPaneFrameWnd::GetPinState](#getpinstate)||
|[CPaneFrameWnd::GetRecentFloatingRect](#getrecentfloatingrect)||
|[CPaneFrameWnd::GetVisiblePaneCount](#getvisiblepanecount)|Restituisce il numero di riquadri visibili contenuti in una finestra con mini-cornice.|
|[CPaneFrameWnd::HitTest](#hittest)|Determina quale parte di una finestra con mini-cornice si trova in un punto specifico.|
|[CPaneFrameWnd::IsCaptured](#iscaptured)||
|[CPaneFrameWnd::IsDelayShow](#isdelayshow)||
|[CPaneFrameWnd::IsRollDown](#isrolldown)|Determina se eseguire il rolldown di una finestra con mini-cornice.|
|[CPaneFrameWnd::IsRollUp](#isrollup)|Determina se eseguire il rollup di una finestra con mini-cornice.|
|[CPaneFrameWnd::KillDockingTimer](#killdockingtimer)|Arresta il timer di ancoraggio.|
|[CPaneFrameWnd::LoadState](#loadstate)|Carica lo stato del riquadro dal Registro di sistema.|
|[CPaneFrameWnd::OnBeforeDock](#onbeforedock)|Determina se l'ancoraggio è possibile.|
|[CPaneFrameWnd::OnDockToRecentPos](#ondocktorecentpos)|Ancora la finestra con mini-cornice alla posizione più recente.|
|[CPaneFrameWnd::OnKillRollUpTimer](#onkillrolluptimer)|Arresta il timer di rollup.|
|[CPaneFrameWnd::OnMovePane](#onmovepane)|Sposta la finestra con mini-cornice in base a un offset specificato.|
|[CPaneFrameWnd::OnPaneRecalcLayout](#onpanerecalclayout)|Regola il layout di un riquadro contenuto.|
|[CPaneFrameWnd::OnSetRollUpTimer](#onsetrolluptimer)|Imposta il timer di rollup.|
|[CPaneFrameWnd::OnShowPane](#onshowpane)|Chiamata eseguita dal framework quando un riquadro nella finestra con mini-cornice è nascosto o visualizzato.|
|[CPaneFrameWnd::PaneFromPoint](#panefrompoint)|Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini-cornice.|
|[CPaneFrameWnd::Pin](#pin)||
|`CPaneFrameWnd::PreTranslateMessage`|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage)|
|[CPaneFrameWnd::RedrawAll](#redrawall)|Ridisegna tutte le finestre con mini-cornice.|
|[CPaneFrameWnd::RemoveNonValidPanes](#removenonvalidpanes)|Chiamata eseguita dal framework per rimuovere i riquadri non validi.|
|[CPaneFrameWnd::RemovePane](#removepane)|Rimuove un riquadro dalla finestra con mini-cornice.|
|[CPaneFrameWnd::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro.|
|[CPaneFrameWnd::SaveState](#savestate)|Salva lo stato del riquadro nel Registro di sistema.|
|`CPaneFrameWnd::Serialize`|Legge o scrive l'oggetto corrente da o in un archivio.|
|[CPaneFrameWnd::SetCaptionButtons](#setcaptionbuttons)|Imposta i pulsanti della barra del titolo.|
|[CPaneFrameWnd::SetDelayShow](#setdelayshow)||
|[CPaneFrameWnd::SetDockingManager](#setdockingmanager)||
|[CPaneFrameWnd::SetDockingTimer](#setdockingtimer)|Imposta il timer di ancoraggio.|
|[CPaneFrameWnd::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio.|
|[CPaneFrameWnd::SetHotPoint](#sethotpoint)||
|[CPaneFrameWnd::SetPreDockState](#setpredockstate)|Chiamata eseguita dal framework per impostare lo stato di pre-ancoraggio.|
|[CPaneFrameWnd::SizeToContent](#sizetocontent)|Regola le dimensioni di una finestra con mini-cornice in modo che siano uguali a quelle di un riquadro contenuto.|
|[CPaneFrameWnd::StartTearOff](#starttearoff)|Separa un menu.|
|[CPaneFrameWnd::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||
|[CPaneFrameWnd::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)||

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CPaneFrameWnd::OnCheckRollState](#oncheckrollstate)|Determina se eseguire il rollup o il rolldown di una finestra con mini-cornice.|
|[CPaneFrameWnd::OnDrawBorder](#ondrawborder)|Disegna i bordi di una finestra con mini-cornice.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CPaneFrameWnd::m_bUseSaveBits](#m_busesavebits)|Specifica se registrare la classe finestra con lo stile di classe CS_SAVEBITS.|

## <a name="remarks"></a>Osservazioni

Il framework crea automaticamente un oggetto `CPaneFrameWnd` quando un riquadro passa dallo stato ancorato allo stato mobile.

È possibile spostare una finestra con mini-cornice trascinando il relativo contenuto visibile (ancoraggio immediato) oppure usando un rettangolo di trascinamento (ancoraggio standard). La modalità di ancoraggio del riquadro contenitore della finestra con mini-cornice determina il comportamento del trascinamento della finestra con mini-cornice. Per ulteriori informazioni, vedere [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).

I pulsanti sulla barra del titolo di una finestra con mini-cornice sono visualizzati in modo conforme allo stile del riquadro contenuto. Se il riquadro può essere chiuso ( [CBasePane::CanBeClosed](../../mfc/reference/cbasepane-class.md#canbeclosed)), viene visualizzato un pulsante Chiudi. Se il riquadro ha lo stile AFX_CBRS_AUTO_ROLLUP, viene visualizzato un segnaposto.

Se si deriva una classe da `CPaneFrameWnd`, è necessario indicare al framework come crearla. Creare la classe eseguendo l'override di [CPane::CreateDefaultMiniframe](../../mfc/reference/cpane-class.md#createdefaultminiframe)oppure impostare il `CPane::m_pMiniFrameRTC` membro in modo che punti alle informazioni sulla classe di runtime per la classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPaneFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxPaneFrameWnd.h

## <a name="cpaneframewndaddpane"></a><a name="addpane"></a>CPaneFrameWnd::AddPane

Aggiunge un riquadro.

```
virtual void AddPane(CBasePane* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Riquadro da aggiungere.

## <a name="cpaneframewndaddremovepanefromgloballist"></a><a name="addremovepanefromgloballist"></a>CPaneFrameWnd::AddRemovePaneFromGlobalList

Aggiunge o rimuove un riquadro dall'elenco globale.

```
static BOOL __stdcall AddRemovePaneFromGlobalList(
    CBasePane* pWnd,
    BOOL bAdd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Riquadro da aggiungere o rimuovere.

*Baggiungi*<br/>
[in] Se diverso da zero, aggiungere il riquadro. Se 0, rimuovere il riquadro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

## <a name="cpaneframewndadjustlayout"></a><a name="adjustlayout"></a>CPaneFrameWnd::AdjustLayout

Regola il layout della finestra con mini-cornice.

```
virtual void AdjustLayout();
```

## <a name="cpaneframewndadjustpaneframes"></a><a name="adjustpaneframes"></a>CPaneFrameWnd::AdjustPaneFrames

```
virtual void AdjustPaneFrames();
```

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndcalcbordersize"></a><a name="calcbordersize"></a>CPaneFrameWnd::CalcBorderSize

Calcola le dimensioni dei bordi per una finestra miniframe.

```
virtual void CalcBorderSize(CRect& rectBorderSize) const;
```

### <a name="parameters"></a>Parametri

*rectBorderSize (dimensioni di confine)*<br/>
[fuori] Contiene le dimensioni, in pixel, del bordo della finestra miniframe.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework per calcolare le dimensioni del bordo di una finestra miniframe. Le dimensioni restituite dipendono dal fatto che una finestra miniframe contenga una barra degli strumenti o un [CDockablePane](../../mfc/reference/cdockablepane-class.md).

## <a name="cpaneframewndcalcexpecteddockedrect"></a><a name="calcexpecteddockedrect"></a>CPaneFrameWnd::CalcExpectedDockedRect

Calcolare il rettangolo previsto di una finestra ancorata.

```
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,
    CPoint ptMouse,
    CRect& rectResult,
    BOOL& bDrawTab,
    CDockablePane** ppTargetBar);
```

### <a name="parameters"></a>Parametri

*pWndToDock (informazioni in base al tso)*<br/>
[in] Puntatore alla finestra da ancorare.

*PtMouse*<br/>
[in] Posizione del mouse.

*rectRisulta*<br/>
[fuori] Rettangolo calcolato.

*bDrawTab*<br/>
[fuori] Se TRUE, disegnare una scheda. Se FALSE, non disegnare una scheda.

*ppTargetBar (bar di applicazione)*<br/>
[fuori] Puntatore al riquadro di destinazione.

### <a name="remarks"></a>Osservazioni

Questo metodo calcola il rettangolo che una finestra occuperebbe se un utente trascinasse la finestra nel punto specificato da *ptMouse* e la ancorasse lì.

## <a name="cpaneframewndcanbeattached"></a><a name="canbeattached"></a>CPaneFrameWnd::CanBeAttached

Determina se il riquadro corrente può essere ancorato a un altro riquadro o a un'altra finestra cornice.

```
virtual BOOL CanBeAttached() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro può essere ancorato a un altro riquadro o finestra cornice. in caso contrario, FALSE.

## <a name="cpaneframewndcanbedockedtopane"></a><a name="canbedockedtopane"></a>CPaneFrameWnd::CanBeDockedToPane

Determina se la finestra con mini-cornice può essere ancorata a un riquadro.

```
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;
```

### <a name="parameters"></a>Parametri

*pDockingBar (Barperina di espansione)*<br/>
[in] Un riquadro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il miniframe può essere ancorato a *pDockingBar*; in caso contrario 0.

## <a name="cpaneframewndcheckgrippervisibility"></a><a name="checkgrippervisibility"></a>CPaneFrameWnd::CheckGripperVisibility

```
virtual void CheckGripperVisibility();
```

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndconverttotabbeddocument"></a><a name="converttotabbeddocument"></a>CPaneFrameWnd::ConvertToTabbedDocument

Converte un riquadro in un documento a schede.

```
virtual void ConvertToTabbedDocument();
```

## <a name="cpaneframewndcreate"></a><a name="create"></a>CPaneFrameWnd::Creare

Crea una finestra miniframe e la associa all'oggetto [CPaneFrameWnd.](../../mfc/reference/cpaneframewnd-class.md)

```
virtual BOOL Create(
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomefinestraNome*<br/>
[in] Specifica il testo da visualizzare nella finestra del miniframe.

*DwStyle (in stile dwStyle)*<br/>
[in] Specifica lo stile della finestra. Per ulteriori informazioni, consultate [Stili finestra.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

*Rect*<br/>
[in] Specifica le dimensioni iniziali e la posizione della finestra del miniframe.

*pParentWnd (informazioni in due)*<br/>
[in, out] Specifica il frame padre della finestra miniframe. Questo valore non deve essere NULL.

*pContext*<br/>
[in, out] Specifica il contesto definito dall'utente.

### <a name="return-value"></a>Valore restituito

TRUESe la finestra è stata creata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Una finestra miniframe viene creata in due passaggi. In primo luogo, `CPaneFrameWnd` il framework crea un oggetto. In secondo `Create` luogo, chiama per creare la finestra `CPaneFrameWnd` miniframe di Windows e collegarlo all'oggetto.

## <a name="cpaneframewndcreateex"></a><a name="createex"></a>CPaneFrameWnd::CreateEx

Crea una finestra miniframe e la associa all'oggetto [CPaneFrameWnd.](../../mfc/reference/cpaneframewnd-class.md)

```
virtual BOOL CreateEx(
    DWORD dwStyleEx,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    CCreateContext* pContext=NULL);
```

### <a name="parameters"></a>Parametri

*dwStyleEx*<br/>
[in] Specifica lo stile della finestra estesa. Per ulteriori informazioni, vedere [Stili di finestra estesiFor more information,](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) see Extended Window Styles

*lpszNomefinestraNome*<br/>
[in] Specifica il testo da visualizzare nella finestra del miniframe.

*DwStyle (in stile dwStyle)*<br/>
[in] Specifica lo stile della finestra. Per ulteriori informazioni, consultate [Stili finestra.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

*Rect*<br/>
[in] Specifica le dimensioni iniziali e la posizione della finestra del miniframe.

*pParentWnd (informazioni in due)*<br/>
[in, out] Specifica il frame padre della finestra miniframe. Questo valore non deve essere NULL.

*pContext*<br/>
[in, out] Specifica il contesto definito dall'utente.

### <a name="return-value"></a>Valore restituito

TRUESe la finestra è stata creata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Una finestra miniframe viene creata in due passaggi. In primo luogo, `CPaneFrameWnd` il framework crea un oggetto. In secondo `Create` luogo, chiama per creare la finestra `CPaneFrameWnd` miniframe di Windows e collegarlo all'oggetto.

## <a name="cpaneframewnddockpane"></a><a name="dockpane"></a>CPaneFrameWnd::DockPane

Ancora il riquadro.

```
virtual CDockablePane* DockPane(BOOL& bWasDocked);
```

### <a name="parameters"></a>Parametri

*bWasDocked (ancorato)*<br/>
[fuori] TRUESe il riquadro è già stato ancorato. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Se l'operazione ha `CDockablePane` avuto esito positivo, il riquadro è stato ancorato a; in caso contrario NULL.

## <a name="cpaneframewndfindfloatingpanebyid"></a><a name="findfloatingpanebyid"></a>CPaneFrameWnd::FindFloatingPaneByID

Trova un riquadro con l'ID di controllo specificato nell'elenco globale dei riquadri mobili.

```
static CBasePane* FindFloatingPaneByID(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] Rappresenta l'ID di controllo del riquadro da trovare.

### <a name="return-value"></a>Valore restituito

Riquadro con l'ID di controllo specificato; in caso contrario, NULL, se nessun riquadro ha l'ID di controllo specificato.

## <a name="cpaneframewndframefrompoint"></a><a name="framefrompoint"></a>CPaneFrameWnd::FrameFromPoint

Trova la finestra cornice mini che contiene il punto specificato.

```
static CPaneFrameWnd* __stdcall FrameFromPoint(
    CPoint pt,
    int nSensitivity,
    CPaneFrameWnd* pFrameToExclude = NULL,
    BOOL bFloatMultiOnly = FALSE);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
[in] Punto, in coordinate dello schermo.

*nSensibilità*<br/>
[in] Aumentare l'area di ricerca della finestra cornice piccola di queste dimensioni. Una finestra cornice fissa i criteri di ricerca se il punto specificato rientra nell'area aumentata.

*pFrameToExclude*<br/>
[in] Specifica una finestra cornice piccola da escludere dalla ricerca.

*bFloatMultiOnly (opzione FloatMultiOnly)*<br/>
[in] Se TRUE, cercare solo le finestre cornice mini con lo stile CBRS_FLOAT_MULTI. Se FALSE, cercare tutte le finestre cornice mini.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra cornice mini che contiene *pt*; in caso contrario NULL.

## <a name="cpaneframewndgetcaptionheight"></a><a name="getcaptionheight"></a>CPaneFrameWnd::GetCaptionHeight

Restituisce l'altezza del titolo della finestra con mini-cornice.

```
virtual int GetCaptionHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, della finestra cornice piccola.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per determinare l'altezza di una finestra cornice mini. Per impostazione predefinita, l'altezza è impostata su SM_CYSMCAPTION. Per ulteriori informazioni, vedere [Funzione GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics).

## <a name="cpaneframewndgetcaptionrect"></a><a name="getcaptionrect"></a>CPaneFrameWnd::GetCaptionRect

Calcola il rettangolo delimitatore di un titolo di finestra con mini-cornice.

```
virtual void GetCaptionRect(CRect& rectCaption) const;
```

### <a name="parameters"></a>Parametri

*didascalia retta*<br/>
[fuori] Contiene le dimensioni e la posizione della didascalia della finestra cornice mini, in coordinate dello schermo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework per calcolare il rettangolo di delimitazione di una didascalia di finestra cornice miniframe.

## <a name="cpaneframewndgetcaptiontext"></a><a name="getcaptiontext"></a>CPaneFrameWnd::GetCaptionText

Restituisce il testo del titolo.

```
virtual CString GetCaptionText();
```

### <a name="return-value"></a>Valore restituito

Testo della didascalia della finestra cornice piccola.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework quando viene visualizzato il testo della didascalia.

## <a name="cpaneframewndgetdockingmanager"></a><a name="getdockingmanager"></a>CPaneFrameWnd::GetDockingManager

```
CDockingManager* GetDockingManager() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetdockingmode"></a><a name="getdockingmode"></a>CPaneFrameWnd::GetDockingMode

Restituisce la modalità di ancoraggio.

```
virtual AFX_DOCK_TYPE GetDockingMode() const;
```

### <a name="return-value"></a>Valore restituito

Modalità di ancoraggio. Uno dei valori seguenti:

- DT_STANDARD

- DT_IMMEDIATE

- DT_SMART

## <a name="cpaneframewndgetfirstvisiblepane"></a><a name="getfirstvisiblepane"></a>CPaneFrameWnd::GetFirstVisiblePane

Restituisce il primo riquadro visibile contenuto in una finestra con mini-cornice.

```
virtual CWnd* GetFirstVisiblePane() const;
```

### <a name="return-value"></a>Valore restituito

Il primo riquadro nella finestra cornice piccola o NULL se la finestra cornice non contiene riquadri.

## <a name="cpaneframewndgethotpoint"></a><a name="gethotpoint"></a>CPaneFrameWnd::GetHotPoint

```
CPoint GetHotPoint() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetpane"></a><a name="getpane"></a>CPaneFrameWnd::GetPane

Restituisce un riquadro contenuto nella finestra con mini-cornice.

```
virtual CWnd* GetPane() const;
```

### <a name="return-value"></a>Valore restituito

Riquadro contenuto nel miniframe oppure NULL se la finestra cornice non contiene riquadri.

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetpanecount"></a><a name="getpanecount"></a>CPaneFrameWnd::GetPaneCountCPaneFrameWnd::GetPaneCount

Restituisce il numero di riquadri contenuti in una finestra con mini-cornice.

```
virtual int GetPaneCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di riquadri nella finestra cornice piccola. Il valore può essere zero.

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetparent"></a><a name="getparent"></a>CPaneFrameWnd::GetParent

```
CWnd* GetParent();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetpinstate"></a><a name="getpinstate"></a>CPaneFrameWnd::GetPinState

```
BOOL GetPinState() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetrecentfloatingrect"></a><a name="getrecentfloatingrect"></a>CPaneFrameWnd::GetRecentFloatingRect

```
CRect GetRecentFloatingRect() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndgetvisiblepanecount"></a><a name="getvisiblepanecount"></a>CPaneFrameWnd::GetVisiblePaneCount

Restituisce il numero di riquadri visibili contenuti in una finestra con mini-cornice.

```
virtual int GetVisiblePaneCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di riquadri visibili.

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndhittest"></a><a name="hittest"></a>CPaneFrameWnd::HitTest

Determina quale parte di una finestra con mini-cornice si trova in un punto specifico.

```
virtual LRESULT HitTest(
    CPoint point,
    BOOL bDetectCaption);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
[in] Punto da testare.

*bDetectdidascalia*<br/>
[in] Se TRUE, controllare il punto rispetto alla didascalia. Se FALSE, ignorare la didascalia.

### <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|HTNOWHERE|Il punto si trova all'esterno della finestra cornice piccola.|
|HTCLIENT (Informazioni in stati inequino|Il punto si trova nell'area client.|
|HTCAPTION (INFORMAZIONI in netto dati)|Il punto è sulla didascalia.|
|HTTOP|Il punto è in cima.|
|HTTOPLEFT|Il punto è in alto a sinistra.|
|HTTOPDESTRA|Il punto è in alto a destra.|
|HTLEFT (SINISTRA)|Il punto è a sinistra.|
|File HTDESTRA|Il punto è a destra.|
|HTBOTTOM (INFORMAZIONI in netto|Il punto è in fondo.|
|HTBOTTOMLEFT (SINISTRA SUPERIORE)|Il punto è in basso a sinistra.|
|HTBOTTOMDESTRA|Il punto è in basso a destra.|

## <a name="cpaneframewndiscaptured"></a><a name="iscaptured"></a>CPaneFrameWnd::IsCaptured

```
BOOL IsCaptured() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndisdelayshow"></a><a name="isdelayshow"></a>CPaneFrameWnd::IsDelayShow

```
BOOL IsDelayShow() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndisrolldown"></a><a name="isrolldown"></a>CPaneFrameWnd::IsRollDown

Determina se eseguire il rolldown di una finestra con mini-cornice.

```
virtual BOOL IsRollDown() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra cornice mini deve essere ripristinata. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework per determinare se una finestra cornice mini deve essere ripristinata. La funzionalità di rollup/rolldown è abilitata per una finestra cornice mini se contiene almeno un riquadro con il flag AFX_CBRS_AUTO_ROLLUP. Questo flag viene impostato quando viene creato un riquadro. Per ulteriori informazioni, vedere [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).

Per impostazione predefinita, il framework controlla se il puntatore del mouse si trova all'interno del rettangolo di delimitazione della finestra cornice mini frame per determinare se la finestra deve essere ripristinata. È possibile eseguire l'override di questo comportamento in una classe derivata.

## <a name="cpaneframewndisrollup"></a><a name="isrollup"></a>CPaneFrameWnd::IsRollUp

Determina se eseguire il rollup di una finestra con mini-cornice.

```
virtual BOOL IsRollUp() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe è necessario eseguire il rollup della finestra cornice rapida. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework per determinare se è necessario eseguire il rollup di una finestra cornice rapida. La funzionalità di rollup/rolldown è abilitata per una finestra cornice mini se contiene almeno un riquadro con il flag AFX_CBRS_AUTO_ROLLUP. Questo flag viene impostato quando viene creato un riquadro. Per ulteriori informazioni, vedere [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex).

Per impostazione predefinita, il framework controlla se il puntatore del mouse si trova all'interno del rettangolo di delimitazione della finestra cornice mini frame per determinare se è necessario eseguire il rollup della finestra. È possibile eseguire l'override di questo comportamento in una classe derivata.

## <a name="cpaneframewndkilldockingtimer"></a><a name="killdockingtimer"></a>CPaneFrameWnd::KillDockingTimer

Arresta il timer di ancoraggio.

```cpp
void KillDockingTimer();
```

## <a name="cpaneframewndloadstate"></a><a name="loadstate"></a>CPaneFrameWnd::LoadState

Carica lo stato del riquadro dal Registro di sistema.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Nome del profilo.

*uiID*<br/>
[in] ID del riquadro.

### <a name="return-value"></a>Valore restituito

TRUESe lo stato del riquadro è stato caricato correttamente. in caso contrario, FALSE.

## <a name="cpaneframewndm_busesavebits"></a><a name="m_busesavebits"></a>CPaneFrameWnd::m_bUseSaveBits

Specifica se registrare la classe finestra con lo stile di classe CS_SAVEBITS.

```
AFX_IMPORT_DATA static BOOL m_bUseSaveBits;
```

### <a name="remarks"></a>Osservazioni

Impostare questo membro statico su TRUE per registrare la classe finestra cornice mini con lo stile CS_SAVEBITS. Ciò può contribuire a ridurre lo sfarfallio quando un utente trascina la finestra cornice.

## <a name="cpaneframewndonbeforedock"></a><a name="onbeforedock"></a>CPaneFrameWnd::OnBeforeDock

Determina se l'ancoraggio è possibile.

```
virtual BOOL OnBeforeDock();
```

### <a name="return-value"></a>Valore restituito

TRUESe è possibile l'ancoraggio. in caso contrario, FALSE.

## <a name="cpaneframewndoncheckrollstate"></a><a name="oncheckrollstate"></a>CPaneFrameWnd::OnCheckRollState

Determina se eseguire il rollup o il rolldown di una finestra con mini-cornice.

```
virtual void OnCheckRollState();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework per determinare se una finestra cornice rapida deve essere rollup o down.

Per impostazione predefinita, il framework chiama [CPaneFrameWnd::IsRollUp](#isrollup) e [CPaneFrameWnd::IsRollDown](#isrolldown) e si estende o ripristina solo la finestra cornice mini. È possibile eseguire l'override di questo metodo in una classe derivata per utilizzare un effetto visivo diverso.

## <a name="cpaneframewndondocktorecentpos"></a><a name="ondocktorecentpos"></a>CPaneFrameWnd::OnDockToRecentPos

Ancora la finestra con mini-cornice alla posizione più recente.

```
virtual void OnDockToRecentPos();
```

## <a name="cpaneframewndondrawborder"></a><a name="ondrawborder"></a>CPaneFrameWnd::OnDrawBorder

Disegna i bordi di una finestra con mini-cornice.

```
virtual void OnDrawBorder(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di periferica utilizzato per disegnare il bordo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework per disegnare i bordi della finestra cornice mini.

## <a name="cpaneframewndonkillrolluptimer"></a><a name="onkillrolluptimer"></a>CPaneFrameWnd::OnKillRollUpTimer

Arresta il timer di rollup.

```
virtual void OnKillRollUpTimer();
```

## <a name="cpaneframewndonmovepane"></a><a name="onmovepane"></a>CPaneFrameWnd::OnMovePane

Sposta la finestra con mini-cornice in base a un offset specificato.

```
virtual void OnMovePane(
    CPane* pBar,
    CPoint ptOffset);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore a un riquadro (ignorato).

*PtOffset*<br/>
[in] Offset in base al quale spostare il riquadro.

## <a name="cpaneframewndonpanerecalclayout"></a><a name="onpanerecalclayout"></a>CPaneFrameWnd::OnPaneRecalcLayout

Regola il layout di un riquadro all'interno di una finestra cornice mini.

```
virtual void OnPaneRecalcLayout();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando è necessario regolare il layout di un riquadro all'interno della finestra cornice mini.

Per impostazione predefinita, il riquadro è posizionato per coprire l'area client completa della finestra cornice miniframe.

## <a name="cpaneframewndonsetrolluptimer"></a><a name="onsetrolluptimer"></a>CPaneFrameWnd::OnSetRollUpTimer

Imposta il timer di rollup.

```
virtual void OnSetRollUpTimer();
```

## <a name="cpaneframewndonshowpane"></a><a name="onshowpane"></a>CPaneFrameWnd::OnShowPane

Chiamata eseguita dal framework quando un riquadro nella finestra con mini-cornice è nascosto o visualizzato.

```
virtual void OnShowPane(
    CDockablePane* pBar,
    BOOL bShow);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Riquadro visualizzato o nascosto.

*bShow*<br/>
[in] TRUESe il riquadro viene visualizzato. FALSE se il riquadro viene nascosto.

### <a name="remarks"></a>Osservazioni

Chiamato dal framework quando un riquadro nella finestra cornice viene visualizzato o nascosto. L'implementazione predefinita non esegue alcuna operazione.

## <a name="cpaneframewndpin"></a><a name="pin"></a>CPaneFrameWnd::Pin

```cpp
void Pin(BOOL bPin = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *bPin*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndpanefrompoint"></a><a name="panefrompoint"></a>CPaneFrameWnd::PaneFromPoint

Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini-cornice.

```
virtual CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    BOOL bCheckVisibility);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
[in] Punto su cui l'utente ha fatto clic, in coordinate dello schermo.

*nSensibilità*<br/>
[in] Questo parametro non viene utilizzato.

*bCheckVisibility (Controllo)*<br/>
[in] TRUE per specificare che devono essere restituiti solo i riquadri visibili. in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Riquadro su cui l'utente ha fatto clic oppure NULL se non esiste alcun riquadro in tale posizione.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per ottenere un riquadro che contiene il punto specificato.

## <a name="cpaneframewndredrawall"></a><a name="redrawall"></a>CPaneFrameWnd::RedrawAll

Ridisegna tutte le finestre con mini-cornice.

```
static void RedrawAll();
```

### <a name="remarks"></a>Osservazioni

Questo metodo aggiorna tutte le finestre cornice mini chiamando [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) per ogni finestra.

## <a name="cpaneframewndremovenonvalidpanes"></a><a name="removenonvalidpanes"></a>CPaneFrameWnd::RemoveNonValidPanes

Chiamata eseguita dal framework per rimuovere i riquadri non validi.

```
virtual void RemoveNonValidPanes();
```

## <a name="cpaneframewndremovepane"></a><a name="removepane"></a>CPaneFrameWnd::RemovePane

Rimuove un riquadro dalla finestra con mini-cornice.

```
virtual void RemovePane(
    CBasePane* pWnd,
    BOOL bDestroy = FALSE,
    BOOL bNoDelayedDestroy = FALSE);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Puntatore al riquadro da rimuovere.

*bDistruggi*<br/>
[in] Specifica cosa accade alla finestra cornice piccola. Se *bDestroy* è TRUE, questo metodo elimina immediatamente la finestra cornice minima. Se è FALSE, questo metodo distrugge la finestra cornice mini dopo un determinato ritardo.

*bNoDelayedDestroy (Distruttore indugito)*<br/>
[in] Se TRUE, la distruzione ritardata viene disabilitata. Se FALSE, la distruzione ritardata è abilitata.

### <a name="remarks"></a>Osservazioni

Il framework può distruggere le finestre cornice mini immediatamente o dopo un certo ritardo. Se si desidera ritardare l'eliminazione delle finestre cornice mini, passare FALSE nel *bNoDelayedDestroy* parametro. La distruzione ritardata si verifica quando il framework elabora il messaggio AFX_WM_CHECKEMPTYMINIFRAME.

## <a name="cpaneframewndreplacepane"></a><a name="replacepane"></a>CPaneFrameWnd::ReplacePane

Sostituisce un riquadro con un altro.

```
virtual void ReplacePane(
    CBasePane* pBarOrg,
    CBasePane* pBarReplaceWith);
```

### <a name="parameters"></a>Parametri

*pBarOrg*<br/>
[in] Puntatore al riquadro originale.

*pBarReplaceWithWith*<br/>
[in] Puntatore al riquadro che sostituisce il riquadro originale.

## <a name="cpaneframewndsavestate"></a><a name="savestate"></a>CPaneFrameWnd::SaveState

Salva lo stato del riquadro nel Registro di sistema.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Nome del profilo.

*uiID*<br/>
[in] ID del riquadro.

### <a name="return-value"></a>Valore restituito

TRUESe lo stato del riquadro è stato salvato correttamente. in caso contrario, FALSE.

## <a name="cpaneframewndsetcaptionbuttons"></a><a name="setcaptionbuttons"></a>CPaneFrameWnd::SetCaptionButtons

Imposta i pulsanti della barra del titolo.

```
virtual void SetCaptionButtons(DWORD dwButtons);
```

### <a name="parameters"></a>Parametri

*dwButtons (Pulsanti)*<br/>
[in] Combinazione OR bit per bit dei valori seguenti:

- AFX_CAPTION_BTN_CLOSE

- AFX_CAPTION_BTN_PIN

- AFX_CAPTION_BTN_MENU

- AFX_CAPTION_BTN_CUSTOMIZE

## <a name="cpaneframewndsetdelayshow"></a><a name="setdelayshow"></a>CPaneFrameWnd::SetDelayShow

```cpp
void SetDelayShow(BOOL bDelayShow);
```

### <a name="parameters"></a>Parametri

[in] *bVisualizzazione di delaye*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndsetdockingmanager"></a><a name="setdockingmanager"></a>CPaneFrameWnd::SetDockingManager

```cpp
void SetDockingManager(CDockingManager* pManager);
```

### <a name="parameters"></a>Parametri

[in] *pManager*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndsetdockingtimer"></a><a name="setdockingtimer"></a>CPaneFrameWnd::SetDockingTimer

Imposta il timer di ancoraggio.

```cpp
void SetDockingTimer(UINT nTimeOut);
```

### <a name="parameters"></a>Parametri

*nTimeOut (informazioni in locale)*<br/>
[in] Valore di timeout in millisecondi.

## <a name="cpaneframewndsetdockstate"></a><a name="setdockstate"></a>CPaneFrameWnd::SetDockState

Imposta lo stato di ancoraggio.

```
virtual void SetDockState(CDockingManager* pDockManager);
```

### <a name="parameters"></a>Parametri

*pDockManager (gestione delle proprietà)*<br/>
[in] Puntatore a un gestore di ancoraggio.

## <a name="cpaneframewndsethotpoint"></a><a name="sethotpoint"></a>CPaneFrameWnd::SetHotPoint

```cpp
void SetHotPoint(CPoint& ptNew);
```

### <a name="parameters"></a>Parametri

[in] *ptNew*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndsetpredockstate"></a><a name="setpredockstate"></a>CPaneFrameWnd::SetPreDockState

Chiamata eseguita dal framework per impostare lo stato di pre-ancoraggio.

```
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,
    CBasePane* pBarToDock = NULL,
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```

### <a name="parameters"></a>Parametri

*preDockState (informazioni in stato di eso di*<br/>
[in] Valori possibili:

- PDS_NOTHING,

- PDS_DOCK_REGULAR,

- PDS_DOCK_TO_TAB

*pBarToDock (informazioni in stato di folto)*<br/>
[in] Puntatore al riquadro da ancorare.

*dockMethod*<br/>
[in] Metodo di ancoraggio. (Questo parametro viene ignorato.)

### <a name="return-value"></a>Valore restituito

TRUESe la finestra cornice mini è disancorata; FALSE se è ancorato.

## <a name="cpaneframewndsizetocontent"></a><a name="sizetocontent"></a>CPaneFrameWnd::SizeToContent

Regola le dimensioni di una finestra cornice mini in modo che sia equivalente a un riquadro contenuto.

```
virtual void SizeToContent();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per regolare le dimensioni di una finestra cornice piccola alle dimensioni di un riquadro contenuto.

## <a name="cpaneframewndstarttearoff"></a><a name="starttearoff"></a>CPaneFrameWnd::StartTearOff

Separa un menu.

```
BOOL StartTearOff(CMFCPopu* pMenu);
```

### <a name="parameters"></a>Parametri

*pMenu (Menu)*<br/>
[in] Puntatore a un menu.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

## <a name="cpaneframewndstorerecentdocksiteinfo"></a><a name="storerecentdocksiteinfo"></a>CPaneFrameWnd::StoreRecentDockSiteInfo

```
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```

### <a name="parameters"></a>Parametri

[in] *pBar (Barra)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cpaneframewndstorerecenttabrelatedinfo"></a><a name="storerecenttabrelatedinfo"></a>CPaneFrameWnd::StoreRecentTabRelatedInfo

```
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,
    CDockablePane* pTabbedBar);
```

### <a name="parameters"></a>Parametri

[in] *pDockingBar (Barperina di espansione)*<br/>
[in] *pTabbedBar*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
