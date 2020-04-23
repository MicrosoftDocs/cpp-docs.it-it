---
title: Macro e funzioni per la gestione delle DLL
ms.date: 03/27/2019
helpviewer_keywords:
- module macros in MFC
ms.assetid: 303f4161-cb5e-4099-81ad-acdb11aa60fb
ms.openlocfilehash: 42a08ff2e806acae6713c9df3fe170f7e89f05af
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751595"
---
# <a name="macros-and-functions-for-managing-dlls"></a>Macro e funzioni per la gestione delle DLL

|||
|-|-|
|[AFX_EXT_CLASS](#afx_ext_class)]|Esporta le classi.|
|[AFX_MANAGE_STATE](#afx_manage_state)|Proteggere una funzione esportata in una DLL.|
|[AfxOleInitModule](#afxoleinitmodule)|Fornisce supporto OLE da una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxNetInitModule](#afxnetinitmodule)|Fornisce il supporto dei socket MFC da una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxGetAmbientActCtx](#afxgetambientactctx)|Ottiene lo stato corrente del flag di stato per modulo.|
|[AfxGetStaticModuleState](#afxgetstaticmodulestate)|Imposta lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato del modulo precedente dopo la pulizia.|
|[AfxInitExtensionModule](#afxinitextensionmodule)|Inizializza la DLL.|
|[AfxSetAmbientActCtx](#afxsetambientactctx)|impostare il flag di stato per modulo, che influisce sul comportamento di WinSxS di MFC.|
|[AfxTermExtensionModule](#afxtermextensionmodule)|Consente a MFC di pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL.|

## <a name="afx_ext_class"></a><a name="afx_ext_class"></a>AFX_EXT_CLASS

Le DLL di [estensione MFC utilizzano](../../build/extension-dlls.md) il AFX_EXT_CLASS macro per esportare le classi; gli eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi.

### <a name="remarks"></a>Osservazioni

Con la macro AFX_EXT_CLASS, gli stessi file di intestazione utilizzati per compilare la DLL di estensione MFC possono essere utilizzati con gli eseguibili collegati alla DLL.

Nel file di intestazione della DLL aggiungere la parola chiave AFX_EXT_CLASS alla dichiarazione della classe come segue:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Per ulteriori informazioni, consultate [Esportazione e importazione mediante AFX_EXT_CLASS](../../build/exporting-and-importing-using-afx-ext-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxv_dll.h

## <a name="afx_manage_state"></a><a name="afx_manage_state"></a>Afx_manage_state

Chiamare questa macro per proteggere una funzione esportata in una DLL.

### <a name="syntax"></a>Sintassi

```
AFX_MANAGE_STATE(AFX_MODULE_STATE* pModuleState )
```

### <a name="parameters"></a>Parametri

*pModuleState (informazioni in stato in questo stato)*<br/>
Puntatore a `AFX_MODULE_STATE` una struttura.

### <a name="remarks"></a>Osservazioni

Quando viene richiamata questa macro, *pModuleState* è lo stato effettivo del modulo per il resto dell'ambito contenitore immediato. All'uscita dall'ambito, lo stato effettivo precedente del modulo verrà ripristinato automaticamente.
La `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo inserita o inserita.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario cambiare lo stato del modulo per utilizzare l'handle corretto. A tale scopo, è possibile aggiungere il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

In questo modo lo stato del modulo corrente viene scambiato con lo stato restituito da [AfxGetStaticModuleState](#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Per ulteriori informazioni sugli stati dei moduli e MFC, vedere "Gestione dei dati di stato dei moduli MFC" in [Creazione di nuovi documenti, finestre e visualizzazioni](../creating-new-documents-windows-and-views.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

> [!NOTE]
> Quando MFC crea un contesto di attivazione per un assembly, `AFX_MANAGE_STATE` utilizza [AfxWinInit](application-information-and-management.md#afxwininit) per creare il contesto e attivarlo e disattivarlo. Si noti inoltre che `AFX_MANAGE_STATE` è abilitato per le librerie MFC statiche, nonché le DLL MFC, per consentire l'esecuzione del codice MFC nel contesto di attivazione corretto selezionato dalla DLL utente. Per ulteriori informazioni, vedere Supporto per i contesti di [attivazione nello stato del modulo MFC](../support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxstat_.h

## <a name="a-nameafxoleinitmodule-afxoleinitmodule"></a><a name="afxoleinitmodule"><a/>AfxOleInitModulo

Per il supporto OLE da una DLL MFC regolare collegata in modo `CWinApp::InitInstance` dinamico a MFC, chiamare questa funzione nella funzione della DLL MFC regolare per inizializzare la DLL OLE MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxOleInitModule( );
```

### <a name="remarks"></a>Osservazioni

La DLL OLE MFC è una DLL di estensione MFC; affinché una DLL di estensione MFC `CDynLinkLibrary` venga collegata a `CDynLinkLibrary` una catena, è necessario creare un oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxOleInitModule`crea `CDynLinkLibrary` l'oggetto nel contesto della DLL MFC regolare `CDynLinkLibrary` in modo che venga collegato alla catena di oggetti della DLL MFC regolare.

Se si compila un controllo OLE e `COleControlModule`si `AfxOleInitModule` utilizza `InitInstance` , `COleControlModule` non `AfxOleInitModule`è necessario chiamare perché la funzione membro per le chiamate .

### <a name="requirements"></a>Requisiti

**Intestazione**: \<> afxdll_.h

## <a name="afxnetinitmodule"></a><a name="afxnetinitmodule"></a>AfxNetInitModulo

Per il supporto dei socket MFC da una DLL MFC regolare collegata in modo `CWinApp::InitInstance` dinamico a MFC, aggiungere una chiamata a questa funzione nella funzione della DLL MFC regolare per inizializzare la DLL dei socket MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxNetInitModule( );
```

### <a name="remarks"></a>Osservazioni

La DLL dei socket MFC è una DLL di estensione MFC; affinché una DLL di estensione MFC `CDynLinkLibrary` venga collegata a `CDynLinkLibrary` una catena, è necessario creare un oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxNetInitModule`crea `CDynLinkLibrary` l'oggetto nel contesto della DLL MFC regolare `CDynLinkLibrary` in modo che venga collegato alla catena di oggetti della DLL MFC regolare.

### <a name="requirements"></a>Requisiti

**Intestazione:** \<> afxdll_.h

## <a name="afxgetambientactctx"></a><a name="afxgetambientactctx"></a>AfxGetAmbientActCtx

Utilizzare questa funzione per ottenere lo stato corrente del flag di stato per modulo, che influisce sul comportamento di WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxGetAmbientActCtx();
```

### <a name="return-value"></a>Valore restituito

Lo stato del modulo contrassegna il valore corrente.

### <a name="remarks"></a>Osservazioni

Quando il flag è impostato (impostazione predefinita) e un thread entra in un modulo MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), viene attivato il contesto del modulo.

Se il flag non è impostato, il contesto del modulo non viene attivato all'ingresso.

Il contesto di un modulo viene determinato dal relativo manifesto, in genere incorporato nelle risorse del modulo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcomctl32.h

## <a name="afxgetstaticmodulestate"></a><a name="afxgetstaticmodulestate"></a>AfxGetStaticModuleState

Chiamare questa funzione per impostare lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato del modulo precedente dopo la pulizia.

### <a name="syntax"></a>Sintassi

```
AFX_MODULE_STATE* AFXAPI AfxGetStaticModuleState( );
```

### <a name="return-value"></a>Valore restituito

Puntatore a `AFX_MODULE_STATE` una struttura.

### <a name="remarks"></a>Osservazioni

La `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo inserita o inserita.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario cambiare lo stato del modulo per utilizzare l'handle corretto. A tale scopo, è possibile aggiungere il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

In questo modo lo stato del modulo `AfxGetStaticModuleState` corrente viene scambiato con lo stato restituito da fino alla fine dell'ambito corrente.

Per ulteriori informazioni sugli stati dei moduli e MFC, vedere "Gestione dei dati di stato dei moduli MFC" in [Creazione di nuovi documenti, finestre e visualizzazioni](../creating-new-documents-windows-and-views.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxstat_.h

## <a name="afxinitextensionmodule"></a>AfxInitExtensionModule

Chiamare questa funzione in una `DllMain` DLL di estensione MFC per inizializzare la DLL.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxInitExtensionModule( AFX_EXTENSION_MODULE& state,  HMODULE hModule );
```

### <a name="parameters"></a>Parametri

*state*<br/>
Riferimento alla [struttura AFX_EXTENSION_MODULE Struttura](afx-extension-module-structure.md) che conterrà lo stato del modulo DLL di estensione MFC dopo l'inizializzazione. Lo stato include una copia degli oggetti classe di runtime inizializzati dalla DLL di estensione `DllMain` MFC come parte della normale costruzione di oggetti statici eseguita prima dell'immissione.

*Hmodule*<br/>
Handle del modulo DLL di estensione MFC.

### <a name="return-value"></a>Valore restituito

TRUESe la DLL di estensione MFC viene inizializzata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Ad esempio:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // Remove this if you use lpReserved
    UNREFERENCED_PARAMETER(lpReserved);

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Initializing!\n");

        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
            return 0;
...
```

`AfxInitExtensionModule`crea una copia di HMODULE della DLL e acquisisce le`CRuntimeClass` classi di runtime della DLL`COleObjectFactory` ( strutture) e `CDynLinkLibrary` le relative object factory (oggetti) da utilizzare in un secondo momento quando l'oggetto viene creato.
Le DLL di estensione MFC devono eseguire `DllMain` due operazioni nella funzione:

- Chiamare [AfxInitExtensionModule](#afxinitextensionmodule) e controllare il valore restituito.

- Creare `CDynLinkLibrary` un oggetto se la DLL esporterà [oggetti CRuntimeClass Structure](cruntimeclass-structure.md) o dispone di risorse personalizzate.

È possibile `AfxTermExtensionModule` chiamare per pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL di estensione MFC `AfxFreeLibrary` (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di una chiamata).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdll_.h

## <a name="afxsetambientactctx"></a><a name="afxsetambientactctx"></a>AfxSetAmbientActCtx

Utilizzare questa funzione per impostare il flag di stato per modulo, che influisce sul comportamento di WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxSetAmbientActCtx(BOOL bSet);
```

### <a name="parameters"></a>Parametri

*bImpostazione*<br/>
Nuovo valore del flag di stato del modulo.

### <a name="remarks"></a>Osservazioni

Quando il flag è impostato (impostazione predefinita) e un thread entra in un modulo MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), viene attivato il contesto del modulo.
Se il flag non è impostato, il contesto del modulo non viene attivato all'ingresso.
Il contesto di un modulo viene determinato dal relativo manifesto, in genere incorporato nelle risorse del modulo.

### <a name="example"></a>Esempio

```cpp
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcomctl32.h

## <a name="afxtermextensionmodule"></a><a name="afxtermextensionmodule"></a>AfxTermExtensionModule

Chiamare questa funzione per consentire a MFC di pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL `AfxFreeLibrary` (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di una chiamata).

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxTermExtensionModule(  AFX_EXTENSION_MODULE& state,  BOOL bAll  = FALSE );
```

### <a name="parameters"></a>Parametri

*state*<br/>
Riferimento alla [struttura AFX_EXTENSION_MODULE](afx-extension-module-structure.md) che contiene lo stato del modulo DLL di estensione MFC.

*Palla*<br/>
Se TRUE, pulire tutti i moduli DLL di estensione MFC. In caso contrario, pulire solo il modulo DLL corrente.

### <a name="remarks"></a>Osservazioni

`AfxTermExtensionModule`eliminerà qualsiasi spazio di archiviazione locale collegato al modulo e rimuoverà tutte le voci dalla cache della mappa messaggi. Ad esempio:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // Remove this if you use lpReserved
    UNREFERENCED_PARAMETER(lpReserved);

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Initializing!\n");

        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
            return 0;

        new CMyDynLinkLibrary(NVC_MFC_DLLDLL);

    }
    else if (dwReason == DLL_PROCESS_DETACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Terminating!\n");

        // Terminate the library before destructors are called
        AfxTermExtensionModule(NVC_MFC_DLLDLL);
    }
    return 1;   // ok
}
```

Se l'applicazione carica e libera le DLL di estensione `AfxTermExtensionModule`MFC in modo dinamico, assicurarsi di chiamare . Poiché la maggior parte delle DLL di estensione MFC non vengono caricate `AfxTermExtensionModule` in modo dinamico (in genere, sono collegate tramite le librerie di importazione), la chiamata a in genere non è necessaria.

Le DLL di estensione MFC devono chiamare [AfxInitExtensionModule](#afxinitextensionmodule) nella relativa `DllMain`estensione . Se la DLL esporterà oggetti [CRuntimeClass](cruntimeclass-structure.md) o dispone di risorse `CDynLinkLibrary` personalizzate, `DllMain`è necessario creare anche un oggetto in .

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdll_.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)<br/>
[Gestione dei dati dello stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md)<br/>
