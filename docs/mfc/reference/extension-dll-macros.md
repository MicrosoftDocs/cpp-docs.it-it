---
title: Macro e funzioni per la gestione delle dll
description: Guida di riferimento alle macro e funzioni MFC per la gestione delle dll.
ms.date: 11/30/2020
helpviewer_keywords:
- module macros in MFC
ms.openlocfilehash: b70c4506d49f656e1570f2500cfaa39c28053291
ms.sourcegitcommit: 432c24dde31c400437c4320e8432b1ddb232f844
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/01/2020
ms.locfileid: "96440332"
---
# <a name="macros-and-functions-for-managing-dlls"></a>Macro e funzioni per la gestione delle dll

| Nome | Descrizione |
|--|--|
| [`AFX_EXT_CLASS`](#afx_ext_class)] | Esporta le classi. |
| [`AFX_MANAGE_STATE`](#afx_manage_state) | Proteggere una funzione esportata in una DLL. |
| [`AfxOleInitModule`](#afxoleinitmodule) | Fornisce supporto OLE da una normale DLL MFC collegata a MFC in modo dinamico. |
| [`AfxNetInitModule`](#afxnetinitmodule) | Fornisce supporto per i socket MFC da una normale DLL MFC collegata a MFC in modo dinamico. |
| [`AfxGetAmbientActCtx`](#afxgetambientactctx) | Ottiene lo stato corrente del flag di stato per modulo. |
| [`AfxGetStaticModuleState`](#afxgetstaticmodulestate) | Imposta lo stato del modulo prima dell'inizializzazione e ripristina lo stato precedente del modulo dopo la pulitura. |
| [`AfxInitExtensionModule`](#afxinitextensionmodule) | Inizializza la DLL. |
| [`AfxSetAmbientActCtx`](#afxsetambientactctx) | impostare il flag di stato per modulo, che influisca sul comportamento WinSxS di MFC. |
| [`AfxTermExtensionModule`](#afxtermextensionmodule) | Consente a MFC di pulire la DLL di estensione MFC quando ogni processo viene scollegato dalla DLL. |

## <a name="afx_ext_class"></a><a name="afx_ext_class"></a> `AFX_EXT_CLASS`

Le [dll dell'estensione MFC](../../build/extension-dlls.md) utilizzano la macro `AFX_EXT_CLASS` per esportare le classi; gli eseguibili che si COLLEGAno alla DLL di estensione MFC utilizzano la macro per importare le classi.

### <a name="remarks"></a>Commenti

Con la `AFX_EXT_CLASS` macro, gli stessi file di intestazione utilizzati per compilare la dll di estensione MFC possono essere utilizzati con i file eseguibili che si collegano alla dll.

Nel file di intestazione della DLL aggiungere la `AFX_EXT_CLASS` parola chiave alla dichiarazione della classe come indicato di seguito:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Per ulteriori informazioni, vedere [esportare e importare utilizzando `AFX_EXT_CLASS` ](../../build/exporting-and-importing-using-afx-ext-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxv_dll.h>

## <a name="afx_manage_state"></a><a name="afx_manage_state"></a> `AFX_MANAGE_STATE`

Chiamare questa macro per proteggere una funzione esportata in una DLL.

### <a name="syntax"></a>Sintassi

```cpp
AFX_MANAGE_STATE(AFX_MODULE_STATE* pModuleState )
```

### <a name="parameters"></a>Parametri

*`pModuleState`*<br/>
Puntatore a una `AFX_MODULE_STATE` struttura.

### <a name="remarks"></a>Commenti

Quando questa macro viene richiamata, *`pModuleState`* è lo stato effettivo del modulo per il resto dell'ambito contenitore immediato. Quando si esce dall'ambito, lo stato del modulo effettivo precedente verrà ripristinato automaticamente.

La `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo di cui è stato eseguito il push o il pop.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, il modello di risorsa viene archiviato nel modulo DLL. Assicurarsi di cambiare lo stato del modulo per l'handle corretto da usare. È possibile cambiare lo stato aggiungendo il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

Questa macro scambia lo stato del modulo corrente con lo stato restituito da [`AfxGetStaticModuleState`](#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Per ulteriori informazioni sugli Stati del modulo e su MFC, vedere [gestione dei dati sullo stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

> [!NOTE]
> Quando MFC crea un contesto di attivazione per un assembly, USA [`AfxWinInit`](application-information-and-management.md#afxwininit) per creare il contesto e `AFX_MANAGE_STATE` per attivarlo e disattivarlo. Si noti inoltre che `AFX_MANAGE_STATE` è abilitato per le librerie MFC statiche, nonché per le DLL MFC, in modo da consentire l'esecuzione del codice MFC nel contesto di attivazione appropriato selezionato dalla DLL dell'utente. Per ulteriori informazioni, vedere [supporto per contesti di attivazione nello stato del modulo MFC](../support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxstat_.h>

## <a name="a-nameafxoleinitmodule-afxoleinitmodule"></a><a name="afxoleinitmodule"><a/> `AfxOleInitModule`

Per il supporto OLE da una normale DLL MFC collegata a MFC in modo dinamico, chiamare questa funzione nella normale funzione della DLL MFC `CWinApp::InitInstance` per inizializzare la DLL OLE MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxOleInitModule( );
```

### <a name="remarks"></a>Osservazioni

La DLL OLE MFC è una DLL di estensione MFC. affinché una DLL di estensione MFC possa essere cablata in una `CDynLinkLibrary` catena, deve creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che lo utilizzerà. `AfxOleInitModule` Crea l' `CDynLinkLibrary` oggetto nel contesto della DLL MFC normale in modo che venga cablato nella `CDynLinkLibrary` catena di oggetti della normale DLL MFC.

Se si sta creando un controllo OLE e si usa `COleControlModule` , non è necessario chiamare `AfxOleInitModule` perché la `InitInstance` funzione membro per le `COleControlModule` chiamate `AfxOleInitModule` .

### <a name="requirements"></a>Requisiti

**Intestazione**: \<afxdll_.h>

## <a name="afxnetinitmodule"></a><a name="afxnetinitmodule"></a> `AfxNetInitModule`

Per il supporto dei socket MFC da una DLL MFC normale collegata a MFC in modo dinamico, aggiungere una chiamata a questa funzione nella normale funzione della DLL MFC `CWinApp::InitInstance` per inizializzare la dll dei socket MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxNetInitModule( );
```

### <a name="remarks"></a>Osservazioni

La DLL dei socket MFC è una DLL di estensione MFC. affinché una DLL di estensione MFC possa essere cablata in una `CDynLinkLibrary` catena, deve creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che lo utilizzerà. `AfxNetInitModule` Crea l' `CDynLinkLibrary` oggetto nel contesto della DLL MFC normale in modo che venga cablato nella `CDynLinkLibrary` catena di oggetti della normale DLL MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxdll_.h>

## <a name="afxgetambientactctx"></a><a name="afxgetambientactctx"></a> `AfxGetAmbientActCtx`

Usare questa funzione per ottenere lo stato corrente del flag di stato per modulo, che influiscono sul comportamento WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```cpp
BOOL AFXAPI AfxGetAmbientActCtx();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del flag di stato del modulo.

### <a name="remarks"></a>Commenti

Quando il flag è impostato (impostazione predefinita) e un thread entra in un modulo MFC (vedere [`AFX_MANAGE_STATE`](#afx_manage_state) ), il contesto del modulo viene attivato.

Se il flag non è impostato, il contesto del modulo non viene attivato sulla voce.

Il contesto di un modulo è determinato dal manifesto, spesso incorporato nelle risorse del modulo.

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxcomctl32.h>

## <a name="afxgetstaticmodulestate"></a><a name="afxgetstaticmodulestate"></a> `AfxGetStaticModuleState`

Chiamare questa funzione per impostare lo stato del modulo prima dell'inizializzazione e per ripristinare lo stato precedente del modulo dopo la pulizia.

### <a name="syntax"></a>Sintassi

```cpp
AFX_MODULE_STATE* AFXAPI AfxGetStaticModuleState( );
```

### <a name="return-value"></a>Valore restituito

Puntatore a una `AFX_MODULE_STATE` struttura.

### <a name="remarks"></a>Commenti

La `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo di cui è stato eseguito il push o il pop.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, il modello di risorsa viene archiviato nel modulo DLL. Assicurarsi di cambiare lo stato del modulo per l'handle corretto da usare. È possibile cambiare lo stato aggiungendo il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

Questa macro scambia lo stato del modulo corrente con lo stato restituito da `AfxGetStaticModuleState` fino alla fine dell'ambito corrente.

Per ulteriori informazioni sugli Stati del modulo e su MFC, vedere [gestione dei dati sullo stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxstat_.h>

## <a name="afxinitextensionmodule"></a><a name="afxinitextensionmodule"></a> `AfxInitExtensionModule`

Chiamare questa funzione in una DLL di estensione MFC `DllMain` per inizializzare la dll.

### <a name="syntax"></a>Sintassi

```cpp
BOOL AFXAPI AfxInitExtensionModule( AFX_EXTENSION_MODULE& state,  HMODULE hModule );
```

### <a name="parameters"></a>Parametri

*`state`*<br/>
Riferimento alla struttura della [ `AFX_EXTENSION_MODULE` struttura](afx-extension-module-structure.md) che conterrà lo stato del modulo DLL dell'estensione MFC dopo l'inizializzazione. Lo stato include una copia degli oggetti della classe di runtime che sono stati inizializzati dalla DLL dell'estensione MFC come parte della normale costruzione di oggetti statici eseguita prima che `DllMain` venga immesso.

*`hModule`*<br/>
Handle del modulo DLL dell'estensione MFC.

### <a name="return-value"></a>Valore restituito

`TRUE` Se la DLL dell'estensione MFC è stata inizializzata correttamente. in caso contrario, `FALSE` .

### <a name="remarks"></a>Commenti

Ad esempio:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL;
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

`AfxInitExtensionModule` Crea una copia del HMODULE della DLL e acquisisce le classi di runtime ( `CRuntimeClass` strutture) della dll e anche le relative Object Factory ( `COleObjectFactory` oggetti) da usare in un secondo momento quando `CDynLinkLibrary` viene creato l'oggetto.
Le DLL dell'estensione MFC devono eseguire due operazioni nella propria `DllMain` funzione:

- Chiamare [`AfxInitExtensionModule`](#afxinitextensionmodule) e controllare il valore restituito.

- Creare un `CDynLinkLibrary` oggetto se la DLL esporterà oggetti [ `CRuntimeClass` struttura](cruntimeclass-structure.md) o ha risorse personalizzate.

È possibile chiamare `AfxTermExtensionModule` per pulire la DLL dell'estensione MFC quando ogni processo si disconnette dalla DLL dell'estensione MFC (che si verifica quando il processo viene chiuso o quando la dll viene scaricata da una `AfxFreeLibrary` chiamata).

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxdll_.h>

## <a name="afxsetambientactctx"></a><a name="afxsetambientactctx"></a> `AfxSetAmbientActCtx`

Usare questa funzione per impostare il flag di stato per modulo, che influiscono sul comportamento WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxSetAmbientActCtx(BOOL bSet);
```

### <a name="parameters"></a>Parametri

*`bSet`*<br/>
Nuovo valore del flag di stato del modulo.

### <a name="remarks"></a>Commenti

Quando il flag è impostato (impostazione predefinita) e un thread entra in un modulo MFC (vedere [`AFX_MANAGE_STATE`](#afx_manage_state) ), il contesto del modulo viene attivato.
Se il flag non è impostato, il contesto del modulo non viene attivato sulla voce.
Il contesto di un modulo è determinato dal manifesto, spesso incorporato nelle risorse del modulo.

### <a name="example"></a>Esempio

```cpp
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxcomctl32.h>

## <a name="afxtermextensionmodule"></a><a name="afxtermextensionmodule"></a> `AfxTermExtensionModule`

Chiamare questa funzione per consentire a MFC di pulire la DLL dell'estensione MFC quando ogni processo viene scollegato dalla DLL (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata da una `AfxFreeLibrary` chiamata).

### <a name="syntax"></a>Sintassi

```cpp
void AFXAPI AfxTermExtensionModule( AFX_EXTENSION_MODULE& state, BOOL bAll = FALSE );
```

### <a name="parameters"></a>Parametri

*`state`*<br/>
Riferimento alla [`AFX_EXTENSION_MODULE`](afx-extension-module-structure.md) struttura che contiene lo stato del modulo DLL dell'estensione MFC.

*`bAll`*<br/>
Se TRUE, pulire tutti i moduli DLL dell'estensione MFC. In caso contrario, pulire solo il modulo DLL corrente.

### <a name="remarks"></a>Commenti

`AfxTermExtensionModule` eliminerà qualsiasi risorsa di archiviazione locale collegata al modulo e rimuoverà tutte le voci dalla cache della mappa messaggi. Ad esempio:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL;
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

Se l'applicazione carica e libera dinamicamente dll di estensione MFC, assicurarsi di chiamare `AfxTermExtensionModule` . Poiché la maggior parte delle DLL di estensione MFC non vengono caricate dinamicamente (in genere sono collegate tramite le librerie di importazione), la chiamata a in `AfxTermExtensionModule` genere non è necessaria.

Le DLL dell'estensione MFC devono chiamare [`AfxInitExtensionModule`](#afxinitextensionmodule) nei rispettivi `DllMain` . Se la DLL esporta [`CRuntimeClass`](cruntimeclass-structure.md) oggetti o ha risorse personalizzate, è necessario creare anche un `CDynLinkLibrary` oggetto in `DllMain` .

### <a name="requirements"></a>Requisiti

**Intestazione:**\<afxdll_.h>

## <a name="see-also"></a>Vedi anche

[Macro e globali](mfc-macros-and-globals.md)<br/>
[`AfxMessageBox`](cstring-formatting-and-message-box-display.md#afxmessagebox)<br/>
[Gestione dei dati sullo stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md)<br/>
