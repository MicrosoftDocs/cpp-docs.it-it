---
title: 'TN035: Utilizzo di più file di risorse e i file di intestazione in Visual C++ | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.resources
dev_langs:
- C++
helpviewer_keywords:
- resource files, multiple
- TN035
ms.assetid: 1f08ce5e-a912-44cc-ac56-7dd93ad73fb6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c374e0d14375450533326be5fd406fe8147e475a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385378"
---
# <a name="tn035-using-multiple-resource-files-and-header-files-with-visual-c"></a>TN035: utilizzo di più file di risorse e di intestazione in Visual C++
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota viene descritto in che modo l'editor risorse di Visual C++ supporta più file di risorse e file di intestazione condivisi in un singolo progetto o tra più progetti e come è possibile usufruire di tale supporto. Questa nota risponde alle domande seguenti:  
  
-   Quando si potrebbe desiderare di dividere un progetto in più file di risorse e/o file di intestazione e come si esegue questa operazione  
  
-   Come si condivide un'intestazione comune. File H tra due. RC (file)  
  
-   Come si dividono le risorse del progetto in più. RC (file)  
  
-   Come si (e gli strumenti) gestiscono le dipendenze di compilazione tra. RC. CPP, e. File H  
  
 Tenere presente che se si aggiunge un file di risorse aggiuntivo al progetto, ClassWizard non riconoscerà le risorse nel file aggiunto.  
  
 Questa nota è strutturata in modo da rispondere alle domande elencate in precedenza come segue:  
  
- **Panoramica del modo in cui Visual C++ gestisce i file di risorse e file di intestazione** viene fornita una panoramica del modo in cui il comando Inclusioni risorsa in Visual C++ consente di usare più file di risorse e file di intestazione nello stesso progetto.  
  
- **Analisi dei creato dalla creazione guidata applicazioni. RC e. File H** esamina i file di risorse e di intestazione più usati da un'applicazione creata dalla creazione guidata applicazioni. Questi file vengono utilizzati come modello per ulteriori file di risorse e di intestazione che potrebbero essere aggiunti al progetto.  
  
- **Inclusione di file di intestazione aggiuntivi** descrive dove si potrebbe desiderare di includere più file di intestazione e fornisce dettagli come eseguire questa operazione.  
  
- **Condividendo un File di intestazione tra due. File RC** viene illustrato come è possibile condividere un file di intestazione tra più. RC (file) in progetti diversi o eventualmente nello stesso progetto.  
  
- **Utilizzo di più file di risorse nello stesso progetto** descrive dove si potrebbe voler suddividere il progetto in più. RC di file e fornisce dettagli come eseguire questa operazione.  
  
- **Applicazione dei file di Visual C++ Non modificabili** viene descritto come è possibile assicurarsi che Visual C++ non modifichi e riformatti accidentalmente una risorsa personalizzata.  
  
- **Gestione di simboli condivisi da più Visual C++ modificate. File RC** viene descritto come condividere gli stessi simboli tra più. RC (file) e su come evitare di assegnare valori numerici di ID duplicati.  
  
- **Gestione delle dipendenze tra. RC. CPP, e. File H** viene descritto come Visual C++ consente di evitare la ricompilazione non necessari. File CPP dipendenti da file di simboli di risorsa.  
  
- **Funzionamento di Visual C++ gestisce Set include informazioni** forniti dettagli tecnici sul modo in cui Visual C++ tiene traccia di più (annidati). RC (file) e più file di intestazione sono # include da un. File RC.  
  
 **Panoramica di Visual C++ gestisce i file di risorse e file di intestazione**  
  
 Visual C++ gestisce un singolo file di risorse con estensione RC e un corrispondente file di intestazione con estensione H come coppia di file strettamente accoppiata. Quando si modificano e si salvano le risorse in un file RC, si modificano e si salvano indirettamente i simboli nel file H corrispondente. Sebbene sia possibile aprire e modificare più file RC contemporaneamente, mediante l'interfaccia utente MDI di Visual C++, per qualsiasi file RC specificato viene indirettamente modificato esattamente un file di intestazione corrispondente.  
  
 **File di intestazione simboli**  
  
 Per impostazione predefinita, in Visual C++ il file di intestazione corrispondente viene sempre denominato RESOURCE.H, indipendentemente dal nome del file di risorse, ad esempio, MYAPP.RC. Utilizzando il **Inclusioni risorsa** comando il **vista** menu in Visual C++, è possibile modificare il nome di questo file di intestazione aggiornando il file del File di intestazione simboli nel **inclusioni impostazione**la finestra di dialogo.  
  
 **Direttive per simboli in sola lettura**  
  
 Anche se in Visual C++ viene modificato un solo file di intestazione per ogni file RC specificato, Visual C++ supporta riferimenti ai simboli definiti in file di intestazione di sola lettura aggiuntivi. Utilizzando il **Inclusioni risorsa** comando il **vista** menu in Visual C++, è possibile specificare qualsiasi numero di file di intestazione di sola lettura aggiuntivi come direttive per simboli in sola lettura. La restrizione "sola lettura" indica che quando si aggiunge una nuova risorsa nel file RC, è possibile utilizzare un simbolo definito nel file di intestazione di sola lettura, tuttavia se si elimina la risorsa, il simbolo rimarrà definito nel file di intestazione di sola lettura. Non è possibile modificare il valore numerico assegnato a un simbolo di sola lettura.  
  
 **Direttive in fase di compilazione**  
  
 Visual C++ supporta inoltre l'annidamento dei file di risorse, dove un file RC viene incluso tramite #include all'interno di un altro. Quando si modifica un file RC specificato utilizzando Visual C++, alcune risorse nei file #include non sono visibili. Quando tuttavia si compila il file RC, i file #include vengono compilati. Utilizzando il **Inclusioni risorsa** comando il **vista** menu in Visual C++, è possibile specificare un numero qualsiasi di # include. RC (file) come direttive in fase di compilazione.  
  
 Si noti che cosa avviene se si legge in Visual C++ un. File RC #include un altro. File RC *non* specificato come direttiva in fase di compilazione. Questa situazione può verificarsi quando si introduce in Visual C++ un file RC gestito in precedenza manualmente con un editor di testo. Quando in Visual C++ viene letto il file RC #include, le risorse #include vengono unite nel file RC padre. Quando si salva il file RC padre, l'istruzione #include, in effetti, verrà sostituita dalle risorse #include. Se non si desidera eseguire questo merge, è necessario rimuovere il #include dall'elemento padre. File RC *precedente* di leggerlo in Visual C++, quindi in Visual C++ aggiungere di nuovo lo stesso #include come direttiva in fase di compilazione.  
  
 Visual C++ Salva in un. I tre tipi di sopra del file RC informazioni inclusioni impostazione (File di intestazione simboli, direttive per simboli in sola lettura e direttive in fase di compilazione) in #include *e* nelle risorse TEXTINCLUDE. Vengono descritte le risorse TEXTINCLUDE, un dettaglio di implementazione che non è in genere necessario gestire, in [come Visual C++ gestisce informazioni di inclusioni impostazione](#_mfcnotes_tn035_set_includes).  
  
 **Analisi dei creato dalla creazione guidata applicazioni. RC e. File H**  
  
 L'analisi del codice dell'applicazione generato dalla Creazione guidata applicazioni consente di comprendere in che modo Visual C++ gestisce i file di risorse e i file di intestazione. Gli estratti di codice esaminati di seguito provengono da un'applicazione MYAPP prodotta dalla Creazione guidata applicazioni utilizzando le opzioni predefinite.  
  
 Un'applicazione creata tramite la Creazione guidata applicazioni utilizza più file di risorse e più file di intestazione, come riepilogato nel diagramma riportato di seguito:  
  
```  
RESOURCE.H     AFXRES.H      
 \       /                
 \     /  
    MYAPP.RC 
 |  
 |                
    RES\MYAPP.RC2 
    AFXRES.RC 
    AFXPRINT.RC 
```  
  
 È possibile visualizzare le relazioni tra più file utilizzando il comando File/Inclusioni impostazione di Visual C++.  
  
 MYAPP.RC  
 Il file di risorse dell'applicazione che viene modificato tramite Visual C++.  
  
 RESOURCE.H è il file di intestazione specifico dell'applicazione. Sempre è denominato RESOURCE.H dalla Creazione guidata applicazioni, coerentemente con la denominazione predefinita del file di intestazione di Visual C++. L'istruzione #include per questo file di intestazione è la prima nel file di risorse (MYAPP.RC):  
  
```  
//Microsoft Visual C++ generated resource script  
//  
#include "resource.h"  
```  
  
 RES\MYAPP.RC2  
 Contiene le risorse che non verranno modificate tramite Visual C++, ma che verranno incluse nel file con estensione exe compilato finale. La Creazione guidata applicazioni non crea tali risorse per impostazione predefinita, poiché Visual C++ può modificare tutte le risorse standard, inclusa la risorsa di versione (una nuova funzionalità di questa versione). Tramite la Creazione guidata applicazioni viene generato un file vuoto qualora si volessero aggiungere a questo file risorse in formato personalizzato.  
  
 Se si utilizzano risorse in formato personalizzato, è possibile aggiungerle a RES\MYAPP.RC2 e modificarle utilizzando l'editor di testo di Visual C++.  
  
 AFXRES.RC e AFXPRINT.RC contengono le risorse standard richieste da determinate funzionalità del framework. Come RES \ MYAPP.RC2, questi due file di risorse forniti dal framework vengono inclusi (tramite #include) alla fine di MYAPP.RC e vengono specificati nelle Direttive in fase di compilazione della finestra di dialogo Inclusioni impostazione. Pertanto, queste risorse del framework non vengono direttamente visualizzate o modificate durante la modifica MYAPP.RC in Visual C++, ma vengono compilate nel file RES binario e nel file con estensione exe finale dell'applicazione. Per ulteriori informazioni sulle risorse standard framework, incluse le procedure per modificarle, vedere [Nota tecnica 23](../mfc/tn023-standard-mfc-resources.md).  
  
 AFXRES.H definisce i simboli standard, ad esempio `ID_FILE_NEW`, utilizzati dal framework e in modo specifico in AFXRES.RC. AFXRES.H include (tramite #include) inoltre WINRES.H che contiene un sottoinsieme di WINDOWS.H richiesto dai file RC generati da Visual C++, nonché da AFXRES.RC. I simboli definiti in AFXRES.H sono disponibili quando si modifica il file di risorse dell'applicazione (MYAPP.RC). Ad esempio, `ID_FILE_NEW` viene utilizzato per la voce di menu File Nuovo nella risorsa di menu di MYAPP.RC. Non è possibile modificare o eliminare questi simboli definiti dal framework.  
  
## <a name="_mfcnotes_tn035_including"></a> Inclusi i file di intestazione aggiuntivi  
  
 L'applicazione creata dalla Creazione guidata applicazioni include solo due file di intestazione: RESOURCE.H e AFXRES.H. Solo RESOURCE.H è specifico dell'applicazione. Potrebbe essere necessario includere file di intestazione di sola lettura aggiuntivi nei seguenti casi:  
  
 Il file di intestazione viene fornito da un'origine esterna oppure se si desidera condividere il file di intestazione tra più progetti o più parti dello stesso progetto.  
  
 Il file di intestazione contiene formattazione e commenti che non dovranno essere modificati o filtrati da Visual C++ quando si salva il file. Ad esempio, è possibile che si desideri conservare le istruzioni #define che utilizzano aritmetica simbolica come:  
  
```  
#define RED 0  
#define BLUE 1  
#define GREEN 2  
#define ID_COLOR_BUTTON 1001  
#define ID_RED_BUTTON (ID_COLOR_BUTTON + RED)  
#define ID_BLUE_BUTTON (ID_COLOR_BUTTON + BLUE)  
#define ID_GREEN_BUTTON (ID_COLOR_BUTTON + GREEN)  
```  
  
 È possibile includere file di intestazione di sola lettura aggiuntivi utilizzando il **Inclusioni risorsa** comando per specificare il #include come seconda direttiva simboli in sola lettura, come in:  
  
```  
#include "afxres.h"  
#include "second.h"  
```  
  
 Il nuovo diagramma delle relazioni tra file avrà il seguente aspetto:  
  
```  
    AFXRES.H 
RESOURCE.H     SECOND.H      
 \       /                
 \     /  
    MYAPP.RC 
 |  
 |                
    RES\MYAPP.RC2 
    AFXRES.RC 
    AFXPRINT.RC 
```  
  
 **Condividendo un File di intestazione tra due. RC (file)**  
  
 È possibile condividere un file di intestazione tra due file RC inclusi in progetti diversi o eventualmente nello stesso progetto. A tale scopo, applicare semplicemente la tecnica delle direttive di sola lettura sopra descritta in entrambi i file RC. Nel caso in cui i due file RC siano destinati ad applicazioni diverse (progetti diversi), il risultato è illustrato nel diagramma seguente:  
  
```  
    RESOURCE.H AFXRES.H   RESOURCE.H    
 (for MYAPP1) SECOND.H   (for MYAPP2)               
 \       /     \       /             
 \     /       \     /               
    MYAPP1.RC MYAPP2.RC */    \        /     \ */      \      /       \              
RES\MYAPP1.RC2  AFXRES.RC     RES\MYAPP2.RC2                
    AFXPRINT.RC 
```  
  
 Il caso in cui il secondo file di intestazione è condiviso da due file RC nella stessa applicazione (progetto) viene illustrato di seguito.  
  
 **Utilizzo di più file di risorse nello stesso progetto**  
  
 Visual C++ e il Compilatore di risorse supportano più file RC multipli nello stesso progetto tramite #include di un file RC all'interno di un altro. È consentito l'annidamento multiplo. Esistono vari motivi per dividere le risorse del progetto in più file RC:  
  
-   È più facile gestire un numero elevato di risorse tra più membri del team di progetto se le risorse sono suddivise in più file RC. Se si utilizza un pacchetto per la gestione del controllo del codice sorgente per estrarre i file e archiviare le modifiche, la suddivisione delle risorse in più file RC consentirà un controllo più accurato della gestione delle modifiche apportate alle risorse.  
  
-   Se si desidera utilizzare direttive per il preprocessore, come #ifdef, #endif e #define, per parti delle risorse, è necessario isolarle in risorse di sola lettura che verranno compilate dal Compilatore di risorse.  
  
-   I file RC di componente vengono caricati e salvati più velocemente in Visual C++ rispetto a un file RC composito.  
  
-   Se si desidera gestire una risorsa con un editor di testo in formato leggibile, è necessario mantenerla in un file RC separato da quello modificato da Visual C++.  
  
-   Se è necessario mantenere una risorsa definita dall'utente in un form binario o di testo interpretabile da un altro editor di dati specifico, è necessario mantenerla in un file RC distinto, in modo che Visual C++ non modifichi il formato in dati esadecimali. Il file con estensione Le risorse del file WAV (audio) nell'esempio di concetti avanzati MFC [SPEAKN](../visual-cpp-samples.md) costituiscono un buon esempio.  
  
 È possibile includere (tramite #include) un SECOND.RC nelle Direttive in fase di compilazione nella finestra di dialogo Inclusioni impostazione:  
  
```  
#include "res\myapp.rc2"  // non-Visual C++ edited resources  
#include "second.rc"  // THE SECOND .RC FILE  
  
#include "afxres.rc"  // Standard components  
#include "afxprint.rc"  // printing/print preview resources  
```  
  
 Il risultato è illustrato nel diagramma seguente:  
  
```  
RESOURCE.H     AFXRES.H      
 \       /                
 \     /  
    MYAPP.RC 
 |  
 |                
    RES\MYAPP.RC2 
    SECOND.RC 
    AFXRES.RC 
    AFXPRINT.RC 
```  
  
 Mediante le Direttive in fase di compilazione è possibile organizzare le risorse modificabili e non modificabili di Visual C++ in più file RC, in cui MYAPP.RC "master" non esegue alcuna operazione tranne includere (tramite #include) gli altri file RC. Se si utilizza un file MAK di progetto di Visual C++, è necessario includere il file RC "master" nel progetto, in modo da compilare tutte le risorse #include con l'applicazione.  
  
 **Imposizione dei file di Visual C++ non modificabili**  
  
 RES\MYAPP creato dalla creazione guidata applicazioni. File RC2 è riportato un esempio di un file che contiene le risorse che si *non* desidera accidentalmente lette in Visual C++ e quindi si scrive nuovo con perdita di informazioni di formattazione. Per evitare questo problema, inserire le seguenti righe all'inizio del file RES\MYAPP.RC2:  
  
```  
#ifdef APSTUDIO_INVOKED  
 #error this file is not editable by Visual C++  
#endif //APSTUDIO_INVOKED  
```  
  
 Quando Visual C++ compila il. File RC, definisce **APSTUDIO_INVOKED** nonché **RC_INVOKED**. Se la struttura di file creata dalla Creazione guidata applicazioni è danneggiata e Visual C++ legge la riga #error precedente, viene segnalato un errore irreversibile e la lettura del file RC viene interrotta.  
  
 **Gestione di simboli condivisi da più Visual C++ modificate. RC (file)**  
  
 Quando si dividono le risorse in più file RC che si desidera modificare separatamente in Visual C++, si verificano due problemi:  
  
-   È possibile condividere gli stessi simboli tra più file RC.  
  
-   È necessario evitare che Visual C++ assegni gli stessi valori numeri di ID a risorse distinte (simboli).  
  
 Nel diagramma seguente viene illustrata un'organizzazione di file RC e H riguardanti il primo problema:  
  
```  
    MYAPP.RC */         \ */           \  
MYSTRS.H   / MYSHARED.H  \  MYMENUS.H  
 \    /    /      \   \    \  
 \  /    /        \   \    \  
    MYSTRS.RC MYMENUS.RC  
```  
  
 In questo esempio le risorse stringa sono conservate in un file di risorse, MYSTRS.RC, mentre i menu sono conservati in un altro file, MYMENUS.RC. Potrebbe essere necessario condividere alcuni simboli, quali i comandi, tra i due file. Ad esempio, ID_TOOLS_SPELL può essere l'ID del comando di menu per l'elemento Controllo ortografico in un menu Strumenti. Potrebbe inoltre essere l'ID stringa del prompt dei comandi visualizzato dal framework nella barra di stato della finestra principale dell'applicazione.  
  
 Il simbolo di ID_TOOLS_SPELL si trova nel file di intestazione condiviso, MYSHARED.H. Gestire questo file di intestazione condiviso manualmente con un editor di testo. Non viene modificato direttamente da Visual C++. Nella risorsa di due file MYSTRS. RC e MYMENUS. RC, specificare #include MYSHARED. H nelle direttive di sola lettura per MYAPP. RC, utilizzando il **Inclusioni risorsa** comando, come descritto in precedenza.  
  
 È più pratico prevedere un simbolo che verrà condiviso prima di provare a utilizzarlo per identificare una qualsiasi risorsa. Aggiungere il simbolo al file di intestazione condiviso e, se il file di intestazione condiviso non è già incluso (tramite #include) nelle Direttive di sola lettura per il file RC, eseguire tale operazione prima di utilizzare il simbolo. Se non si è previsto di condividere il simbolo in questo modo, sarà necessario spostare manualmente (utilizzando un editor di testo) l'istruzione #define per il simbolo, ad esempio, da MYMENUS.H a MYSHARED.H prima di utilizzarlo in MYSTRS.RC.  
  
 Quando si gestiscono simboli in più file RC, è inoltre necessario evitare che Visual C++ assegni gli stessi valori numerici di ID a risorse distinte (simboli). Per qualsiasi file RC specificato, Visual C++ assegna in modo incrementale gli ID in ognuno dei quattro domini di ID. Visual C++ tiene traccia, tra le sessioni di modifica, dell'ultimo ID assegnato in ognuno dei domini nel file di intestazione simboli per il file RC. Di seguito è riportato il significato dei valori di APS_NEXT per un (nuovo) file RC vuoto:  
  
```  
#define _APS_NEXT_RESOURCE_VALUE  101  
#define _APS_NEXT_COMMAND_VALUE   40001  
#define _APS_NEXT_CONTROL_VALUE   1000  
#define _APS_NEXT_SYMED_VALUE     101  
```  
  
 **Aps_next_resource_value** è il valore di simbolo successivo che verrà utilizzato per una risorsa finestra di dialogo, risorse di menu e così via. L'intervallo valido per i valori dei simboli risorsa è compreso tra 1 e 0x6FFF.  
  
 **Aps_next_command_value** è il valore di simbolo successivo che verrà utilizzato per l'identificazione di un comando. L'intervallo valido per i valori dei simboli di comando è compreso tra 0x8000 e 0xDFFF.  
  
 **Aps_next_control_value** è il valore di simbolo successivo che verrà utilizzato per un controllo di finestra di dialogo. L'intervallo valido per i valori dei simboli di controllo finestra di dialogo è compreso tra 8 e 0xDFFF.  
  
 **Aps_next_symed_value** è il valore di simbolo successivo che verrà rilasciato manualmente quando si assegna un valore di simbolo utilizzando il comando nuovo nel Visualizzatore simboli.  
  
 Quando viene creato un nuovo file RC, Visual C++ inizia con valori leggermente più elevati del valore valido più basso. Questi valori verranno inizializzati anche dalla Creazione guidata applicazioni in valori più appropriati per le applicazioni MFC. Per ulteriori informazioni sugli intervalli di valori di ID, vedere [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md).  
  
 Ora ogni volta che si crea un nuovo file di risorse, anche nello stesso progetto, Visual C++ definisce gli stessi **aps_next\_**  valori. Ciò significa che se si aggiungono, ad esempio, più finestre di dialogo in due diversi file RC, è molto probabile che lo stesso valore #define venga assegnato alle diverse finestre di dialogo. Ad esempio, a IDD_MY_DLG1 nel primo file RC può essere assegnato lo stesso numero, 101, di IDD_MY_DLG2 in un secondo file RC.  
  
 Per evitare questo problema, è necessario riservare un intervallo numerico separato per ognuno dei quattro domini di ID nei rispettivi file RC. A tale scopo l'aggiornamento manuale di **aps_next** valori in ogni il. RC (file) `before` di avviare l'aggiunta di risorse. Ad esempio, se il primo. File RC utilizza il valore predefinito **aps_next** valori, potrebbe essere necessario assegnare i seguenti **aps_next** valori al secondo. File RC:  
  
```  
#define _APS_NEXT_RESOURCE_VALUE  2000  
#define _APS_NEXT_COMMAND_VALUE   42000  
#define _APS_NEXT_CONTROL_VALUE   2000  
#define _APS_NEXT_SYMED_VALUE     2000  
```  
  
 Naturalmente è ancora possibile che Visual C++ assegni così tanti ID nel primo file RC che i valori numerici inizieranno a sovrapporsi a quelli riservati per il secondo file RC. È necessario riservare intervalli sufficientemente ampi da evitare che ciò si verifichi.  
  
 **Gestione delle dipendenze tra. RC. CPP, e. File H**  
  
 Quando Visual C++ salva un file RC, salva anche le modifiche dei simboli nel file RESOURCE.H corrispondente. Uno qualsiasi dei file CPP che fanno riferimento alle risorse nel file RC deve includere (tramite #include) il file RESOURCE.H, in genere dall'interno del file di intestazione master del progetto. Ciò causa un effetto collaterale indesiderabile a causa della gestione di progetto interna dell'ambiente di sviluppo che ricerca nei file di origine le dipendenze dell'intestazione. Ogni volta che si aggiunge un nuovo simbolo in Visual C++, tutti i file CPP che includono (tramite #include) RESOURCE.H devono essere ricompilati.  
  
 Visual C++ aggira la dipendenza da RESOURCE.H includendo il seguente commento come prima riga del file RESOURCE.H:  
  
```  
//{{NO_DEPENDENCIES}}  
```  
  
 L'ambiente di sviluppo interpreta il commento ignorando le modifiche a RESOURCE.H in modo che i file CPP dipendenti CPP non debbano essere ricompilati.  
  
 Visual C++ aggiunge sempre la riga di commento //{{NO_DEPENDENCIES}} a un file RC al momento del salvataggio. In alcuni casi, aggirare la dipendenza di compilazione da RESOURCE.H può generare errori di runtime non rilevati in fase di collegamento. Ad esempio, se si utilizza il visualizzatore simboli per modificare il valore numerico assegnato a un simbolo per una risorsa, la risorsa non verrà rilevata e caricata correttamente in fase di esecuzione dell'applicazione, se il file di .CPP che fa riferimento alla risorsa non viene ricompilato. In questi casi, si deve ricompilano in modo esplicito. File CPP interessati dalle modifiche dei simboli nella risorsa. H o selezionare **Ricompila tutto**. Se è necessario modificare spesso i valori dei simboli per un determinato gruppo di risorse, verrà probabilmente risulta più semplice e sicuro suddividere questi simboli in un file di intestazione di sola lettura, come descritto nella sezione precedente [inclusi File di intestazione aggiuntivi](#_mfcnotes_tn035_including).  
  
## <a name="_mfcnotes_tn035_set_includes"></a> La modalità di Visual C++ gestisce Set include informazioni * *  
  
 Come descritto in precedenza, il menu comando Inclusioni impostazione del menu File consente di specificare tre tipi di informazioni:  
  
-   File di intestazione simboli  
  
-   Direttive per simboli in sola lettura  
  
-   Direttive in fase di compilazione  
  
 Di seguito viene illustrato come Visual C++ gestisce queste informazioni in un file RC. Queste informazioni non sono necessarie per l'utilizzo di Visual C++, ma possono contribuire a una migliore comprensione della funzionalità Inclusioni impostazione per utilizzarla più agevolmente.  
  
 Ciascuno dei tre tipi di informazioni di Inclusione impostazione viene archiviato nel file RC in due formati: (1) come #include o altre direttive interpretabili dal Compilatore di risorse e (2) come risorse TEXTINCLUDE speciali interpretabili solo da Visual C++.  
  
 Lo scopo della risorsa TEXTINCLUDE consiste nell'archiviare in modo sicuro informazioni di inclusioni impostazione in un formato immediatamente presentabile in Visual C++ **inclusioni impostazione** la finestra di dialogo. TEXTINCLUDE è un *tipo di risorsa* definito da Visual C++. Visual C++ riconosce tre risorse TEXTINCLUDE specifiche che presentano numeri di identificazione risorsa 1, 2 e 3:  
  
|ID risorsa TEXTINCLUDE|Tipo informazioni di Inclusioni impostazione|  
|-----------------------------|--------------------------------------|  
|1|File di intestazione simboli|  
|2|Direttive per simboli in sola lettura|  
|3|Direttive in fase di compilazione|  
  
 Ciascuno dei tre tipi di informazioni di Inclusioni impostazione viene illustrato dai file predefiniti MYAPP.RC e RESOURCE.H creati dalla Creazione guidata applicazioni, come descritto di seguito. I token \ 0 e "" supplementari tra i blocchi BEGIN e FINALI sono richiesti dalla sintassi RC per specificare le stringhe che terminano rispettivamente con zero e il carattere virgolette doppie.  
  
## <a name="symbol-header-file"></a>File di intestazione simboli  
 Il formato delle informazioni del File di intestazione simboli interpretato dal Compilatore di risorse è semplicemente un'istruzione #include:  
  
```  
#include "resource.h"  
```  
  
 La risorsa TEXTINCLUDE corrispondente è:  
  
```  
1 TEXTINCLUDE DISCARDABLE  
BEGIN  
 "resource.h\0"  
END  
```  
  
## <a name="read-only-symbol-directives"></a>Direttive per simboli in sola lettura  
 Le Direttive per simboli in sola lettura sono incluse nella parte superiore di MYAPP.RC nel seguente formato interpretabile dal Compilatore di risorse:  
  
```  
#include "afxres.h"  
```  
  
 La risorsa TEXTINCLUDE corrispondente è:  
  
```  
2 TEXTINCLUDE DISCARDABLE  
BEGIN  
   "#include ""afxres.h""\r\n"  
   "\0"  
END  
```  
  
## <a name="compile-time-directives"></a>Direttive in fase di compilazione  
 Le Direttive in fase di compilazione sono incluse alla fine di MYAPP.RC nel seguente formato interpretabile dal Compilatore di risorse:  
  
```  
#ifndef APSTUDIO_INVOKED  
///////////////////////  
//  
// From TEXTINCLUDE 3  
//  
#include "res\myapp.rc2"  // non-Visual C++ edited resources  
  
#include "afxres.rc"  // Standard components  
#include "afxprint.rc"  // printing/print preview resources  
#endif  // not APSTUDIO_INVOKED  
```  
  
 La direttiva #ifndef APSTUDIO_INVOKED indica a Visual C++ ignorare le Direttive in fase di compilazione.  
  
 La risorsa TEXTINCLUDE corrispondente è:  
  
```  
3 TEXTINCLUDE DISCARDABLE  
BEGIN  
"#include ""res\myapp.rc2""  // non-Visual C++ edited resources\r\n"  
"\r\n"  
"#include ""afxres.rc""  // Standard components\r\n"  
"#include ""afxprint.rc""  // printing/print preview resources\r\n"  
"\0"  
END  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

