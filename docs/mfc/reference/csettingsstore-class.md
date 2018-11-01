---
title: CSettingsStore Class
ms.date: 11/04/2016
f1_keywords:
- CSettingsStore
- AFXSETTINGSSTORE/CSettingsStore
- AFXSETTINGSSTORE/CSettingsStore::CSettingsStore
- AFXSETTINGSSTORE/CSettingsStore::Close
- AFXSETTINGSSTORE/CSettingsStore::CreateKey
- AFXSETTINGSSTORE/CSettingsStore::DeleteKey
- AFXSETTINGSSTORE/CSettingsStore::DeleteValue
- AFXSETTINGSSTORE/CSettingsStore::Open
- AFXSETTINGSSTORE/CSettingsStore::Read
- AFXSETTINGSSTORE/CSettingsStore::Write
helpviewer_keywords:
- CSettingsStore [MFC], CSettingsStore
- CSettingsStore [MFC], Close
- CSettingsStore [MFC], CreateKey
- CSettingsStore [MFC], DeleteKey
- CSettingsStore [MFC], DeleteValue
- CSettingsStore [MFC], Open
- CSettingsStore [MFC], Read
- CSettingsStore [MFC], Write
ms.assetid: 0ea181de-a13e-4b29-b560-7c43838223ff
ms.openlocfilehash: 7f1ca94423cb1ef269c7556be25b1926fa42d2a5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614682"
---
# <a name="csettingsstore-class"></a>CSettingsStore Class

Esegue il wrapping di funzioni API di Windows, fornendo un'interfaccia orientata a oggetti che è possibile utilizzare per accedere al Registro di sistema.

## <a name="syntax"></a>Sintassi

```
class CSettingsStore : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSettingsStore::CSettingsStore](#csettingsstore)|Costruisce un oggetto `CSettingsStore`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSettingsStore::Close](#close)|Chiude la chiave del Registro di sistema open.|
|[CSettingsStore::CreateKey](#createkey)|Apre la chiave specificata o la crea se non esiste.|
|[CSettingsStore::DeleteKey](#deletekey)|Elimina la chiave specificata e tutti gli elementi figlio.|
|[CSettingsStore::DeleteValue](#deletevalue)|Elimina il valore della chiave aperta specificato.|
|[CSettingsStore::Open](#open)|Apre la chiave specificata.|
|[CSettingsStore::Read](#read)|Recupera i dati per un valore di chiave specificato.|
|[CSettingsStore::Write](#write)|Scrive un valore nel Registro di sistema nella chiave aperta.|

## <a name="remarks"></a>Note

Le funzioni membro `CreateKey` e `Open` sono molto simili. Se la chiave del Registro di sistema esiste già, `CreateKey` e `Open` funzione nello stesso modo. Tuttavia, se la chiave del Registro di sistema non esiste, `CreateKey` creerà mentre `Open` restituirà un valore di errore.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i metodi Open e lettura del `CSettingsStore` classe. Questo frammento di codice fa parte del [esempio dello strumento suggerimenti dimostrativo](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_ToolTipDemo#1](../../mfc/reference/codesnippet/cpp/csettingsstore-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CSettingsStore`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsettingsstore.h

##  <a name="close"></a>  CSettingsStore::Close

Chiude la chiave del Registro di sistema open.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo viene chiamato dal distruttore del [classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

##  <a name="createkey"></a>  CSettingsStore::CreateKey

Consente di aprire una chiave del Registro di sistema o la crea se non esiste.

```
virtual BOOL CreateKey(LPCTSTR pszPath);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
[in] Specifica il nome di una chiave può essere creato o aperto.

### <a name="return-value"></a>Valore restituito

0 se ha esito positivo. in caso contrario, un valore diverso da zero.

### <a name="remarks"></a>Note

`CreateKey` Usa `m_hKey` come radice di richieste di informazioni del Registro di sistema. Viene cercato *pszPath* come una sottochiave della `m_hKey`. Se la chiave non esiste, `CreateKey` lo crea. In caso contrario, viene aperta la chiave. `CreateKey` Imposta quindi `m_hKey` per la chiave creata o aperta.

##  <a name="csettingsstore"></a>  CSettingsStore::CSettingsStore

Crea un oggetto `CSettngsStore`.

```
CSettingsStore(
    BOOL bAdmin,
    BOOL bReadOnly);
```

### <a name="parameters"></a>Parametri

*bPercorso amm*<br/>
[in] Parametro booleano che specifica se il `CSettingsStore` oggetto opera in modalità amministratore.

*bReadOnly*<br/>
[in] Parametro booleano che specifica se il `CSettingsStore` oggetto viene creato in modalità sola lettura.

### <a name="remarks"></a>Note

Se *bPercorso amm* è impostata su TRUE, il `m_hKey` variabile membro è impostata su **HKEY_LOCAL_MACHINE**. Se si imposta *bPercorso amm* su FALSE, `m_hKey` è impostata su **HKEY_CURRENT_USER**.

L'accesso di sicurezza dipende il *bReadOnly* parametro. Se *bReadonly* è FALSE, l'accesso di sicurezza verrà impostato su **KEY_ALL_ACCESS**. Se *bReadyOnly* è TRUE, l'accesso di sicurezza verrà impostato su una combinazione di **KEY_QUERY_VALUE, KEY_NOTIFY** e **KEY_ENUMERATE_SUB_KEYS**. Per altre informazioni sull'accesso di sicurezza con il Registro di sistema, vedere [diritti di accesso e sicurezza della chiave del Registro di sistema](/windows/desktop/SysInfo/registry-key-security-and-access-rights).

Il distruttore `CSettingsStore` rilascia `m_hKey` automaticamente.

##  <a name="deletekey"></a>  CSettingsStore::DeleteKey

Elimina una chiave e i relativi elementi figlio dal Registro di sistema.

```
virtual BOOL DeleteKey(
    LPCTSTR pszPath,
    BOOL bAdmin = FALSE);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
[in] Il nome della chiave da eliminare.

*bPercorso amm*<br/>
[in] Opzione che specifica il percorso della chiave da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo avrà esito negativo se il `CSettingsStore` oggetto è in modalità di sola lettura.

Se il parametro *bPercorso amm* è uguale a zero, `DeleteKey` Cerca la chiave da eliminare sotto **HKEY_CURRENT_USER**. Se *bPercorso amm* è diverso da zero, `DeleteKey` Cerca la chiave da eliminare sotto **HKEY_LOCAL_MACHINE**.

##  <a name="deletevalue"></a>  CSettingsStore::DeleteValue

Elimina un valore da `m_hKey`.

```
virtual BOOL DeleteValue(LPCTSTR pszValue);
```

### <a name="parameters"></a>Parametri

*pszValue*<br/>
[in] Specifica il campo del valore da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="open"></a>  CSettingsStore::Open

Apre una chiave del Registro di sistema.

```
virtual BOOL Open(LPCTSTR pszPath);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
[in] Il nome di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Dopo che questo metodo apre correttamente la chiave specificata, viene impostato `m_hKey` all'handle di questa chiave.

##  <a name="read"></a>  CSettingsStore::Read

Legge un valore da una chiave del Registro di sistema.

```
virtual BOOL Read(
    LPCTSTR pszKey,
    int& iVal);

virtual BOOL Read(
    LPCTSTR pszKey,
    DWORD& dwVal);

virtual BOOL Read(
    LPCTSTR pszKey,
    CString& sVal);

virtual BOOL Read(
    LPCTSTR pszKey,
    CStringList& scStringList);

virtual BOOL Read(
    LPCTSTR pszKey,
    CStringArray& scArray);

virtual BOOL Read(
    LPCTSTR pszKey,
    CDWordArray& dwcArray);

virtual BOOL Read(
    LPCTSTR pszKey,
    CWordArray& wcArray);

virtual BOOL Read(
    LPCTSTR pszKey,
    CByteArray& bcArray);

virtual BOOL Read(
    LPCTSTR pszKey,
    LPPOINT& lpPoint);

virtual BOOL Read(
    LPCTSTR pszKey,
    CRect& rect);

virtual BOOL Read(
    LPCTSTR pszKey,
    BYTE** ppData,
    UINT* pBytes);

virtual BOOL Read(
    LPCTSTR pszKey,
    CObList& list);

virtual BOOL Read(
    LPCTSTR pszKey,
    CObject& obj);

virtual BOOL Read(
    LPCTSTR pszKey,
    CObject*& pObj);
```

### <a name="parameters"></a>Parametri

*pszKey*<br/>
[in] Puntatore a una stringa con terminazione null che contiene il nome del valore da leggere dal Registro di sistema.

*iVal*<br/>
[out] Riferimento a una variabile integer che riceve il valore letto dalla chiave del Registro di sistema.

*dwVal*<br/>
[out] Riferimento alla variabile valore double word a 32 bit che riceve il valore letto dalla chiave del Registro di sistema.

*sVal*<br/>
[out] Riferimento a una variabile di stringa che riceve il valore letto dalla chiave del Registro di sistema.

*scStringList*<br/>
[out] Riferimento a una variabile di elenco di stringhe che riceve il valore letto dalla chiave del Registro di sistema.

*scArray*<br/>
[out] Riferimento a una variabile di matrice di stringa che riceve il valore letto dalla chiave del Registro di sistema.

*dwcArray*<br/>
[out] Riferimento a una variabile di matrice bit 32 valore double word che riceve il valore letto dalla chiave del Registro di sistema.

*wcArray*<br/>
[out] Riferimento a una variabile di matrice di parole a 16 bit che riceve il valore letto dalla chiave del Registro di sistema.

*bcArray*<br/>
[out] Riferimento a una variabile di matrice di byte che riceve il valore letto dalla chiave del Registro di sistema.

*lpPoint*<br/>
[out] Riferimento a un puntatore a un `POINT` struttura che riceve il valore di lettura dalla chiave del Registro di sistema.

*Rect*<br/>
[out] Fare riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) variabile che riceve il valore di lettura dalla chiave del Registro di sistema.

*ppData*<br/>
[out] Puntatore a un puntatore ai dati che riceve il valore di lettura dalla chiave del Registro di sistema.

*pBytes*<br/>
[out] Puntatore a una variabile integer senza segno. Questa variabile riceve le dimensioni del buffer che *ppData* punta a.

*list*<br/>
[out] Fare riferimento a un [CObList](../../mfc/reference/coblist-class.md) variabile che riceve il valore di lettura dalla chiave del Registro di sistema.

*obj*<br/>
[out] Fare riferimento a un [CObject](../../mfc/reference/cobject-class.md) variabile che riceve il valore di lettura dalla chiave del Registro di sistema.

*pObj*<br/>
[out] Riferimento a un puntatore a un `CObject` variabile che riceve il valore di lettura dalla chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

`Read` verifica la presenza *pszKey* come una sottochiave della `m_hKey`.

##  <a name="write"></a>  CSettingsStore::Write

Scrive un valore nel Registro di sistema nella chiave aperta.

```
virtual BOOL Write(
    LPCTSTR pszKey,
    int iVal);

virtual BOOL Write(
    LPCTSTR pszKey,
    DWORD dwVal);

virtual BOOL Write(
    LPCTSTR pszKey,
    LPCTSTR pszVal);

virtual BOOL Write(
    LPCTSTR pszKey,
    CStringList& scStringList);

virtual BOOL Write(
    LPCTSTR pszKey,
    CByteArray& bcArray);

virtual BOOL Write(
    LPCTSTR pszKey,
    CStringArray& scArray);

virtual BOOL Write(
    LPCTSTR pszKey,
    CDWordArray& dwcArray);

virtual BOOL Write(
    LPCTSTR pszKey,
    CWordArray& wcArray);

virtual BOOL Write(
    LPCTSTR pszKey,
    const CRect& rect);

virtual BOOL Write(
    LPCTSTR pszKey,
    LPPOINT& lpPoint);

virtual BOOL Write(
    LPCTSTR pszKey,
    LPBYTE pData,
    UINT nBytes);

virtual BOOL Write(
    LPCTSTR pszKey,
    CObList& list);

virtual BOOL Write(
    LPCTSTR pszKey,
    CObject& obj);

virtual BOOL Write(
    LPCTSTR pszKey,
    CObject* pObj);
```

### <a name="parameters"></a>Parametri

*pszKey*<br/>
[in] Puntatore a una stringa che contiene il nome del valore da impostare.

*iVal*<br/>
[in] Riferimento a una variabile integer che contiene i dati da archiviare.

*dwVal*<br/>
[in] Riferimento a una variabile a 32 bit valore double word che contiene i dati da archiviare.

*pszVal*<br/>
[in] Puntatore a una variabile di stringa a terminazione null che contiene i dati da archiviare.

*scStringList*<br/>
[in] Fare riferimento a un [CStringList](../../mfc/reference/cstringlist-class.md) variabile che contiene i dati da archiviare.

*bcArray*<br/>
[in] Riferimento a una variabile di matrice di byte che contiene i dati da archiviare.

*scArray*<br/>
[in] Riferimento a una variabile di matrice di stringa che contiene i dati da archiviare.

*dwcArray*<br/>
[in] Riferimento a una variabile di matrice bit 32 valore double word che contiene i dati da archiviare.

*wcArray*<br/>
[in] Riferimento a una variabile di matrice di parole a 16 bit che contiene i dati da archiviare.

*Rect*<br/>
[in] Fare riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) variabile che contiene i dati da archiviare.

*lpPoint*<br/>
[in] Riferimento a un puntatore a un `POINT` variabile che contiene i dati da archiviare.

*pData*<br/>
[in] Puntatore a un buffer che contiene i dati da archiviare.

*nBytes*<br/>
[in] Specifica la dimensione, espressa in byte, dei dati a cui il *pData* parametro fa riferimento.

*list*<br/>
[in] Fare riferimento a un [CObList](../../mfc/reference/coblist-class.md) variabile che contiene i dati da archiviare.

*obj*<br/>
[in] Fare riferimento a un [CObject](../../mfc/reference/cobject-class.md) variabile che contiene i dati da archiviare.

*pObj*<br/>
[in] Puntatore a un puntatore a un `CObject` variabile che contiene i dati da archiviare.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per poter scrivere nel Registro di sistema, è necessario impostare *bReadOnly* su un valore diverso da zero quando si crea un [CSettingsStore](../../mfc/reference/csettingsstore-class.md) oggetto. Per altre informazioni, vedere [CSettingsStore::CSettingsStore](#csettingsstore).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
