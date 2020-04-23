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
ms.openlocfilehash: 165ba7c1918c3ccc5d5d7e0bc067fba86678a3e7
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753809"
---
# <a name="coleobjectfactory-class"></a>Classe COleObjectFactory

Implementa la class factory OLE che crea oggetti OLE come server, oggetti di automazione e documenti.

## <a name="syntax"></a>Sintassi

```
class COleObjectFactory : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleObjectFactory::COleObjectFactory](#coleobjectfactory)|Costruisce un oggetto `COleObjectFactory`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleObjectFactory::GetClassID](#getclassid)|Restituisce l'ID di classe OLE degli oggetti creati da questa factory.|
|[COleObjectFactory::IsLicenseValid](#islicensevalid)|Determina se la licenza del controllo è valida.|
|[COleObjectFactory::IsRegistered](#isregistered)|Indica se la factory di oggetti è registrata con le DLL di sistema OLE.|
|[COleObjectFactory::Registra](#register)|Registra la factory di oggetti con le DLL di sistema OLE.|
|[COleObjectFactory::RegisterAll](#registerall)|Registra tutte le factory di oggetti dell'applicazione con le DLL di sistema OLE.|
|[COleObjectFactory::Revoke](#revoke)|Revoca la registrazione di questa factory di oggetti con le DLL di sistema OLE.|
|[COleObjectFactory::RevokeAll](#revokeall)|Revoca le registrazioni di un'object factory di un'applicazione con le DLL di sistema OLE.|
|[COleObjectFactory::UnregisterAll](#unregisterall)|Annulla la registrazione di tutte le factory di oggetti di un'applicazione.|
|[COleObjectFactory::UpdateRegistry (Registro di sistema)](#updateregistry)|Registra la factory di oggetti con il Registro di sistema OLE.|
|[COleObjectFactory::UpdateRegistryAll](#updateregistryall)|Registra tutte le factory di oggetti dell'applicazione con il Registro di sistema OLE.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleObjectFactory::GetLicenseKey](#getlicensekey)|Richiede una chiave univoca dalla DLL del controllo.|
|[COleObjectFactory::OnCreateObject](#oncreateobject)|Chiamato dal framework per creare un nuovo oggetto del tipo di questa factory.|
|[COleObjectFactory::VerifyLicenseKey](#verifylicensekey)|Verifica che la chiave incorporata nel controllo corrisponda alla chiave incorporata nel contenitore.|
|[COleObjectFactory::VerifyUserLicense](#verifyuserlicense)|Verifica che il controllo sia concesso in licenza per l'utilizzo in fase di progettazione.|

## <a name="remarks"></a>Osservazioni

La `COleObjectFactory` classe dispone di funzioni membro per l'esecuzione delle funzioni seguenti:The class has member functions for performing the following functions:

- Gestione della registrazione degli oggetti.

- Aggiornamento del registro di sistema OLE, nonché la registrazione in fase di esecuzione che informa OLE che gli oggetti sono in esecuzione e pronti a ricevere messaggi.

- Applicazione delle licenze limitando l'utilizzo del controllo agli sviluppatori con licenza in fase di progettazione e alle applicazioni con licenza in fase di esecuzione.

- Registrazione delle factory di oggetti di controllo con il Registro di sistema OLE.

Per ulteriori informazioni sulla creazione di oggetti, vedere gli articoli [Oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md) e Oggetti dati e origini [dati: creazione e distruzione](../../mfc/data-objects-and-data-sources-creation-and-destruction.md). Per ulteriori informazioni sulla registrazione, vedere l'articolo [Registrazione](../../mfc/registration.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleObjectFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coleobjectfactorycoleobjectfactory"></a><a name="coleobjectfactory"></a>COleObjectFactory::COleObjectFactory

Costruisce un `COleObjectFactory` oggetto, lo inizializza come factory di oggetti non registrati e lo aggiunge all'elenco di factory.

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
Riferimento all'ID di classe OLE rappresentato da questa factory di oggetti.

*pRuntimeClass (classe)*<br/>
Puntatore alla classe in fase di esecuzione degli oggetti di C , che è possibile creare da questa factory.

*bIstanzaMulti (int*<br/>
Indica se una singola istanza dell'applicazione può supportare più istanze. Se TRUE, vengono avviate più istanze dell'applicazione per ogni richiesta per creare un oggetto.

*Nflags*<br/>
Contiene uno o più dei seguenti flag:

- `afxRegDefault`Imposta il modello di threading su ThreadingModel- Apartment.

- `afxRegInsertable`Consente al controllo di essere visualizzato nella finestra di dialogo **Inserisci oggetto** per gli oggetti OLE.

- `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel.

- `afxRegFreeThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel-Free.

   È possibile combinare `afxRegApartmentThreading` i `afxRegFreeThreading` due flag e impostare ThreadingModel- Entrambi. Per ulteriori informazioni sulla registrazione del modello di threading, vedere [InprocServer32](/windows/win32/com/inprocserver32) in Windows SDK.

*lpszProgID (ID Prog)*<br/>
Puntatore a una stringa contenente un identificatore di programma verbale, ad esempio "Microsoft Excel".

### <a name="remarks"></a>Osservazioni

Per utilizzare l'oggetto, tuttavia, è necessario registrarlo.

Per ulteriori informazioni, vedere [chiave CLSID](/windows/win32/com/clsid-key-hklm) in Windows SDK.

## <a name="coleobjectfactorygetclassid"></a><a name="getclassid"></a>COleObjectFactory::GetClassID

Restituisce un riferimento all'ID di classe OLE rappresentato da questa factory.

```
REFCLSID GetClassID() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ID di classe OLE rappresentato da questa factory.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [chiave CLSID](/windows/win32/com/clsid-key-hklm) in Windows SDK.

## <a name="coleobjectfactorygetlicensekey"></a><a name="getlicensekey"></a>COleObjectFactory::GetLicenseKey

Richiede una chiave di licenza univoca dalla DLL del controllo e la archivia in BSTR a cui punta *pbstrKey*.

```
virtual BOOL GetLicenseKey(
    DWORD dwReserved,
    BSTR* pbstrKey);
```

### <a name="parameters"></a>Parametri

*dwRiservato*<br/>
Riservato per utilizzi futuri.

*pbstrKey (chiave di base)*<br/>
Puntatore a un BSTR che memorizzerà il codice di licenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa della chiave di licenza non è NULL; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione restituisce 0 e non archivia nulla in BSTR. Se si utilizza MFC ActiveX ControlWizard per creare il progetto, ControlWizard fornisce un override che recupera il codice di licenza del controllo.

## <a name="coleobjectfactoryislicensevalid"></a><a name="islicensevalid"></a>COleObjectFactory::IsLicenseValid

Determina se la licenza del controllo è valida.

```
BOOL IsLicenseValid();
```

### <a name="return-value"></a>Valore restituito

TRUEse successul; in caso contrario false.

## <a name="coleobjectfactoryisregistered"></a><a name="isregistered"></a>COleObjectFactory::IsRegistered

Restituisce un valore diverso da zero se la factory è registrata con le DLL di sistema OLE.

```
virtual BOOL IsRegistered() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la factory è registrata; in caso contrario 0.

## <a name="coleobjectfactoryoncreateobject"></a><a name="oncreateobject"></a>COleObjectFactory::OnCreateObject

Chiamato dal framework per creare un nuovo oggetto.

```
virtual CCmdTarget* OnCreateObject();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto creato. Può generare un'eccezione di memoria se ha esito negativo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per creare l'oggetto da un elemento diverso da [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) passato al costruttore.

## <a name="coleobjectfactoryregister"></a><a name="register"></a>COleObjectFactory::Registra

Registra la factory di oggetti con le DLL di sistema OLE.

```
virtual BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la factory è stata registrata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata da [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

## <a name="coleobjectfactoryregisterall"></a><a name="registerall"></a>COleObjectFactory::RegisterAll

Registra tutte le factory di oggetti dell'applicazione con le DLL di sistema OLE.

```
static BOOL PASCAL RegisterAll();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le fabbriche vengono registrate correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata da [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

## <a name="coleobjectfactoryrevoke"></a><a name="revoke"></a>COleObjectFactory::Revoke

Revoca la registrazione di questa factory di oggetti con le DLL di sistema OLE.

```cpp
void Revoke();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama automaticamente questa funzione prima che l'applicazione venga terminata. Se necessario, chiamarlo da un override di [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).

## <a name="coleobjectfactoryrevokeall"></a><a name="revokeall"></a>COleObjectFactory::RevokeAll

Revoca tutte le registrazioni delle object factory dell'applicazione con le DLL di sistema OLE.

```
static void PASCAL RevokeAll();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama automaticamente questa funzione prima che l'applicazione venga terminata. Se necessario, chiamarlo da un override di [CWinApp::ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).

## <a name="coleobjectfactoryunregisterall"></a><a name="unregisterall"></a>COleObjectFactory::UnregisterAll

Annulla la registrazione di tutte le factory di oggetti di un'applicazione.

```
static BOOL PASCAL UnregisterAll();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

## <a name="coleobjectfactoryupdateregistry"></a><a name="updateregistry"></a>COleObjectFactory::UpdateRegistry (Registro di sistema)

Registra tutte le factory di oggetti dell'applicazione con il Registro di sistema OLE.

```cpp
void UpdateRegistry(LPCTSTR lpszProgID = NULL);
virtual BOOL UpdateRegistry(BOOL bRegister);
```

### <a name="parameters"></a>Parametri

*lpszProgID (ID Prog)*<br/>
Puntatore a una stringa contenente l'identificatore di programma leggibile, ad esempio "Excel.Document.5".

*bRegistrare*<br/>
Determina se la factory di oggetti della classe del controllo deve essere registrata.

### <a name="remarks"></a>Osservazioni

Segue una breve discussione delle due forme per questa funzione:

- **UpdateRegistry(** `lpszProgID` **)** Registra la factory di oggetti con il Registro di sistema OLE. Questa funzione viene in genere chiamata da [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

- **UpdateRegistry(** `bRegister` **)** Questa forma della funzione è sottoponibile a override. Se *bRegister* è TRUE, questa funzione registra la classe del controllo con il Registro di sistema. In caso contrario, annulla la registrazione della classe.

   Se si utilizza MFC ActiveX ControlWizard per creare il progetto, ControlWizard fornisce un override a questa funzione virtuale pura.

## <a name="coleobjectfactoryupdateregistryall"></a><a name="updateregistryall"></a>COleObjectFactory::UpdateRegistryAll

Registra tutte le factory di oggetti dell'applicazione con il Registro di sistema OLE.

```
static BOOL PASCAL UpdateRegistryAll(BOOL bRegister = TRUE);
```

### <a name="parameters"></a>Parametri

*bRegistrare*<br/>
Determina se la factory di oggetti della classe del controllo deve essere registrata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se le fabbriche vengono aggiornate correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata da [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.

## <a name="coleobjectfactoryverifylicensekey"></a><a name="verifylicensekey"></a>COleObjectFactory::VerifyLicenseKey

Verifica che il contenitore sia concesso in licenza per l'utilizzo del controllo OLE.

```
virtual BOOL VerifyLicenseKey(BSTR bstrKey);
```

### <a name="parameters"></a>Parametri

*bstrKey (chiave di base)*<br/>
Oggetto BSTR che memorizza la versione del contenitore della stringa di licenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la licenza di runtime è valida; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La versione predefinita chiama [GetLicenseKey](#getlicensekey) per ottenere una copia della stringa di licenza del controllo e la confronta con la stringa in *bstrKey*. Se le due stringhe corrispondono, la funzione restituisce un valore diverso da zero; in caso contrario restituisce 0.

È possibile eseguire l'override di questa funzione per fornire la verifica personalizzata della licenza.

La funzione [VerifyUserLicense](#verifyuserlicense) verifica la licenza in fase di progettazione.

## <a name="coleobjectfactoryverifyuserlicense"></a><a name="verifyuserlicense"></a>COleObjectFactory::VerifyUserLicense

Verifica la licenza in fase di progettazione per il controllo OLE.

```
virtual BOOL VerifyUserLicense();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la licenza design-time è valida; in caso contrario 0.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)
