---
description: 'Altre informazioni su: aggiornamento di un controllo ActiveX esistente'
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
ms.openlocfilehash: aeff78eca2c88bea9bcceb7ac6f79e907c141350
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263686"
---
# <a name="upgrading-an-existing-activex-control"></a>Aggiornamento di un controllo ActiveX esistente

È possibile utilizzare i controlli ActiveX esistenti (noti in precedenza come controlli OLE) su Internet senza alcuna modifica. Tuttavia, potrebbe essere necessario modificare i controlli per migliorarne le prestazioni.

> [!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Quando si utilizza il controllo in una pagina Web, è necessario considerare alcune considerazioni aggiuntive. Il file ocx e tutti i file di supporto devono trovarsi nel computer di destinazione o essere scaricati su Internet. In questo modo, le dimensioni del codice e il tempo di download sono un'importante considerazione. I download possono essere inclusi in un file con estensione CAB firmato. È possibile contrassegnare il controllo come sicuro per gli script e come sicuro per l'inizializzazione.

Questo articolo tratta gli argomenti seguenti:

- [Creazione del pacchetto del codice per il download](#_core_packaging_code_for_downloading)

- [Contrassegno di un controllo sicuro per la creazione di script e l'inizializzazione](#_core_marking_a_control_safe_for_scripting_and_initializing)

- [Problemi di licenza](#_core_licensing_issues)

- [Firma del codice](#_core_signing_code)

- [Gestione della tavolozza](#_core_managing_the_palette)

- [Livelli di sicurezza del browser di Internet Explorer e comportamento del controllo](#_core_internet_explorer_browser_safety_levels_and_control_behavior)

È anche possibile aggiungere ottimizzazioni, come descritto in [controlli ActiveX: ottimizzazione](../mfc/mfc-activex-controls-optimization.md). I moniker possono essere usati per scaricare le proprietà e i BLOB di grandi dimensioni in modo asincrono, come descritto in [controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md).

## <a name="packaging-code-for-downloading"></a><a name="_core_packaging_code_for_downloading"></a> Creazione del pacchetto del codice per il download

Per altre informazioni su questo argomento, vedere Creazione di [pacchetti di controlli ActiveX](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa751974%28v%3dvs.85%29).

### <a name="the-codebase-tag"></a>Tag codebase

I controlli ActiveX sono incorporati nelle pagine Web usando il `<OBJECT>` tag. Il `CODEBASE` parametro del `<OBJECT>` tag specifica il percorso da cui scaricare il controllo. `CODEBASE` può puntare correttamente a un certo numero di tipi di file diversi.

### <a name="using-the-codebase-tag-with-an-ocx-file"></a>Uso del tag CODEBASE con un file OCX

```
CODEBASE="http://example.microsoft.com/mycontrol.ocx#version=4,
    70,
    0,
    1086"
```

Questa soluzione Scarica solo il file ocx del controllo e richiede che le DLL di supporto siano già installate nel computer client. Questa operazione funzionerà per i controlli ActiveX di Internet Explorer e MFC compilati con Visual C++, perché Internet Explorer viene fornito con le DLL di supporto per i controlli Visual C++. Se per visualizzare questo controllo viene usato un altro browser Internet che supporta il controllo ActiveX, questa soluzione non funzionerà.

### <a name="using-the-codebase-tag-with-an-inf-file"></a>Uso del tag CODEBASE con un file INF

```
CODEBASE="http://example.microsoft.com/trustme.inf"
```

Un file con estensione inf controllerà l'installazione di un file con estensione ocx e i relativi file di supporto. Questo metodo non è consigliato perché non è possibile firmare un file inf (vedere il codice di [firma](#_core_signing_code) per i puntatori sulla firma del codice).

### <a name="using-the-codebase-tag-with-a-cab-file"></a>Uso del tag CODEBASE con un file CAB

```
CODEBASE="http://example.microsoft.com/acontrol.cab#version=1,
    2,
    0,
    0"
```

I file CAB sono la soluzione consigliata per creare pacchetti di controlli ActiveX che utilizzano MFC. Il packaging di un controllo ActiveX MFC in un file CAB consente l'inclusione di un file con estensione inf per controllare l'installazione del controllo ActiveX e delle eventuali DLL dipendenti, ad esempio le DLL MFC. L'utilizzo di un file CAB comprime automaticamente il codice per un download più rapido. Se si utilizza un file con estensione cab per il download del componente, è più veloce firmare l'intero file CAB rispetto a ogni singolo componente.

### <a name="creating-cab-files"></a>Creazione di file CAB

Gli strumenti per creare file CAB fanno ora parte di [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk).

Il file CAB a cui punta `CODEBASE` deve contenere il file ocx per il controllo ActiveX e un file con estensione inf per controllarne l'installazione. Il file CAB viene creato specificando il nome del file di controllo e un file con estensione inf. Non includere DLL dipendenti che potrebbero essere già presenti nel sistema in questo file CAB. Le DLL MFC, ad esempio, sono inserite in un file CAB separato e a cui fa riferimento il file. inf di controllo.

Per informazioni dettagliate su come creare un file CAB, vedere [creazione di un file CAB](/windows/win32/devnotes/cabinet-api-functions).

### <a name="the-inf-file"></a>File INF

Nell'esempio seguente, spindial. inf, sono elencati i file di supporto e le informazioni sulla versione necessarie per il controllo SPINDIAL MFC. Si noti che il percorso per le DLL MFC è un sito Web Microsoft. Il mfc42.cab viene fornito e firmato da Microsoft.

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

### <a name="the-object-tag"></a>\<OBJECT>Tag

Nell'esempio seguente viene illustrato l'utilizzo del `<OBJECT>` tag per creare il pacchetto del controllo di esempio MFC Spindial.

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

In questo caso, spindial.cab conterrà due file, spindial. ocx e spindial. inf. Il comando seguente compilerà il file CAB:

```
C:\CabDevKit\cabarc.exe -s 6144 N spindial.cab spindial.ocx spindial.inf
```

Il `-s 6144` parametro riserva spazio nel file CAB per la firma del codice.

### <a name="the-version-tag"></a>Tag Version

Si noti che le `#Version` informazioni specificate con un file CAB si applicano al controllo specificato dal parametro *ClassID* del `<OBJECT>` tag.

A seconda della versione specificata, è possibile forzare il download del controllo. Per le specifiche complete del `OBJECT` tag, incluso il parametro *codebase* , vedere le informazioni di riferimento su W3C.

## <a name="marking-a-control-safe-for-scripting-and-initializing"></a><a name="_core_marking_a_control_safe_for_scripting_and_initializing"></a> Contrassegno di un controllo sicuro per la creazione di script e l'inizializzazione

I controlli ActiveX utilizzati nelle pagine Web devono essere contrassegnati come sicuri per gli script e sicuri per l'inizializzazione se sono in realtà sicuri. Un controllo sicuro non eseguirà l'i/o del disco o accederà direttamente alla memoria o ai registri di un computer.

I controlli possono essere contrassegnati come sicuri per gli script e sicuri per l'inizializzazione tramite il registro di sistema. Modificare `DllRegisterServer` per aggiungere voci simili alle seguenti per contrassegnare il controllo come sicuro per la creazione di script e la persistenza nel registro di sistema. Un metodo alternativo consiste nell'implementare `IObjectSafety` .

È possibile definire GUID (identificatori univoci globali) per il controllo per contrassegnarlo come sicuro per gli script e per la persistenza. I controlli che possono essere scritti in modo sicuro conterranno una voce del registro di sistema simile alla seguente:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
```

I controlli che possono essere inizializzati in modo sicuro da dati persistenti sono contrassegnati come sicuri per la persistenza con una voce del registro di sistema simile a

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

Aggiungere voci simili alle seguenti (sostituendo l'ID classe del controllo al posto di `{06889605-B8D0-101A-91F1-00608CEAD5B3}` ) per associare le chiavi al seguente ID classe:

```
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

## <a name="licensing-issues"></a><a name="_core_licensing_issues"></a> Problemi di licenza

Se si desidera utilizzare un controllo concesso in licenza in una pagina Web, è necessario verificare che il contratto di licenza ne consenta l'utilizzo su Internet e creare un file del pacchetto di licenze (LPK).

Un controllo ActiveX con licenza non verrà caricato correttamente in una pagina HTML se il computer in cui è in esecuzione Internet Explorer non è concesso in licenza per l'utilizzo del controllo. Se, ad esempio, è stato creato un controllo con licenza utilizzando Visual C++, la pagina HTML che utilizza il controllo verrà caricata correttamente nel computer in cui è stato compilato il controllo, ma non verrà caricata in un computer diverso a meno che non siano incluse informazioni sulle licenze.

Per utilizzare un controllo ActiveX concesso in licenza in Internet Explorer, è necessario controllare il contratto di licenza del fornitore per verificare che la licenza per il controllo consenta:

- Ridistribuzione

- Uso del controllo su Internet

- Uso del parametro codebase

Per utilizzare un controllo concesso in licenza in una pagina HTML in un computer senza licenza, è necessario generare un file del pacchetto di licenze (LPK). Il file LPK contiene licenze di run-time per i controlli con licenza nella pagina HTML. Questo file viene generato tramite LPK_TOOL.EXE, incluso in ActiveX SDK.

#### <a name="to-create-an-lpk-file"></a>Per creare un file LPK

1. Eseguire LPK_TOOL.EXE in un computer con licenza per l'utilizzo del controllo.

1. Nella casella di riepilogo **controlli disponibili** della finestra di dialogo **strumenti di creazione pacchetti licenze** selezionare ogni controllo ActiveX concesso in licenza che verrà usato nella pagina HTML e fare clic su **Aggiungi**.

1. Fare clic su **salva & uscire** e digitare un nome per il file LPK. Verrà creato il file LPK e la chiusura dell'applicazione.

#### <a name="to-embed-a-licensed-control-on-an-html-page"></a>Per incorporare un controllo concesso in licenza in una pagina HTML

1. Modificare la pagina HTML. Nella pagina HTML inserire un \<OBJECT> tag per l'oggetto di gestione licenze prima di qualsiasi altro \<OBJECT> tag. Il gestore delle licenze è un controllo ActiveX installato con Internet Explorer. Il relativo ID di classe è illustrato di seguito. Impostare la proprietà LPKPath dell'oggetto gestione licenze sul percorso e il nome del file LPK. È possibile avere un solo file LPK per ogni pagina HTML.

```
<OBJECT CLASSID = "clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="relative URL to .LPK file">
</OBJECT>
```

1. Inserire il \<OBJECT> tag per il controllo concesso in licenza dopo il tag di gestione licenze.

   Ad esempio, una pagina HTML in cui viene visualizzato il controllo di modifica mascherato Microsoft è riportata di seguito. Il primo ID di classe è per il controllo di gestione licenze, il secondo ID di classe è per il controllo di modifica mascherato. Modificare i tag in modo che puntino al percorso relativo del file con estensione lpk creato in precedenza e aggiungere un tag Object, incluso l'ID della classe per il controllo.

1. Inserire l' \<EMBED> attributo per il file LPK, se si usa il plug-in ActiveX NCompass.

   Se il controllo può essere visualizzato in altri browser abilitati attivi, ad esempio Netscape usando il plug-in ActiveX NCompass, è necessario aggiungere la \<EMBED> sintassi come illustrato di seguito.

```
<OBJECT CLASSID="clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="maskedit.lpk">

<EMBED SRC = "maskedit.LPK">

</OBJECT>
<OBJECT CLASSID="clsid:C932BA85-4374-101B-A56C-00AA003668DC" WIDTH=100 HEIGHT=25>
</OBJECT>
```

Per ulteriori informazioni sulle licenze dei controlli, vedere [controlli ActiveX: gestione licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md).

## <a name="signing-code"></a><a name="_core_signing_code"></a> Firma del codice

La firma del codice è progettata per identificare l'origine del codice e per garantire che il codice non sia stato modificato dopo la firma. A seconda delle impostazioni di sicurezza del browser, è possibile che gli utenti vengano avvisati prima che il codice venga scaricato. Gli utenti possono scegliere di considerare attendibili determinati proprietari o società del certificato, nel qual caso il codice firmato da questi trusted verrà scaricato senza preavviso. Il codice è firmato digitalmente per evitare manomissioni.

Verificare che il codice finale sia firmato, in modo che il controllo possa essere scaricato automaticamente senza visualizzare i messaggi di avviso di attendibilità. Per informazioni dettagliate su come firmare il codice, consultare la documentazione su Authenticode in ActiveX SDK e vedere [firma di un file CAB](/windows/win32/devnotes/cabinet-api-functions).

A seconda delle impostazioni relative a attendibilità e livello di sicurezza del browser, è possibile che venga visualizzato un certificato per identificare la persona o la società di firma. Se il livello di sicurezza è None o se il proprietario del certificato del controllo firmato è attendibile, non verrà visualizzato un certificato. Per informazioni dettagliate sul modo in cui l'impostazione di sicurezza del browser determinerà se il controllo viene scaricato e viene visualizzato un certificato, vedere [livelli di sicurezza del browser Internet Explorer e comportamento del controllo](#_core_internet_explorer_browser_safety_levels_and_control_behavior) .

La firma digitale garantisce che il codice non sia cambiato dopo che è stato firmato. Un hash del codice viene eseguito e incorporato nel certificato. Questo hash viene quindi confrontato con un hash del codice eseguito dopo il download del codice, ma prima dell'esecuzione. Le aziende come Verisign possono fornire chiavi pubbliche e private necessarie per la firma del codice. ActiveX SDK viene fornito con MakeCert, un'utilità per la creazione di certificati di test.

## <a name="managing-the-palette"></a><a name="_core_managing_the_palette"></a> Gestione della tavolozza

I contenitori determinano la tavolozza e lo rendono disponibile come proprietà di ambiente, **DISPID_AMBIENT_PALETTE**. Un contenitore, ad esempio Internet Explorer, sceglie una tavolozza utilizzata da tutti i controlli ActiveX in una pagina per determinare la propria tavolozza. Ciò impedisce la visualizzazione dello sfarfallio e presenta un aspetto coerente.

Un controllo può eseguire l'override `OnAmbientPropertyChange` di per gestire la notifica delle modifiche apportate alla tavolozza.

Un controllo può eseguire l'override `OnGetColorSet` di per restituire un set di colori per creare la tavolozza. I contenitori usano il valore restituito per determinare se un controllo è in grado di riconoscere la tavolozza.

Con le linee guida di OCX 96, un controllo deve sempre realizzare la propria tavolozza in background.

I contenitori meno recenti che non utilizzano la proprietà tavolozza di ambiente invieranno WM_QUERYNEWPALETTE e WM_PALETTECHANGED messaggi. Un controllo può eseguire l'override `OnQueryNewPalette` `OnPaletteChanged` di e per gestire questi messaggi.

## <a name="internet-explorer-browser-safety-levels-and-control-behavior"></a><a name="_core_internet_explorer_browser_safety_levels_and_control_behavior"></a> Livelli di sicurezza del browser di Internet Explorer e comportamento del controllo

Un browser dispone di opzioni per il livello di sicurezza configurabili dall'utente. Poiché le pagine Web possono contenere contenuto attivo che potrebbe potenzialmente danneggiare il computer di un utente, i browser consentono all'utente di selezionare le opzioni per il livello di sicurezza. A seconda del modo in cui un browser implementa i livelli di sicurezza, è possibile che un controllo non venga scaricato o visualizzi un certificato o un messaggio di avviso per consentire all'utente di scegliere in fase di esecuzione se scaricare o meno il controllo. Di seguito è riportato il comportamento dei controlli ActiveX con livelli di protezione alto, medio e basso in Internet Explorer.

### <a name="high-safety-mode"></a>Modalità a sicurezza elevata

- I controlli non firmati non verranno scaricati.

- I controlli firmati visualizzeranno un certificato se non attendibile (un utente può scegliere un'opzione per considerare sempre attendibile il codice del proprietario del certificato da questo momento in poi).

- Solo i controlli contrassegnati come sicuri avranno dati persistenti e/o potranno essere scritti tramite script.

### <a name="medium-safety-mode"></a>Modalità di sicurezza media

- Nei controlli senza segno verrà visualizzato un avviso prima del download.

- I controlli firmati visualizzeranno un certificato se non attendibile.

- I controlli non contrassegnati come sicuri visualizzeranno un avviso.

### <a name="low-safety-mode"></a>Modalità a bassa sicurezza

- I controlli vengono scaricati senza preavviso.

- Gli script e la persistenza vengono eseguiti senza preavviso.

## <a name="see-also"></a>Vedi anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni fondamentali sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Controlli ActiveX MFC: licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md)
