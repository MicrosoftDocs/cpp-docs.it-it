---
title: Classe CSettingsStore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSettingsStore
dev_langs:
- C++
helpviewer_keywords:
- CSettingsStore class
ms.assetid: 0ea181de-a13e-4b29-b560-7c43838223ff
caps.latest.revision: 29
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0b07f6b12e178d8e324313ea3b0f6de9ae7420c9
ms.openlocfilehash: 0918c8dd9b6284adecb61bc95ddfd41c22d16cb8
ms.lasthandoff: 02/24/2017

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
|[CSettingsStore::Close](#close)|Chiude la chiave del Registro di sistema aprire.|  
|[CSettingsStore::CreateKey](#createkey)|Apre la chiave specificata o crea se non esiste.|  
|[CSettingsStore::DeleteKey](#deletekey)|Elimina la chiave specificata e tutti gli elementi figlio.|  
|[CSettingsStore::DeleteValue](#deletevalue)|Elimina il valore della chiave aperta specificato.|  
|[CSettingsStore::Open](#open)|Apre la chiave specificata.|  
|[CSettingsStore::Read](#read)|Recupera i dati per un valore di chiave specificato.|  
|[CSettingsStore::Write](#write)|Scrive un valore di aprire la chiave del Registro di sistema.|  
  
## <a name="remarks"></a>Note  
 Le funzioni membro `CreateKey` e `Open` sono molto simili. Se la chiave del Registro di sistema esiste già, `CreateKey` e `Open` funzione nello stesso modo. Tuttavia, se la chiave del Registro di sistema non esiste, `CreateKey` verrà creato mentre `Open` restituirà un valore di errore.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i metodi Open e lettura della `CSettingsStore` classe. Questo frammento di codice fa parte di [esempio dimostrativo suggerimento strumento](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_ToolTipDemo n.&1;](../../mfc/reference/codesnippet/cpp/csettingsstore-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CSettingsStore`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxsettingsstore.h  
  
##  <a name="a-nameclosea--csettingsstoreclose"></a><a name="close"></a>CSettingsStore::Close  
 Chiude la chiave del Registro di sistema aprire.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo viene chiamato dal distruttore di [CSettingsStore classe](../../mfc/reference/csettingsstore-class.md).  
  
##  <a name="a-namecreatekeya--csettingsstorecreatekey"></a><a name="createkey"></a>CSettingsStore::CreateKey  
 Apre una chiave del Registro di sistema o lo crea se non esiste.  
  
```  
virtual BOOL CreateKey(LPCTSTR pszPath);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pszPath`  
 Specifica il nome di una chiave può essere creato o aperto.  
  
### <a name="return-value"></a>Valore restituito  
 0 se ha esito positivo. in caso contrario un valore diverso da zero.  
  
### <a name="remarks"></a>Note  
 `CreateKey`utilizza `m_hKey` come radice di richieste di informazioni del Registro di sistema. Cerca `pszPath` come sottochiave di `m_hKey`. Se la chiave non esiste, `CreateKey` crearla. In caso contrario, verrà aperta la chiave. `CreateKey`Imposta quindi `m_hKey` per la chiave creata o aperta.  
  
##  <a name="a-namecsettingsstorea--csettingsstorecsettingsstore"></a><a name="csettingsstore"></a>CSettingsStore::CSettingsStore  
 Crea un oggetto `CSettngsStore`.  
  
```  
CSettingsStore(
    BOOL bAdmin,  
    BOOL bReadOnly);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAdmin`  
 Parametro booleano che specifica se il `CSettingsStore` oggetto opera in modalità amministratore.  
  
 [in] `bReadOnly`  
 Parametro booleano che specifica se il `CSettingsStore` oggetto viene creato in modalità sola lettura.  
  
### <a name="remarks"></a>Note  
 Se `bAdmin` è impostato su `false`, `m_hKey` variabile membro è impostata su `HKEY_LOCAL_MACHINE`. If you set `bAdmin` to `true`, `m_hKey` is set to `HKEY_CURRENT_USER`.  
  
 L'accesso di sicurezza dipende il `bReadOnly` parametro. Se `bReadonly` è `false`, l'accesso di sicurezza verrà impostato su `KEY_ALL_ACCESS`. Se `bReadyOnly` è `true`, l'accesso di sicurezza verrà impostato su una combinazione di `KEY_QUERY_VALUE, KEY_NOTIFY` e `KEY_ENUMERATE_SUB_KEYS`. Per ulteriori informazioni sull'accesso di sicurezza con il Registro di sistema, vedere [diritti di accesso e sicurezza della chiave del Registro di sistema](http://msdn.microsoft.com/library/windows/desktop/ms724878).  
  
 Il distruttore per `CSettingsStore` rilascia `m_hKey` automaticamente.  
  
##  <a name="a-namedeletekeya--csettingsstoredeletekey"></a><a name="deletekey"></a>CSettingsStore::DeleteKey  
 Elimina una chiave e i relativi elementi figlio dal Registro di sistema.  
  
```  
virtual BOOL DeleteKey(
    LPCTSTR pszPath,  
    BOOL bAdmin = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pszPath`  
 Il nome della chiave da eliminare.  
  
 [in] `bAdmin`  
 Opzione che specifica il percorso della chiave da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo avrà esito negativo se il `CSettingsStore` oggetto si trova in modalità sola lettura.  
  
 Se il parametro `bAdmin` è zero, `DeleteKey` Cerca la chiave da eliminare in `HKEY_CURRENT_USER`. Se `bAdmin` è diverso da zero, `DeleteKey` Cerca la chiave da eliminare in `HKEY_LOCAL_MACHINE`.  
  
##  <a name="a-namedeletevaluea--csettingsstoredeletevalue"></a><a name="deletevalue"></a>CSettingsStore::DeleteValue  
 Elimina un valore da `m_hKey`.  
  
```  
virtual BOOL DeleteValue(LPCTSTR pszValue);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pszValue`  
 Specifica il campo valore da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="a-nameopena--csettingsstoreopen"></a><a name="open"></a>CSettingsStore::Open  
 Apre una chiave del Registro di sistema.  
  
```  
virtual BOOL Open(LPCTSTR pszPath);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pszPath`  
 Il nome di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Dopo che questo metodo viene aperto correttamente la chiave specificata, viene impostato `m_hKey` per l'handle della chiave.  
  
##  <a name="a-namereada--csettingsstoreread"></a><a name="read"></a>CSettingsStore::Read  
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
 [in] `pszKey`  
 Puntatore a una stringa con terminazione null che contiene il nome del valore per la lettura dal Registro di sistema.  
  
 [out] `iVal`  
 Riferimento a una variabile integer che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `dwVal`  
 Riferimento a una variabile parola doppia a 32 bit che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `sVal`  
 Riferimento a una variabile di stringa che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `scStringList`  
 Riferimento a una variabile di elenco di stringhe che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `scArray`  
 Riferimento a una variabile di matrice di stringa che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `dwcArray`  
 Riferimento a una variabile di matrice parola doppia a 32 bit che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `wcArray`  
 Riferimento a una variabile di matrice di word a 16 bit che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `bcArray`  
 Riferimento a una variabile di matrice di byte che riceve il valore letto dalla chiave del Registro di sistema.  
  
 [out] `lpPoint`  
 Riferimento a un puntatore a un `POINT` struttura che riceve il valore di lettura dalla chiave del Registro di sistema.  
  
 [out] `rect`  
 Fare riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) variabile che riceve il valore di lettura dalla chiave del Registro di sistema.  
  
 [out] `ppData`  
 Puntatore a un puntatore ai dati che riceve il valore di lettura dalla chiave del Registro di sistema.  
  
 [out] `pBytes`  
 Puntatore a una variabile integer senza segno. Questa variabile riceve le dimensioni del buffer che `ppData` punta a.  
  
 [out] `list`  
 Fare riferimento a un [CObList](../../mfc/reference/coblist-class.md) variabile che riceve il valore di lettura dalla chiave del Registro di sistema.  
  
 [out] `obj`  
 Fare riferimento a un [CObject](../../mfc/reference/cobject-class.md) variabile che riceve il valore di lettura dalla chiave del Registro di sistema.  
  
 [out] `pObj`  
 Riferimento a un puntatore a un `CObject` variabile che riceve il valore di lettura dalla chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `Read`Cerca `pszKey` come sottochiave di `m_hKey`.  
  
##  <a name="a-namewritea--csettingsstorewrite"></a><a name="write"></a>CSettingsStore::Write  
 Scrive un valore di aprire la chiave del Registro di sistema.  
  
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
 [in] `pszKey`  
 Puntatore a una stringa che contiene il nome del valore da impostare.  
  
 [in] `iVal`  
 Riferimento a una variabile integer che contiene i dati da archiviare.  
  
 [in] `dwVal`  
 Riferimento a una variabile parola doppia a 32 bit che contiene i dati da archiviare.  
  
 [in] `pszVal`  
 Puntatore a una variabile di stringa con terminazione null che contiene i dati da archiviare.  
  
 [in] `scStringList`  
 Fare riferimento a un [oggetto CStringList](../../mfc/reference/cstringlist-class.md) variabile che contiene i dati da archiviare.  
  
 [in] `bcArray`  
 Riferimento a una variabile di matrice di byte che contiene i dati da archiviare.  
  
 [in] `scArray`  
 Riferimento a una variabile di matrice di stringa che contiene i dati da archiviare.  
  
 [in] `dwcArray`  
 Riferimento a una variabile di matrice parola doppia a 32 bit che contiene i dati da archiviare.  
  
 [in] `wcArray`  
 Riferimento a una variabile di matrice di word a 16 bit che contiene i dati da archiviare.  
  
 [in] `rect`  
 Fare riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) variabile che contiene i dati da archiviare.  
  
 [in] `lpPoint`  
 Riferimento a un puntatore a un `POINT` variabile che contiene i dati da archiviare.  
  
 [in] `pData`  
 Puntatore a un buffer contenente i dati da archiviare.  
  
 [in] `nBytes`  
 Specifica la dimensione, in byte, dei dati a cui il `pData` parametro fa riferimento.  
  
 [in] `list`  
 Fare riferimento a un [CObList](../../mfc/reference/coblist-class.md) variabile che contiene i dati da archiviare.  
  
 [in] `obj`  
 Fare riferimento a un [CObject](../../mfc/reference/cobject-class.md) variabile che contiene i dati da archiviare.  
  
 [in] `pObj`  
 Puntatore a un puntatore a un `CObject` variabile che contiene i dati da archiviare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per poter scrivere nel Registro di sistema, è necessario impostare `bReadOnly` su un valore diverso da zero quando si crea un [CSettingsStore](../../mfc/reference/csettingsstore-class.md) oggetto. Per ulteriori informazioni, vedere [CSettingsStore::CSettingsStore](#csettingsstore).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)

