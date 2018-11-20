---
title: 'Controlli ActiveX MFC: licenze di un controllo ActiveX'
ms.date: 11/19/2018
f1_keywords:
- COleObjectFactory
helpviewer_keywords:
- COleObjectFactory class [MFC], licensing controls
- MFC ActiveX controls [MFC], licensing
- VerifyLicenseKey method [MFC]
- VerifyUserLicense method [MFC]
- GetLicenseKey method [MFC]
- licensing ActiveX controls
ms.assetid: cacd9e45-701a-4a1f-8f1f-b0b39f6ac303
ms.openlocfilehash: 35ca5d410f642f2557d9ee797eda2d9529f7f4d1
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52176358"
---
# <a name="mfc-activex-controls-licensing-an-activex-control"></a>Controlli ActiveX MFC: licenze di un controllo ActiveX

Gestione delle licenze, una funzionalità facoltativa di controlli ActiveX, consente di controllare chi è in grado di utilizzare o distribuire il controllo. (Per analisi aggiuntiva dei problemi relativi alle licenze, vedere i problemi di gestione delle licenze in [aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md).)

> [!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Questo articolo tratta gli argomenti seguenti:

- [Panoramica delle licenza del controllo ActiveX](#_core_overview_of_activex_control_licensing)

- [Creazione di un controllo con licenza](#_core_creating_a_licensed_control)

- [Supporto della licenza](#_core_licensing_support)

- [Personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control)

Controlli ActiveX che implementano una gestione delle licenze consentono allo sviluppatore del controllo, per determinare come altre persone useranno il controllo ActiveX. Si fornirà l'acquirente di controllo con il controllo e. File di contratto di licenza, con un contratto che l'acquirente potrebbe distribuire il controllo, ma non il. File di contratto di licenza, con un'applicazione che utilizza il controllo. Questo impedisce agli utenti di tale applicazione dalla scrittura di nuove applicazioni che usano il controllo, senza della licenza del controllo da parte dell'utente.

##  <a name="_core_overview_of_activex_control_licensing"></a> Panoramica delle licenza del controllo ActiveX

Per fornire il supporto della licenza per i controlli ActiveX, il [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) classe fornisce un'implementazione per numerose funzioni nella `IClassFactory2` interfaccia: `IClassFactory2::RequestLicKey`, `IClassFactory2::GetLicInfo`, e `IClassFactory2::CreateInstanceLic`. Quando lo sviluppatore dell'applicazione contenitore effettua una richiesta per creare un'istanza del controllo, una chiamata a `GetLicInfo` viene eseguita per verificare che il controllo. File di contratto di licenza è presente. Se il controllo è concesso in licenza, un'istanza del controllo può essere creata e inserita nel contenitore. Dopo che lo sviluppatore ha terminato la creazione di un'applicazione contenitore, un'altra chiamata di funzione, questa volta a `RequestLicKey`, viene eseguita. Questa funzione restituisce un codice di licenza (una stringa di caratteri semplice) per l'applicazione contenitore. Quindi, la chiave restituita è incorporata nell'applicazione.

La figura seguente illustra la verifica delle licenze di un controllo ActiveX che verrà usato durante lo sviluppo di un'applicazione contenitore. Come accennato in precedenza, lo sviluppatore dell'applicazione contenitore deve avere appropriate. File LICO installato nel computer di sviluppo per creare un'istanza del controllo.

![Concesso in licenza verificato in fase di sviluppo di controllo di ActiveX](../mfc/media/vc374d1.gif "controllo ActiveX concesso in licenza verificato in fase di sviluppo") <br/>
Verifica di un controllo ActiveX con licenza durante lo sviluppo

Il processo successivo, illustrato nella figura seguente, si verifica quando l'utente finale esegue l'applicazione contenitore.

Quando l'applicazione viene avviata, un'istanza del controllo in genere deve essere creata. Il contenitore esegue questa operazione tramite una chiamata a `CreateInstanceLic`, passando la chiave di licenza incorporato come parametro. Un confronto tra stringhe viene reso tra la chiave di licenza incorporata e la copia del controllo del codice di licenza. Se la corrispondenza ha esito positivo, viene creata un'istanza del controllo e l'applicazione continua a essere eseguita normalmente. Si noti che il. In caso contrario non è necessario presente nel computer dell'utente del controllo.

![Concesso in licenza verificato in fase di esecuzione controllo di ActiveX](../mfc/media/vc374d2.gif "controllo ActiveX concesso in licenza verificato in fase di esecuzione") <br/>
Verifica di un controllo ActiveX con licenza durante l'esecuzione

Licenze dei controlli è costituito da due componenti di base: codice specifico nell'implementazione del controllo DLL e il file di licenza. Il codice è costituito da due (o eventualmente tre) le chiamate di funzione e una stringa di caratteri indicato di seguito come "licenza stringa", contenente un avviso di copyright. Queste chiamate e la stringa di licenza sono disponibili nell'implementazione del controllo (. File CPP). Il file di licenza, generato dalla creazione guidata controllo ActiveX, è un file di testo con una dichiarazione di copyright. Il file viene denominato utilizzando il nome del progetto con una. Estensione del contratto di licenza, ad esempio esempio. CONTRATTO DI LICENZA. Un controllo con licenza deve essere accompagnato da file di licenza se è necessario utilizzare in fase di progettazione.

##  <a name="_core_creating_a_licensed_control"></a> Creazione di un controllo con licenza

Quando si usa la creazione guidata controllo ActiveX per creare il framework di controllo, è facile da includere il supporto della licenza. Quando si specifica che il controllo deve avere una licenza di run-time, la creazione guidata controllo ActiveX aggiunge codice alla classe del controllo per il supporto di gestione delle licenze. Il codice è costituito da funzioni che usano un file di chiave di licenza per la verifica delle licenze. Queste funzioni possono anche essere modificate per personalizzare la licenza del controllo. Per altre informazioni sulla personalizzazione della licenza, vedere [personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control) più avanti in questo articolo.

#### <a name="to-add-support-for-licensing-with-the-activex-control-wizard-when-you-create-your-control-project"></a>Per aggiungere il supporto per le licenze con la creazione guidata controllo ActiveX quando si crea il progetto di controllo

1. Usare le istruzioni in [creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md). Il **le impostazioni dell'applicazione** pagina della creazione guidata controllo ActiveX contiene le opzioni per creare il controllo con la licenza in fase di esecuzione.

La creazione guidata controllo ActiveX genera ora un framework di controllo ActiveX che include il supporto di gestione delle licenze di base. Per una spiegazione dettagliata del codice di gestione delle licenze, vedere l'argomento successivo.

##  <a name="_core_licensing_support"></a> Supporto della licenza

Quando si usa la creazione guidata controllo ActiveX per aggiungere il supporto di gestione delle licenze a un controllo ActiveX, la creazione guidata controllo ActiveX viene aggiunto codice che dichiara e implementa la funzionalità di gestione delle licenze per l'implementazione e di intestazione di controllo file. Questo codice è costituito da un `VerifyUserLicense` funzione membro e una `GetLicenseKey` funzione di membro, che sostituiscono le implementazioni predefinite disponibili in [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) . Queste funzioni recuperano e verificare le licenze di controllo.

> [!NOTE]
>  Una terza funzione membro, `VerifyLicenseKey` non viene generato dalla creazione guidata controllo ActiveX, ma può essere sottoposto a override per personalizzare il comportamento di verifica della chiave di licenza.

Queste funzioni membro sono:

- [VerifyUserLicense](../mfc/reference/coleobjectfactory-class.md#verifyuserlicense)

   Verifica che il controllo consente l'utilizzo in fase di progettazione selezionando il sistema la presenza del file di licenza del controllo. Questa funzione viene chiamata dal framework come parte dell'elaborazione `IClassFactory2::GetLicInfo` e `IClassFactory::CreateInstanceLic`.

- [GetLicenseKey](../mfc/reference/coleobjectfactory-class.md#getlicensekey)

   Richiede una chiave univoca dalla DLL del controllo. Questa chiave viene incorporata in un'applicazione contenitore e usata in un secondo momento, in combinazione con `VerifyLicenseKey`, per creare un'istanza del controllo. Questa funzione viene chiamata dal framework come parte dell'elaborazione `IClassFactory2::RequestLicKey`.

- [VerifyLicenseKey](../mfc/reference/coleobjectfactory-class.md#verifylicensekey)

   Verifica che le chiavi incorporate e univoco del controllo siano uguali. In questo modo il contenitore creare un'istanza del controllo per l'uso. Questa funzione viene chiamata dal framework come parte dell'elaborazione `IClassFactory2::CreateInstanceLic` e può essere sostituito per fornire la verifica personalizzata della chiave di licenza. L'implementazione predefinita esegue un confronto tra stringhe. Per altre informazioni, vedere [personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control), più avanti in questo articolo.

###  <a name="_core_header_file_modifications"></a> Modifiche al File di intestazione

La creazione guidata controllo ActiveX inserito il codice seguente nel file di intestazione di controllo. In questo esempio, due funzioni membro di `CSampleCtrl`dell'oggetto `factory` vengono dichiarati, un test che verifica la presenza del controllo. File di contratto di licenza e l'altro che consente di recuperare la chiave di licenza da usare nell'applicazione che contiene il controllo:

[!code-cpp[NVC_MFC_AxUI#39](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_1.h)]

###  <a name="_core_implementation_file_modifications"></a> Modifiche al File di implementazione

La creazione guidata controllo ActiveX inserisce due istruzioni seguenti nel file di implementazione del controllo per dichiarare il nome file di licenza e la stringa di licenza:

[!code-cpp[NVC_MFC_AxUI#40](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_2.cpp)]

> [!NOTE]
>  Se si modifica `szLicString` in alcun modo, è necessario modificare anche la prima riga nel controllo. File di contratto di licenza o gestione delle licenze non funzionerà correttamente.

La creazione guidata controllo ActiveX inserisce il codice seguente nel file di implementazione di controllo per definire la classe di controllo `VerifyUserLicense` e `GetLicenseKey` funzioni:

[!code-cpp[NVC_MFC_AxUI#41](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_3.cpp)]

Infine, il **Creazione guidata controllo ActiveX** modifica il progetto di controllo. File IDL. Il **concesso in licenza** (parola chiave) viene aggiunto alla dichiarazione (coclasse) del controllo, come nell'esempio seguente:

[!code-cpp[NVC_MFC_AxUI#42](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_4.idl)]

##  <a name="_core_customizing_the_licensing_of_an_activex_control"></a> Personalizzazione della licenza di un controllo ActiveX

In quanto `VerifyUserLicense`, `GetLicenseKey`, e `VerifyLicenseKey` vengono dichiarati come funzioni membro virtuali della classe factory del controllo, è possibile personalizzare il comportamento del controllo sulle licenze.

Ad esempio, è possibile fornire diversi livelli di gestione delle licenze per il controllo eseguendo l'override di `VerifyUserLicense` o `VerifyLicenseKey` funzioni membro. All'interno di questa funzione è è stato possibile modificare le proprietà o i metodi vengono esposti all'utente in base al livello di licenza che è stata rilevata.

È anche possibile aggiungere codice per il `VerifyLicenseKey` funzione che fornisce un metodo personalizzato per informare gli utenti che controllano la creazione non è riuscita. Ad esempio, nelle `VerifyLicenseKey` casella di funzione membro è possibile visualizzare un messaggio che informa che il controllo non è stato possibile inizializzare e perché.

> [!NOTE]
>  È possibile personalizzare verifica delle licenze controllo ActiveX per verificare la registrazione del database per una chiave del Registro di sistema specifici, anziché chiamare `AfxVerifyLicFile`. Per un esempio dell'implementazione predefinita, vedere la [le modifiche al File di implementazione](#_core_implementation_file_modifications) sezione di questo articolo.

Per analisi aggiuntiva dei problemi relativi alle licenze, vedere i problemi di gestione delle licenze in [aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md).

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)

