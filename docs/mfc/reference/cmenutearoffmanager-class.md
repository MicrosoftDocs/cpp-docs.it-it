---
description: 'Altre informazioni su: Classe CMenuTearOffManager'
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
ms.openlocfilehash: b80f2e935f8d1dd47bf19a11522e4556b35490b4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336636"
---
# <a name="cmenutearoffmanager-class"></a>Classe CMenuTearOffManager

Gestisce i menu con barra a comparsa. Un menu con barra a comparsa è un menu collocato nella barra dei menu. L'utente può rimuovere un menu con barra a comparsa dalla barra dei menu, rendendolo mobile.

   Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMenuTearOffManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMenuTearOffManager:: CMenuTearOffManager](#cmenutearoffmanager)|Costruisce un oggetto `CMenuTearOffManager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMenuTearOffManager:: Build](#build)||
|[CMenuTearOffManager:: GetRegPath](#getregpath)||
|[CMenuTearOffManager:: Initialize](#initialize)|Inizializza un oggetto `CMenuTearOffManager`.|
|[CMenuTearOffManager:: IsDynamicID](#isdynamicid)||
|[CMenuTearOffManager::P ass](#parse)||
|[CMenuTearOffManager:: Reset](#reset)||
|[CMenuTearOffManager:: SetInUse](#setinuse)||
|[CMenuTearOffManager:: SetupTearOffMenus](#setuptearoffmenus)||

## <a name="remarks"></a>Commenti

Per utilizzare i menu tear-off nell'applicazione, è necessario disporre di un `CMenuTearOffManager` oggetto. Nella maggior parte dei casi non è possibile creare o inizializzare `CMenuTearOffManager` direttamente un oggetto. Questa operazione viene gestita quando si chiama la funzione [CWinAppEx:: EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come creare e inizializzare un `CMenuTearOffManager` oggetto chiamando il `CWinAppEX::EnableTearOffMenus` metodo. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#12](../../mfc/reference/codesnippet/cpp/cmenutearoffmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMenuTearOffManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmenutearoffmanager. h

## <a name="cmenutearoffmanagerbuild"></a><a name="build"></a> CMenuTearOffManager:: Build

```cpp
void Build(
    UINT uiTearOffBarID,
    CString& strText);
```

### <a name="parameters"></a>Parametri

in *uiTearOffBarID*<br/>

in *strText*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmenutearoffmanagercmenutearoffmanager"></a><a name="cmenutearoffmanager"></a> CMenuTearOffManager:: CMenuTearOffManager

Costruisce un oggetto [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) .

```
CMenuTearOffManager();
```

### <a name="remarks"></a>Commenti

Nella maggior parte dei casi, non è consigliabile creare manualmente un oggetto `CMenuTearOffManager` . Il Framework dell'applicazione crea l' `CMenuTearOffManager` oggetto quando si chiama [CWinAppEx:: EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus).

## <a name="cmenutearoffmanagergetregpath"></a><a name="getregpath"></a> CMenuTearOffManager:: GetRegPath

```
LPCTSTR GetRegPath() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmenutearoffmanagerinitialize"></a><a name="initialize"></a> CMenuTearOffManager:: Initialize

Inizializza un oggetto [CMenuTearOffManager](../../mfc/reference/cmenutearoffmanager-class.md) .

```
BOOL Initialize(
    LPCTSTR lpszRegEntry,
    UINT uiTearOffMenuFirst,
    UINT uiTearOffMenuLast);
```

### <a name="parameters"></a>Parametri

*lpszRegEntry*<br/>
in Stringa che contiene il percorso di una voce del registro di sistema. Nelle applicazioni vengono archiviate le impostazioni per le barre tear-off in questa voce del registro di sistema.

*uiTearOffMenuFirst*<br/>
in Il primo ID menu per un menu a comparsa.

*uiTearOffMenuLast*<br/>
in L'ultimo ID menu per un menu a comparsa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

L'intervallo di ID menu da *uiTearOffMenuFirst* a *uiTearOffMenuLast* deve essere un intervallo continuo. L'intervallo definisce il numero di menu di strappo che possono essere visualizzati contemporaneamente nell'applicazione.

## <a name="cmenutearoffmanagerisdynamicid"></a><a name="isdynamicid"></a> CMenuTearOffManager:: IsDynamicID

```
BOOL IsDynamicID(UINT uiID) const;
```

### <a name="parameters"></a>Parametri

in *uiID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmenutearoffmanagerparse"></a><a name="parse"></a> CMenuTearOffManager::P ass

```
UINT Parse(CString& str);
```

### <a name="parameters"></a>Parametri

in *Str*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmenutearoffmanagerreset"></a><a name="reset"></a> CMenuTearOffManager:: Reset

```cpp
void Reset(HMENU hmenu);
```

### <a name="parameters"></a>Parametri

in *HMENU*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmenutearoffmanagersetinuse"></a><a name="setinuse"></a> CMenuTearOffManager:: SetInUse

```cpp
void SetInUse(
    UINT uiCmdId,
    BOOL bUse = TRUE);
```

### <a name="parameters"></a>Parametri

in *uiCmdId*<br/>

in *bUse*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmenutearoffmanagersetuptearoffmenus"></a><a name="setuptearoffmenus"></a> CMenuTearOffManager:: SetupTearOffMenus

```cpp
void SetupTearOffMenus(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

in *HMENU*<br/>

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
