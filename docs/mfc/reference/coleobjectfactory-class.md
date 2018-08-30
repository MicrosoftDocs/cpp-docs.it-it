---
title: Classe COleObjectFactory | Microsoft Docs
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
ms.openlocfilehash: 656500e69f97481c90cdbea41b8c640f470e7b1c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210017"
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
|[COleObjectFactory::GetClassID](#getclassid)|Restituisce il OLE ID che questa factory crea automaticamente gli oggetti della classe.|  
|[COleObjectFactory::IsLicenseValid](#islicensevalid)|Determina se la licenza del controllo è valida.|  
|[COleObjectFactory::IsRegistered](#isregistered)|Indica se l'object factory sia registrato con la DLL di sistema OLE.|  
|[COleObjectFactory::Register](#register)|Registra questa factory di oggetto con le DLL di sistema OLE.|  
|[COleObjectFactory:: RegisterAll](#registerall)|Registra tutte le factory di oggetto dell'applicazione con le DLL di sistema OLE.|  
|[COleObjectFactory::Revoke](#revoke)|Revoca la registrazione della factory questo oggetto con le DLL di sistema OLE.|  
|[COleObjectFactory::RevokeAll](#revokeall)|Revoca delle registrazioni factory oggetto di un'applicazione con le DLL di sistema OLE.|  
|[COleObjectFactory::UnregisterAll](#unregisterall)|Annulla la registrazione di tutte le factory di oggetto di un'applicazione.|  
|[COleObjectFactory::UpdateRegistry](#updateregistry)|Registra questa factory dell'oggetto con il Registro di sistema OLE.|  
|[COleObjectFactory:: UpdateRegistryAll](#updateregistryall)|Registra tutte le factory di oggetto dell'applicazione con il Registro di sistema OLE.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleObjectFactory::GetLicenseKey](#getlicensekey)|Richiede una chiave univoca della DLL del controllo.|  
|[COleObjectFactory::OnCreateObject](#oncreateobject)|Chiamato dal framework per creare un nuovo oggetto di questo tipo di factory.|  
|[COleObjectFactory::VerifyLicenseKey](#verifylicensekey)|Verifica che la chiave incorporata nel controllo corrisponda alla chiave incorporata nel contenitore.|  
|[COleObjectFactory::VerifyUserLicense](#verifyuserlicense)|Verifica che il controllo ha una licenza per l'uso in fase di progettazione.|  
  
## <a name="remarks"></a>Note  
 Il `COleObjectFactory` classe ha funzioni membro per le funzioni seguenti:  
  
-   Gestire la registrazione di oggetti.  
  
-   Aggiornare il Registro di sistema OLE, nonché la registrazione di runtime che informi OLE che gli oggetti sono in esecuzione e pronto per ricevere i messaggi.  
  
-   L'applicazione di gestione delle licenze, limitando l'uso del controllo con licenza sviluppatori in fase di progettazione e in applicazioni con licenza in fase di esecuzione.  
  
-   Registrazione di controllo oggetto factory con il Registro di sistema OLE.  
  
 Per altre informazioni sulla creazione di oggetti, vedere gli articoli [oggetti dati e origini dati (OLE)](../../mfc/data-objects-and-data-sources-ole.md) e [oggetti dati e origini dati: creazione e distruzione](../../mfc/data-objects-and-data-sources-creation-and-destruction.md). Per altre informazioni sulla registrazione, vedere l'articolo [registrazione](../../mfc/registration.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleObjectFactory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="coleobjectfactory"></a>  COleObjectFactory::COleObjectFactory  
 Costruisce un `COleObjectFactory` oggetto, viene inizializzato come una factory di oggetto non registrato e lo aggiunge all'elenco di factory.  
  
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
 Riferimento a questo oggetto factory rappresenta l'ID della classe OLE.  
  
 *pRuntimeClass*  
 Puntatore alla classe di runtime degli oggetti C++ che questo factory la crea.  
  
 *bMultiInstance*  
 Indica se una singola istanza dell'applicazione può supportare più creazioni di istanza. Se TRUE, più istanze dell'applicazione vengono avviate per ogni richiesta creare un oggetto.  
  
 *nFlags*  
 Contiene uno o più dei flag seguenti:  
  
- `afxRegDefault` Imposta il modello di threading su ThreadingModel = Apartment.  
  
- `afxRegInsertable` Consente il controllo venga visualizzato nei **Inserisci oggetto** finestra di dialogo per gli oggetti OLE.  
  
- `afxRegApartmentThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.  
  
- `afxRegFreeThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = gratuito.  
  
     È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel impostato su Both. Visualizzare [InprocServer32](/windows/desktop/com/inprocserver32) nel SDK di Windows per ulteriori informazioni sulla registrazione del modello di threading.  
  
 *lpszProgID*  
 Puntatore a una stringa contenente un identificatore di programma verbali, ad esempio "Microsoft Excel."  
  
### <a name="remarks"></a>Note  
 Per usare l'oggetto, tuttavia, è necessario registrarlo.  
  
 Per altre informazioni, vedere [CLSID chiave](/windows/desktop/com/clsid-key-hklm) nel SDK di Windows.  
  
##  <a name="getclassid"></a>  COleObjectFactory::GetClassID  
 Restituisce un riferimento a questa factory rappresenta l'ID della classe OLE.  
  
```  
REFCLSID GetClassID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'ID della classe OLE questa factory rappresenta.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [CLSID chiave](/windows/desktop/com/clsid-key-hklm) nel SDK di Windows.  
  
##  <a name="getlicensekey"></a>  COleObjectFactory::GetLicenseKey  
 Richiede una chiave di licenza univoca da DLL del controllo e la archivia in BSTR a cui punta *pbstrKey*.  
  
```  
virtual BOOL GetLicenseKey(
    DWORD dwReserved,  
    BSTR* pbstrKey);
```  
  
### <a name="parameters"></a>Parametri  
 *dwReserved*  
 Riservato per utilizzi futuri.  
  
 *pbstrKey*  
 Puntatore a un BSTR che verrà archiviata la chiave di licenza.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la stringa di codice di licenza non è NULL. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione restituisce 0 e non archivia niente in BSTR. Se si usa la creazione guidata controllo ActiveX MFC per creare il progetto, la creazione guidata controllo fornisce una sostituzione che consente di recuperare la chiave di licenza del controllo.  
  
##  <a name="islicensevalid"></a>  COleObjectFactory::IsLicenseValid  
 Determina se la licenza del controllo è valida.  
  
```  
BOOL IsLicenseValid();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'installazione; in caso contrario, false.  
  
##  <a name="isregistered"></a>  COleObjectFactory::IsRegistered  
 Restituisce un valore diverso da zero se la factory è registrata con il sistema OLE DLL.  
  
```  
virtual BOOL IsRegistered() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory viene registrata; in caso contrario 0.  
  
##  <a name="oncreateobject"></a>  COleObjectFactory::OnCreateObject  
 Chiamato dal framework per creare un nuovo oggetto.  
  
```  
virtual CCmdTarget* OnCreateObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto creato. Può generare un'eccezione di memoria in caso di errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per creare l'oggetto da un elemento diverso dal [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) passato al costruttore.  
  
##  <a name="register"></a>  COleObjectFactory::Register  
 Registra questa factory di oggetto con le DLL di sistema OLE.  
  
```  
virtual BOOL Register();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory viene registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente dal [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
##  <a name="registerall"></a>  COleObjectFactory:: RegisterAll  
 Registra tutte le factory di oggetto dell'applicazione con le DLL di sistema OLE.  
  
```  
static BOOL PASCAL RegisterAll();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory vengono correttamente registrate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente dal [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
##  <a name="revoke"></a>  COleObjectFactory::Revoke  
 Revoca la registrazione della factory questo oggetto con le DLL di sistema OLE.  
  
```  
void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione automaticamente prima che l'applicazione viene terminata. Se necessario, chiamarlo da un override di [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).  
  
##  <a name="revokeall"></a>  COleObjectFactory::RevokeAll  
 Revoca tutte le registrazioni delle factory di oggetto dell'applicazione con le DLL di sistema OLE.  
  
```  
static void PASCAL RevokeAll();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione automaticamente prima che l'applicazione viene terminata. Se necessario, chiamarlo da un override di [CWinApp:: ExitInstance](../../mfc/reference/cwinapp-class.md#exitinstance).  
  
##  <a name="unregisterall"></a>  COleObjectFactory::UnregisterAll  
 Annulla la registrazione di tutte le factory di oggetto di un'applicazione.  
  
```  
static BOOL PASCAL UnregisterAll();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'operazione riesce; in caso contrario, FALSE.  
  
##  <a name="updateregistry"></a>  COleObjectFactory::UpdateRegistry  
 Registra tutte le factory di oggetto dell'applicazione con il Registro di sistema OLE.  
  
```  
void UpdateRegistry(LPCTSTR lpszProgID = NULL);  
virtual BOOL UpdateRegistry(BOOL bRegister);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszProgID*  
 Puntatore a una stringa che contiene l'identificatore di programma leggibile dall'utente, ad esempio "Excel.Document.5".  
  
 *bRegistrazione immediata*  
 Determina se la factory di oggetto della classe del controllo da registrare.  
  
### <a name="remarks"></a>Note  
 Breve discussione dei due formati per il completamento di questa funzione:  
  
- **UpdateRegistry (** `lpszProgID` **)** registra questa factory dell'oggetto con il Registro di sistema OLE. Questa funzione viene chiamata generalmente dal [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
- **UpdateRegistry (** `bRegister` **)** questo form della funzione è sottoponibile a override. Se *bRegistrazione immediata* è TRUE, questo registra funzione del controllo classe con il Registro di sistema. In caso contrario, Annulla la registrazione della classe.  
  
     Se si usa la creazione guidata controllo ActiveX MFC per creare il progetto, la creazione guidata controllo fornisce una sostituzione per questa funzione virtuale pura.  
  
##  <a name="updateregistryall"></a>  COleObjectFactory:: UpdateRegistryAll  
 Registra tutte le factory di oggetto dell'applicazione con il Registro di sistema OLE.  
  
```  
static BOOL PASCAL UpdateRegistryAll(BOOL bRegister = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bRegistrazione immediata*  
 Determina se la factory di oggetto della classe del controllo da registrare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la factory vengono aggiornate correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata generalmente dal [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) quando viene avviata l'applicazione.  
  
##  <a name="verifylicensekey"></a>  COleObjectFactory::VerifyLicenseKey  
 Verifica che il contenitore ha una licenza per l'uso del controllo OLE.  
  
```  
virtual BOOL VerifyLicenseKey(BSTR bstrKey);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrKey*  
 Un oggetto BSTR versione del contenitore della stringa di licenze di archiviazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la licenza in fase di esecuzione è valida. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le chiamate di versione predefinito [GetLicenseKey](#getlicensekey) per ottenere una copia del controllo della stringa di licenza e lo confronta con la stringa nella *bstrKey*. Se le due stringhe corrispondono, la funzione restituisce un valore diverso da zero. in caso contrario, restituisce 0.  
  
 È possibile eseguire l'override di questa funzione per fornire la verifica personalizzata della licenza.  
  
 La funzione [VerifyUserLicense](#verifyuserlicense) verifica la licenza design-time.  
  
##  <a name="verifyuserlicense"></a>  COleObjectFactory::VerifyUserLicense  
 Verifica la licenza design-time del controllo OLE.  
  
```  
virtual BOOL VerifyUserLicense();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la licenza design-time è valida. in caso contrario 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleTemplateServer](../../mfc/reference/coletemplateserver-class.md)
