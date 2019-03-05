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
ms.openlocfilehash: fc7313c862d3536326894c947fa371d833e8fab8
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57276985"
---
# <a name="upgrading-an-existing-activex-control"></a>Aggiornamento di un controllo ActiveX esistente

Controlli ActiveX esistenti (precedentemente controlli OLE) può essere usato in Internet senza alcuna modifica. È possibile tuttavia modificare i controlli per migliorare le prestazioni.

> [!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Quando si usa il controllo in una pagina Web, esistono ulteriori considerazioni. Il file ocx e tutti i file di supporto devono essere nel computer di destinazione o essere scaricati da Internet. In questo modo la dimensione del codice e il download ora un aspetto importante. Download di possono essere inseriti in un file CAB con firma digitale. È possibile contrassegnare il controllo come sicuri per lo script e come sicuri per l'inizializzazione.

Nell'articolo vengono trattati gli argomenti seguenti:

- [Creazione di pacchetti codice per il download](#_core_packaging_code_for_downloading)

- [Contrassegno di sicuro un controllo per la creazione di script e l'inizializzazione](#_core_marking_a_control_safe_for_scripting_and_initializing)

- [Problemi relativi alle licenze](#_core_licensing_issues)

- [Firma del codice](#_core_signing_code)

- [Gestione della tavolozza](#_core_managing_the_palette)

- [Livelli di protezione del Browser Internet Explorer e il comportamento di controllo](#_core_internet_explorer_browser_safety_levels_and_control_behavior)

È anche possibile aggiungere delle ottimizzazioni, come descritto in [controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md). Moniker possono essere usati per scaricare le proprietà e BLOB di grandi dimensioni in modo asincrono, come descritto in [controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md).

##  <a name="_core_packaging_code_for_downloading"></a> Creazione di pacchetti codice per il download

Per altre informazioni su questo argomento, vedere [creazione di pacchetti dei controlli ActiveX](https://docs.microsoft.com//previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa751974%28v%3dvs.85%29).

### <a name="the-codebase-tag"></a>Il Tag di base di codice

Controlli ActiveX sono incorporati nelle pagine Web mediante il `<OBJECT>` tag. Il `CODEBASE` parametro il `<OBJECT>` tag specifica la posizione da cui scaricare il controllo. `CODEBASE` può fare riferimento a un numero di diversi tipi di file correttamente.

### <a name="using-the-codebase-tag-with-an-ocx-file"></a>Usando il Tag di base di codici con un File OCX

```
CODEBASE="http://example.microsoft.com/mycontrol.ocx#version=4,
    70,
    0,
    1086"
```

Questa soluzione consente di scaricare solo i file ocx del controllo e richiede le DLL di supporto essere già installato nel computer client. Questa tecnica funziona per i controlli di Internet Explorer e MFC ActiveX creati con Visual C++, in quanto Internet Explorer viene fornito con la DLL di supporto per i controlli di Visual C++. Se un altro browser Internet che è in grado di supportare controllo ActiveX viene utilizzato per visualizzare questo controllo, questa soluzione non funzionerà.

### <a name="using-the-codebase-tag-with-an-inf-file"></a>Usando il Tag di base di codici con un File INF

```
CODEBASE="http://example.microsoft.com/trustme.inf"
```

Un file. inf sarà possibile controllare l'installazione di un file ocx e relativi file di supporto. Questo metodo è sconsigliato perché non è possibile accedere a un file. inf (vedere [firma codice](#_core_signing_code) di indicatori di misura sulla firma del codice).

### <a name="using-the-codebase-tag-with-a-cab-file"></a>Usando il Tag di base di codici con un File CAB

```
CODEBASE="http://example.microsoft.com/acontrol.cab#version=1,
    2,
    0,
    0"
```

File CAB sono il modo consigliato per i controlli ActiveX di pacchetto che ne fanno uso. Creazione del pacchetto di un controllo ActiveX di MFC in un file CAB consente a un file. inf da includere per controllare l'installazione di eventuali DLL dipendenti (ad esempio le DLL MFC) e il controllo ActiveX. Usando un file CAB automaticamente comprime il codice per il download più rapido. Se si usa un file con estensione CAB per il download dei componenti, è più veloce per firmare il file con estensione cab intero rispetto a ogni singolo componente.

### <a name="creating-cab-files"></a>Creazione di file CAB

Strumenti per creare i file CAB sono ora fa parte del [Windows 10 SDK](https://dev.windows.com/downloads/windows-10-sdk).

Il file CAB a cui punta `CODEBASE` deve contenere il file ocx per il controllo ActiveX e un file con estensione inf per controllarne l'installazione. Si crea il file CAB, specificando il nome del file di controllo e un file. inf. Non includono file DLL dipendenti che potrebbero già esistere nel sistema in questo file CAB. Ad esempio, le DLL MFC sono compresse in un file CAB separato e a cui fa riferimento il controllo file. inf.

Per informazioni dettagliate su come creare un file CAB, vedere [creazione di un File CAB](/windows/desktop/devnotes/cabinet-api-functions).

### <a name="the-inf-file"></a>Il File INF

L'esempio seguente, spindial, gli elenchi di file di supporto e le informazioni sulla versione necessari per il Spindial MFC controllare. Si noti che il percorso per le DLL di MFC è un sito Web Microsoft. Il file Mfc42. cab viene fornito e firmato da Microsoft.

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

### <a name="the-object-tag"></a>Il \<oggetto > Tag

Nell'esempio seguente viene illustrato l'utilizzo di `<OBJECT>` tag per il controllo di esempio MFC Spindial del pacchetto.

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

In questo caso, spindial. cab contiene due file, spindial e SPINDIAL. Il comando seguente creerà il file CAB:

```
C:\CabDevKit\cabarc.exe -s 6144 N spindial.cab spindial.ocx spindial.inf
```

Il `-s 6144` parametro riservato spazio nel file CAB per la firma del codice.

### <a name="the-version-tag"></a>Il Tag di versione

Si noti che il `#Version` le informazioni specificate con un file CAB si applicano al controllo specificato dal *CLASSID* parametro del `<OBJECT>` tag.

A seconda della versione specificata, è possibile forzare il download del controllo. Per specifiche complete il `OBJECT` tag tra cui la *CODEBASE* parametro, vedere il W3C il riferimento.

##  <a name="_core_marking_a_control_safe_for_scripting_and_initializing"></a> Contrassegno di sicuro un controllo per la creazione di script e l'inizializzazione

Controlli ActiveX utilizzati nelle pagine Web devono essere contrassegnati come sicuri per lo scripting e per l'inizializzazione se sono in realtà sicuro. Un controllo sicuro non eseguire operazioni dei / o disco o accede direttamente la memoria o i registri di una macchina.

I controlli possono essere contrassegnati come sicuri per lo scripting e per l'inizializzazione tramite il Registro di sistema. Modificare `DllRegisterServer` per aggiungere voci simili al seguente per contrassegnare il controllo come sicuri per la creazione di script e la persistenza nel Registro di sistema. Un metodo alternativo consiste nell'implementare `IObjectSafety`.

Si definiranno i GUID (Globally Unique Identifier) per il controllo per contrassegnarlo come sicuri per lo scripting e per la persistenza. I controlli che è possibile creare script in modo sicuro conterrà una voce del Registro di sistema simile al seguente:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
```

Controlli che possono essere inizializzati in modo sicuro dai dati persistenti sono contrassegnati come sicuri per la persistenza con una voce del Registro di sistema simile a:

```
HKEY_CLASSES_ROOT\Component Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

Aggiungere le voci simili al seguente (sostituendo il controllo ID al posto di classe `{06889605-B8D0-101A-91F1-00608CEAD5B3}`) per associare le chiavi con l'ID di classe seguente:

```
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}
```

##  <a name="_core_licensing_issues"></a> Problemi relativi alle licenze

Se si desidera usare un controllo con licenza in una pagina Web, è necessario verificare che il contratto di licenza ne consente l'utilizzo su Internet e creare un file delle licenze (LPK) per tale.

Un controllo ActiveX con licenza non verrà caricato correttamente in una pagina HTML se il computer che esegue Internet Explorer non ha la licenza per usare il controllo. Ad esempio, se un controllo con licenza è stato creato usando Visual C++, la pagina HTML mediante il controllo verrà caricata correttamente nel computer in cui è stato compilato il controllo, ma non verrà caricata in un computer diverso, a meno che siano incluse informazioni sulle licenze.

Per usare un controllo ActiveX concesso in licenza in Internet Explorer, è necessario controllare il contratto di licenza del fornitore per verificare che la licenza per il controllo consenta:

- Ridistribuzione

- Utilizzo del controllo su Internet

- Utilizzo del parametro Codebase

Per usare un controllo con licenza in una pagina HTML in un computer privo di licenza, è necessario generare un file delle licenze (LPK). Il file LPK contiene le licenze di runtime per i controlli con licenza nella pagina HTML. Questo file viene generato LPK_Tool. File EXE che viene fornito con il SDK ActiveX. Per altre informazioni, vedere il sito Web MSDN all'indirizzo [ http://msdn.microsoft.com ](http://msdn.microsoft.com).

#### <a name="to-create-an-lpk-file"></a>Per creare un file LPK

1. Eseguire LPK_TOOL. File EXE in un computer in cui viene concesso in licenza per usare il controllo.

1. Nel **License pacchetto Authoring Tool** nella finestra di dialogo il **controlli disponibili** casella di riepilogo, selezionare ogni controllo ActiveX che verrà usato nella pagina HTML e fare clic su concesso in licenza **Add**.

1. Fare clic su **Salva ed Esci** e digitare un nome per il file LPK. Verrà creato il file LPK e chiudere l'applicazione.

#### <a name="to-embed-a-licensed-control-on-an-html-page"></a>Per incorporare un controllo con licenza in una pagina HTML

1. Modificare la pagina HTML. Nella pagina HTML, inserire un \<oggetto > tag per l'oggetto di gestione licenze prima di qualsiasi altro \<oggetto > tag. Gestione licenze è un controllo ActiveX installato con Internet Explorer. Seguito è riportato il relativo ID di classe. Impostare la proprietà LPKPath dell'oggetto gestione licenze per il percorso e il nome del file LPK. È possibile avere un solo file LPK per ogni pagina HTML.

```
<OBJECT CLASSID = "clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="relative URL to .LPK file">
</OBJECT>
```

1. Inserire il \<oggetto > tag per il controllo con licenza dopo il tag di gestione delle licenze.

   Ad esempio, una pagina HTML che visualizza il controllo MaskedEdit di Microsoft è illustrata di seguito. Il primo ID di classe che è per il controllo di gestione delle licenze, il secondo ID di classe che è per il controllo di modifica con maschera. Modificare i tag in modo che punti al percorso relativo del file lpk creato in precedenza e aggiungere un tag object incluso l'ID di classe per il controllo.

1. Inserire il \<INCORPORAMENTO > attributo per il file LPK, se si usa il plug-in NCompass ActiveX.

   Se il controllo può essere visualizzato su altri browser che supportano i attive, Netscape, ad esempio, usando il plug-in NCompass ActiveX, è necessario aggiungere il \<INCORPORAMENTO > sintassi come illustrato di seguito.

```
<OBJECT CLASSID="clsid:5220cb21-c88d-11cf-b347-00aa00a28331">
<PARAM NAME="LPKPath" VALUE="maskedit.lpk">

<EMBED SRC = "maskedit.LPK">

</OBJECT>
<OBJECT CLASSID="clsid:C932BA85-4374-101B-A56C-00AA003668DC" WIDTH=100 HEIGHT=25>
</OBJECT>
```

Per altre informazioni sulle licenze dei controlli, vedere [controlli ActiveX: Licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md).

##  <a name="_core_signing_code"></a> Firma del codice

La firma del codice è progettato per identificare l'origine del codice e per garantire che il codice non sia stato modificato perché è stato firmato. A seconda delle impostazioni di sicurezza del browser, gli utenti potrebbero essere avvisati prima del download di codice. Gli utenti possono scegliere di considerare attendibili alcuni proprietari di certificati o le aziende, in cui maiuscole codice firmato da quelle attendibili verranno scaricati senza alcun avviso. Codice è firmato digitalmente per evitare manomissioni.

Assicurarsi che il codice finale è firmato in modo che il controllo può essere scaricato automaticamente senza visualizzare messaggi di avviso di trust. Per informazioni dettagliate su come firmare il codice, consultare la documentazione su Authenticode nel SDK di ActiveX e vedere [firma di un File CAB](/windows/desktop/devnotes/cabinet-api-functions).

A seconda della relazione di trust e del browser a livello le impostazioni di protezione, potrebbe essere visualizzato un certificato per identificare la persona o l'azienda. Se il livello di protezione è none, o se il signed proprietario del controllo certificato è attendibile, non essere visualizzato un certificato. Visualizzare [livelli di protezione di Internet Explorer del Browser e controllare il comportamento](#_core_internet_explorer_browser_safety_levels_and_control_behavior) per informazioni dettagliate sul modo in cui l'impostazione della sicurezza del browser determina se il controllo viene scaricato e visualizzata di un certificato.

Digitale firma garantisce che il codice non è stato modificato dopo essere stato firmato. Un hash del codice viene portato e incorporato nel certificato. Questo hash in un secondo momento viene confrontato con un hash del codice eseguito dopo il codice è stato scaricato ma prima dell'esecuzione. Le aziende, ad esempio Verisign possono fornire chiavi pubbliche e private, necessarie per firmare il codice. ActiveX SDK viene fornito con MakeCert, un'utilità per la creazione di certificati di test.

##  <a name="_core_managing_the_palette"></a> Gestione della tavolozza

I contenitori di determinare la tavolozza e renderlo disponibile come proprietà di ambiente, **DISPID_AMBIENT_PALETTE**. Un contenitore (ad esempio, Internet Explorer) sceglie una tavolozza che viene utilizzata da tutti i controlli ActiveX in una pagina per determinare i propri tavolozza. Questo impedisce lo sfarfallio display e presenta un aspetto coerente.

Un controllo può eseguire l'override `OnAmbientPropertyChange` per gestire la notifica delle modifiche alla tavolozza.

Un controllo può eseguire l'override `OnGetColorSet` per restituire un set per disegnare la tavolozza di colori. I contenitori usano il valore restituito per determinare se un controllo è in grado di riconoscere tavolozza.

Sotto le istruzioni di 96 OCX, un controllo deve sempre realizzare la propria tavolozza in background.

Contenitori meno recenti che non usano la proprietà di ambiente tavolozza invierà messaggi WM_QUERYNEWPALETTE e WM_PALETTECHANGED. Un controllo può eseguire l'override `OnQueryNewPalette` e `OnPaletteChanged` per gestire questi messaggi.

##  <a name="_core_internet_explorer_browser_safety_levels_and_control_behavior"></a> Livelli di protezione del Browser Internet Explorer e il comportamento di controllo

Un browser è disponibili opzioni per il livello di sicurezza, configurabile dall'utente. Poiché le pagine Web possono contenere contenuto attivo che potrebbe potenzialmente danneggiare i computer dell'utente, i browser consentono all'utente selezionare le opzioni per il livello di sicurezza. A seconda della modalità che browser implementa i livelli di sicurezza, un controllo non può essere scaricato affatto o visualizzerà un certificato o un messaggio di avviso per consentire all'utente di scegliere se scaricare il controllo in fase di esecuzione. Il comportamento dei controlli ActiveX con livelli di protezione alta, medio e basso in Internet Explorer è elencato di seguito.

### <a name="high-safety-mode"></a>Modalità a sicurezza elevata

- Controlli non firmati non verranno scaricati.

- Controlli con firma elettronica verranno visualizzato un certificato, se non attendibili (un utente può scegliere un'opzione per considerare sempre attendibili codice dal proprietario di questo certificato nel).

- Solo i controlli contrassegnati come sicuri sono i dati persistenti e/o essere gestibile tramite script.

### <a name="medium-safety-mode"></a>Modalità di protezione Media

- I controlli senza verranno visualizzato un avviso prima del download.

- Controlli con firma elettronica visualizzerà un certificato, se non attendibili.

- Controlli non contrassegnati come sicuri verranno visualizzato un avviso.

### <a name="low-safety-mode"></a>Modalità a sicurezza bassa

- I controlli vengono scaricati senza alcun avviso.

- Script e la persistenza si verifica senza preavviso.

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Controlli ActiveX MFC: Licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md)
