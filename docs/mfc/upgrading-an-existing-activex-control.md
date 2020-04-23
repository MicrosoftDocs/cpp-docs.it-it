---
title: Aggiornamento di un controllo ActiveX esistente
ms.date: 09/12/2018
helpviewer_keywords:
- ActiveX controls [MFC], Internet
- LPK files for Internet controls
- safe for scripting and initialization (controls)
- OLE controls [MFC], upgrading to ActiveX
- CAB files, for ActiveX controls
- Internet applications [MFC], ActiveX controls
- Internet applications [MFC], packaging code for download
- upgrading ActiveX controls
- licensing ActiveX controls
ms.assetid: 4d12ddfa-b491-4f9f-a0b7-b51458e05651
ms.openlocfilehash: dfee42369b698956f4f91ab61a1f37e0ef06d9f1
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754513"
---
# <a name="upgrading-an-existing-activex-control"></a>Aggiornamento di un controllo ActiveX esistente

I controlli ActiveX esistenti (precedentemente controlli OLE) possono essere utilizzati su Internet senza modifiche. Tuttavia, è possibile modificare i controlli per migliorarne le prestazioni.

> [!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Quando si utilizza il controllo in una pagina Web, è necessario fare alcune considerazioni aggiuntive. Il file .ocx e tutti i file di supporto devono trovarsi nel computer di destinazione o essere scaricati su Internet. Questo rende la dimensione del codice e il tempo di download una considerazione importante. I download possono essere inclusi in un file CAB firmato. È possibile contrassegnare il controllo come sicuro per lo scripting e come sicuro per l'inizializzazione.

Questo articolo tratta gli argomenti seguenti:

- [Codice di imballaggio per il download](#_core_packaging_code_for_downloading)

- [Contrassegno di un controllo sicuro per la creazione di script e l'inizializzazione](#_core_marking_a_control_safe_for_scripting_and_initializing)

- [Problemi relativi alle licenze](#_core_licensing_issues)

- [Codice di firma](#_core_signing_code)

- [Gestione della tavolozza](#_core_managing_the_palette)

- [Livelli di sicurezza del browser Internet Explorer e comportamento dei controlli](#_core_internet_explorer_browser_safety_levels_and_control_behavior)

È inoltre possibile aggiungere ottimizzazioni, come descritto in [Controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md). Moniker possono essere utilizzati per scaricare proprietà e BLOB di grandi dimensioni in modo asincrono, come descritto in [Controlli ActiveX su Internet](../mfc/activex-controls-on-the-internet.md).

## <a name="packaging-code-for-downloading"></a><a name="_core_packaging_code_for_downloading"></a>Codice di imballaggio per il download

Per ulteriori informazioni su questo argomento, consultate Creazione di pacchetti di [controlli ActiveX](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa751974%28v%3dvs.85%29).

### <a name="the-codebase-tag"></a>Il tag CODEBASE

I controlli ActiveX vengono incorporati `<OBJECT>` nelle pagine Web utilizzando il tag . Il `CODEBASE` parametro `<OBJECT>` del tag specifica il percorso da cui scaricare il controllo. `CODEBASE`può puntare a un certo numero di diversi tipi di file con successo.

### <a name="using-the-codebase-tag-with-an-ocx-file"></a>Utilizzo del tag CODEBASE con un file OCX

```
CODEBASE="http://example.microsoft.com/mycontrol.ocx#version=4,
    70,
    0,
    1086"
```

Questa soluzione scarica solo il file ocx del controllo e richiede che tutte le DLL di supporto siano già installate nel computer client. Questa operazione consente di utilizzare i controlli ActiveX mfc e di Internet Explorer, compilati con Visual C, in quanto Internet Explorer viene fornito con le DLL di supporto per i controlli di Visual C. Se per visualizzare questo controllo viene utilizzato un altro browser Internet che supporta i controlli ActiveX, questa soluzione non funzionerà.

### <a name="using-the-codebase-tag-with-an-inf-file"></a>Utilizzo del tag CODEBASE con un file INF

```
CODEBASE="http://example.microsoft.com/trustme.inf"
```

Un file .inf controllerà l'installazione di un file .ocx e dei relativi file di supporto. Questo metodo non è consigliato perché non è possibile firmare un file inf (vedere [Codice di firma](#_core_signing_code) per i puntatori alla firma del codice).

### <a name="using-the-codebase-tag-with-a-cab-file"></a>Utilizzo del tag CODEBASE con un file CAB

```
CODEBASE="http://example.microsoft.com/acontrol.cab#version=1,
    2,
    0,
    0"
```

I file CAB sono il modo consigliato per creare pacchetti di controlli ActiveX che utilizzano MFC. La creazione del pacchetto di un controllo ActiveX MFC in un file CAB consente di includere un file inf per controllare l'installazione del controllo ActiveX e di tutte le DLL dipendenti, ad esempio le DLL MFC. L'utilizzo di un file CAB comprime automaticamente il codice per un download più rapido. Se si utilizza un file CAB per il download dei componenti, è più veloce firmare l'intero file CAB rispetto a ogni singolo componente.

### <a name="creating-cab-files"></a>Creazione di file CAB

Gli strumenti per creare file cab sono ora parte di [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk).

Il file CAB `CODEBASE` a cui fa riferimento deve contenere il file ocx per il controllo ActiveX e un file inf per controllarne l'installazione. Per creare il file CAB, specificare il nome del file di controllo e un file inf. Non includere in questo file CAB le DLL dipendenti che potrebbero essere già presenti nel sistema. Ad esempio, le DLL MFC vengono inserite in un file CAB separato e fanno riferimento al file inf di controllo.

Per informazioni dettagliate su come creare un file CAB, vedere [Creazione di un file CAB](/windows/win32/devnotes/cabinet-api-functions).

### <a name="the-inf-file"></a>Il file INF

Nell'esempio seguente, spindial.inf, vengono elencati i file di supporto e le informazioni sulla versione necessarie per il controllo Spindial MFC. Si noti che il percorso per le DLL MFC è un sito Web Microsoft. Il file mfc42.cab viene fornito e firmato da Microsoft.

```
Contents of spindial.inf:
[mfc42installer]
file-win32-x86=http://activex.microsoft.com/controls/vc/mfc42.cab
[Olepro32.dll] - FileVersion=5,
    0,
    4261,
    0
[Mfc42.dll] - FileVersion=6,
    0,
    8168,
    0
[Msvcrt.dll] - FileVersion=6,
    0,
    8168,
    0
```

### <a name="the-object-tag"></a>Il \<tag> OBJECT

Nell'esempio seguente viene `<OBJECT>` illustrato l'utilizzo del tag per creare il pacchetto del controllo di esempio Spindial MFC.

```
<OBJECT ID="Spindial1" WIDTH=100 HEIGHT=51
    CLASSID="CLSID:06889605-B8D0-101A-91F1-00608CEAD5B3"
    CODEBASE="http://example.microsoft.com/spindial.cab#Version=1,0,0,001">
<PARAM NAME="_Version" VALUE="65536">
<PARAM NAME="_ExtentX" VALUE="2646">
<PARAM NAME="_ExtentY" VALUE="1323">
<PARAM NAME="_StockProps" VALUE="0">
<PARAM NAME="NeedlePosition" VALUE="2">
</OBJECT>
```

In questo caso, spindial.cab conterrà due file, spindial.ocx e spindial.inf. Il comando seguente consente di compilare il file CAB:

```
C:\CabDevKit\cabarc.exe -s 6144 N spindial.cab spindial.ocx spindial.inf
```

Il `-s 6144` parametro riserva spazio nell'archivio per la firma del codice.

### <a name="the-version-tag"></a>Il tag di versione

Si noti `#Version` che le informazioni specificate con un file CAB `<OBJECT>` si applicano al controllo specificato dal parametro *CLASSID* del tag.

A seconda della versione specificata, è possibile forzare il download del controllo. Per le specifiche `OBJECT` complete del tag, incluso il parametro *CODEBASE,* vedere il riferimento W3C.

## <a name="marking-a-control-safe-for-scripting-and-initializing"></a><a name="_core_marking_a_control_safe_for_scripting_and_initializing"></a>Contrassegno di un controllo sicuro per la creazione di script e l'inizializzazione

I controlli ActiveX utilizzati nelle pagine Web devono essere contrassegnati come sicuri per la creazione di script e sicuri per l'inizializzazione se sono effettivamente sicuri. Un controllo sicuro non eseguirà operazioni di I/O su disco né accede direttamente alla memoria o ai registri di una macchina.

I controlli possono essere contrassegnati come sicuri per la creazione di script e sicuri per l'inizializzazione tramite il Registro di sistema. Modificare `DllRegisterServer` per aggiungere voci simili alle seguenti per contrassegnare il controllo come sicuro per lo scripting e la persistenza nel Registro di sistema. Un metodo alternativo `IObjectSafety`consiste nell'implementare .

Si definiranno i GUID (Globally Unique Identifiers) per il controllo per contrassegnarlo come sicuro per lo scripting e per la persistenza. I controlli che possono essere script in modo sicuro conterrà una voce del Registro di sistema simile al seguente:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
```

I controlli che possono essere inizializzati in modo sicuro dai dati persistenti sono contrassegnati come sicuri per la persistenza con una voce del Registro di sistema simile a:Controls that can be safely initialized from persistent data are marked safe for persistence with a registry entry similar to:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

Aggiungere voci simili alle seguenti (sostituendo l'ID di classe del `{06889605-B8D0-101A-91F1-00608CEAD5B3}`controllo al posto di ) per associare le chiavi al seguente ID di classe:

```
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

## <a name="licensing-issues"></a><a name="_core_licensing_issues"></a>Problemi relativi alle licenze

Se si desidera utilizzare un controllo concesso in licenza in una pagina Web, è necessario verificare che il contratto di licenza ne consenta l'utilizzo su Internet e creare un file del pacchetto di licenze (LPK) per tale controllo.

Un controllo ActiveX con licenza non verrà caricato correttamente in una pagina HTML se il computer che esegue Internet Explorer non dispone della licenza per l'utilizzo del controllo. Ad esempio, se un controllo con licenza è stato compilato utilizzando Visual C, la pagina HTML che utilizza il controllo verrà caricata correttamente nel computer in cui è stato compilato il controllo, ma non verrà caricata in un computer diverso a meno che non siano incluse le informazioni sulla licenza.

Per utilizzare un controllo ActiveX con licenza in Internet Explorer, è necessario controllare il contratto di licenza del fornitore per verificare che la licenza per il controllo consenta:

- Ridistribuzione

- Uso del controllo su Internet

- Utilizzo del parametro Codebase

Per utilizzare un controllo con licenza in una pagina HTML in un computer senza licenza, è necessario generare un file di pacchetto di licenza (LPK). Il file LPK contiene licenze di runtime per i controlli con licenza nella pagina HTML. Questo file viene generato tramite LPK_TOOL. EXE fornito con ActiveX SDK.

#### <a name="to-create-an-lpk-file"></a>Per creare un file LPK

1. Eseguire LPK_TOOL. EXE in un computer con licenza per l'utilizzo del controllo.

1. Nella casella di riepilogo **Controlli disponibili** della finestra di dialogo License Package **Authoring Tool** selezionare ogni controllo ActiveX con licenza che verrà utilizzato nella pagina HTML e fare clic su **Aggiungi**.

1. Fare clic su **Salva & Esci** e digitare un nome per il file LPK. In questo modo verrà creato il file LPK e verrà chiusa l'applicazione.

#### <a name="to-embed-a-licensed-control-on-an-html-page"></a>Per incorporare un controllo con licenza in una pagina HTML

1. Modifica la tua pagina HTML. Nella pagina HTML, \<inserire un tag OBJECT> per \<l'oggetto License Manager prima di qualsiasi altro tag OBJECT>. License Manager è un controllo ActiveX installato con Internet Explorer. L'ID di classe è illustrato di seguito. Impostare la proprietà LPKPath dell'oggetto License Manager sul percorso e sul nome del file LPK. È possibile avere un solo file LPK per pagina HTML.

```
<OBJECT CLASSID = "clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="relative URL to .LPK file">
</OBJECT>
```

1. Inserire \<il tag OBJECT> per il controllo con licenza dopo il tag License Manager.

   Ad esempio, una pagina HTML che visualizza il controllo Modifica mascherato Microsoft è illustrata di seguito. Il primo ID di classe è per il controllo License Manager, il secondo ID di classe è per il controllo Masked Edit. Modificare i tag in modo che puntino al percorso relativo del file lpk creato in precedenza e aggiungere un tag oggetto che includa l'ID di classe per il controllo.

1. Inserire \<l'attributo di> EMBED per il file LPK, se si utilizza il plug-in ActiveX NCompass.

   Se il controllo può essere visualizzato in altri browser abilitati per Active, ad esempio Netscape utilizzando \<il plug-in ActiveX NCompass, è necessario aggiungere la sintassi di> EMBED come illustrato di seguito.

```
<OBJECT CLASSID="clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="maskedit.lpk">

<EMBED SRC = "maskedit.LPK">

</OBJECT>
<OBJECT CLASSID="clsid:C932BA85-4374-101B-A56C-00AA003668DC" WIDTH=100 HEIGHT=25>
</OBJECT>
```

Per ulteriori informazioni sulle licenze dei controlli, vedere [Controlli ActiveX: gestione delle licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md).

## <a name="signing-code"></a><a name="_core_signing_code"></a>Codice di firma

La firma del codice è progettata per identificare l'origine del codice e per garantire che il codice non sia stato modificato dopo la firma. A seconda delle impostazioni di sicurezza del browser, gli utenti potrebbero essere avvisati prima che il codice venga scaricato. Gli utenti possono scegliere di considerare attendibili determinati proprietari o società di certificati, nel qual caso il codice firmato da tali dati attendibile verrà scaricato senza alcun avviso. Il codice è firmato digitalmente per evitare manomissioni.

Assicurarsi che il codice finale sia firmato in modo che il controllo possa essere scaricato automaticamente senza visualizzare messaggi di avviso di attendibilità. Per informazioni dettagliate su come firmare il codice, consultare la documentazione su Authenticode in ActiveX SDK e vedere [Signing a CAB File](/windows/win32/devnotes/cabinet-api-functions).

A seconda dell'attendibilità e delle impostazioni del livello di sicurezza del browser, è possibile che venga visualizzato un certificato per identificare la persona o l'azienda firmataria. Se il livello di sicurezza è nessuno o se il proprietario del certificato del controllo firmato è attendibile, non verrà visualizzato un certificato. Vedere Livelli di [sicurezza del browser Internet Explorer e Comportamento](#_core_internet_explorer_browser_safety_levels_and_control_behavior) del controllo per informazioni dettagliate su come l'impostazione di sicurezza del browser determinerà se il controllo viene scaricato e verrà visualizzato un certificato.

La firma digitale garantisce che il codice non sia cambiato da quando è stato firmato. Un hash del codice viene preso e incorporato nel certificato. Questo hash viene successivamente confrontato con un hash del codice eseguito dopo il download del codice ma prima dell'esecuzione. Aziende come Verisign possono fornire le chiavi private e pubbliche necessarie per firmare il codice. ActiveX SDK viene fornito con MakeCert, un'utilità per la creazione di certificati di test.

## <a name="managing-the-palette"></a><a name="_core_managing_the_palette"></a>Gestione della tavolozza

I contenitori determinano la tavolozza e la rendono disponibile come proprietà di ambiente, **DISPID_AMBIENT_PALETTE**. Un contenitore, ad esempio Internet Explorer, sceglie una tavolozza utilizzata da tutti i controlli ActiveX in una pagina per determinare la propria tavolozza. In questo modo si evita lo sfarfallio dello schermo e si presenta un aspetto coerente.

Un controllo `OnAmbientPropertyChange` può eseguire l'override per gestire la notifica delle modifiche alla tavolozza.

Un controllo `OnGetColorSet` può eseguire l'override per restituire un set di colori per disegnare la tavolozza. I contenitori usano il valore restituito per determinare se un controllo è in grado di riconoscere la tavolozza.

In base alle linee guida OCX 96, un controllo deve sempre realizzare la tavolozza sullo sfondo.

I contenitori meno recenti che non utilizzano la proprietà della tavolozza di ambiente invieranno messaggi WM_QUERYNEWPALETTE e WM_PALETTECHANGED. Un controllo `OnQueryNewPalette` può `OnPaletteChanged` eseguire l'override e gestire questi messaggi.

## <a name="internet-explorer-browser-safety-levels-and-control-behavior"></a><a name="_core_internet_explorer_browser_safety_levels_and_control_behavior"></a>Livelli di sicurezza del browser Internet Explorer e comportamento dei controlli

Un browser ha opzioni per il livello di sicurezza, configurabili dall'utente. Poiché le pagine Web possono includere contenuto attivo che potrebbe potenzialmente danneggiare il computer di un utente, i browser consentono all'utente di selezionare le opzioni per il livello di sicurezza. A seconda del modo in cui un browser implementa i livelli di sicurezza, un controllo potrebbe non essere scaricato affatto o verrà visualizzato un certificato o un messaggio di avviso per consentire all'utente di scegliere in fase di esecuzione se scaricare o meno il controllo. Il comportamento dei controlli ActiveX con livelli di sicurezza elevati, medi e bassi in Internet Explorer è elencato di seguito.

### <a name="high-safety-mode"></a>Modalità di sicurezza elevata

- I controlli non firmati non verranno scaricati.

- Controlli firmati verrà visualizzato un certificato se non attendibile (un utente può scegliere un'opzione per considerare sempre attendibile il codice da questo proprietario del certificato da ora in tanto).

- Solo i controlli contrassegnati come sicuri dicono dati persistenti e/o possono essere scriptable.

### <a name="medium-safety-mode"></a>Modalità di sicurezza media

- I controlli non firmati visualizzeranno un avviso prima del download.

- Controlli firmati verrà visualizzato un certificato se non attendibile.

- I controlli non contrassegnati come sicuri visualizzeranno un avviso.

### <a name="low-safety-mode"></a>Modalità di sicurezza bassa

- I controlli vengono scaricati senza preavviso.

- Gli script e la persistenza si verificano senza preavviso.

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Controlli ActiveX MFC: licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md)
