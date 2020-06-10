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
ms.openlocfilehash: 4fe2fcf63cce02ed6c1c9943e6d0fe6ffab00a92
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622362"
---
# <a name="mfc-activex-controls-licensing-an-activex-control"></a>Controlli ActiveX MFC: licenze di un controllo ActiveX

Il supporto delle licenze, una funzionalità facoltativa dei controlli ActiveX, consente di controllare gli utenti che possono usare o distribuire il controllo. Per ulteriori informazioni sui problemi relativi alle licenze, vedere la pagina relativa ai problemi di licenza nell' [aggiornamento di un controllo ActiveX esistente](upgrading-an-existing-activex-control.md).

> [!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Questo articolo tratta gli argomenti seguenti:

- [Panoramica delle licenze dei controlli ActiveX](#_core_overview_of_activex_control_licensing)

- [Creazione di un controllo con licenza](#_core_creating_a_licensed_control)

- [Supporto delle licenze](#_core_licensing_support)

- [Personalizzazione delle licenze di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control)

I controlli ActiveX che implementano le licenze consentono allo sviluppatore del controllo di determinare il modo in cui gli altri utenti utilizzeranno il controllo ActiveX. È necessario fornire all'acquirente del controllo il controllo e. File LIC, con l'accordo che l'acquirente può distribuire il controllo, ma non il. File LIC con un'applicazione che utilizza il controllo. In questo modo si impedisce agli utenti di tale applicazione di scrivere nuove applicazioni che utilizzano il controllo, senza prima concedere in licenza il controllo.

## <a name="overview-of-activex-control-licensing"></a><a name="_core_overview_of_activex_control_licensing"></a>Panoramica delle licenze dei controlli ActiveX

Per fornire supporto per la gestione delle licenze per i controlli ActiveX, la classe [COleObjectFactory](reference/coleobjectfactory-class.md) fornisce un'implementazione per diverse funzioni nell' `IClassFactory2` interfaccia: `IClassFactory2::RequestLicKey` , `IClassFactory2::GetLicInfo` e `IClassFactory2::CreateInstanceLic` . Quando lo sviluppatore dell'applicazione contenitore esegue una richiesta per creare un'istanza del controllo, viene eseguita una chiamata a per `GetLicInfo` verificare che il controllo. Il file LIC è presente. Se il controllo è concesso in licenza, è possibile creare un'istanza del controllo e posizionarla nel contenitore. Una volta che lo sviluppatore ha terminato la creazione dell'applicazione contenitore, viene eseguita un'altra chiamata di funzione `RequestLicKey` . Questa funzione restituisce un codice di licenza, ovvero una stringa di caratteri semplice, all'applicazione contenitore. La chiave restituita viene quindi incorporata nell'applicazione.

Nella figura seguente viene illustrata la verifica della licenza di un controllo ActiveX che verrà utilizzato durante lo sviluppo di un'applicazione contenitore. Come indicato in precedenza, lo sviluppatore dell'applicazione contenitore deve avere la correttezza. File LIC installato nel computer di sviluppo per creare un'istanza del controllo.

![Controllo ActiveX concesso in licenza verificato in fase di sviluppo](../mfc/media/vc374d1.gif "Controllo ActiveX concesso in licenza verificato in fase di sviluppo") <br/>
Verifica di un controllo ActiveX con licenza durante lo sviluppo

Il processo successivo, illustrato nella figura seguente, si verifica quando l'utente finale esegue l'applicazione contenitore.

Quando l'applicazione viene avviata, in genere è necessario creare un'istanza del controllo. Il contenitore effettua questa operazione effettuando una chiamata a `CreateInstanceLic` , passando il codice di licenza incorporato come parametro. Viene quindi creato un confronto di stringhe tra il codice di licenza incorporato e la copia del codice di licenza del controllo. Se la corrispondenza ha esito positivo, viene creata un'istanza del controllo e l'applicazione continua a essere eseguita normalmente. Si noti che. Il file LIC non deve essere presente nel computer dell'utente del controllo.

![Controllo ActiveX concesso in licenza verificato in fase di esecuzione](../mfc/media/vc374d2.gif "Controllo ActiveX concesso in licenza verificato in fase di esecuzione") <br/>
Verifica di un controllo ActiveX con licenza durante l'esecuzione

Il controllo delle licenze è costituito da due componenti di base: codice specifico nella DLL di implementazione del controllo e nel file di licenza. Il codice è costituito da due (o forse tre) chiamate di funzione e da una stringa di caratteri, in seguito definita "stringa di licenza", che contiene un avviso sul copyright. Queste chiamate e la stringa di licenza si trovano nell'implementazione del controllo (. File CPP). Il file di licenza, generato dalla creazione guidata controllo ActiveX, è un file di testo con una dichiarazione di copyright. Viene denominato usando il nome del progetto con un. Estensione LIC, ad esempio SAMPLE. Lic. Un controllo con licenza deve essere accompagnato dal file di licenza se è necessario usare la fase di progettazione.

## <a name="creating-a-licensed-control"></a><a name="_core_creating_a_licensed_control"></a>Creazione di un controllo con licenza

Quando si utilizza la creazione guidata controllo ActiveX per creare il Framework di controllo, è facile includere il supporto per le licenze. Quando si specifica che il controllo deve disporre di una licenza di runtime, la creazione guidata controllo ActiveX aggiunge codice alla classe del controllo per supportare le licenze. Il codice è costituito da funzioni che usano una chiave e un file di licenza per la verifica delle licenze. Queste funzioni possono anche essere modificate per personalizzare le licenze del controllo. Per ulteriori informazioni sulla personalizzazione delle licenze, vedere [personalizzazione delle licenze di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control) più avanti in questo articolo.

#### <a name="to-add-support-for-licensing-with-the-activex-control-wizard-when-you-create-your-control-project"></a>Per aggiungere il supporto per la gestione delle licenze con la creazione guidata controllo ActiveX quando si crea il progetto di controllo

1. Utilizzare le istruzioni riportate in [creazione di un controllo ActiveX MFC](reference/creating-an-mfc-activex-control.md). Nella pagina **Impostazioni applicazione** della creazione guidata controllo ActiveX è disponibile l'opzione per creare il controllo con la licenza di run-time.

La creazione guidata controllo ActiveX genera ora un Framework di controllo ActiveX che include il supporto di base per le licenze. Per una spiegazione dettagliata del codice di licenza, vedere l'argomento successivo.

## <a name="licensing-support"></a><a name="_core_licensing_support"></a>Supporto delle licenze

Quando si utilizza la creazione guidata controllo ActiveX per aggiungere il supporto per la gestione delle licenze a un controllo ActiveX, tramite la creazione guidata controllo ActiveX viene aggiunto il codice che dichiara e implementa la funzionalità di gestione delle licenze per i file di implementazione e di intestazione del controllo. Questo codice è costituito da una `VerifyUserLicense` funzione membro e da una `GetLicenseKey` funzione membro, che eseguono l'override delle implementazioni predefinite presenti in [COleObjectFactory](reference/coleobjectfactory-class.md) . Queste funzioni recuperano e verificano la licenza del controllo.

> [!NOTE]
> Una terza funzione membro `VerifyLicenseKey` non viene generata dalla creazione guidata controllo ActiveX, ma è possibile eseguirne l'override per personalizzare il comportamento di verifica della chiave di licenza.

Queste funzioni membro sono:

- [VerifyUserLicense](reference/coleobjectfactory-class.md#verifyuserlicense)

   Verifica che il controllo consenta l'utilizzo in fase di progettazione controllando la presenza del file di licenza del controllo nel sistema. Questa funzione viene chiamata dal Framework come parte dell'elaborazione di `IClassFactory2::GetLicInfo` e di `IClassFactory::CreateInstanceLic` .

- [GetLicenseKey](reference/coleobjectfactory-class.md#getlicensekey)

   Richiede una chiave univoca dalla DLL del controllo. Questa chiave è incorporata nell'applicazione contenitore e viene utilizzata in seguito, insieme a `VerifyLicenseKey` , per creare un'istanza del controllo. Questa funzione viene chiamata dal Framework come parte dell'elaborazione `IClassFactory2::RequestLicKey` .

- [VerifyLicenseKey](reference/coleobjectfactory-class.md#verifylicensekey)

   Verifica che la chiave incorporata e la chiave univoca del controllo siano uguali. Ciò consente al contenitore di creare un'istanza del controllo per l'utilizzo. Questa funzione viene chiamata dal Framework come parte dell'elaborazione ed è possibile eseguirne l' `IClassFactory2::CreateInstanceLic` override per fornire la verifica personalizzata del codice di licenza. L'implementazione predefinita esegue un confronto tra stringhe. Per ulteriori informazioni, vedere [personalizzazione delle licenze di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control), più avanti in questo articolo.

### <a name="header-file-modifications"></a><a name="_core_header_file_modifications"></a>Modifiche al file di intestazione

La creazione guidata controllo ActiveX inserisce il codice seguente nel file di intestazione del controllo. In questo esempio `CSampleCtrl` vengono dichiarate due funzioni membro dell'oggetto `factory` , una che verifica la presenza del controllo. File LIC e un altro che recupera la chiave di licenza da usare nell'applicazione che contiene il controllo:

[!code-cpp[NVC_MFC_AxUI#39](codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_1.h)]

### <a name="implementation-file-modifications"></a><a name="_core_implementation_file_modifications"></a>Modifiche al file di implementazione

La creazione guidata controllo ActiveX inserisce le due istruzioni seguenti nel file di implementazione del controllo per dichiarare il nome file e la stringa di licenza:

[!code-cpp[NVC_MFC_AxUI#40](codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_2.cpp)]

> [!NOTE]
> Se si modifica `szLicString` in qualsiasi modo, è necessario modificare anche la prima riga nel controllo. Il file LIC o le licenze non funzioneranno correttamente.

La creazione guidata controllo ActiveX inserisce il codice seguente nel file di implementazione del controllo per definire le funzioni e la classe del controllo `VerifyUserLicense` `GetLicenseKey` :

[!code-cpp[NVC_MFC_AxUI#41](codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_3.cpp)]

Infine, la **creazione guidata controllo ActiveX** modifica il progetto di controllo. File IDL. La parola chiave **licensed** viene aggiunta alla dichiarazione di coclasse del controllo, come nell'esempio seguente:

[!code-cpp[NVC_MFC_AxUI#42](codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_4.idl)]

## <a name="customizing-the-licensing-of-an-activex-control"></a><a name="_core_customizing_the_licensing_of_an_activex_control"></a>Personalizzazione delle licenze di un controllo ActiveX

Poiché `VerifyUserLicense` , `GetLicenseKey` e `VerifyLicenseKey` sono dichiarati come funzioni membro virtuali della classe factory del controllo, è possibile personalizzare il comportamento di gestione delle licenze del controllo.

È ad esempio possibile fornire diversi livelli di gestione delle licenze per il controllo eseguendo l'override `VerifyUserLicense` delle `VerifyLicenseKey` funzioni membro o. All'interno di questa funzione è possibile modificare le proprietà o i metodi esposti all'utente in base al livello di licenza rilevato.

È anche possibile aggiungere codice alla `VerifyLicenseKey` funzione che fornisce un metodo personalizzato per informare l'utente che la creazione del controllo non è riuscita. Nella funzione membro, ad esempio, `VerifyLicenseKey` è possibile visualizzare una finestra di messaggio che informa che il controllo non è stato inizializzato e perché.

> [!NOTE]
> Un altro modo per personalizzare la verifica delle licenze del controllo ActiveX consiste nel controllare il database di registrazione per una chiave del registro di sistema specifica, anziché chiamare `AfxVerifyLicFile` . Per un esempio dell'implementazione predefinita, vedere la sezione [modifiche dei file di implementazione](#_core_implementation_file_modifications) di questo articolo.

Per ulteriori informazioni sui problemi relativi alle licenze, vedere la pagina relativa ai problemi di licenza nell' [aggiornamento di un controllo ActiveX esistente](upgrading-an-existing-activex-control.md).

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Creazione guidata controllo ActiveX MFC](reference/mfc-activex-control-wizard.md)
