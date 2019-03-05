---
title: Classe CSettingsStoreSP
ms.date: 11/04/2016
f1_keywords:
- CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP::CSettingsStoreSP
- AFXSETTINGSSTORE/CSettingsStoreSP::Create
- AFXSETTINGSSTORE/CSettingsStoreSP::SetRuntimeClass
helpviewer_keywords:
- CSettingsStoreSP [MFC], CSettingsStoreSP
- CSettingsStoreSP [MFC], Create
- CSettingsStoreSP [MFC], SetRuntimeClass
ms.assetid: bcd37f40-cfd4-4d17-a5ce-3bfabe995dcc
ms.openlocfilehash: 5c7a992b983552340ebe21e59d2ee9a667841ec0
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275194"
---
# <a name="csettingsstoresp-class"></a>Classe CSettingsStoreSP

Il `CSettingsStoreSP` classe è una classe helper che è possibile usare per creare istanze del [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

## <a name="syntax"></a>Sintassi

```
class CSettingsStoreSP
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSettingsStoreSP::CSettingsStoreSP](#csettingsstoresp)|Costruisce un oggetto `CSettingsStoreSP`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSettingsStoreSP::Create](#create)|Crea un'istanza di una classe derivata da `CSettingsStore`.|
|[CSettingsStoreSP::SetRuntimeClass](#setruntimeclass)|Imposta la classe di runtime. Il `Create` metodo Usa la classe di runtime per determinare quale classe di oggetti da creare.|

### <a name="data-members"></a>Membri di dati

|nome|Descrizione|
|----------|-----------------|
|`m_dwUserData`|Dati utente personalizzati che vengono archiviati nel `CSettingsStoreSP` oggetto. È fornire questi dati nel costruttore del `CSettingsStoreSP` oggetto.|
|`m_pRegistry`|Il `CSettingsStore`-derivato dell'oggetto che il `Create` Crea metodo.|

## <a name="remarks"></a>Note

È possibile usare il `CSettingsStoreSP` classe per reindirizzare tutte le operazioni del Registro di sistema MFC in altre posizioni, ad esempio un file XML o un database. A tale scopo, attenersi alla seguente procedura:

1. Creare una classe (ad esempio `CMyStore`) e derivarlo dal `CSettingsStore`.

1. Uso [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate) le macro con personalizzata `CSettingsStore` classe per consentire la creazione dinamica.

1. Eseguire l'override di funzioni virtuali e implementare il `Read` e `Write` funzioni nella classe personalizzata. Implementare altre funzionalità per leggere e scrivere dati nel percorso desiderato.

1. Nell'applicazione, chiamare `CSettingsStoreSP::SetRuntimeClass` e passare un puntatore per il [struttura CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) ottenute dalla classe.

Ogni volta che il framework avrebbe dovuto in genere accedere Registro di sistema, verrà ora dinamico creare un'istanza della classe personalizzata e usarla per leggere o scrivere dati.

`CSettingsStoreSP::SetRuntimeClass` Usa una variabile statica globale. Pertanto, è disponibile un solo archivio personalizzato alla volta.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsettingsstore.h

##  <a name="create"></a>  CSettingsStoreSP::Create

Crea una nuova istanza di un oggetto derivato dal [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

```
CSettingsStore& CSettingsStoreSP Create(
    BOOL bAdmin,
    BOOL bReadOnly);
```

### <a name="parameters"></a>Parametri

*bAdmin*<br/>
[in] Un parametro booleano che determina se un `CSettingsStore` oggetto viene creato in modalità amministratore.

*bReadOnly*<br/>
[in] Un parametro booleano che determina se un `CSettingsStore` oggetto viene creato per l'accesso di sola lettura.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto appena creato `CSettingsStore` oggetto.

### <a name="remarks"></a>Note

È possibile usare il metodo [CSettingsStoreSP::SetRuntimeClass](#setruntimeclass) per determinare il tipo di oggetto `CSettingsStoreSP::Create` creerà. Per impostazione predefinita, questo metodo crea un `CSettingsStore` oggetto.

Se si crea un `CSettingsStore` dell'oggetto in modalità amministratore, il percorso predefinito per tutti gli accessi del Registro di sistema è HKEY_LOCAL_MACHINE. In caso contrario, il percorso predefinito per tutti gli accessi del Registro di sistema è HKEY_CURRENT_USER.

Se *bPercorso amm* è TRUE, l'applicazione deve disporre dei diritti di amministrazione. In caso contrario, avrà esito negativo durante il tentativo di accesso del Registro di sistema.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `Create` metodo del `CSettingsStoreSP` classe.

[!code-cpp[NVC_MFC_RibbonApp#33](../../mfc/reference/codesnippet/cpp/csettingsstoresp-class_1.cpp)]

##  <a name="csettingsstoresp"></a>  CSettingsStoreSP::CSettingsStoreSP

Costruisce un [classe CSettingsStoreSP](../../mfc/reference/csettingsstoresp-class.md) oggetto.

```
CSettingsStoreSP::CSettingsStoreSP(DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*dwUserData*<br/>
[in] Dati definiti dall'utente che la `CSettingsStoreSP` archivi dell'oggetto.

### <a name="remarks"></a>Note

Il `CSettingsStoreSP` oggetto archivia i dati dal *dwUserData* nella variabile membro protetto `m_dwUserData`.

##  <a name="setruntimeclass"></a>  CSettingsStoreSP::SetRuntimeClass

Imposta la classe di runtime. Il metodo [CSettingsStoreSP::Create](#create) Usa la classe di runtime per determinare a quale tipo di oggetto da creare.

```
static BOOL __stdcall CSettingsStoreSP::SetRuntimeClass(CRuntimeClass* pRTI);
```

### <a name="parameters"></a>Parametri

*pRTI*<br/>
[in] Un puntatore alle informazioni sulla classe di runtime per una classe derivata dal [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

### <a name="return-value"></a>Valore restituito

TRUE se ha esito positivo. FALSE se la classe identificato da *pRTI* non è derivato da `CSettingsStore`.

### <a name="remarks"></a>Note

È possibile usare la [classe CSettingsStoreSP](../../mfc/reference/csettingsstoresp-class.md) derivare classi dalla `CSettingsStore`. Usare il metodo `SetRuntimeClass` se si desidera creare oggetti di una classe personalizzata derivata da `CSettingsStore`.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md)
