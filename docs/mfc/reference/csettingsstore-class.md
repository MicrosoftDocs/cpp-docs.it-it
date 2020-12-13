---
description: 'Altre informazioni su: Classe CSettingsStore'
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
ms.openlocfilehash: a1e2e52c59c4c7cf6139e1215c901a49095616b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342891"
---
# <a name="csettingsstore-class"></a>CSettingsStore Class

Esegue il wrapping di funzioni API di Windows, fornendo un'interfaccia orientata a oggetti che è possibile utilizzare per accedere al Registro di sistema.

## <a name="syntax"></a>Sintassi

```
class CSettingsStore : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSettingsStore:: CSettingsStore](#csettingsstore)|Costruisce un oggetto `CSettingsStore`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSettingsStore:: Close](#close)|Chiude la chiave del registro di sistema aperta.|
|[CSettingsStore:: CreateKey](#createkey)|Apre la chiave specificata o la crea se non esiste.|
|[CSettingsStore::D eleteKey](#deletekey)|Elimina la chiave specificata e tutti i relativi elementi figlio.|
|[CSettingsStore::D eleteValue](#deletevalue)|Elimina il valore specificato della chiave di apertura.|
|[CSettingsStore:: Open](#open)|Apre la chiave specificata.|
|[CSettingsStore:: Read](#read)|Recupera i dati per un valore di chiave specificato.|
|[CSettingsStore:: Write](#write)|Scrive un valore nel registro di sistema sotto la chiave di apertura.|

## <a name="remarks"></a>Commenti

Le funzioni membro `CreateKey` e `Open` sono molto simili. Se la chiave del registro di sistema esiste già `CreateKey` e `Open` funziona nello stesso modo. Tuttavia, se la chiave del registro di sistema non esiste, la creerà, mentre restituirà `CreateKey` `Open` un valore di errore.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i metodi Open e Read della `CSettingsStore` classe. Questo frammento di codice fa parte dell' [esempio di demo della descrizione](../../overview/visual-cpp-samples.md)comando.

[!code-cpp[NVC_MFC_ToolTipDemo#1](../../mfc/reference/codesnippet/cpp/csettingsstore-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CSettingsStore`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsettingsstore. h

## <a name="csettingsstoreclose"></a><a name="close"></a> CSettingsStore:: Close

Chiude la chiave del registro di sistema aperta.

```
virtual void Close();
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo metodo viene chiamato dal distruttore della [Classe CSettingsStore](../../mfc/reference/csettingsstore-class.md).

## <a name="csettingsstorecreatekey"></a><a name="createkey"></a> CSettingsStore:: CreateKey

Apre una chiave del registro di sistema o la crea se non esiste.

```
virtual BOOL CreateKey(LPCTSTR pszPath);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
in Specifica il nome di una chiave da creare o aprire.

### <a name="return-value"></a>Valore restituito

0 se ha esito positivo; in caso contrario, un valore diverso da zero.

### <a name="remarks"></a>Commenti

`CreateKey` USA `m_hKey` come radice delle richieste del registro di sistema. Esegue la ricerca di *pszPath* come sottochiave di `m_hKey` . Se la chiave non esiste, la `CreateKey` Crea. In caso contrario, apre la chiave. `CreateKey` imposta quindi `m_hKey` sulla chiave creata o aperta.

## <a name="csettingsstorecsettingsstore"></a><a name="csettingsstore"></a> CSettingsStore:: CSettingsStore

Crea un oggetto `CSettngsStore`.

```
CSettingsStore(
    BOOL bAdmin,
    BOOL bReadOnly);
```

### <a name="parameters"></a>Parametri

*bAdmin*<br/>
in Parametro booleano che specifica se l' `CSettingsStore` oggetto agisce in modalità amministratore.

*bReadOnly*<br/>
in Parametro booleano che specifica se l' `CSettingsStore` oggetto viene creato in modalità di sola lettura.

### <a name="remarks"></a>Commenti

Se *bAdmin* è impostato su true, la `m_hKey` variabile membro è impostata su **HKEY_LOCAL_MACHINE**. Se si imposta *bAdmin* su false, `m_hKey` viene impostato su **HKEY_CURRENT_USER**.

L'accesso di sicurezza dipende dal parametro *bReadOnly* . Se *bReadOnly* è false, l'accesso di sicurezza verrà impostato su **KEY_ALL_ACCESS**. Se *bReadyOnly* è true, l'accesso di sicurezza verrà impostato su una combinazione di **KEY_QUERY_VALUE, KEY_NOTIFY** e **KEY_ENUMERATE_SUB_KEYS**. Per ulteriori informazioni sull'accesso di sicurezza con il registro di sistema, vedere [diritti di accesso e sicurezza della chiave del registro di sistema](/windows/win32/SysInfo/registry-key-security-and-access-rights).

Distruttore per i `CSettingsStore` rilasci `m_hKey` automaticamente.

## <a name="csettingsstoredeletekey"></a><a name="deletekey"></a> CSettingsStore::D eleteKey

Elimina una chiave e tutti i relativi elementi figlio dal registro di sistema.

```
virtual BOOL DeleteKey(
    LPCTSTR pszPath,
    BOOL bAdmin = FALSE);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
in Nome della chiave da eliminare.

*bAdmin*<br/>
in Opzione che specifica la posizione della chiave da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Questo metodo avrà esito negativo se l' `CSettingsStore` oggetto è in modalità di sola lettura.

Se il parametro *bAdmin* è zero, `DeleteKey` Cerca la chiave da eliminare in **HKEY_CURRENT_USER**. Se *bAdmin* è diverso da zero, `DeleteKey` Cerca la chiave da eliminare in **HKEY_LOCAL_MACHINE**.

## <a name="csettingsstoredeletevalue"></a><a name="deletevalue"></a> CSettingsStore::D eleteValue

Elimina un valore da `m_hKey` .

```
virtual BOOL DeleteValue(LPCTSTR pszValue);
```

### <a name="parameters"></a>Parametri

*pszValue*<br/>
in Specifica il campo del valore da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="csettingsstoreopen"></a><a name="open"></a> CSettingsStore:: Open

Apre una chiave del registro di sistema.

```
virtual BOOL Open(LPCTSTR pszPath);
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
in Nome di una chiave del registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Quando questo metodo apre correttamente la chiave specificata, imposta `m_hKey` sull'handle della chiave.

## <a name="csettingsstoreread"></a><a name="read"></a> CSettingsStore:: Read

Legge un valore da una chiave nel registro di sistema.

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
in Puntatore a una stringa con terminazione null che contiene il nome del valore da leggere dal registro di sistema.

*iVal*<br/>
out Riferimento a una variabile integer che riceve il valore letto dalla chiave del registro di sistema.

*dwVal*<br/>
out Riferimento a una variabile Double Word a 32 bit che riceve il valore letto dalla chiave del registro di sistema.

*sVal*<br/>
out Riferimento a una variabile stringa che riceve il valore letto dalla chiave del registro di sistema.

*scStringList*<br/>
out Riferimento a una variabile di elenco di stringhe che riceve il valore letto dalla chiave del registro di sistema.

*scArray*<br/>
out Riferimento a una variabile di matrice di stringhe che riceve il valore letto dalla chiave del registro di sistema.

*dwcArray*<br/>
out Riferimento a una variabile di matrice di due parole a 32 bit che riceve il valore letto dalla chiave del registro di sistema.

*wcArray*<br/>
out Riferimento a una variabile di matrice di Word a 16 bit che riceve il valore letto dalla chiave del registro di sistema.

*bcArray*<br/>
out Riferimento a una variabile di matrice di byte che riceve il valore letto dalla chiave del registro di sistema.

*lpPoint*<br/>
out Riferimento a un puntatore a una `POINT` struttura che riceve il valore letto dalla chiave del registro di sistema.

*Rect*<br/>
out Riferimento a una variabile [CRect](../../atl-mfc-shared/reference/crect-class.md) che riceve il valore letto dalla chiave del registro di sistema.

*ppData*<br/>
out Puntatore a un puntatore ai dati che riceve il valore letto dalla chiave del registro di sistema.

*pBytes*<br/>
out Puntatore a una variabile Unsigned Integer. Questa variabile riceve la dimensione del buffer a cui punta *ppData* .

*list*<br/>
out Riferimento a una variabile [CObList](../../mfc/reference/coblist-class.md) che riceve il valore letto dalla chiave del registro di sistema.

*obj*<br/>
out Riferimento a una variabile [CObject](../../mfc/reference/cobject-class.md) che riceve il valore letto dalla chiave del registro di sistema.

*pObj*<br/>
out Riferimento a un puntatore a una `CObject` variabile che riceve il valore letto dalla chiave del registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

`Read` Verifica se *pszKey* è una sottochiave di `m_hKey` .

## <a name="csettingsstorewrite"></a><a name="write"></a> CSettingsStore:: Write

Scrive un valore nel registro di sistema sotto la chiave di apertura.

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
in Puntatore a una stringa che contiene il nome del valore da impostare.

*iVal*<br/>
in Riferimento a una variabile integer che contiene i dati da archiviare.

*dwVal*<br/>
in Riferimento a una variabile Double Word a 32 bit che contiene i dati da archiviare.

*pszVal*<br/>
in Puntatore a una variabile di stringa con terminazione null che contiene i dati da archiviare.

*scStringList*<br/>
in Riferimento a una variabile di [CString](../../mfc/reference/cstringlist-class.md) in cui sono contenuti i dati da archiviare.

*bcArray*<br/>
in Riferimento a una variabile di matrice di byte che contiene i dati da archiviare.

*scArray*<br/>
in Riferimento a una variabile di matrice di stringhe che contiene i dati da archiviare.

*dwcArray*<br/>
in Riferimento a una variabile di matrice di due parole a 32 bit che contiene i dati da archiviare.

*wcArray*<br/>
in Riferimento a una variabile di matrice di Word a 16 bit che contiene i dati da archiviare.

*Rect*<br/>
in Riferimento a una variabile [CRect](../../atl-mfc-shared/reference/crect-class.md) che contiene i dati da archiviare.

*lpPoint*<br/>
in Riferimento a un puntatore a una `POINT` variabile che contiene i dati da archiviare.

*pData*<br/>
in Puntatore a un buffer che contiene i dati da archiviare.

*nBytes*<br/>
in Specifica la dimensione, in byte, dei dati a cui punta il parametro *pData* .

*list*<br/>
in Riferimento a una variabile [CObList](../../mfc/reference/coblist-class.md) che contiene i dati da archiviare.

*obj*<br/>
in Riferimento a una variabile [CObject](../../mfc/reference/cobject-class.md) che contiene i dati da archiviare.

*pObj*<br/>
in Puntatore a un puntatore a una `CObject` variabile che contiene i dati da archiviare.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Per scrivere nel registro di sistema, è necessario impostare *bReadOnly* su un valore diverso da zero quando si crea un oggetto [CSettingsStore](../../mfc/reference/csettingsstore-class.md) . Per ulteriori informazioni, vedere [CSettingsStore:: CSettingsStore](#csettingsstore).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
