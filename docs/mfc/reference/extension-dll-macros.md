---
title: Macro e funzioni per la gestione delle dll
ms.date: 03/27/2019
helpviewer_keywords:
- module macros in MFC
ms.assetid: 303f4161-cb5e-4099-81ad-acdb11aa60fb
ms.openlocfilehash: e4170ba95775fd3380837673a76a8adafc8ad011
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837179"
---
# <a name="macros-and-functions-for-managing-dlls"></a>Macro e funzioni per la gestione delle dll

|Nome|Descrizione|
|-|-|
|[AFX_EXT_CLASS](#afx_ext_class)]|Esporta le classi.|
|[AFX_MANAGE_STATE](#afx_manage_state)|Proteggere una funzione esportata in una DLL.|
|[AfxOleInitModule](#afxoleinitmodule)|Fornisce supporto OLE da una normale DLL MFC collegata a MFC in modo dinamico.|
|[AfxNetInitModule](#afxnetinitmodule)|Fornisce supporto per i socket MFC da una normale DLL MFC collegata a MFC in modo dinamico.|
|[AfxGetAmbientActCtx](#afxgetambientactctx)|Ottiene lo stato corrente del flag di stato per modulo.|
|[AfxGetStaticModuleState](#afxgetstaticmodulestate)|Imposta lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato precedente del modulo dopo la pulizia.|
|[AfxInitExtensionModule](#afxinitextensionmodule)|Inizializza la DLL.|
|[AfxSetAmbientActCtx](#afxsetambientactctx)|impostare il flag di stato per modulo, che influisca sul comportamento WinSxS di MFC.|
|[AfxTermExtensionModule](#afxtermextensionmodule)|Consente a MFC di pulire la DLL di estensione MFC quando ogni processo viene scollegato dalla DLL.|

## <a name="afx_ext_class"></a><a name="afx_ext_class"></a> AFX_EXT_CLASS

Le [dll dell'estensione MFC](../../build/extension-dlls.md) utilizzano la macro AFX_EXT_CLASS per esportare le classi; gli eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi.

### <a name="remarks"></a>Osservazioni

Con la macro AFX_EXT_CLASS, gli stessi file di intestazione utilizzati per compilare la DLL di estensione MFC possono essere utilizzati con gli eseguibili che si collegano alla DLL.

Nel file di intestazione della DLL aggiungere la parola chiave AFX_EXT_CLASS alla dichiarazione della classe come indicato di seguito:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Per altre informazioni, vedere [esportare e importare con AFX_EXT_CLASS](../../build/exporting-and-importing-using-afx-ext-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxv_dll. h

## <a name="afx_manage_state"></a><a name="afx_manage_state"></a> AFX_MANAGE_STATE

Chiamare questa macro per proteggere una funzione esportata in una DLL.

### <a name="syntax"></a>Sintassi

```
AFX_MANAGE_STATE(AFX_MODULE_STATE* pModuleState )
```

### <a name="parameters"></a>Parametri

*pModuleState*<br/>
Puntatore a una `AFX_MODULE_STATE` struttura.

### <a name="remarks"></a>Osservazioni

Quando questa macro viene richiamata, *pModuleState* è lo stato effettivo del modulo per il resto dell'ambito contenitore immediato. Quando si esce dall'ambito, lo stato del modulo effettivo precedente verrà ripristinato automaticamente.
La `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo di cui è stato eseguito il push o il pop.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario cambiare lo stato del modulo per l'handle corretto da usare. È possibile eseguire questa operazione aggiungendo il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

Questo scambia lo stato del modulo corrente con lo stato restituito da [AfxGetStaticModuleState](#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Per ulteriori informazioni sugli Stati del modulo e su MFC, vedere la sezione relativa alla gestione dei dati sullo stato dei moduli MFC nella pagina relativa alla [creazione di nuovi documenti, finestre e visualizzazioni](../creating-new-documents-windows-and-views.md) e alla [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

> [!NOTE]
> Quando MFC crea un contesto di attivazione per un assembly, USA [AfxWinInit](application-information-and-management.md#afxwininit) per creare il contesto e `AFX_MANAGE_STATE` per attivarlo e disattivarlo. Si noti inoltre che `AFX_MANAGE_STATE` è abilitato per le librerie MFC statiche, nonché per le DLL MFC, in modo da consentire l'esecuzione del codice MFC nel contesto di attivazione appropriato selezionato dalla DLL dell'utente. Per ulteriori informazioni, vedere [supporto per contesti di attivazione nello stato del modulo MFC](../support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxstat_. h

## <a name="a-nameafxoleinitmodule-afxoleinitmodule"></a><a name="afxoleinitmodule"><a/> AfxOleInitModule

Per il supporto OLE da una normale DLL MFC collegata a MFC in modo dinamico, chiamare questa funzione nella normale funzione della DLL MFC `CWinApp::InitInstance` per inizializzare la DLL OLE MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxOleInitModule( );
```

### <a name="remarks"></a>Osservazioni

La DLL OLE MFC è una DLL di estensione MFC. affinché una DLL di estensione MFC possa essere cablata in una `CDynLinkLibrary` catena, deve creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che lo utilizzerà. `AfxOleInitModule` Crea l' `CDynLinkLibrary` oggetto nel contesto della DLL MFC normale in modo che venga cablato nella `CDynLinkLibrary` catena di oggetti della normale DLL MFC.

Se si compila un controllo OLE e si utilizza `COleControlModule` , è consigliabile non chiamare `AfxOleInitModule` perché la `InitInstance` funzione membro per `COleControlModule` chiama `AfxOleInitModule` .

### <a name="requirements"></a>Requisiti

**Intestazione**: \<afxdll_.h>

## <a name="afxnetinitmodule"></a><a name="afxnetinitmodule"></a> AfxNetInitModule

Per il supporto dei socket MFC da una DLL MFC normale collegata a MFC in modo dinamico, aggiungere una chiamata a questa funzione nella normale funzione della DLL MFC `CWinApp::InitInstance` per inizializzare la dll dei socket MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxNetInitModule( );
```

### <a name="remarks"></a>Osservazioni

La DLL dei socket MFC è una DLL di estensione MFC. affinché una DLL di estensione MFC possa essere cablata in una `CDynLinkLibrary` catena, deve creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che lo utilizzerà. `AfxNetInitModule` Crea l' `CDynLinkLibrary` oggetto nel contesto della DLL MFC normale in modo che venga cablato nella `CDynLinkLibrary` catena di oggetti della normale DLL MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxdll_.h>

## <a name="afxgetambientactctx"></a><a name="afxgetambientactctx"></a> AfxGetAmbientActCtx

Usare questa funzione per ottenere lo stato corrente del flag di stato per modulo, che influiscono sul comportamento WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxGetAmbientActCtx();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del flag di stato del modulo.

### <a name="remarks"></a>Osservazioni

Quando il flag è impostato (impostazione predefinita) e un thread entra in un modulo MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), il contesto del modulo viene attivato.

Se il flag non è impostato, il contesto del modulo non viene attivato sulla voce.

Il contesto di un modulo è determinato dal manifesto, generalmente incorporato nelle risorse del modulo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcomctl32. h

## <a name="afxgetstaticmodulestate"></a><a name="afxgetstaticmodulestate"></a> AfxGetStaticModuleState

Chiamare questa funzione per impostare lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato precedente del modulo dopo la pulizia.

### <a name="syntax"></a>Sintassi

```
AFX_MODULE_STATE* AFXAPI AfxGetStaticModuleState( );
```

### <a name="return-value"></a>Valore restituito

Puntatore a una `AFX_MODULE_STATE` struttura.

### <a name="remarks"></a>Osservazioni

La `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo di cui è stato eseguito il push o il pop.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario cambiare lo stato del modulo per l'handle corretto da usare. È possibile eseguire questa operazione aggiungendo il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

Questo scambia lo stato del modulo corrente con lo stato restituito da `AfxGetStaticModuleState` fino alla fine dell'ambito corrente.

Per ulteriori informazioni sugli Stati del modulo e su MFC, vedere la sezione relativa alla gestione dei dati sullo stato dei moduli MFC nella pagina relativa alla [creazione di nuovi documenti, finestre e visualizzazioni](../creating-new-documents-windows-and-views.md) e alla [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxstat_. h

## <a name="afxinitextensionmodule"></a>AfxInitExtensionModule

Chiamare questa funzione in una DLL di estensione MFC `DllMain` per inizializzare la dll.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxInitExtensionModule( AFX_EXTENSION_MODULE& state,  HMODULE hModule );
```

### <a name="parameters"></a>Parametri

*state*<br/>
Riferimento alla struttura della [struttura AFX_EXTENSION_MODULE](afx-extension-module-structure.md) che conterrà lo stato del modulo DLL dell'estensione MFC dopo l'inizializzazione. Lo stato include una copia degli oggetti della classe di runtime che sono stati inizializzati dalla DLL dell'estensione MFC come parte della normale costruzione di oggetti statici eseguita prima che `DllMain` venga immesso.

*hModule*<br/>
Handle del modulo DLL dell'estensione MFC.

### <a name="return-value"></a>Valore restituito

TRUE se la DLL dell'estensione MFC è stata inizializzata correttamente. in caso contrario, FALSE.

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

`AfxInitExtensionModule` Crea una copia del HMODULE della DLL e acquisisce le classi di runtime (strutture) della DLL e le `CRuntimeClass` relative factory `COleObjectFactory` di oggetti da usare in un secondo momento quando `CDynLinkLibrary` viene creato l'oggetto.
Le DLL dell'estensione MFC devono eseguire due operazioni nella propria `DllMain` funzione:

- Chiamare [AfxInitExtensionModule](#afxinitextensionmodule) e controllare il valore restituito.

- Creare un `CDynLinkLibrary` oggetto se la DLL esporterà oggetti [struttura CRuntimeClass](cruntimeclass-structure.md) o ha risorse personalizzate.

È possibile chiamare `AfxTermExtensionModule` per pulire la DLL dell'estensione MFC quando ogni processo si disconnette dalla DLL dell'estensione MFC (che si verifica quando il processo viene chiuso o quando la dll viene scaricata in seguito a una `AfxFreeLibrary` chiamata).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdll_. h

## <a name="afxsetambientactctx"></a><a name="afxsetambientactctx"></a> AfxSetAmbientActCtx

Usare questa funzione per impostare il flag di stato per modulo, che influiscono sul comportamento WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxSetAmbientActCtx(BOOL bSet);
```

### <a name="parameters"></a>Parametri

*bSet*<br/>
Nuovo valore del flag di stato del modulo.

### <a name="remarks"></a>Osservazioni

Quando il flag è impostato (impostazione predefinita) e un thread entra in un modulo MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), il contesto del modulo viene attivato.
Se il flag non è impostato, il contesto del modulo non viene attivato sulla voce.
Il contesto di un modulo è determinato dal manifesto, generalmente incorporato nelle risorse del modulo.

### <a name="example"></a>Esempio

```cpp
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcomctl32. h

## <a name="afxtermextensionmodule"></a><a name="afxtermextensionmodule"></a> AfxTermExtensionModule

Chiamare questa funzione per consentire a MFC di pulire la DLL di estensione MFC quando ogni processo viene scollegato dalla DLL (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata in seguito a una `AfxFreeLibrary` chiamata).

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxTermExtensionModule(  AFX_EXTENSION_MODULE& state,  BOOL bAll  = FALSE );
```

### <a name="parameters"></a>Parametri

*state*<br/>
Riferimento alla struttura [AFX_EXTENSION_MODULE](afx-extension-module-structure.md) contenente lo stato del modulo DLL dell'estensione MFC.

*Palla*<br/>
Se TRUE, pulire tutti i moduli DLL dell'estensione MFC. In caso contrario, pulire solo il modulo DLL corrente.

### <a name="remarks"></a>Osservazioni

`AfxTermExtensionModule` eliminerà qualsiasi risorsa di archiviazione locale collegata al modulo e rimuoverà tutte le voci dalla cache della mappa messaggi. Ad esempio:

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

Se l'applicazione carica e libera dinamicamente dll di estensione MFC, assicurarsi di chiamare `AfxTermExtensionModule` . Poiché la maggior parte delle DLL dell'estensione MFC non viene caricata dinamicamente (in genere, sono collegate tramite le librerie di importazione), la chiamata a `AfxTermExtensionModule` non è in genere necessaria.

Le DLL dell'estensione MFC devono chiamare [AfxInitExtensionModule](#afxinitextensionmodule) in `DllMain` . Se per la DLL verranno esportati oggetti [CRuntimeClass](cruntimeclass-structure.md) o sono disponibili risorse personalizzate, è necessario creare anche un `CDynLinkLibrary` oggetto in `DllMain` .

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdll_. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)<br/>
[Gestione dei dati sullo stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md)<br/>
