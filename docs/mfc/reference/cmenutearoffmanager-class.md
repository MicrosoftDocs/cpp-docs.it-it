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
ms.openlocfilehash: f41937179dc055213f3af093e107bcb08c8a8fcc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369970"
---
# <a name="cmenutearoffmanager-class"></a>Classe CMenuTearOffManager

Gestisce i menu con barra a comparsa. Un menu con barra a comparsa è un menu collocato nella barra dei menu. L'utente può rimuovere un menu con barra a comparsa dalla barra dei menu, rendendolo mobile.

   Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

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
|[CMenuTearOffManager::Compilazione](#build)||
|[CMenuTearOffManager::GetRegPath](#getregpath)||
|[CMenuTearOffManager::Inizializzare](#initialize)|Inizializza un oggetto `CMenuTearOffManager`.|
|[CMenuTearOffManager::IsDynamicID](#isdynamicid)||
|[CMenuTearOffManager::Parse](#parse)||
|[CMenuTearOffManager::Reimposta](#reset)||
|[CMenuTearOffManager::SetInUse](#setinuse)||
|[CMenuTearOffManager::SetupTearOffMenus](#setuptearoffmenus)||

## <a name="remarks"></a>Osservazioni

Per utilizzare i menu tear-off nell'applicazione, `CMenuTearOffManager` è necessario disporre di un oggetto. Nella maggior parte dei casi, non `CMenuTearOffManager` si creerà o si inizializza direttamente un oggetto. Questa operazione viene gestita quando si chiama la funzione [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato `CMenuTearOffManager` come costruire `CWinAppEX::EnableTearOffMenus` e inizializzare un oggetto chiamando il metodo . Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#12](../../mfc/reference/codesnippet/cpp/cmenutearoffmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMenuTearOffManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmenutearoffmanager.h

## <a name="cmenutearoffmanagerbuild"></a><a name="build"></a>CMenuTearOffManager::Compilazione

```
void Build(
    UINT uiTearOffBarID,
    CString& strText);
```

### <a name="parameters"></a>Parametri

[in] *uiTearOffBarID (informazioni in questo base base pegnia in stato di*<br/>

[in] *strText (testo str)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmenutearoffmanagercmenutearoffmanager"></a><a name="cmenutearoffmanager"></a>CMenuTearOffManager::CMenuTearOffManager

Costruisce un oggetto [CMenuTearOffManager.](../../mfc/reference/cmenutearoffmanager-class.md)

```
CMenuTearOffManager();
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, non è consigliabile creare manualmente un `CMenuTearOffManager` oggetto . Il framework dell'applicazione `CMenuTearOffManager` crea l'oggetto quando si chiama [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus).

## <a name="cmenutearoffmanagergetregpath"></a><a name="getregpath"></a>CMenuTearOffManager::GetRegPath

```
LPCTSTR GetRegPath() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmenutearoffmanagerinitialize"></a><a name="initialize"></a>CMenuTearOffManager::Inizializzare

Inizializza un oggetto [CMenuTearOffManager.](../../mfc/reference/cmenutearoffmanager-class.md)

```
BOOL Initialize(
    LPCTSTR lpszRegEntry,
    UINT uiTearOffMenuFirst,
    UINT uiTearOffMenuLast);
```

### <a name="parameters"></a>Parametri

*LpszRegEntry (informazioni in questo conto in commiato)*<br/>
[in] Stringa che contiene il percorso di una voce del Registro di sistema. Le applicazioni archiviano le impostazioni per le barre tear-off in questa voce del Registro di sistema.

*uiTearOffMenuFirst (informazioni in questo modo)*<br/>
[in] Il primo ID di menu per un menu tear-off.

*uiTearOffMenuLast (informazioni in questo ultimo elemento)*<br/>
[in] L'ultimo ID di menu per un menu tear-off.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'intervallo di ID di menu da *uiTearOffMenuFirst* a *uiTearOffMenuLast* deve essere un intervallo continuo. L'intervallo definisce il numero di menu tear-off che possono essere visualizzati contemporaneamente nell'applicazione.

## <a name="cmenutearoffmanagerisdynamicid"></a><a name="isdynamicid"></a>CMenuTearOffManager::IsDynamicID

```
BOOL IsDynamicID(UINT uiID) const;
```

### <a name="parameters"></a>Parametri

[in] *uiID (uiID)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmenutearoffmanagerparse"></a><a name="parse"></a>CMenuTearOffManager::Parse

```
UINT Parse(CString& str);
```

### <a name="parameters"></a>Parametri

[in] *str*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmenutearoffmanagerreset"></a><a name="reset"></a>CMenuTearOffManager::Reimposta

```
void Reset(HMENU hmenu);
```

### <a name="parameters"></a>Parametri

[in] *hmenu*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmenutearoffmanagersetinuse"></a><a name="setinuse"></a>CMenuTearOffManager::SetInUse

```
void SetInUse(
    UINT uiCmdId,
    BOOL bUse = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *uiCmdId (informazioni in* questo base elementi)<br/>

[in] *bUtilizzare*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmenutearoffmanagersetuptearoffmenus"></a><a name="setuptearoffmenus"></a>CMenuTearOffManager::SetupTearOffMenus

```
void SetupTearOffMenus(HMENU hMenu);
```

### <a name="parameters"></a>Parametri

[in] *hMenu (Menu)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
