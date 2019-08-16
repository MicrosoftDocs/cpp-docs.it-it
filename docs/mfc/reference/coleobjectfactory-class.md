---
title: Classe COleObjectFactory
ms.date: 11/04/2016
f1_keywords:
- COleObjectFactory
- AFXDISP/COleObjectFactory
- AFXDISP/COleObjectFactory::COleObjectFactory
- AFXDISP/COleObjectFactory::GetClassID
- AFXDISP/COleObjectFactory::IsLicenseValid
- AFXDISP/COleObjectFactory::IsRegistered
- AFXDISP/COleObjectFactory::Register
- AFXDISP/COleObjectFactory::RegisterAll
- AFXDISP/COleObjectFactory::Revoke
- AFXDISP/COleObjectFactory::RevokeAll
- AFXDISP/COleObjectFactory::UnregisterAll
- AFXDISP/COleObjectFactory::UpdateRegistry
- AFXDISP/COleObjectFactory::UpdateRegistryAll
- AFXDISP/COleObjectFactory::GetLicenseKey
- AFXDISP/COleObjectFactory::OnCreateObject
- AFXDISP/COleObjectFactory::VerifyLicenseKey
- AFXDISP/COleObjectFactory::VerifyUserLicense
helpviewer_keywords:
- COleObjectFactory [MFC], COleObjectFactory
- COleObjectFactory [MFC], GetClassID
- COleObjectFactory [MFC], IsLicenseValid
- COleObjectFactory [MFC], IsRegistered
- COleObjectFactory [MFC], Register
- COleObjectFactory [MFC], RegisterAll
- COleObjectFactory [MFC], Revoke
- COleObjectFactory [MFC], RevokeAll
- COleObjectFactory [MFC], UnregisterAll
- COleObjectFactory [MFC], UpdateRegistry
- COleObjectFactory [MFC], UpdateRegistryAll
- COleObjectFactory [MFC], GetLicenseKey
- COleObjectFactory [MFC], OnCreateObject
- COleObjectFactory [MFC], VerifyLicenseKey
- COleObjectFactory [MFC], VerifyUserLicense
ms.assetid: ab179c1e-4af2-44aa-a576-37c48149b427
ms.openlocfilehash: 22805550d13ecb400b151495363e5eda2dfb3b76
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69503734"
---
# <a name="coleobjectfactory-class"></a>Classe COleObjectFactory

Implementa la class factory OLE che crea oggetti OLE come server, oggetti di automazione e documenti.

## <a name="syntax"></a>Sintassi

```
class COleObjectFactory : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleObjectFactory::COleObjectFactory](#coleobjectfactory)|Costruisce un oggetto `COleObjectFactory`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[COleObjectFactory::GetClassID](#getclassid)|Restituisce l'ID di classe OLE degli oggetti creati da questa factory.|
|[COleObjectFactory::IsLicenseValid](#islicensevalid)|Determina se la licenza del controllo è valida.|
|[COleObjectFactory::IsRegistered](#isregistered)|Indica se l'object factory è registrato con le DLL di sistema OLE.|
|[COleObjectFactory:: Register](#register)|Registra questa object factory con le DLL di sistema OLE.|
|[COleObjectFactory::RegisterAll](#registerall)|Registra tutti gli oggetti factory dell'applicazione con dll di sistema OLE.|
|[COleObjectFactory::Revoke](#revoke)|Revoca la registrazione di questa factory di oggetti con le DLL di sistema OLE.|
|[COleObjectFactory::RevokeAll](#revokeall)|Revoca le registrazioni degli oggetti factory di un'applicazione con le DLL di sistema OLE.|
|[COleObjectFactory::UnregisterAll](#unregisterall)|Annulla la registrazione di tutte le factory degli oggetti di un'applicazione.|
|[COleObjectFactory::UpdateRegistry](#updateregistry)|Registra questa object factory con il registro di sistema OLE.|
|[COleObjectFactory::UpdateRegistryAll](#updateregistryall)|Registra tutti gli oggetti factory dell'applicazione con il registro di sistema OLE.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[COleObjectFactory::GetLicenseKey](#getlicensekey)|Richiede una chiave univoca dalla DLL del controllo.|
|[COleObjectFactory::OnCreateObject](#oncreateobject)|Chiamato dal Framework per creare un nuovo oggetto del tipo di questa factory.|
|[COleObjectFactory::VerifyLicenseKey](#verifylicensekey)|Verifica che la chiave incorporata nel controllo corrisponda alla chiave incorporata nel contenitore.|
|[COleObjectFactory::VerifyUserLicense](#verifyuserlicense)|Verifica che il controllo sia concesso in licenza per l'utilizzo in fase di progettazione.|

## <a name="remarks"></a>Note

La `COleObjectFactory` classe dispone di funzioni membro per l'esecuzione delle funzioni seguenti:

- Gestione della registrazione degli oggetti.

- Aggiornamento del registro di sistema OLE, oltre alla registrazione in fase di esecuzione che informa OLE che gli oggetti sono in esecuzione e sono pronti per la ricezione di messaggi.

- Applicare le licenze limitando l'uso del controllo agli sviluppatori con licenza in fase di progettazione e alle applicazioni con licenza in fase di esecuzione.

- Registrazione delle factory degli oggetti di controllo con il registro di sistema OLE.

Per ulteriori informazioni sulla creazione di oggetti, vedere gli articoli [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md) [, oggetti dati e origini dati: Creazione e distruzione](../../mfc/data-objects-and-data-sources-creation-and-destruction.md). Per ulteriori informazioni sulla registrazione, vedere l'articolo relativo alla [registrazione](../../mfc/registration.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleObjectFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="coleobjectfactory"></a>COleObjectFactory:: COleObjectFactory

Costruisce un `COleObjectFactory` oggetto, lo inizializza come Object Factory non registrato e lo aggiunge all'elenco di Factory.

```
COleObjectFactory(
    REFCLSID clsid,
    CRuntimeClass* pRuntimeClass,
    BOOL bMultiInstance,
    LPCTSTR lpszProgID);

COleObjectFactory(
    REFCLSID clsid,
    CRuntimeClass* pRuntimeClass,
    BOOL bMultiInstance,
    int nFlags,
    LPCTSTR lpszProgID);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Riferimento all'ID della classe OLE rappresentato da questa factory di oggetti.

*pRuntimeClass*<br/>
Puntatore alla classe in fase di esecuzione degli C++ oggetti che possono essere creati da questa factory.

*bMultiInstance*<br/>
Indica se una singola istanza dell'applicazione può supportare più creazioni di istanze. Se è TRUE, vengono avviate più istanze dell'applicazione per ogni richiesta di creazione di un oggetto.

*nFlags*<br/>
Contiene uno o più dei flag seguenti:

- `afxRegDefault`Imposta il modello di threading su ThreadingModel = Apartment.

- `afxRegInsertable`Consente di visualizzare il controllo nella finestra di dialogo **Inserisci oggetto** per gli oggetti OLE.

- `afxRegApartmentThreading`Imposta il modello di threading nel registro di sistema su ThreadingModel = Apartment.

- `afxRegFreeThreading`Imposta il modello di threading nel registro di sistema su ThreadingModel = Free.

   È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel = both. Per ulteriori informazioni sulla registrazione del modello di threading, vedere [InprocServer32](/windows/win32/com/inprocserver32) nel Windows SDK.

*lpszProgID*<br/>
Puntatore a una stringa che contiene un identificatore di programma verbale, ad esempio "Microsoft Excel".

### <a name="remarks"></a>Note

Per utilizzare l'oggetto, tuttavia, è necessario registrarlo.

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) nella Windows SDK.

##  <a name="getclassid"></a>COleObjectFactory:: GetClassID

Restituisce un riferimento all'ID di classe OLE rappresentato da questa factory.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ID della classe OLE rappresentato da questa factory.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere la [chiave CLSID](/windows/win32/com/clsid-key-hklm) nella Windows SDK.

##  <a name="getlicensekey"></a>COleObjectFactory:: GetLicenseKey

Richiede un codice di licenza univoco dalla DLL del controllo e lo archivia in BSTR a cui punta *pbstrKey*.

```
virtual BOOL GetLicenseKey(
    DWORD dwReserved,
    BSTR* pbstrKey);
```

### <a name="parameters"></a>Parametri

*dwReserved*<br/>
Riservato per usi futuri.

*pbstrKey*<br/>
Puntatore a un BSTR in cui viene archiviato il codice di licenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa della chiave di licenza non è NULL; in caso contrario, 0.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione restituisce 0 e non archivia alcun elemento in BSTR. Se si usa ControlWizard ActiveX MFC per creare il progetto, ControlWizard fornisce una sostituzione che recupera il codice di licenza del controllo.

##  <a name="islicensevalid"></a>COleObjectFactory:: IsLicenseValid

Determina se la licenza del controllo è valida.

```
BOOL IsLicenseValid();
```

### <a name="return-value"></a>Valore restituito

TRUE se successul; in caso contrario, false.

##  <a name="isregistered"></a>COleObjectFactory:: registered

Restituisce un valore diverso da zero se la Factory è registrata con le DLL di sistema OLE.

```
virtual BOOL IsRegistered() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la Factory è registrata. in caso contrario, 0.

##  <a name="oncreateobject"></a>COleObjectFactory:: OnCreateObject

Chiamato dal Framework per creare un nuovo oggetto.

```
virtual CCmdTarget* OnCreateObject();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto creato. Se ha esito negativo, può generare un'eccezione di memoria.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per creare l'oggetto da un elemento diverso da [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) passato al costruttore.

##  <a name="register"></a>COleObjectFactory:: Register

Registra questa object factory con le DLL di sistema OLE.

```
virtual BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la Factory è stata registrata correttamente. in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata da [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

##  <a name="registerall"></a>  COleObjectFactory::RegisterAll

Registra tutti gli oggetti factory dell'applicazione con le DLL di sistema OLE.

```
static BOOL PASCAL RegisterAll();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le factory sono state registrate correttamente. in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata da [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

##  <a name="revoke"></a>COleObjectFactory:: Revoke

Revoca la registrazione di questa factory di oggetti con le DLL di sistema OLE.

```
void Revoke();
```

### <a name="remarks"></a>Note

Il Framework chiama questa funzione automaticamente prima del termine dell'applicazione. Se necessario, chiamarlo da un override di [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).

##  <a name="revokeall"></a>  COleObjectFactory::RevokeAll

Revoca tutte le registrazioni delle factory di oggetti dell'applicazione con le DLL di sistema OLE.

```
static void PASCAL RevokeAll();
```

### <a name="remarks"></a>Note

Il Framework chiama questa funzione automaticamente prima del termine dell'applicazione. Se necessario, chiamarlo da un override di [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).

##  <a name="unregisterall"></a>COleObjectFactory:: UnregisterAll

Annulla la registrazione di tutte le factory degli oggetti di un'applicazione.

```
static BOOL PASCAL UnregisterAll();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

##  <a name="updateregistry"></a>  COleObjectFactory::UpdateRegistry

Registra tutti gli oggetti factory dell'applicazione con il registro di sistema OLE.

```
void UpdateRegistry(LPCTSTR lpszProgID = NULL);
virtual BOOL UpdateRegistry(BOOL bRegister);
```

### <a name="parameters"></a>Parametri

*lpszProgID*<br/>
Puntatore a una stringa che contiene l'identificatore del programma leggibile, ad esempio "Excel. Document. 5".

*bRegister*<br/>
Determina se deve essere registrata la factory di oggetti della classe del controllo.

### <a name="remarks"></a>Note

Le brevi discussioni dei due moduli per questa funzione seguono:

- **UpdateRegistry (** `lpszProgID` **)** registra questa object factory con il registro di sistema OLE. Questa funzione viene in genere chiamata da [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

- **UpdateRegistry (** `bRegister` **)** questo form della funzione è sottoponibile a override. Se *bRegister* è true, questa funzione registra la classe del controllo con il registro di sistema. In caso contrario, Annulla la registrazione della classe.

   Se si usa ControlWizard ActiveX MFC per creare il progetto, ControlWizard fornisce un override a questa funzione virtuale pura.

##  <a name="updateregistryall"></a>  COleObjectFactory::UpdateRegistryAll

Registra tutti gli oggetti factory dell'applicazione con il registro di sistema OLE.

```
static BOOL PASCAL UpdateRegistryAll(BOOL bRegister = TRUE);
```

### <a name="parameters"></a>Parametri

*bRegister*<br/>
Determina se deve essere registrata la factory di oggetti della classe del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le factory vengono aggiornate correttamente; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione viene in genere chiamata da [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

##  <a name="verifylicensekey"></a>COleObjectFactory:: VerifyLicenseKey

Verifica che il contenitore disponga della licenza per l'utilizzo del controllo OLE.

```
virtual BOOL VerifyLicenseKey(BSTR bstrKey);
```

### <a name="parameters"></a>Parametri

*bstrKey*<br/>
BSTR che archivia la versione del contenitore della stringa di licenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la licenza di run-time è valida; in caso contrario, 0.

### <a name="remarks"></a>Note

La versione predefinita chiama [GetLicenseKey](#getlicensekey) per ottenere una copia della stringa di licenza del controllo e la confronta con la stringa in *bstrKey*. Se le due stringhe corrispondono, la funzione restituisce un valore diverso da zero; in caso contrario, restituisce 0.

È possibile eseguire l'override di questa funzione per fornire la verifica personalizzata della licenza.

La funzione [VerifyUserLicense](#verifyuserlicense) verifica la licenza della fase di progettazione.

##  <a name="verifyuserlicense"></a>  COleObjectFactory::VerifyUserLicense

Verifica la licenza della fase di progettazione per il controllo OLE.

```
virtual BOOL VerifyUserLicense();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la licenza della fase di progettazione è valida; in caso contrario, 0.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)
