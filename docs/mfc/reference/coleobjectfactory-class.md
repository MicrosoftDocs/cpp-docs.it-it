---
title: COleObjectFactory (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 706cc03e3f0a074e68d0e92acdce5a747552819b
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038208"
---
# <a name="coleobjectfactory-class"></a>COleObjectFactory (classe)
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
|[COleObjectFactory::GetClassID](#getclassid)|ID di questa factory crea gli oggetti della classe restituisce OLE.|  
|[COleObjectFactory::IsLicenseValid](#islicensevalid)|Determina se la licenza del controllo è valida.|  
|[COleObjectFactory::IsRegistered](#isregistered)|Indica se l'object factory è registrato con il sistema OLE DLL.|  
|[COleObjectFactory::Register](#register)|Registra l'object factory con DLL del sistema OL.|  
|[COleObjectFactory:: RegisterAll](#registerall)|Registra tutte le factory di oggetti dell'applicazione con le DLL di sistema OLE.|  
|[COleObjectFactory::Revoke](#revoke)|Revoca la registrazione di questo oggetto factory di DLL del sistema OL.|  
|[COleObjectFactory::RevokeAll](#revokeall)|Revoca le registrazioni factory oggetto di un'applicazione con le DLL di sistema OLE.|  
|[COleObjectFactory::UnregisterAll](#unregisterall)|Annulla la registrazione di tutte le factory di oggetti dell'applicazione.|  
|[COleObjectFactory::UpdateRegistry](#updateregistry)|Registra l'object factory con il Registro di sistema OLE.|  
|[COleObjectFactory:: UpdateRegistryAll](#updateregistryall)|Registra tutte le factory di oggetti dell'applicazione con il Registro di sistema OLE.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleObjectFactory::GetLicenseKey](#getlicensekey)|Richiede una chiave univoca della DLL del controllo.|  
|[COleObjectFactory::OnCreateObject](#oncreateobject)|Chiamato dal framework per creare un nuovo oggetto di questo tipo di factory.|  
|[COleObjectFactory::VerifyLicenseKey](#verifylicensekey)|Verifica che la chiave incorporata nel controllo corrisponde alla chiave incorporata nel contenitore.|  
|[COleObjectFactory::VerifyUserLicense](#verifyuserlicense)|Verifica che il controllo è consentito l'utilizzo in fase di progettazione.|  
  
## <a name="remarks"></a>Note  
 Il `COleObjectFactory` classe ha funzioni membro per le funzioni seguenti:  
  
-   Gestire la registrazione degli oggetti.  
  
-   Aggiornare il Registro di sistema OLE, nonché la registrazione di runtime che informano OLE che gli oggetti sono in esecuzione e pronta a ricevere messaggi.  
  
-   L'imposizione di licenza, limitando l'utilizzo del controllo per gli sviluppatori concesso in licenza in fase di progettazione e per le applicazioni con licenza in fase di esecuzione.  
  
-   Registrazione di controllo object factory con il Registro di sistema OLE.  
  
 Per ulteriori informazioni sulla creazione di oggetti, vedere gli articoli [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md) e [oggetti dati e origini dati: creazione e distruzione](../../mfc/data-objects-and-data-sources-creation-and-destruction.md). Per ulteriori informazioni sulla registrazione, vedere l'articolo [registrazione](../../mfc/registration.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleObjectFactory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="coleobjectfactory"></a>  COleObjectFactory::COleObjectFactory  
 Costruisce un `COleObjectFactory` oggetto, viene inizializzato come una factory di oggetti non registrati e lo aggiunge all'elenco di factory.  
  
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
 *clsid*  
 Riferimento all'ID di classe OLE rappresenta questo oggetto factory.  
  
 *pRuntimeClass*  
 Puntatore alla classe di runtime degli oggetti C++ che può creare questa factory.  
  
 *bMultiInstance*  
 Indica se una singola istanza dell'applicazione può supportare più creazioni di istanza. Se **TRUE**, più istanze dell'applicazione vengono avviate per ogni richiesta creare un oggetto.  
  
 *nFlags*  
 Contiene uno o più dei flag seguenti:  
  
- **afxRegDefault** imposta il modello di threading per ThreadingModel = Apartment.  
  
- **afxRegInsertable** consente il controllo venga visualizzato nel **Inserisci oggetto** finestra di dialogo per gli oggetti OLE.  
  
- **afxRegApartmentThreading** imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.  
  
- **afxRegFreeThreading** imposta il modello di threading nel Registro di sistema ThreadingModel = gratuito.  
  
     È possibile combinare le due contrassegni `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel impostato su Both. Vedere [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) in Windows SDK per ulteriori informazioni sulla registrazione di modello di threading.  
  
 *lpszProgID*  
 Puntatore a una stringa contenente un ID di programma verbali, ad esempio "Microsoft Excel".  
  
### <a name="remarks"></a>Note  
 Per utilizzare l'oggetto, tuttavia, è necessario registrarlo.  
  
 Per altre informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) in Windows SDK.  
  
##  <a name="getclassid"></a>  COleObjectFactory::GetClassID  
 Restituisce un riferimento all'ID di classe OLE rappresenta questo factory.  
  
```  
REFCLSID GetClassID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'ID di classe questa factory OLE rappresenta.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) in Windows SDK.  
  
##  <a name="getlicensekey"></a>  COleObjectFactory::GetLicenseKey  
 Richiede una chiave di licenza univoca di DLL del controllo e lo archivia nel `BSTR` a cui punta *pbstrKey*.  
  
```  
virtual BOOL GetLicenseKey(
    DWORD dwReserved,  
    BSTR* pbstrKey);
```  
  
### <a name="parameters"></a>Parametri  
 *dwReserved*  
 Riservato per utilizzi futuri.  
  
 *pbstrKey*  
 Puntatore a un `BSTR` che archivierà il codice di licenza.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la stringa di codice di licenza non è **NULL**; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione restituisce 0 e archivia nulla nel `BSTR`. Se si utilizza la creazione guidata controllo ActiveX MFC per creare il progetto, la creazione guidata controllo fornisce una sostituzione che recupera il codice di licenza del controllo.  
  
##  <a name="islicensevalid"></a>  COleObjectFactory::IsLicenseValid  
 Determina se la licenza del controllo è valida.  
  
```  
BOOL IsLicenseValid();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se installazione; in caso contrario false.  
  
##  <a name="isregistered"></a>  COleObjectFactory::IsRegistered  
 Restituisce un valore diverso da zero se la factory è registrata con il sistema OLE DLL.  
  
```  
virtual BOOL IsRegistered() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory è stata registrata; in caso contrario 0.  
  
##  <a name="oncreateobject"></a>  COleObjectFactory::OnCreateObject  
 Chiamato dal framework per creare un nuovo oggetto.  
  
```  
virtual CCmdTarget* OnCreateObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto creato. Può generare un'eccezione di memoria se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per creare l'oggetto da un elemento diverso dal [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) passato al costruttore.  
  
##  <a name="register"></a>  COleObjectFactory::Register  
 Registra l'object factory con DLL del sistema OL.  
  
```  
virtual BOOL Register();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory è registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente dal [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
##  <a name="registerall"></a>  COleObjectFactory:: RegisterAll  
 Registra tutte le factory di oggetti dell'applicazione con le DLL di sistema OLE.  
  
```  
static BOOL PASCAL RegisterAll();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory sono registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente dal [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
##  <a name="revoke"></a>  COleObjectFactory::Revoke  
 Revoca la registrazione di questo oggetto factory di DLL del sistema OL.  
  
```  
void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione automaticamente prima della chiusura dell'applicazione. Se necessario, chiamarlo da un override di [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).  
  
##  <a name="revokeall"></a>  COleObjectFactory::RevokeAll  
 Revoca tutte le registrazioni object factory dell'applicazione con le DLL di sistema OLE.  
  
```  
static void PASCAL RevokeAll();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione automaticamente prima della chiusura dell'applicazione. Se necessario, chiamarlo da un override di [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).  
  
##  <a name="unregisterall"></a>  COleObjectFactory::UnregisterAll  
 Annulla la registrazione di tutte le factory di oggetti dell'applicazione.  
  
```  
static BOOL PASCAL UnregisterAll();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'operazione riesce; in caso contrario, FALSE.  
  
##  <a name="updateregistry"></a>  COleObjectFactory::UpdateRegistry  
 Registra tutte le factory di oggetti dell'applicazione con il Registro di sistema OLE.  
  
```  
void UpdateRegistry(LPCTSTR lpszProgID = NULL);  
virtual BOOL UpdateRegistry(BOOL bRegister);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszProgID*  
 Puntatore a una stringa contenente l'ID di programma leggibile dall'utente, ad esempio "Excel.Document.5".  
  
 *bRegistrazione immediata*  
 Determina se la factory di oggetto della classe del controllo da registrare.  
  
### <a name="remarks"></a>Note  
 Seguono le discussioni breve le due forme per questa funzione:  
  
- **UpdateRegistry (** `lpszProgID` **)** registra l'object factory con il Registro di sistema OLE. Questa funzione viene chiamata generalmente dal [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
- **UpdateRegistry (** `bRegister` **)** questa forma della funzione è sottoponibile a override. Se *bRegistrazione immediata* viene **TRUE**, questa funzione registra la classe del controllo con il Registro di sistema. In caso contrario, Annulla la registrazione della classe.  
  
     Se si utilizza la creazione guidata controllo ActiveX MFC per creare il progetto, la creazione guidata controllo fornisce un override di questa funzione virtuale pura.  
  
##  <a name="updateregistryall"></a>  COleObjectFactory:: UpdateRegistryAll  
 Registra tutte le factory di oggetti dell'applicazione con il Registro di sistema OLE.  
  
```  
static BOOL PASCAL UpdateRegistryAll(BOOL bRegister = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bRegistrazione immediata*  
 Determina se la factory di oggetto della classe del controllo da registrare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory vengano aggiornate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente dal [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
##  <a name="verifylicensekey"></a>  COleObjectFactory::VerifyLicenseKey  
 Verifica che il contenitore è concesso in licenza per l'utilizzo del controllo OLE.  
  
```  
virtual BOOL VerifyLicenseKey(BSTR bstrKey);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrKey*  
 Oggetto `BSTR` archiviare la versione del contenitore della stringa di licenza.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la licenza in fase di esecuzione è valida. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le chiamate di versione predefinito [GetLicenseKey](#getlicensekey) per ottenere una copia del controllo della stringa di licenza e lo confronta con la stringa nella *bstrKey*. Se le due stringhe corrispondono, la funzione restituisce un valore diverso da zero. in caso contrario restituirà 0.  
  
 È possibile eseguire l'override di questa funzione per fornire una verifica personalizzata della licenza.  
  
 La funzione [VerifyUserLicense](#verifyuserlicense) verifica la licenza in fase di progettazione.  
  
##  <a name="verifyuserlicense"></a>  COleObjectFactory::VerifyUserLicense  
 Verifica la licenza in fase di progettazione per il controllo OLE.  
  
```  
virtual BOOL VerifyUserLicense();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la licenza design-time è valida. in caso contrario 0.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)
