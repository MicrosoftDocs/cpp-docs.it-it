---
description: 'Altre informazioni su: classe CSettingsStoreSP'
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
ms.openlocfilehash: 67e9f881fc43722ab568aa7f149fc7a2b44cc764
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264687"
---
# <a name="csettingsstoresp-class"></a>Classe CSettingsStoreSP

La `CSettingsStoreSP` classe è una classe helper che è possibile usare per creare istanze della [Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

## <a name="syntax"></a>Sintassi

```
class CSettingsStoreSP
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSettingsStoreSP:: CSettingsStoreSP](#csettingsstoresp)|Costruisce un oggetto `CSettingsStoreSP`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSettingsStoreSP:: create](#create)|Crea un'istanza di una classe derivata da `CSettingsStore` .|
|[CSettingsStoreSP:: SetRuntimeClass](#setruntimeclass)|Imposta la classe di Runtime. Il `Create` metodo usa la classe runtime per determinare la classe di oggetti da creare.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|`m_dwUserData`|Dati utente personalizzati archiviati nell' `CSettingsStoreSP` oggetto. Questi dati vengono forniti nel costruttore dell' `CSettingsStoreSP` oggetto.|
|`m_pRegistry`|`CSettingsStore`Oggetto derivato da `Create` creato dal metodo.|

## <a name="remarks"></a>Commenti

È possibile utilizzare la `CSettingsStoreSP` classe per reindirizzare tutte le operazioni del registro di sistema MFC ad altre posizioni, ad esempio un file XML o un database. A questo scopo, seguire questa procedura:

1. Creare una classe (ad esempio `CMyStore` ) e derivarla da `CSettingsStore` .

1. Usare [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate) macro con la `CSettingsStore` classe personalizzata per abilitare la creazione dinamica.

1. Eseguire l'override delle funzioni virtuali e implementare le `Read` `Write` funzioni e nella classe personalizzata. Implementare qualsiasi altra funzionalità per leggere e scrivere i dati nel percorso desiderato.

1. Nell'applicazione, chiamare `CSettingsStoreSP::SetRuntimeClass` e passare un puntatore alla [struttura CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) ottenuta dalla classe.

Ogni volta che il Framework accede in genere al registro di sistema, ora crea dinamicamente un'istanza della classe personalizzata e la usa per leggere o scrivere i dati.

`CSettingsStoreSP::SetRuntimeClass` Usa una variabile statica globale. Pertanto, è disponibile un solo archivio personalizzato alla volta.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsettingsstore. h

## <a name="csettingsstorespcreate"></a><a name="create"></a> CSettingsStoreSP:: create

Crea una nuova istanza di un oggetto derivato dalla [Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

```
CSettingsStore& CSettingsStoreSP Create(
    BOOL bAdmin,
    BOOL bReadOnly);
```

### <a name="parameters"></a>Parametri

*bAdmin*<br/>
in Parametro booleano che determina se un `CSettingsStore` oggetto viene creato in modalità amministratore.

*bReadOnly*<br/>
in Parametro booleano che determina se un `CSettingsStore` oggetto viene creato per l'accesso in sola lettura.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto appena creato `CSettingsStore` .

### <a name="remarks"></a>Commenti

È possibile utilizzare il metodo [CSettingsStoreSP:: SetRuntimeClass](#setruntimeclass) per determinare il tipo di oggetto che creerà `CSettingsStoreSP::Create` . Per impostazione predefinita, questo metodo crea un `CSettingsStore` oggetto.

Se si crea un `CSettingsStore` oggetto in modalità amministratore, viene HKEY_LOCAL_MACHINE il percorso predefinito per tutti gli accessi al registro di sistema. In caso contrario, viene HKEY_CURRENT_USER il percorso predefinito per tutti gli accessi al registro di sistema.

Se *bAdmin* è true, l'applicazione deve disporre dei diritti di amministrazione. In caso contrario, avrà esito negativo quando tenterà di accedere al registro di sistema.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo della `CSettingsStoreSP` classe.

[!code-cpp[NVC_MFC_RibbonApp#33](../../mfc/reference/codesnippet/cpp/csettingsstoresp-class_1.cpp)]

## <a name="csettingsstorespcsettingsstoresp"></a><a name="csettingsstoresp"></a> CSettingsStoreSP:: CSettingsStoreSP

Costruisce un oggetto della [classe CSettingsStoreSP](../../mfc/reference/csettingsstoresp-class.md) .

```
CSettingsStoreSP::CSettingsStoreSP(DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*dwUserData*<br/>
in Dati definiti dall'utente archiviati dall' `CSettingsStoreSP` oggetto.

### <a name="remarks"></a>Commenti

L' `CSettingsStoreSP` oggetto archivia i dati da *dwUserData* nella variabile membro protetta `m_dwUserData` .

## <a name="csettingsstorespsetruntimeclass"></a><a name="setruntimeclass"></a> CSettingsStoreSP:: SetRuntimeClass

Imposta la classe di Runtime. Il metodo [CSettingsStoreSP:: create](#create) usa la classe runtime per determinare il tipo di oggetto da creare.

```
static BOOL __stdcall CSettingsStoreSP::SetRuntimeClass(CRuntimeClass* pRTI);
```

### <a name="parameters"></a>Parametri

*pRTI*<br/>
in Puntatore alle informazioni sulla classe di runtime per una classe derivata dalla [Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione ha esito positivo; FALSE se la classe identificata da *pRTI* non è derivata da `CSettingsStore` .

### <a name="remarks"></a>Commenti

È possibile usare la [classe CSettingsStoreSP](../../mfc/reference/csettingsstoresp-class.md) per derivare classi da `CSettingsStore` . Usare il metodo `SetRuntimeClass` se si vuole creare oggetti di una classe personalizzata derivata da `CSettingsStore` .

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md)
