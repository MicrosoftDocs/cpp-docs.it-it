---
description: 'Altre informazioni su: classe CRecentDockSiteInfo'
title: Classe CRecentDockSiteInfo
ms.date: 11/04/2016
f1_keywords:
- CRecentDockSiteInfo
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::CleanUp
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDefaultPaneDivider
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedPercent
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedRect
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentListOfPanes
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentPaneContainer
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentTabContainer
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::Init
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::IsRecentLeftPane
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SaveListOfRecentPanes
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SetInfo
- AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::StoreDockInfo
helpviewer_keywords:
- CRecentDockSiteInfo [MFC], CleanUp
- CRecentDockSiteInfo [MFC], GetRecentDefaultPaneDivider
- CRecentDockSiteInfo [MFC], GetRecentDockedPercent
- CRecentDockSiteInfo [MFC], GetRecentDockedRect
- CRecentDockSiteInfo [MFC], GetRecentListOfPanes
- CRecentDockSiteInfo [MFC], GetRecentPaneContainer
- CRecentDockSiteInfo [MFC], GetRecentTabContainer
- CRecentDockSiteInfo [MFC], Init
- CRecentDockSiteInfo [MFC], IsRecentLeftPane
- CRecentDockSiteInfo [MFC], SaveListOfRecentPanes
- CRecentDockSiteInfo [MFC], SetInfo
- CRecentDockSiteInfo [MFC], StoreDockInfo
ms.assetid: 2dd14f95-d5a2-4461-a7a5-2c6c36a3a165
ms.openlocfilehash: e33ef48be2b091477200f15a31c194d845693399
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343097"
---
# <a name="crecentdocksiteinfo-class"></a>Classe CRecentDockSiteInfo

La `CRecentDockSiteInfo` classe è una classe helper che archivia le informazioni sullo stato recenti per la [classe CPane](../../mfc/reference/cpane-class.md).

## <a name="syntax"></a>Sintassi

```
class CRecentDockSiteInfo : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CRecentDockSiteInfo::CRecentDockSiteInfo`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRecentDockSiteInfo::CleanUp](#cleanup)||
|[CRecentDockSiteInfo::GetRecentDefaultPaneDivider](#getrecentdefaultpanedivider)||
|[CRecentDockSiteInfo::GetRecentDockedPercent](#getrecentdockedpercent)||
|[CRecentDockSiteInfo::GetRecentDockedRect](#getrecentdockedrect)||
|[CRecentDockSiteInfo::GetRecentListOfPanes](#getrecentlistofpanes)||
|[CRecentDockSiteInfo::GetRecentPaneContainer](#getrecentpanecontainer)||
|[CRecentDockSiteInfo::GetRecentTabContainer](#getrecenttabcontainer)||
|[CRecentDockSiteInfo::Init](#init)||
|[CRecentDockSiteInfo::IsRecentLeftPane](#isrecentleftpane)||
|[CRecentDockSiteInfo:: operator =](#operator_eq)||
|[CRecentDockSiteInfo::SaveListOfRecentPanes](#savelistofrecentpanes)||
|[CRecentDockSiteInfo::SetInfo](#setinfo)||
|[CRecentDockSiteInfo::StoreDockInfo](#storedockinfo)||

## <a name="remarks"></a>Commenti

La classe `CRecentDockSiteInfo` è una classe di gestione dati. Consente di tenere traccia dell'ultimo stato di `CPane` durante la transizione tra lo stato ancorato e lo stato mobile. Quando un utente fa doppio clic su un riquadro ancorato mobile, il riquadro diventa ancorato. Per ripristinare la posizione, le dimensioni e lo stato precedenti, fare doppio clic sul riquadro ancorato. In modo analogo, quando il riquadro viene ancorato di nuovo, esso torna alla posizione di ancoraggio precedente. Ciò è reso possibile da questa classe di dati. Dato che archiviano le informazioni sullo stato del riquadro ancorato, i membri di questa classe non devono essere modificati direttamente dall'applicazione.

Viene creato un oggetto `CRecentDockSiteInfo` ogni volta che viene creato un riquadro. Ogni `CPane` oggetto ha una variabile membro, [CPane:: m_recentDockInfo](../../mfc/reference/cpane-class.md#m_recentdockinfo), per archiviare queste informazioni.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrecentDockSiteInfo. h

## <a name="crecentdocksiteinfocleanup"></a><a name="cleanup"></a> CRecentDockSiteInfo:: CleanUp

```cpp
void CleanUp();
```

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfocrecentdocksiteinfo"></a><a name="crecentdocksiteinfo"></a> CRecentDockSiteInfo:: CRecentDockSiteInfo

```
CRecentDockSiteInfo(CPane* pBar);
```

### <a name="parameters"></a>Parametri

in *pBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfogetrecentdefaultpanedivider"></a><a name="getrecentdefaultpanedivider"></a> CRecentDockSiteInfo:: GetRecentDefaultPaneDivider

```
CPaneDivider* GetRecentDefaultPaneDivider();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfogetrecentdockedpercent"></a><a name="getrecentdockedpercent"></a> CRecentDockSiteInfo:: GetRecentDockedPercent

```
int GetRecentDockedPercent(BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfogetrecentdockedrect"></a><a name="getrecentdockedrect"></a> CRecentDockSiteInfo:: GetRecentDockedRect

```
CRect& GetRecentDockedRect(BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfogetrecentlistofpanes"></a><a name="getrecentlistofpanes"></a> CRecentDockSiteInfo:: GetRecentListOfPanes

```
CList<HWND, HWND>& GetRecentListOfPanes(BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfogetrecentpanecontainer"></a><a name="getrecentpanecontainer"></a> CRecentDockSiteInfo:: GetRecentPaneContainer

```
CPaneContainer* GetRecentPaneContainer(BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfogetrecenttabcontainer"></a><a name="getrecenttabcontainer"></a> CRecentDockSiteInfo:: GetRecentTabContainer

```
CPaneContainer* GetRecentTabContainer(BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfoinit"></a><a name="init"></a> CRecentDockSiteInfo:: init

```cpp
void Init();
```

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfoisrecentleftpane"></a><a name="isrecentleftpane"></a> CRecentDockSiteInfo:: IsRecentLeftPane

```
BOOL IsRecentLeftPane(BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfooperator-"></a><a name="operator_eq"></a> CRecentDockSiteInfo:: operator =

```
CRecentDockSiteInfo& operator=(CRecentDockSiteInfo& src);
```

### <a name="parameters"></a>Parametri

in *src*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfosavelistofrecentpanes"></a><a name="savelistofrecentpanes"></a> CRecentDockSiteInfo:: SaveListOfRecentPanes

```cpp
void SaveListOfRecentPanes(CList<HWND,
    HWND>& lstOrg,
    BOOL bForSlider);
```

### <a name="parameters"></a>Parametri

in *CList<HWND*<br/>
in *lstOrg*<br/>
in *bForSlider*<br/>

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfosetinfo"></a><a name="setinfo"></a> CRecentDockSiteInfo:: SetInfo

```
virtual void SetInfo(
    BOOL bForSlider,
    CRecentDockSiteInfo& srcInfo);
```

### <a name="parameters"></a>Parametri

in *bForSlider*<br/>
in *srcInfo*<br/>

### <a name="remarks"></a>Commenti

## <a name="crecentdocksiteinfostoredockinfo"></a><a name="storedockinfo"></a> CRecentDockSiteInfo:: StoreDockInfo

```
virtual void StoreDockInfo(
    CPaneContainer* pRecentContainer,
    CDockablePane* pTabbedBar = NULL);
```

### <a name="parameters"></a>Parametri

in *pRecentContainer*<br/>
in *pTabbedBar*<br/>

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CDockSite](../../mfc/reference/cdocksite-class.md)
