---
title: "Aggiornamento di un controllo ActiveX esistente | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], Internet"
  - "CAB (file), per controlli ActiveX"
  - "applicazioni Internet [C++], controlli ActiveX"
  - "applicazioni Internet [C++], creazione del pacchetto di codice per il download"
  - "concessione in licenza di controlli ActiveX"
  - "file LPK per controlli Internet"
  - "controlli OLE [C++], aggiornamento ad ActiveX"
  - "sicurezza per script e inizializzazione (controlli)"
  - "aggiornamento di controlli ActiveX"
ms.assetid: 4d12ddfa-b491-4f9f-a0b7-b51458e05651
caps.latest.revision: 15
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiornamento di un controllo ActiveX esistente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli ActiveX esistenti \(precedentemente controlli OLE\) possono essere utilizzati in internet senza modifiche.  Tuttavia, è possibile modificare i controlli per migliorare le prestazioni.  Nell'utilizzo del controllo in una pagina Web, esistono considerazioni aggiuntive.  Il file OCX e tutti i file di supporto devono essere sul computer di destinazione o essere scaricati tramite internet.  In questo modo la dimensione del codice e il tempo di download un aspetto importante.  Download possono essere compressi in un file firmato con estensione cab.  È possibile contrassegnare il controllo come sicuri per gli script e come sicuri per inizializzare.  
  
 Questo articolo vengono illustrati i seguenti argomenti:  
  
-   [Comprimere il codice per scaricare](#_core_packaging_code_for_downloading)  
  
-   [Contrassegnare una cassaforte di controllo per lo script e inizializzare](#_core_marking_a_control_safe_for_scripting_and_initializing)  
  
-   [La licenza dei problemi](#_core_licensing_issues)  
  
-   [Codice della firma](#_core_signing_code)  
  
-   [Gestire la tavolozza](#_core_managing_the_palette)  
  
-   [Livelli di sicurezza del browser Internet Explorer e comportamento del controllo](#_core_internet_explorer_browser_safety_levels_and_control_behavior)  
  
 È inoltre possibile aggiungere le ottimizzazioni, come descritto in [Controlli ActiveX: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md).  I moniker possono essere utilizzati per scaricare le proprietà e i BLOB grandi dimensioni in modo asincrono, come descritto in [Controlli ActiveX in internet](../mfc/activex-controls-on-the-internet.md).  
  
##  <a name="_core_packaging_code_for_downloading"></a> Comprimere il codice per scaricare  
 Per ulteriori informazioni su questo oggetto, vedere l'articolo della Knowledge Base "pacchetti dei comandi MFC per l'utilizzo su Internet" \(Q167158\).  Gli articoli della Knowledge Base sono disponibili nel CD\-ROM di MSDN Library o all'indirizzo [http:\/\/support.microsoft.com\/support](http://support.microsoft.com/support).  
  
### Il tag di CODEBASE  
 I controlli ActiveX sono incorporati nelle pagine Web utilizzando il tag di `<OBJECT>`.  Il parametro di `CODEBASE` del tag di `<OBJECT>` specifica il percorso da cui scaricare il controllo.  `CODEBASE` può puntare a una serie di diversi tipi di file correttamente.  
  
### Utilizzo del tag di CODEBASE con un file di OCX  
  
```  
CODEBASE="http://example.microsoft.com/mycontrol.ocx#version=4,70,0,1086"  
```  
  
 Questa soluzione scaricare solo il file del file OCX del controllo e richiede tutte le DLL di supporto già di essere installata nel computer client.  Questa tecnica funziona per Internet Explorer e ActiveX MFC viene generato con Visual C\+\+, in quanto fornito di Internet Explorer con le DLL di supporto per i comandi di Visual C\+\+.  Se un altro browser Internet che è in grado di controlli ActiveX viene utilizzato per visualizzare il controllo, questa soluzione non funzionerà.  
  
### Utilizzo del tag di CODEBASE con un file di INF  
  
```  
CODEBASE="http://example.microsoft.com/trustme.inf"  
```  
  
 Un file di .inf verificherà l'installazione di un file OCX e dei relativi file di supporto.  Questo metodo non è consigliabile perché non è possibile firmare un file di .inf \(vedere [Codice della firma](#_core_signing_code) per i puntatori sulla firma di codice.  
  
### Utilizzo del tag di CODEBASE con un file CAB  
  
```  
CODEBASE="http://example.microsoft.com/acontrol.cab#version=1,2,0,0"  
```  
  
 I file del Governo sono la modalità consigliata comprimere i controlli ActiveX che utilizzano MFC.  Assemblaggio ActiveX MFC controlli in un file di installazione consente un file di .inf da includere per controllare l'installazione di controlli ActiveX e di tutte le DLL dipendenti come le DLL MFC\).  Utilizzo di un file CAB automaticamente comprime il codice per il download più rapido.  Se si utilizza un file .cab per il download componente, è più veloce firmare l'intero file CAB che ogni singolo componente.  
  
### Creare file CAB  
 È possibile scaricare il kit di sviluppo del Governo tramite l'articolo della Knowledge [310618: Software development kit del Governo Microsoft](http://go.microsoft.com/fwlink/?LinkId=148204)Base.  In questo kit sono disponibili gli strumenti necessari per creare i file cabinet.  
  
 Il file cabinet puntato da `CODEBASE` deve contenere il file OCX per il controllo ActiveX e un file di .inf per controllare la relativa installazione.  Creare il file cabinet specificando il nome del file del controllo e un file di .inf.  Non includere le DLL dipendenti che possano essere già disponibile nel sistema in questo file cabinet.  Ad esempio, le DLL MFC verranno compressi in un file separato di installazione e fare riferimento al file di controllo di .inf.  
  
 Per informazioni dettagliate su come creare un file CAB, vedere [Creare un file CAB](http://msdn.microsoft.com/it-it/cc52fd09-bdf6-4410-a693-149a308f36a3).  
  
### Il file di INF  
 Nell'esempio, spindial.inf, gli elenchi dei file di supporto e le informazioni sulla versione hanno richiesto per il controllo MFC Spindial.  Si noti che il percorso per le DLL MFC nel sito Web Microsoft.  Il mfc42.cab viene fornito e firmato da Microsoft.  
  
```  
Contents of spindial.inf:  
[mfc42installer]   
file-win32-x86=http://activex.microsoft.com/controls/vc/mfc42.cab   
[Olepro32.dll] - FileVersion=5,0,4261,0  
[Mfc42.dll] - FileVersion=6,0,8168,0  
[Msvcrt.dll] - FileVersion=6,0,8168,0  
```  
  
### \<Il tag\> di OBJECT  
 L'esempio seguente illustra l'utilizzo del tag di `<OBJECT>` per comprimere il controllo dell'esempio MFC Spindial.  
  
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
  
 In questo caso, spindial.cab conterrà due file, spindial.ocx e spindial.inf.  Il comando seguente compilerà il file cabinet:  
  
```  
C:\CabDevKit\cabarc.exe -s 6144 N spindial.cab spindial.ocx spindial.inf   
```  
  
 Il parametro di `–s 6144` backup lo spazio in installazione alla firma del codice.  
  
### Il tag della versione  
 Qui si noti che le informazioni di `#Version` specificate con un file CAB si applicano al controllo specificato dal parametro di `CLASSID` del tag di `<OBJECT>`.  
  
 A seconda della versione specificata, è possibile forzare il download del controllo.  Per le specifiche complete del tag di `OBJECT` incluso il parametro di `CODEBASE`, vedere riferimenti W3C.  
  
##  <a name="_core_marking_a_control_safe_for_scripting_and_initializing"></a> Contrassegnare una cassaforte di controllo per lo script e inizializzare  
 I controlli ActiveX utilizzati nelle pagine Web devono essere contrassegnati come la sicurezza per gli script e safe per inizializzare se sono in effetti sicuri.  Un controllo sicuro non eseguirà il disco IO o non utilizzerà la memoria o i registri di un computer direttamente.  
  
 I controlli possono essere contrassegnati come la sicurezza per gli script e safe per inizializzare tramite il Registro di sistema.  Modificare `DllRegisterServer` per aggiungere voci simili a quelli riportati di seguito per contrassegnare i controlli come sicuri per gli script e la persistenza nel Registro di sistema.  Un metodo alternativo consiste nell'implementazione di `IObjectSafety`.  
  
 Definire i GUID \(identificatori univoci globali\) per il controllo per contrassegnarlo sicuro per gli script e per la persistenza.  I controlli che è possibile in modo sicuro basati su script conterrà una voce del Registro di sistema simile al seguente:  
  
```  
HKEY_CLASSES_ROOT\Component Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}  
```  
  
 I controlli che possono in modo sicuro essere inizializzati i dati persistenti sono protette contrassegnata per la persistenza con una voce del Registro di sistema simile al seguente:  
  
```  
HKEY_CLASSES_ROOT\Component Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}  
```  
  
 Aggiungere le voci simili ai seguenti \(sostituendo la classe del controllo anziché `{06889605-B8D0-101A-91F1-00608CEAD5B3}`\) per associare le chiavi all'ID della classe:  
  
```  
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}   
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}   
```  
  
##  <a name="_core_licensing_issues"></a> La licenza dei problemi  
 Se si desidera utilizzare un controllo concesso in licenza in una pagina Web, è necessario verificare che il contratto di licenza consentire il relativo utilizzo in internet e creare un file di pacchetto di licenza \(LPK\) per esso.  
  
 Un controllo ActiveX con licenza non caricherà correttamente in una pagina HTML nel computer che esegue Internet Explorer non è concesso in licenza per utilizzare il controllo.  Ad esempio, se un controllo concesso in licenza viene compilato utilizzando Visual C\+\+, la pagina HTML utilizzando il controllo caricherà correttamente nel computer in cui il controllo è stato compilato, ma non verrà caricata in un computer diverso a meno che le informazioni sulle licenze sono incluse.  
  
 Per utilizzare un controllo ActiveX con licenza in Internet Explorer, è necessario controllare il contratto di licenza del fornitore verificare che la licenza del controllo consenti:  
  
-   Ridistribuzione  
  
-   Utilizzo del controllo su internet  
  
-   Utilizzo del parametro di codebase  
  
 Per utilizzare un controllo concesso in licenza in una pagina HTML in un computer nonlicensed, è necessario generare un file di pacchetto di licenza \(LPK\).  Il file di LPK contiene le licenze runtime per i controlli con licenza nella pagina HTML.  Questo file viene generato tramite LPK\_TOOL.EXE fornito con ActiveX SDK.  Per ulteriori informazioni, vedere il sito Web MSDN [http:\/\/msdn.microsoft.com](http://msdn.microsoft.com).  
  
#### Per creare un file LPK  
  
1.  Eseguire LPK\_TOOL.EXE in un computer in cui viene concesso in licenza per utilizzare il controllo.  
  
2.  Nella finestra di dialogo **License Package Authoring Tool**, nella casella di riepilogo **DisponibileControlli**, selezionare ciascun controllo ActiveX con licenza che verrà utilizzato nella pagina HTML e scegliere **Aggiungi**.  
  
3.  Fare clic **Save & Exit** e digitare un nome per il file di LPK.  Verrà creato il file di LPK e chiudere l'applicazione.  
  
#### Per importare un controllo concesso in licenza in una pagina HTML  
  
1.  Modificare la pagina HTML.  Nella pagina HTML, inserire \<un\> tag di OBJECT per l'oggetto di gestione della licenza prima che tutti gli altri \<tag\> di OBJECT.  L'amministratore di licenza è un controllo ActiveX installati con Internet Explorer.  Il relativo ID della classe viene indicato di seguito.  Impostare la proprietà di LPKPath dell'oggetto di gestione licenze il percorso e il nome del file di LPK.  È possibile specificare un solo file di LPK per pagina HTML.  
  
    ```  
    <OBJECT CLASSID = "clsid:5220cb21-c88d-11cf-b347-00aa00a28331">  
        <PARAM NAME="LPKPath" VALUE="relative URL to .LPK file">  
    </OBJECT>  
    ```  
  
2.  Inserire \<il tag\> di OBJECT per il controllo concesso in licenza dopo il tag dell'amministratore di licenza.  
  
     Ad esempio, una pagina HTML contenente il controllo masked di Microsoft è indicata di seguito.  La prima classe che l'id del controllo dell'amministratore di licenza, il secondo l'id della classe è per il controllo masked edit.  Modificare i tag per indicare il percorso relativo del file con estensione .lpk creato in precedenza e aggiungere un tag dell'oggetto incluso l'id di classe per il controllo.  
  
3.  Inserire \<l'attributo\> di INCORPORARE per il file di LPK, se l'utilizzo del plug\-in di NCompass ActiveX.  
  
     Se il controllo può essere visualizzato in altri browser abilitati attivi, ad esempio Netscape utilizzando il plug\-in di NCompass ActiveX \- è necessario aggiungere \<la sintassi\> di INCORPORARE come illustrato di seguito.  
  
    ```  
    <OBJECT CLASSID="clsid:5220cb21-c88d-11cf-b347-00aa00a28331">  
        <PARAM NAME="LPKPath" VALUE="maskedit.lpk">  
  
        <EMBED SRC = "maskedit.LPK">  
  
    </OBJECT>  
    <OBJECT CLASSID="clsid:C932BA85-4374-101B-A56C-00AA003668DC" WIDTH=100 HEIGHT=25>  
    </OBJECT>  
    ```  
  
 Per ulteriori informazioni sul controllo che consente licenza, vedere [Controlli ActiveX: Gestione delle licenze un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md).  
  
##  <a name="_core_signing_code"></a> Codice della firma  
 La firma del codice è progettata per identificare l'origine del codice e per garantire che il codice non è cambiato da quando è stato firmato.  A seconda delle impostazioni di sicurezza del browser, gli utenti possono essere avvisati prima di essere scaricato.  Gli utenti possono scegliere di attendibilità di proprietari sicuri o delle società del certificato in questo caso, il codice firmato da quelli di fidati verrà scaricato senza avviso.  Il codice è firmato digitalmente per evitare alterare.  
  
 Assicurarsi che il codice finale sia firmato in modo da consentire automaticamente scaricare il controllo senza visualizzare i messaggi di avviso l'attendibilità.  Per informazioni dettagliate su come firmare il codice, consultare la documentazione in Authenticode in ActiveX SDK e vedere [Firma del file CAB](http://msdn.microsoft.com/it-it/04d8b47a-8f1c-4b54-ab90-730fcdc03747).  
  
 A seconda delle impostazioni del livello di sicurezza del browser e fiducia, un certificato è possibile visualizzare per identificare la persona o la società di firma.  Se il livello di sicurezza è none, o se il proprietario con segno del certificato del controllo è attendibile, un certificato non vengono visualizzati.  Vedere [Livelli di sicurezza del browser Internet Explorer e comportamento del controllo](#_core_internet_explorer_browser_safety_levels_and_control_behavior) per informazioni dettagliate sull'impostazione della sicurezza del browser rileverà se il controllo viene scaricato e un certificato visualizzare.  
  
 Firma digitale che il codice di garanzie non è cambiato poiché è stato firmato.  Un hash di codice che segue è tratto e incorporato nel certificato.  Questo hash successivamente viene confrontato con un hash del codice eseguito dopo il codice viene scaricato ma prima che funzioni.  Le società come Verisign possono fornire privato e le chiavi pubbliche necessari per firmare il codice.  Viene fornito ActiveX SDK con MakeCert, un'utilità per creare i certificati di test.  
  
##  <a name="_core_managing_the_palette"></a> Gestire la tavolozza  
 I contenitori determinano la tavolozza e la rendono disponibili come proprietà di ambiente, **DISPID\_AMBIENT\_PALETTE**.  Un contenitore, ad esempio Internet Explorer\) esegue una tavolozza utilizzate da tutti i controlli ActiveX in una pagina per determinare la relativa tavolozza.  In questo modo si evita la visualizzazione lo sfarfallio e presenta un aspetto uniforme.  
  
 Un controllo può eseguire l'override `OnAmbientPropertyChange` per gestire la notifica delle modifiche alla tavolozza.  
  
 Un controllo può eseguire l'override `OnGetColorSet` per restituire un set di colori per disegnare la tavolozza.  I contenitori il valore restituito per determinare se un controllo è la tavolozza.  
  
 Nell'OCX 96 linee guida, un controllo devono eseguire sempre la tavolozza di sfondo.  
  
 I contenitori più recenti che non utilizzano la proprietà di ambiente palette invieranno `WM_QUERYNEWPALETTE` e messaggi di `WM_PALETTECHANGED`.  Un controllo può eseguire l'override `OnQueryNewPalette` e `OnPaletteChanged` per gestire questi messaggi.  
  
##  <a name="_core_internet_explorer_browser_safety_levels_and_control_behavior"></a> Livelli di sicurezza del browser Internet Explorer e comportamento del controllo  
 Un browser sono disponibili le opzioni per il livello di sicurezza, configurabili dall'utente.  Poiché le pagine Web possono contenere contenuto attivo che potrebbe potenzialmente compromettere il computer di un utente, i browser consente l'utente alle opzioni selezionate per il livello di sicurezza.  A seconda della modalità un browser implementa i livelli di sicurezza, un controllo non può essere scaricato a tutti, o che visualizza un certificato o un messaggio di avviso per consentire all'utente di scegliere in fase di esecuzione indipendentemente da scaricare il controllo.  Il comportamento dei controlli ActiveX nel livello, media e dei livelli inferiori della sicurezza in Internet Explorer viene elencato di seguito.  
  
### Modalità elevata di sicurezza  
  
-   I controlli senza segno non verranno scaricati.  
  
-   I controlli con segno visualizzare un certificato se non attendibile \(un utente può scegliere un'opzione sempre l'attendibilità del codice dal proprietario del certificato d'ora in poi\).  
  
-   Solo i controlli contrassegnati come sicuri avranno dati persistenti e\/o sono di script.  
  
### Modalità media di sicurezza  
  
-   I controlli senza segno visualizzato un avviso prima di scaricare.  
  
-   I controlli con segno visualizzare un certificato se non attendibili.  
  
-   I controlli non contrassegnati come sicuri visualizza un avviso.  
  
### Modalità inferiore di sicurezza  
  
-   I controlli vengono scaricati senza avviso.  
  
-   Lo script e la persistenza si verificano senza avviso.  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Controlli ActiveX MFC: licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md)