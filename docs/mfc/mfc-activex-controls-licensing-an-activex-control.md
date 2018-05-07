---
title: 'Controlli ActiveX MFC: Licenze di un controllo ActiveX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- COleObjectFactory
dev_langs:
- C++
helpviewer_keywords:
- COleObjectFactory class [MFC], licensing controls
- MFC ActiveX controls [MFC], licensing
- VerifyLicenseKey method [MFC]
- VerifyUserLicense method [MFC]
- GetLicenseKey method [MFC]
- licensing ActiveX controls
ms.assetid: cacd9e45-701a-4a1f-8f1f-b0b39f6ac303
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 725e6cf167ec01635a3072f09ecaa2f5055b1891
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-licensing-an-activex-control"></a>Controlli ActiveX MFC: licenze di un controllo ActiveX
Gestione delle licenze, una funzionalità facoltativa di controlli ActiveX, consente di controllare chi è in grado di utilizzare o distribuire il controllo. (Per ulteriori informazioni su problemi relativi alle licenze, vedere i problemi relativi alle licenze in [l'aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md).)  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [Panoramica del controllo ActiveX di licenza](#_core_overview_of_activex_control_licensing)  
  
-   [Creazione di un controllo con licenza](#_core_creating_a_licensed_control)  
  
-   [Supporto della licenza](#_core_licensing_support)  
  
-   [Personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control)  
  
 Controlli ActiveX che implementano licenze consentono allo sviluppatore del controllo, per determinare come altri utenti utilizzeranno il controllo ActiveX. Permette l'acquirente di controllo con il controllo e. File: contratto di licenza con l'accordo che l'acquirente può distribuire il controllo, ma non il. File: contratto di licenza, con un'applicazione che utilizza il controllo. Questo impedisce agli utenti dell'applicazione che la scrittura di nuove applicazioni che utilizzano il controllo, senza della licenza del controllo da parte dell'utente.  
  
##  <a name="_core_overview_of_activex_control_licensing"></a> Panoramica del controllo ActiveX di licenza  
 Per fornire il supporto della licenza per i controlli ActiveX, il [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) classe fornisce un'implementazione per molte funzioni di **IClassFactory2** interfaccia: **IClassFactory2 :: RequestLicKey**, **Iclassfactory2**, e **IClassFactory2:: CreateInstanceLic**. Quando lo sviluppatore dell'applicazione contenitore effettua una richiesta per creare un'istanza del controllo, una chiamata a `GetLicInfo` viene eseguito per verificare che il controllo. In caso contrario è presente. Se il controllo è concesso in licenza, è possibile creare un'istanza del controllo e inserita nel contenitore. Dopo che lo sviluppatore ha terminato la creazione dell'applicazione contenitore, un'altra chiamata di funzione, questa volta a `RequestLicKey`, viene eseguita. Questa funzione restituisce un codice di licenza (una stringa di caratteri semplice) per l'applicazione contenitore. La chiave restituita viene quindi incorporata nell'applicazione.  
  
 Nella figura seguente illustra la verifica della licenza di un controllo ActiveX che verrà utilizzato durante lo sviluppo di un'applicazione contenitore. Come accennato in precedenza, lo sviluppatore dell'applicazione contenitore deve avere il proprio. File GCI installato nel computer di sviluppo per creare un'istanza del controllo.  
  
 ![Concesso in licenza controllo ActiveX verificato in fase di sviluppo](../mfc/media/vc374d1.gif "vc374d1")  
Verifica di un controllo ActiveX con licenza durante lo sviluppo  
  
 Il processo successivo, illustrato nella figura seguente, si verifica quando l'utente finale esegue l'applicazione contenitore.  
  
 Quando viene avviata l'applicazione, un'istanza del controllo in genere deve essere creato. Il contenitore esegue questa operazione tramite una chiamata a `CreateInstanceLic`, passando la chiave di licenza incorporata come parametro. Viene quindi eseguito un confronto di stringa tra la chiave di licenza incorporata e la copia del controllo del codice di licenza. Se la corrispondenza ha esito positivo, viene creata un'istanza del controllo e l'applicazione continua a essere eseguita normalmente. Si noti che il. In caso contrario non devono essere presente nel computer dell'utente del controllo.  
  
 ![Controllo ActiveX verificato in fase di esecuzione di una licenza](../mfc/media/vc374d2.gif "vc374d2")  
Verifica di un controllo ActiveX con licenza durante l'esecuzione  
  
 Licenze dei controlli è costituito da due componenti di base: codice specifico nell'implementazione del controllo DLL e il file di licenza. Il codice è costituito da due (o tre) chiamate di funzione e una stringa di caratteri indicato di seguito come una "stringa di licenza", contenente un avviso di copyright. Queste chiamate e la stringa di licenza vengono trovati nell'implementazione del controllo (. File CPP). Il file di licenza, generato dalla creazione guidata controllo ActiveX, è un file di testo con una dichiarazione di copyright. Il file viene denominato utilizzando il nome del progetto con un. Estensione: contratto di licenza, ad esempio esempio. : CONTRATTO DI LICENZA. Se è necessario utilizzare in fase di progettazione, un controllo con licenza deve essere accompagnato da file di licenza.  
  
##  <a name="_core_creating_a_licensed_control"></a> Creazione di un controllo con licenza  
 Quando si utilizza la creazione guidata controllo ActiveX per creare il framework del controllo, è facile da includere il supporto della licenza. Quando si specifica che il controllo deve avere una licenza in fase di esecuzione, la creazione guidata controllo ActiveX aggiunge codice alla classe del controllo per il supporto di gestione delle licenze. Il codice è costituito da funzioni che utilizzano un file di chiave di licenza per la verifica delle licenze. Queste funzioni possono anche essere modificate per personalizzare la gestione delle licenze di controllo. Per ulteriori informazioni sulla personalizzazione della licenza, vedere [personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control) più avanti in questo articolo.  
  
#### <a name="to-add-support-for-licensing-with-the-activex-control-wizard-when-you-create-your-control-project"></a>Per aggiungere il supporto per le licenze con la creazione guidata controllo ActiveX, quando si crea il progetto di controllo  
  
1.  Utilizzare le istruzioni in [la creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md). Il **le impostazioni dell'applicazione** pagina della creazione guidata controllo ActiveX contiene l'opzione per creare il controllo con la licenza in fase di esecuzione.  
  
 La creazione guidata controllo ActiveX genera un framework del controllo ActiveX che include il supporto della licenza di base. Per una spiegazione dettagliata del codice della licenza, vedere l'argomento successivo.  
  
##  <a name="_core_licensing_support"></a> Supporto della licenza  
 Quando si utilizza la creazione guidata controllo ActiveX per aggiungere il supporto della licenza a un controllo ActiveX, la creazione guidata controllo ActiveX viene aggiunto codice che dichiara e implementa la funzionalità di gestione delle licenze per l'intestazione di controllo e l'implementazione del file. Questo codice è costituito da un `VerifyUserLicense` funzione membro e un `GetLicenseKey` funzione membro, che sostituiscono le implementazioni predefinite, vedere [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) . Queste funzioni, recuperano e verificare la licenza del controllo.  
  
> [!NOTE]
>  Una terza funzione membro, `VerifyLicenseKey` non viene generato dalla creazione guidata controllo ActiveX, ma può essere sottoposto a override per personalizzare il comportamento di verifica della chiave di licenza.  
  
 Queste funzioni membro sono:  
  
-   [VerifyUserLicense](../mfc/reference/coleobjectfactory-class.md#verifyuserlicense)  
  
     Verifica che il controllo consente di utilizzo in fase di progettazione selezionando il sistema la presenza del file di licenza di controllo. Questa funzione viene chiamata dal framework come parte dell'elaborazione **Iclassfactory2** e **IClassFactory:: CreateInstanceLic**.  
  
-   [GetLicenseKey](../mfc/reference/coleobjectfactory-class.md#getlicensekey)  
  
     La DLL del controllo richiede una chiave univoca. Questa chiave è incorporata nell'applicazione contenitore e versioni successive, usata in combinazione con `VerifyLicenseKey`, per creare un'istanza del controllo. Questa funzione viene chiamata dal framework come parte dell'elaborazione **IClassFactory2:: RequestLicKey**.  
  
-   [VerifyLicenseKey](../mfc/reference/coleobjectfactory-class.md#verifylicensekey)  
  
     Verifica che la chiave incorporata e la chiave univoca del controllo sono uguali. In questo modo il contenitore creare un'istanza del controllo per l'uso. Questa funzione viene chiamata dal framework come parte dell'elaborazione **IClassFactory2:: CreateInstanceLic** e può essere sostituito per fornire una verifica personalizzata della chiave di licenza. L'implementazione predefinita esegue un confronto tra stringhe. Per ulteriori informazioni, vedere [personalizzazione della licenza di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control), più avanti in questo articolo.  
  
###  <a name="_core_header_file_modifications"></a> Modifiche al File di intestazione  
 La creazione guidata controllo ActiveX inserisce il codice seguente nel file di intestazione di controllo. In questo esempio, due funzioni membro di `CSampleCtrl`dell'oggetto `factory` vengono dichiarati, che verifica la presenza del controllo. In caso contrario e un altro che recupera il codice di licenza da utilizzare nell'applicazione che contiene il controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#39](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_1.h)]  
  
###  <a name="_core_implementation_file_modifications"></a> Modifiche al File di implementazione  
 La creazione guidata controllo ActiveX inserisce due istruzioni seguenti nel file di implementazione del controllo per dichiarare il nome del file di licenza e la stringa di licenza:  
  
 [!code-cpp[NVC_MFC_AxUI#40](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_2.cpp)]  
  
> [!NOTE]
>  Se si modifica **szLicString** in alcun modo, è necessario modificare anche la prima riga nel controllo. File: contratto di licenza o licenze non funzionerà correttamente.  
  
 La creazione guidata controllo ActiveX inserisce il codice seguente nel file di implementazione di controllo per definire la classe del controllo `VerifyUserLicense` e `GetLicenseKey` funzioni:  
  
 [!code-cpp[NVC_MFC_AxUI#41](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_3.cpp)]  
  
 Infine, il **Creazione guidata controllo ActiveX** modifica il progetto di controllo. File IDL. Il **concesso in licenza** (parola chiave) viene aggiunto alla dichiarazione della coclasse del controllo, come nell'esempio seguente:  
  
 [!code-cpp[NVC_MFC_AxUI#42](../mfc/codesnippet/cpp/mfc-activex-controls-licensing-an-activex-control_4.idl)]  
  
##  <a name="_core_customizing_the_licensing_of_an_activex_control"></a> Personalizzazione della licenza di un controllo ActiveX  
 Poiché `VerifyUserLicense`, `GetLicenseKey`, e `VerifyLicenseKey` vengono dichiarati come funzioni membro virtuali della classe factory del controllo, è possibile personalizzare il comportamento del controllo sulle licenze.  
  
 Ad esempio, è possibile fornire più livelli di licenza per il controllo eseguendo l'override di `VerifyUserLicense` o `VerifyLicenseKey` funzioni membro. All'interno di questa funzione è Impossibile modificare le proprietà o metodi vengono esposti all'utente in base al livello di licenza che è stato rilevato.  
  
 È inoltre possibile aggiungere codice per il `VerifyLicenseKey` funzione che fornisce un metodo personalizzato per informare gli utenti che controllano la creazione non è riuscita. Ad esempio, il `VerifyLicenseKey` casella di funzione membro è possibile visualizzare un messaggio che informa che è Impossibile inizializzare il controllo e perché.  
  
> [!NOTE]
>  Per personalizzare una verifica di licenza di controlli ActiveX è inoltre possibile controllare la registrazione nel database per una chiave del Registro di sistema, anziché chiamare `AfxVerifyLicFile`. Per un esempio dell'implementazione predefinita, vedere il [modifiche al File di implementazione](#_core_implementation_file_modifications) sezione di questo articolo.  
  
 Per ulteriori informazioni su problemi relativi alle licenze, vedere i problemi relativi alle licenze in [l'aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)

