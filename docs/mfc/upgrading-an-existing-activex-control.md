---
title: Aggiornamento di un controllo ActiveX esistente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1a7b9c76ffd4366522dce366a165698bd3a26173
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="upgrading-an-existing-activex-control"></a>Aggiornamento di un controllo ActiveX esistente
Controlli ActiveX esistente (precedentemente controlli OLE) può essere utilizzato su Internet senza alcuna modifica. Tuttavia, è consigliabile modificare i controlli per migliorarne le prestazioni. Quando si utilizza il controllo in una pagina Web, esistono ulteriori considerazioni. Il file ocx e tutti i file di supporto devono essere nel computer di destinazione o essere scaricati attraverso Internet. In questo modo le dimensioni del codice e una parte importante di tempi di download. Download possono essere inseriti in un file CAB con firma digitale. È possibile contrassegnare il controllo come sicuri per lo script e come sicuri per l'inizializzazione.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
- [Codice di creazione di pacchetti per il download](#_core_packaging_code_for_downloading)  
  
- [Contrassegno di un controllo come sicuro per script e inizializzazione](#_core_marking_a_control_safe_for_scripting_and_initializing)  
  
- [Problemi relativi alle licenze](#_core_licensing_issues)  
  
- [Firma di codice](#_core_signing_code)  
  
- [Gestione della tavolozza](#_core_managing_the_palette)  
  
- [Livelli di sicurezza del Browser Internet Explorer e il comportamento di controllo](#_core_internet_explorer_browser_safety_levels_and_control_behavior)  
  
 È inoltre possibile aggiungere le ottimizzazioni, come descritto in [controlli ActiveX: ottimizzazione](../mfc/mfc-activex-controls-optimization.md). Moniker può essere usato per scaricare le proprietà e BLOB di grandi dimensioni in modo asincrono, come descritto in [controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md).  
  
##  <a name="_core_packaging_code_for_downloading"></a>Codice di creazione di pacchetti per il download  
 Per ulteriori informazioni su questo argomento, vedere l'articolo della Knowledge Base "Packaging MFC controlli per utilizzare Over the Internet" (Q167158). È possibile trovare articoli della Knowledge Base in [http://support.microsoft.com/support](http://support.microsoft.com/support).  
  
### <a name="the-codebase-tag"></a>Il Tag CODEBASE  
 Controlli ActiveX sono incorporati nelle pagine Web mediante il `<OBJECT>` tag. Il `CODEBASE` parametro il `<OBJECT>` tag specifica la posizione da cui scaricare il controllo. `CODEBASE`possibile fare riferimento a un numero di diversi tipi di file correttamente.  
  
### <a name="using-the-codebase-tag-with-an-ocx-file"></a>Utilizzo del Tag CODEBASE con un File OCX  
  
```  
CODEBASE="http://example.microsoft.com/mycontrol.ocx#version=4,
    70,
    0,
    1086"  
```  
  
 Questa soluzione consente di scaricare solo i file ocx del controllo e richiede tutte le DLL di supporto per già installati nel computer client. Funziona per i controlli ActiveX MFC e Internet Explorer compilati con Visual C++, poiché Internet Explorer viene fornito con la DLL di supporto per i controlli di Visual C++. Se un altro browser Internet che è in grado di supportare controllo ActiveX viene utilizzato per visualizzare questo controllo, questa soluzione non funzionerà.  
  
### <a name="using-the-codebase-tag-with-an-inf-file"></a>Utilizzo del Tag CODEBASE con un File INF  
  
```  
CODEBASE="http://example.microsoft.com/trustme.inf"  
```  
  
 Un file con estensione inf consente di controllare l'installazione di un file ocx e relativi file di supporto. Questo metodo è sconsigliato, perché non è possibile firmare un file con estensione inf (vedere [di firma codice](#_core_signing_code) per puntatori nella firma del codice).  
  
### <a name="using-the-codebase-tag-with-a-cab-file"></a>Utilizzo del Tag CODEBASE con un File CAB  
  
```  
CODEBASE="http://example.microsoft.com/acontrol.cab#version=1,
    2,
    0,
    0"  
```  
  
 File CAB sono il modo consigliato per i controlli ActiveX pacchetto che utilizza MFC. Creazione di controlli ActiveX MFC in un file CAB del pacchetto consente a un file. inf da includere per l'installazione del controllo del controllo ActiveX e tutte le DLL dipendenti (ad esempio le DLL di MFC). Utilizzando il file CAB automaticamente consente di comprimere il codice per il download più veloci. Se si utilizza un file con estensione CAB per il download dei componenti, risulta più veloce per firmare il file con estensione cab intera di ogni singolo componente.  
  
### <a name="creating-cab-files"></a>Creazione di file CAB  
 È possibile scaricare il Kit di sviluppo del file CAB dall'articolo della Knowledge Base [310618: Microsoft Cabinet Software Development Kit](http://go.microsoft.com/fwlink/p/?linkid=148204). In questo kit sono disponibili gli strumenti necessari per creare i file CAB.  
  
 Il file CAB a cui puntava `CODEBASE` deve contenere il file ocx per il controllo ActiveX e un file con estensione inf per controllarne l'installazione. Creare il file CAB specificando il nome del file di controllo e un file inf. Non includono file DLL dipendenti che potrebbero già esistere nel sistema in questo file CAB. Ad esempio, le DLL di MFC sono compresso in un file CAB separato e a cui fa riferimento il controllo file. inf.  
  
 Per informazioni dettagliate su come creare un file CAB, vedere [creazione di un File CAB](http://msdn.microsoft.com/en-us/cc52fd09-bdf6-4410-a693-149a308f36a3).  
  
### <a name="the-inf-file"></a>Il File INF  
 Nell'esempio seguente, spindial, elenchi i file di supporto e le informazioni sulla versione necessarie per il Spindial MFC controllare. Si noti che il percorso per le DLL di MFC è un sito Web Microsoft. Il file Mfc42. cab viene fornito e firmato da Microsoft.  
  
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
 Nell'esempio seguente viene illustrato l'utilizzo di `<OBJECT>` tag per il controllo di esempio Spindial MFC del pacchetto.  
  
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
  
 In questo caso, spindial. cab conterrà due file, spindial e SPINDIAL. Il comando seguente verrà compilato il file CAB:  
  
```  
C:\CabDevKit\cabarc.exe -s 6144 N spindial.cab spindial.ocx spindial.inf   
```  
  
 Il `-s 6144` parametro riserva spazio nel file CAB per la firma del codice.  
  
### <a name="the-version-tag"></a>Il Tag della versione  
 Si noti che il `#Version` specificate con un file CAB di informazioni si applicano al controllo specificato da di `CLASSID` parametro del `<OBJECT>` tag.  
  
 A seconda della versione specificata, è possibile forzare il download del controllo. Per specifiche complete di `OBJECT` inclusi tag di `CODEBASE` parametro, vedere il W3C di riferimento.  
  
##  <a name="_core_marking_a_control_safe_for_scripting_and_initializing"></a>Contrassegno di un controllo come sicuro per script e inizializzazione  
 Controlli ActiveX utilizzati nelle pagine Web devono essere contrassegnati come sicuri per lo scripting e per l'inizializzazione se sono in realtà-safe. Non eseguire operazioni dei / o disco o accedere direttamente la memoria o i registri di una macchina controllo sicuro.  
  
 I controlli possono essere contrassegnati come sicuri per lo scripting e per l'inizializzazione tramite il Registro di sistema. Modificare `DllRegisterServer` per aggiungere voci simili al seguente per contrassegnare il controllo come sicuri per la persistenza nel Registro di sistema e di scripting. Un metodo alternativo consiste nell'implementare `IObjectSafety`.  
  
 Si definirà GUID (Globally Unique Identifier) per il controllo per contrassegnarlo come sicuri per lo scripting e per la persistenza. I controlli che possono essere codificati in modo sicuro conterrà una voce del Registro di sistema simile al seguente:  
  
```  
HKEY_CLASSES_ROOT\Component Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}  
```  
  
 I controlli che possono essere inizializzati in modo sicuro da dati permanenti sono contrassegnati come sicuri per la persistenza con una voce del Registro di sistema simile a:  
  
```  
HKEY_CLASSES_ROOT\Component Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}  
```  
  
 Aggiungere le voci simili al seguente (sostituendo il controllo di ID di classe `{06889605-B8D0-101A-91F1-00608CEAD5B3}`) per associare le chiavi con il seguente ID classe:  
  
```  
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95801-9882-11CF-9FA9-00AA006C42C4}   
HKEY_CLASSES_ROOT\CLSID\{06889605-B8D0-101A-91F1-00608CEAD5B3}\Implemented Categories\{7DD95802-9882-11CF-9FA9-00AA006C42C4}   
```  
  
##  <a name="_core_licensing_issues"></a>Problemi relativi alle licenze  
 Se si desidera utilizzare un controllo concesso in licenza in una pagina Web, è necessario verificare che il contratto di licenza consente l'utilizzo su Internet e creare un file delle licenze (LPK) per essa.  
  
 Un controllo ActiveX con licenza non verrà caricato correttamente in una pagina HTML se il computer che esegue Internet Explorer non è concesso in licenza per utilizzare il controllo. Ad esempio, se un controllo con licenza è stato creato con Visual C++, la pagina HTML mediante il controllo verrà caricata correttamente nel computer in cui è stato compilato il controllo, ma non verrà caricata in un altro computer a meno che non sono incluse informazioni sulle licenze.  
  
 Per utilizzare un controllo ActiveX concesso in licenza in Internet Explorer, è necessario controllare il contratto di licenza del fornitore per verificare che la licenza per il controllo consente:  
  
-   Ridistribuzione  
  
-   Utilizzo del controllo su Internet  
  
-   Utilizzo del parametro Codebase  
  
 Per utilizzare un controllo concesso in licenza in una pagina HTML in un computer privo di licenza, è necessario generare un file delle licenze (LPK). Il file LPK contiene licenze in fase di esecuzione per i controlli con licenza nella pagina HTML. Questo file viene generato LPK_Tool. EXE, fornito con il SDK di ActiveX. Per ulteriori informazioni, vedere il sito Web MSDN all'indirizzo [http://msdn.microsoft.com](http://msdn.microsoft.com).  
  
#### <a name="to-create-an-lpk-file"></a>Per creare un file LPK  
  
1.  Eseguire LPK_TOOL. EXE su un computer in cui è concesso in licenza per utilizzare il controllo.  
  
2.  Nel **License Package Authoring Tool** della finestra di dialogo di **controlli disponibili** casella di riepilogo, selezionare ogni controllo ActiveX che verrà utilizzato nella pagina HTML e fare clic su concesso in licenza **Aggiungi**.  
  
3.  Fare clic su **Salva ed Esci** e digitare un nome per il file LPK. Verrà creato il file LPK e chiudere l'applicazione.  
  
#### <a name="to-embed-a-licensed-control-on-an-html-page"></a>Per incorporare un controllo concesso in licenza in una pagina HTML  
  
1.  Modifica una pagina HTML. Nella pagina HTML, inserire un \<oggetto > tag per l'oggetto di gestione licenze prima di qualsiasi altro \<oggetto > tag. Gestione licenze è un controllo ActiveX che viene installato con Internet Explorer. Di seguito è riportata l'ID di classe. Impostare la proprietà LPKPath dell'oggetto di gestione licenze per il percorso e il nome del file LPK. È possibile avere un solo file LPK per ogni pagina HTML.  
  
 ```  
 <OBJECT CLASSID = "clsid:5220cb21-c88d-11cf-b347-00aa00a28331">  
 <PARAM NAME="LPKPath" VALUE="relative URL to .LPK file">  
 </OBJECT>  
 ```  
  
2.  Inserire il \<oggetto > tag del controllo concesso in licenza dopo il tag di gestione licenze.  
  
     Ad esempio, una pagina HTML che visualizza il controllo MaskedEdit Microsoft è illustrata di seguito. Il primo ID di classe che è per il controllo di gestione licenze, la seconda classe che ID è per il controllo MaskedEdit. Modificare i tag per indicare il percorso relativo del file lpk creato in precedenza e aggiungere un tag object, tra cui l'ID di classe per il controllo.  
  
3.  Inserire il \<EMBED > attributo per il file LPK, se si usa il plug-in NCompass ActiveX.  
  
     Se il controllo può essere visualizzato su altri browser con abilitazione Active, ad esempio Netscape mediante il plug-in NCompass ActiveX, è necessario aggiungere il \<EMBED > sintassi come illustrato di seguito.  
  
 ```  
 <OBJECT CLASSID="clsid:5220cb21-c88d-11cf-b347-00aa00a28331">  
 <PARAM NAME="LPKPath" VALUE="maskedit.lpk">  
 
 <EMBED SRC = "maskedit.LPK">  
 
 </OBJECT>  
 <OBJECT CLASSID="clsid:C932BA85-4374-101B-A56C-00AA003668DC" WIDTH=100 HEIGHT=25>  
 </OBJECT>  
 ```  
  
 Per ulteriori informazioni sulle licenze di controllo, vedere [controlli ActiveX: licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md).  
  
##  <a name="_core_signing_code"></a>Firma di codice  
 La firma del codice è progettato per identificare l'origine del codice e per garantire che il codice non sia stato modificato perché è stato firmato. A seconda delle impostazioni di sicurezza del browser, gli utenti potrebbero essere avvisati prima che il codice venga scaricato. Gli utenti possono scegliere di considerare attendibile determinati proprietari di certificati o le società, in cui case codice firmato da questi attendibili verranno scaricati senza alcun avviso. Il codice è firma digitale per evitare manomissioni.  
  
 Verificare che il codice finale è firmato in modo che il controllo può essere scaricato automaticamente senza visualizzare i messaggi di avviso di trust. Per informazioni dettagliate su come firmare il codice, vedere la documentazione su Authenticode in ActiveX SDK e vedere [firma di un File CAB](http://msdn.microsoft.com/en-us/04d8b47a-8f1c-4b54-ab90-730fcdc03747).  
  
 A seconda della relazione di trust e browser livello le impostazioni di protezione, potrebbe essere visualizzato un certificato per identificare la persona o l'azienda. Se il livello di sicurezza è none, o proprietario del certificato del controllo con segno è attendibile, un certificato non essere visualizzato. Vedere [livelli di sicurezza del Browser Internet Explorer e controllare il comportamento](#_core_internet_explorer_browser_safety_levels_and_control_behavior) per informazioni dettagliate su come l'impostazione della sicurezza del browser determinano se il controllo viene scaricato e visualizzata di un certificato.  
  
 Codice garanzie di firma digitale non è stato modificato dopo essere stato firmato. Un hash del codice viene eseguito e incorporato nel certificato. Questo hash in un secondo momento viene confrontato con un hash del codice eseguito dopo il codice è stato scaricato, ma prima dell'esecuzione. Le aziende, ad esempio Verisign possono fornire le chiavi pubbliche e private necessarie firmare il codice. ActiveX SDK viene fornito con MakeCert, un'utilità per la creazione di certificati di prova.  
  
##  <a name="_core_managing_the_palette"></a>Gestione della tavolozza  
 Contenitori di determinare la tavolozza e renderlo disponibile come proprietà di ambiente, **DISPID_AMBIENT_PALETTE**. Un contenitore (ad esempio, Internet Explorer) sceglie una tavolozza che viene utilizzata da tutti i controlli ActiveX in una pagina per determinare i propri tavolozza. Ciò impedisce lo sfarfallio visualizzato e presenta un aspetto coerente.  
  
 Può eseguire l'override di un controllo `OnAmbientPropertyChange` per gestire la notifica delle modifiche alla tavolozza.  
  
 Può eseguire l'override di un controllo `OnGetColorSet` per restituire un set per disegnare la tavolozza di colori. Contenitori di utilizzano il valore restituito per determinare se un controllo è in grado di riconoscere tavolozza.  
  
 Nelle indicazioni OCX 96, un controllo deve sempre realizzare la propria tavolozza in background.  
  
 Contenitori meno recenti che non utilizzano la proprietà di ambiente tavolozza invierà `WM_QUERYNEWPALETTE` e `WM_PALETTECHANGED` i messaggi. Può eseguire l'override di un controllo `OnQueryNewPalette` e `OnPaletteChanged` per gestire questi messaggi.  
  
##  <a name="_core_internet_explorer_browser_safety_levels_and_control_behavior"></a>Livelli di sicurezza del Browser Internet Explorer e il comportamento di controllo  
 Opzioni per il livello di sicurezza, configurabile dall'utente da un browser. Poiché le pagine Web può contenere contenuto attivo che potrebbe danneggiare computer il, i browser consentono all'utente di selezionare le opzioni per il livello di sicurezza. A seconda della modalità di che un browser implementa i livelli di sicurezza, un controllo non può essere scaricato affatto o verrà visualizzato un certificato o un messaggio di avviso per consentire all'utente di scegliere se utilizzare o meno il download del controllo in fase di esecuzione. Il comportamento dei controlli ActiveX con i livelli di sicurezza alto, medio e basso in Internet Explorer elencato di seguito.  
  
### <a name="high-safety-mode"></a>Modalità a sicurezza elevata  
  
-   Controlli non firmati non verranno scaricati.  
  
-   Controlli con firma verranno visualizzato un certificato, se non attendibili (un utente può scegliere un'opzione per considerare sempre attendibile codice da questo proprietario del certificato d'ora in avanti).  
  
-   Solo i controlli contrassegnati come sicuri dispongono di dati persistenti e/o essere gestibili tramite script.  
  
### <a name="medium-safety-mode"></a>Modalità di protezione Media  
  
-   Controlli non firmati verranno visualizzato un avviso prima del download.  
  
-   Controlli con firma verranno visualizzato un certificato, se non attendibili.  
  
-   Controlli non contrassegnati come sicuri verranno visualizzato un avviso.  
  
### <a name="low-safety-mode"></a>Modalità di sicurezza bassa  
  
-   I controlli vengono scaricati senza alcun avviso.  
  
-   Persistenza e script vengono eseguiti senza avviso.  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni fondamentali di programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Controlli ActiveX MFC: licenze di un controllo ActiveX](../mfc/mfc-activex-controls-licensing-an-activex-control.md)

