---
title: 'Controlli ActiveX MFC: licenze di un controllo ActiveX'
ms.date: 11/19/2018
helpviewer_keywords:
- COleObjectFactory class [MFC], licensing controls
- MFC ActiveX controls [MFC], licensing
- VerifyLicenseKey method [MFC]
- VerifyUserLicense method [MFC]
- GetLicenseKey method [MFC]
- licensing ActiveX controls
ms.assetid: cacd9e45-701a-4a1f-8f1f-b0b39f6ac303
ms.openlocfilehash: aaab4ae3bb13790784a66d53b41dbc3a7cdaec89
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364610"
---
# <a name="mfc-activex-controls-licensing-an-activex-control"></a>Controlli ActiveX MFC: licenze di un controllo ActiveX

Il supporto delle licenze, una funzionalità facoltativa dei controlli ActiveX, consente di controllare chi è in grado di utilizzare o distribuire il controllo. Per ulteriori informazioni sui problemi relativi alle licenze, vedere Problemi di licenza in [Aggiornamento di un controllo ActiveX esistente.](../mfc/upgrading-an-existing-activex-control.md)

> [!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Questo articolo tratta gli argomenti seguenti:

- [Panoramica delle licenze per i controlli ActiveX](#_core_overview_of_activex_control_licensing)

- [Creazione di un controllo concesso in licenzaCreating a Licensed Control](#_core_creating_a_licensed_control)

- [Supporto per le licenze](#_core_licensing_support)

- [Personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control)

I controlli ActiveX che implementano la gestione delle licenze consentono agli sviluppatori di controlli di determinare in che modo altri utenti utilizzeranno il controllo ActiveX. Fornire all'acquirente del controllo il controllo e . LIC, con l'accordo che l'acquirente possa distribuire il controllo, ma non il file . LIC, con un'applicazione che utilizza il controllo. Ciò impedisce agli utenti di tale applicazione di scrivere nuove applicazioni che utilizzano il controllo, senza prima licenze il controllo da voi.

## <a name="overview-of-activex-control-licensing"></a><a name="_core_overview_of_activex_control_licensing"></a>Panoramica delle licenze per i controlli ActiveX

Per fornire il supporto delle licenze per i controlli ActiveX, la `IClassFactory2` classe `IClassFactory2::RequestLicKey` [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) fornisce un'implementazione per diverse funzioni nell'interfaccia: , `IClassFactory2::GetLicInfo`e `IClassFactory2::CreateInstanceLic`. Quando lo sviluppatore dell'applicazione contenitore effettua una richiesta `GetLicInfo` per creare un'istanza del controllo, viene effettuata una chiamata a per verificare che il controllo . LIC è presente. Se il controllo è concesso in licenza, è possibile creare un'istanza del controllo e inserirla nel contenitore. Dopo che lo sviluppatore ha completato la costruzione dell'applicazione contenitore, viene effettuata un'altra chiamata di funzione, questa volta a `RequestLicKey`, Questa funzione restituisce un codice di licenza (una semplice stringa di caratteri) all'applicazione contenitore. La chiave restituita viene quindi incorporata nell'applicazione.

Nella figura seguente viene illustrata la verifica della licenza di un controllo ActiveX che verrà utilizzato durante lo sviluppo di un'applicazione contenitore. Come accennato in precedenza, lo sviluppatore dell'applicazione contenitore deve disporre dell'oggetto . LIC installato nel computer di sviluppo per creare un'istanza del controllo.

![Controllo ActiveX concesso in licenza verificato in fase di sviluppo](../mfc/media/vc374d1.gif "Controllo ActiveX concesso in licenza verificato in fase di sviluppo") <br/>
Verifica di un controllo ActiveX con licenza durante lo sviluppo

Il processo successivo, illustrato nella figura seguente, si verifica quando l'utente finale esegue l'applicazione contenitore.

Quando l'applicazione viene avviata, è in genere necessario creare un'istanza del controllo. Il contenitore esegue questa operazione `CreateInstanceLic`effettuando una chiamata a , passando il codice di licenza incorporato come parametro. Viene quindi effettuato un confronto tra il codice di licenza incorporato e la copia del codice della chiave di licenza del controllo. Se la corrispondenza ha esito positivo, viene creata un'istanza del controllo e l'applicazione continua a essere eseguita normalmente. Si noti che il file . Il file LIC non deve essere presente sulla macchina dell'utente di controllo.

![Controllo ActiveX concesso in licenza verificato in fase di esecuzione](../mfc/media/vc374d2.gif "Controllo ActiveX concesso in licenza verificato in fase di esecuzione") <br/>
Verifica di un controllo ActiveX con licenza durante l'esecuzione

La licenza di controllo è costituita da due componenti di base: codice specifico nella DLL di implementazione del controllo e il file di licenza. Il codice è composto da due (o forse tre) chiamate di funzione e una stringa di caratteri, in seguito indicata come "stringa di licenza", contenente una nota sul copyright. Queste chiamate e la stringa di licenza si trovano nell'implementazione del controllo (. CPP). Il file di licenza, generato dalla Creazione guidata controllo ActiveX, è un file di testo con una dichiarazione di copyright. Viene denominato utilizzando il nome del progetto con un oggetto . Estensione LIC, ad esempio SAMPLE. Lic. Un controllo concesso in licenza deve essere accompagnato dal file di licenza se è necessario l'utilizzo in fase di progettazione.

## <a name="creating-a-licensed-control"></a><a name="_core_creating_a_licensed_control"></a>Creazione di un controllo concesso in licenzaCreating a Licensed Control

Quando si utilizza la Creazione guidata controllo ActiveX per creare il framework del controllo, è facile includere il supporto delle licenze. Quando si specifica che il controllo deve disporre di una licenza di runtime, la Creazione guidata controllo ActiveX aggiunge codice alla classe del controllo per supportare la gestione delle licenze. Il codice è costituito da funzioni che utilizzano una chiave e un file di licenza per la verifica della licenza. Queste funzioni possono anche essere modificate per personalizzare la licenza di controllo. Per ulteriori informazioni sulla personalizzazione delle licenze, vedere [Personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control) più avanti in questo articolo.

#### <a name="to-add-support-for-licensing-with-the-activex-control-wizard-when-you-create-your-control-project"></a>Per aggiungere il supporto per le licenze con la Creazione guidata controllo ActiveX quando si crea il progetto di controlloTo add support for licensing with the ActiveX Control Wizard when you create your control project

1. Utilizzare le istruzioni in [Creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md). La pagina **Impostazioni applicazione** della Creazione guidata controllo ActiveX contiene l'opzione per creare il controllo con la licenza di runtime.

La Creazione guidata controllo ActiveX genera ora un framework di controlli ActiveX che include il supporto delle licenze di base. Per una spiegazione dettagliata del codice di licenza, vedere l'argomento successivo.

## <a name="licensing-support"></a><a name="_core_licensing_support"></a>Supporto per le licenze

Quando si utilizza la Creazione guidata controllo ActiveX per aggiungere il supporto delle licenze a un controllo ActiveX, la Creazione guidata controllo ActiveX aggiunge codice che dichiara e implementa la funzionalità di gestione delle licenze viene aggiunto ai file di implementazione e intestazione del controllo. Questo codice è `VerifyUserLicense` composto da `GetLicenseKey` una funzione membro e una funzione membro, che eseguono l'override delle implementazioni predefinite disponibili in [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) . Queste funzioni recuperano e verificano la licenza di controllo.

> [!NOTE]
> Una terza funzione `VerifyLicenseKey` membro, non viene generata dalla Creazione guidata controllo ActiveX, ma può essere sottoposta a override per personalizzare il comportamento di verifica del codice di licenza.

Queste funzioni membro sono:These member functions are:

- [VerifyUserLicense (LicenzaUtente VerifyUser)](../mfc/reference/coleobjectfactory-class.md#verifyuserlicense)

   Verifica che il controllo consenta l'utilizzo in fase di progettazione controllando nel sistema la presenza del file di licenza di controllo. Questa funzione viene chiamata dal framework `IClassFactory2::GetLicInfo` `IClassFactory::CreateInstanceLic`come parte dell'elaborazione e .

- [GetLicenseKey](../mfc/reference/coleobjectfactory-class.md#getlicensekey)

   Richiede una chiave univoca dalla DLL del controllo. Questa chiave viene incorporata nell'applicazione contenitore `VerifyLicenseKey`e utilizzata successivamente, insieme a , per creare un'istanza del controllo. Questa funzione viene chiamata dal framework `IClassFactory2::RequestLicKey`come parte dell'elaborazione .

- [VerifyLicenseKey (VerifyLicenseKey)](../mfc/reference/coleobjectfactory-class.md#verifylicensekey)

   Verifica che la chiave incorporata e la chiave univoca del controllo siano uguali. Ciò consente al contenitore di creare un'istanza del controllo per il relativo utilizzo. Questa funzione viene chiamata dal framework `IClassFactory2::CreateInstanceLic` come parte dell'elaborazione e può essere sottoposta a override per fornire la verifica personalizzata del codice di licenza. L'implementazione predefinita esegue un confronto tra stringhe. Per ulteriori informazioni, vedere [Personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control)più avanti in questo articolo.

### <a name="header-file-modifications"></a><a name="_core_header_file_modifications"></a>Modifiche al file di intestazione

La Creazione guidata controllo ActiveX inserisce il codice seguente nel file di intestazione del controllo. In questo esempio vengono `CSampleCtrl`dichiarate `factory` due funzioni membro dell'oggetto , una che verifica la presenza del controllo . LIC e un altro che recupera la chiave di licenza da utilizzare nell'applicazione contenente il controllo:

[!code-cpp[NVC_MFC_AxUI#39](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_1.h)]

### <a name="implementation-file-modifications"></a><a name="_core_implementation_file_modifications"></a>Modifiche ai file di implementazione

La Creazione guidata controllo ActiveX inserisce le due istruzioni seguenti nel file di implementazione del controllo per dichiarare il nome del file di licenza e la stringa di licenza:

[!code-cpp[NVC_MFC_AxUI#40](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_2.cpp)]

> [!NOTE]
> Se si `szLicString` modifica in qualche modo, è necessario modificare anche la prima riga nel controllo . IL file LIC o la licenza non funzioneranno correttamente.

La Creazione guidata controllo ActiveX inserisce il codice seguente `VerifyUserLicense` nel `GetLicenseKey` file di implementazione del controllo per definire la classe del controllo e le funzioni:

[!code-cpp[NVC_MFC_AxUI#41](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_3.cpp)]

Infine, la **Creazione guidata controllo ActiveX** modifica il progetto del controllo. File IDL. La parola chiave **licensed** viene aggiunta alla dichiarazione di coclasse del controllo, come nell'esempio seguente:

[!code-cpp[NVC_MFC_AxUI#42](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_4.idl)]

## <a name="customizing-the-licensing-of-an-activex-control"></a><a name="_core_customizing_the_licensing_of_an_activex_control"></a>Personalizzazione della licenza di un controllo ActiveX

`VerifyUserLicense`Poiché `GetLicenseKey`, `VerifyLicenseKey` e sono dichiarati come funzioni membro virtuali della classe factory del controllo, è possibile personalizzare il comportamento di gestione delle licenze del controllo.

Ad esempio, è possibile fornire diversi livelli di `VerifyUserLicense` licenza `VerifyLicenseKey` per il controllo eseguendo l'override delle funzioni membro o . All'interno di questa funzione è possibile regolare quali proprietà o metodi sono esposti all'utente in base al livello di licenza rilevato.

È inoltre possibile aggiungere `VerifyLicenseKey` codice alla funzione che fornisce un metodo personalizzato per informare l'utente che la creazione del controllo non è riuscita. Ad esempio, `VerifyLicenseKey` nella funzione membro è possibile visualizzare una finestra di messaggio che indica che l'inizializzazione del controllo non è riuscita e perché.

> [!NOTE]
> Un altro modo per personalizzare la verifica della licenza del controllo ActiveX `AfxVerifyLicFile`consiste nel controllare il database di registrazione per una chiave del Registro di sistema specifica, anziché chiamare . Per un esempio dell'implementazione predefinita, vedere la sezione [Modifiche ai file](#_core_implementation_file_modifications) di implementazione di questo articolo.

Per ulteriori informazioni sui problemi relativi alle licenze, vedere Problemi di licenza in [Aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md).

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)
