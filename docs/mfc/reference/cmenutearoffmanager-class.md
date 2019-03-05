---
title: Classe CMenuTearOffManager
ms.date: 10/18/2018
f1_keywords:
- CMenuTearOffManager
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::CMenuTearOffManager
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Build
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::GetRegPath
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Initialize
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::IsDynamicID
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Parse
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::Reset
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::SetInUse
- AFXMENUTEAROFFMANAGER/CMenuTearOffManager::SetupTearOffMenus
helpviewer_keywords:
- CMenuTearOffManager [MFC], CMenuTearOffManager
- CMenuTearOffManager [MFC], Build
- CMenuTearOffManager [MFC], GetRegPath
- CMenuTearOffManager [MFC], Initialize
- CMenuTearOffManager [MFC], IsDynamicID
- CMenuTearOffManager [MFC], Parse
- CMenuTearOffManager [MFC], Reset
- CMenuTearOffManager [MFC], SetInUse
- CMenuTearOffManager [MFC], SetupTearOffMenus
ms.assetid: ab7ca272-ce42-4678-95f7-6ad75038f5a0
ms.openlocfilehash: c6bdbb18c2d1b40423457b4cf07d0a747138b99b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266198"
---
# <a name="cmenutearoffmanager-class"></a>Classe CMenuTearOffManager

Gestisce i menu con barra a comparsa. Un menu con barra a comparsa è un menu collocato nella barra dei menu. L'utente può rimuovere un menu con barra a comparsa dalla barra dei menu, rendendolo mobile.

   Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMenuTearOffManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenuTearOffManager::CMenuTearOffManager](#cmenutearoffmanager)|Costruisce un oggetto `CMenuTearOffManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMenuTearOffManager::Build](#build)||
|[CMenuTearOffManager::GetRegPath](#getregpath)||
|[CMenuTearOffManager::Initialize](#initialize)|Inizializza un `CMenuTearOffManager` oggetto.|
|[CMenuTearOffManager::IsDynamicID](#isdynamicid)||
|[CMenuTearOffManager::Parse](#parse)||
|[CMenuTearOffManager::Reset](#reset)||
|[CMenuTearOffManager::SetInUse](#setinuse)||
|[CMenuTearOffManager::SetupTearOffMenus](#setuptearoffmenus)||

## <a name="remarks"></a>Note

Per usare i menu a comparsa nell'applicazione, è necessario che un `CMenuTearOffManager` oggetto. Nella maggior parte dei casi, non creare o inizializzare un `CMenuTearOffManager` direttamente l'oggetto. Questa operazione viene gestita automaticamente quando si chiama il [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus) (funzione).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare e inizializzare un `CMenuTearOffManager` chiamando il `CWinAppEX::EnableTearOffMenus` (metodo). Questo frammento di codice fa parte dell' [esempio di Word Pad](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#12](../../mfc/reference/codesnippet/cpp/cmenutearoffmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMenuTearOffManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmenutearoffmanager.h

##  <a name="build"></a>  CMenuTearOffManager::Build

```
void Build(
    UINT uiTearOffBarID,
    CString& strText);
```

### <a name="parameters"></a>Parametri

[in] *uiTearOffBarID*<br/>

[in] *strText*<br/>

### <a name="remarks"></a>Note

##  <a name="cmenutearoffmanager"></a>  CMenuTearOffManager::CMenuTearOffManager

Costruisce un [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) oggetto.

```
CMenuTearOffManager();
```

### <a name="remarks"></a>Note

Nella maggior parte dei casi, non è necessario creare un `CMenuTearOffManager` manualmente. Il framework dell'applicazione crea il `CMenuTearOffManager` dell'oggetto quando si chiama [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus).

##  <a name="getregpath"></a>  CMenuTearOffManager::GetRegPath

```
LPCTSTR GetRegPath() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="initialize"></a>  CMenuTearOffManager::Initialize

Inizializza una [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) oggetto.

```
BOOL Initialize(
    LPCTSTR lpszRegEntry,
    UINT uiTearOffMenuFirst,
    UINT uiTearOffMenuLast);
```

### <a name="parameters"></a>Parametri

*lpszRegEntry*<br/>
[in] Stringa che contiene il percorso di una voce del Registro di sistema. Le applicazioni vengono memorizzate le impostazioni per le barre a comparsa in questa voce del Registro di sistema.

*uiTearOffMenuFirst*<br/>
[in] Il primo ID di menu per un menu a comparsa.

*uiTearOffMenuLast*<br/>
[in] L'ultimo ID di menu per un menu a comparsa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

L'intervallo di ID di menu dalla *uiTearOffMenuFirst* al *uiTearOffMenuLast* deve essere un intervallo continuo. L'intervallo definisce il numero di menu a comparsa che possono essere visualizzati nello stesso momento nell'applicazione.

##  <a name="isdynamicid"></a>  CMenuTearOffManager::IsDynamicID

```
BOOL IsDynamicID(UINT uiID) const;
```

### <a name="parameters"></a>Parametri

[in] *uiID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="parse"></a>  CMenuTearOffManager::Parse

```
UINT Parse(CString& str);
```

### <a name="parameters"></a>Parametri

[in] *str*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="reset"></a>  CMenuTearOffManager::Reset

```
void Reset(HMENU hmenu);
```

### <a name="parameters"></a>Parametri

[in] *hmenu*<br/>

### <a name="remarks"></a>Note

##  <a name="setinuse"></a>  CMenuTearOffManager::SetInUse

```
void SetInUse(
    UINT uiCmdId,
    BOOL bUse = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *uiCmdId*<br/>

[in] *bUtilizzare*<br/>

### <a name="remarks"></a>Note

##  <a name="setuptearoffmenus"></a>  CMenuTearOffManager::SetupTearOffMenus

```
void SetupTearOffMenus(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

[in] *hMenu*<br/>

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
