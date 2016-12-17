---
title: "Impostazione del riconoscimento della versione per i progetti personalizzati | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5233d3ff-6e89-4401-b449-51b4686becca
caps.latest.revision: 33
caps.handback.revision: 33
manager: "douge"
---
# Impostazione del riconoscimento della versione per i progetti personalizzati
Nel sistema di progetto personalizzato è possibile consentire il caricamento di progetti di un tipo specifico in più versioni di Visual Studio. È anche possibile impedire che progetti di un tipo specifico vengano caricati in una versione precedente di Visual Studio. È inoltre possibile consentire al progetto di identificarsi in una versione successiva in caso sia necessaria un'operazione di ripristino, conversione o deprecazione.  
  
## Abilitazione del caricamento dei progetti in più versioni  
 È possibile modificare la maggior parte dei progetti creati in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)] con SP1 o versione successiva per consentire il funzionamento in più versioni.  
  
 Prima di caricare un progetto, Visual Studio chiama il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly%2A> per determinare se il progetto può essere aggiornato. Se il progetto può essere aggiornato, il metodo `UpgradeProject_CheckOnly` imposta un flag che fa in modo che una chiamata successiva al metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> aggiorni il progetto. Poiché i progetti incompatibili non possono essere aggiornati, `UpgradeProject_CheckOnly` deve prima controllare la compatibilità del progetto, come descritto nella sezione precedente.  
  
 L'autore di un sistema di progetto implementa `UpgradeProject_CheckOnly` \(dall'interfaccia `IVsProjectUpgradeViaFactory4`\) per fornire agli utenti del sistema di progetto un controllo dell'aggiornamento. Quando gli utenti aprono un progetto, questo metodo viene chiamato per determinare se un progetto deve essere ripristinato prima del caricamento. I requisiti di aggiornamento possibili sono enumerati in `VSPUVF_REPAIRFLAGS` e includono le possibilità seguenti:  
  
1.  `SPUVF_PROJECT_NOREPAIR`: non è necessario il ripristino.  
  
2.  `VSPUVF_PROJECT_SAFEREPAIR`: rende il progetto compatibile con una versione precedente senza i problemi che si sarebbero potuti verificare con le versioni precedenti del prodotto.  
  
3.  `VSPUVF_PROJECT_UNSAFEREPAIR`: rende il progetto compatibile con le versioni precedenti con alcuni rischi correlati ai problemi che si sarebbero potuti verificare con le versioni precedenti del prodotto. Ad esempio, il progetto non sarà compatibile se dipende da versioni di SDK diverse.  
  
4.  `VSPUVF_PROJECT_ONEWAYUPGRADE`: rende il progetto incompatibile con una versione precedente.  
  
5.  `VSPUVF_PROJECT_INCOMPATIBLE`: indica che la versione corrente non supporta il progetto.  
  
6.  `VSPUVF_PROJECT_DEPRECATED`: indica che il progetto non è più supportato.  
  
> [!NOTE]
>  Per evitare confusione, non combinare flag di aggiornamento quando li si imposta. Ad esempio, non creare uno stato di aggiornamento ambiguo, come `VSPUVF_PROJECT_SAFEREPAIR | VSPUVF_PROJECT_DEPRECATED`.  
  
 Le versioni del progetto possono implementare la funzione `UpgradeProjectFlavor_CheckOnly` dall'interfaccia `IVsProjectFlavorUpgradeViaFactory2`. Per far funzionare correttamente questa funzione, l'implementazione di `IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly` indicata in precedenza deve eseguire la chiamata alla funzione. Questa chiamata è già implementata nel sistema di progetto di base di Visual Basic o C\#. L'effetto di questa funzione consente alle versioni del progetto di determinare anche i requisiti di aggiornamento di un progetto, in aggiunta a ciò che è stato determinato dal sistema di progetto di base. La finestra di dialogo relativa alla compatibilità mostra il più rigoroso dei due requisiti.  
  
 Quando Visual Studio esegue un controllo dell'aggiornamento, fornisce un logger invece di un valore NULL come nelle versioni precedenti di Visual Studio. Il logger consente ai sistemi e alle versioni del progetto di fornire informazioni aggiuntive che possono aiutare a comprendere la natura delle modifiche necessarie per consentire il corretto caricamento dei progetti precedenti. È consigliabile usare il logger per fornire informazioni aggiuntive, invece di usare le finestre di dialogo. Per altre informazioni, vedere [Logger di aggiornamento](../misc/making-custom-projects-version-aware.md#BKMK_UpgradeLogger), più avanti in questo argomento.  
  
 Per le implementazioni gestite, le interfacce di aggiornamento del progetto sono disponibili nell'assembly di interoperabilità Microsoft.VisualStudio.Shell.Interop.11.0.dll.  
  
 Il metodo `UpgradeProject` consente di determinare se le modifiche apportate impedirebbero il caricamento del progetto in una versione precedente di Visual Studio. In questo caso, il metodo contrassegna il progetto come incompatibile. Per comprendere in che modo un progetto viene contrassegnato come incompatibile, vedere [Contrassegno di un progetto come incompatibile](../misc/making-custom-projects-version-aware.md#BKMK_Incompat), più indietro in questo argomento. Dopo la visualizzazione di questa finestra di dialogo, è consigliabile contrassegnare il progetto come incompatibile chiamando il metodo `IVsAppCompat.BreakAssetCompatibility` direttamente, invece di chiamare prima il metodo `IVsAppCompat.AskForUserConsentToBreakAssetCompat`, perché non è necessario che la finestra di dialogo venga visualizzata due volte.  
  
 Di seguito è riportato un esempio che aiuta a riepilogare l'esperienza utente per quanto riguarda la compatibilità. Se un progetto è stato creato in una versione precedente e la versione corrente determina che è necessario un aggiornamento, Visual Studio visualizza una finestra di dialogo per chiedere all'utente l'autorizzazione per apportare le modifiche. Se l'utente acconsente, il progetto viene modificato e quindi caricato. Se la soluzione viene quindi chiusa e riaperta nella versione precedente, il progetto aggiornato in modo unidirezionale sarà incompatibile e non verrà caricato. Se il progetto ha richiesto solo un ripristino, e non un aggiornamento, sarà ancora possibile aprire il progetto ripristinato in entrambe le versioni.  
  
##  <a name="BKMK_Incompat"></a> Contrassegno di un progetto come incompatibile  
 È possibile contrassegnare un progetto come incompatibile con le versioni precedenti di Visual Studio.  Si supponga, ad esempio, di creare un progetto che usa una funzionalità di .NET Framework 4.5. Poiché questo progetto non può essere compilato in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)], è possibile contrassegnarlo come incompatibile per impedire che tale versione tenti di caricarlo.  
  
 Il componente che aggiunge la funzionalità incompatibile è responsabile di contrassegnare il progetto come incompatibile. Il componente deve avere accesso all'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy> che rappresenta i progetti di interesse.  
  
#### Per contrassegnare un progetto come incompatibile  
  
1.  Nel componente ottenere un'interfaccia `IVsAppCompat` dal servizio globale SVsSolution.  
  
     Per altre informazioni, vedere <xref:Microsoft.VisualStudio.Shell.Interop.SVsSolution>.  
  
2.  Nel componente chiamare `IVsAppCompat.AskForUserConsentToBreakAssetCompat` e passare una matrice di interfacce `IVsHierarchy` che rappresentano i progetti di interesse.  
  
     Questo metodo ha la firma seguente:  
  
    ```  
    HRESULT AskForUserConsentToBreakAssetCompat([in] SAFEARRAY(IVsHierarchy*) sarrProjectHierarchies)  
  
    ```  
  
     Se si implementa questo codice, verrà visualizzata una finestra di dialogo relativa alla compatibilità del progetto. La finestra di dialogo chiederà all'utente l'autorizzazione per contrassegnare tutti i progetti specificati come incompatibili. Se l'utente acconsente, `AskForUserConsentToBreakAssetCompat` restituisce `S_OK`; in caso contrario, `AskForUserConsentToBreakAssetCompat` restituisce `OLE_E_PROMPTSAVECANCELLED`.  
  
    > [!WARNING]
    >  Negli scenari più comuni, la matrice `IVsHierarchy` conterrà un solo elemento.  
  
3.  Se `AskForUserConsentToBreakAssetCompat` restituisce `S_OK`, il componente esegue o accetta le modifiche che interrompono la compatibilità.  
  
4.  Nel componente chiamare il metodo `IVsAppCompat.BreakAssetCompatibility` per ogni progetto che si vuole contrassegnare come incompatibile. Il componente può impostare il valore del parametro `lpszMinimumVersion` su una versione minima specifica invece che fare in modo che Visual Studio cerchi la stringa della versione corrente del Registro di sistema. Questo approccio riduce al minimo il rischio che il componente imposti inavvertitamente un valore superiore in futuro, in base a ciò che è presente nel Registro di sistema in quel momento. Se venisse impostato un valore superiore, Visual Studio non potrebbe aprire il progetto.  
  
     Questo metodo ha la firma seguente:  
  
    ```  
    HRESULT BreakAssetCompatibility([in] IVsHierarchy * pProjHier), [in] LPCOLESTR lpszMinimumVersion);  
  
    ```  
  
     Se il componente imposta `lpszMinimumVersion` su NULL, il metodo `BreakAssetCompatibility` chiama il metodo `IVsAppCompat.GetCurrentDesignTimeCompatVersion` per ottenere una stringa che rappresenta la versione corrente di Visual Studio.  
  
     Questo metodo ha la firma seguente:  
  
    ```  
    HRESULT GetCurrentDesignTimeCompatVersion([out] BSTR * pbstrCurrentDesignTimeCompatVersion)  
    ```  
  
     Il metodo BreakAssetCompatibility chiama quindi il metodo `IVsHierarchy.SetProperty` per impostare la proprietà `VSHPROPID_MinimumDesignTimeCompatVersion` radice sul valore della stringa della versione ottenuta nel passaggio precedente.  
  
     Per altre informazioni, vedere <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.SetProperty%2A>.  
  
> [!IMPORTANT]
>  È necessario implementare la proprietà `VSHPROPID_MinimumDesignTimeCompatVersion` per contrassegnare un progetto come compatibile o incompatibile. Ad esempio, se il sistema di progetto usa un file di progetto MSBuild, aggiungere al file di progetto una proprietà di compilazione `<MinimumVisualStudioVersion>` con un valore uguale al valore della proprietà `VSHPROPID_MinimumDesignTimeCompatVersion` corrispondente.  
  
## Rilevamento dell'incompatibilità di un progetto  
 È necessario impedire che un progetto incompatibile con la versione corrente di Visual Studio venga caricato. Inoltre, un progetto incompatibile non può essere aggiornato o ripristinato. È quindi necessario controllare due volte la compatibilità di un progetto: una prima volta quando si prende in considerazione il ripristino o l'aggiornamento e una seconda volta prima del caricamento.  
  
 Per consentire il rilevamento dell'incompatibilità di un progetto, è necessario implementare i metodi <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly%2A> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CreateProject%2A>. Se un progetto è incompatibile, `UpgradeProject_CheckOnly` deve restituire il codice di riuscita `VS_S_INCOMPATIBLEPROJECT` e `CreateProject` deve restituire il codice di errore `VS_E_INCOMPATIBLEPROJECT`. Per i progetti con versioni, è necessario implementare `IVsProjectFlavorUpgradeViaFactory2.UpgradeProjectFlavor_CheckOnly` invece di `IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly`.  
  
 Un sistema di progetto viene definito con versioni se in base a esso viene compilato un progetto Web, Office \(VSTO\), Silverlight o di altro tipo. I sistemi di progetto precedenti che implementano già `IVsProjectUpgradeViaFactory.UpgradeProject_CheckOnly` e i sistemi di progetto con versioni che implementano già `IVsProjectFlavorUpgradeViaFactory.UpgradeProjectFlavor_CheckOnly` continuano a essere supportati. La versione precedente di `IVsProjectUpgradeViaFactory.UpgradeProject_CheckOnly` ha la firma di implementazione seguente:  
  
```  
IVsProjectUpgradeViaFactory::UpgradeProject_CheckOnly( /* [in] */ BSTR bstrFileName, /* [in] */ IVsUpgradeLogger *pLogger, /* [out] */ BOOL *pUpgradeRequired, /* [out] */ GUID *pguidNewProjectFactory, /* [out] */ VSPUVF_FLAGS *pUpgradeProjectCapabilityFlags )  
```  
  
 Se questo metodo imposta `pUpgradeRequired` su TRUE e restituisce `S_OK`, il risultato viene considerato come "Aggiornamento" e come se il metodo avesse impostato un flag di aggiornamento sul valore `VSPUVF_PROJECT_ONEWAYUPGRADE`, descritto più avanti in questo argomento. I valori restituiti seguenti sono supportati usando questo metodo precedente, ma solo quando il valore di `pUpgradeRequired` è impostato su TRUE:  
  
1.  `VS_S_PROJECT_SAFEREPAIRREQUIRED`. Questo valore restituito converte il valore di `pUpgradeRequired` in TRUE, come equivalente a `VSPUVF_PROJECT_SAFEREPAIR`, descritto più avanti in questo argomento.  
  
2.  `VS_S_PROJECT_UNSAFEREPAIRREQUIRED`. Questo valore restituito converte il valore di `pUpgradeRequired` in TRUE, come equivalente a `VSPUVF_PROJECT_UNSAFEREPAIR`, descritto più avanti in questo argomento.  
  
3.  `VS_S_PROJECT_ONEWAYUPGRADEREQUIRED`. Questo valore restituito converte il valore di `pUpgradeRequired` in TRUE, come equivalente a `VSPUVF_PROJECT_ONEWAYUPGRADE`, descritto più avanti in questo argomento.  
  
 Le nuove implementazioni in `IVsProjectUpgradeViaFactory4` e `IVsProjectFlavorUpgradeViaFactory2` consentono di specificare il tipo di migrazione in modo più preciso.  
  
> [!NOTE]
>  È possibile memorizzare nella cache il risultato del controllo di compatibilità eseguito dal metodo `UpgradeProject_CheckOnly`, in modo che possa essere usato anche dalla chiamata seguente a `CreateProject`.  
  
 Ad esempio, se i metodi `UpgradeProject_CheckOnly` e `CreateProject` scritti per un sistema di progetto [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)] con SP1 analizzano un file di progetto e determinano che la proprietà di compilazione `<MinimumVisualStudioVersion>` è "11.0", Visual Studio 2010 con SP1 non caricherà il progetto. Inoltre, lo strumento diesplorazione della soluzione indicherebbe che il progetto è "incompatibile" e non verrà caricato.  
  
##  <a name="BKMK_UpgradeLogger"></a> Logger di aggiornamento  
 La chiamata a `IVsProjectUpgradeViaFactory::UpgradeProject` contiene un logger `IVsUpgradeLogger`, che le versioni e i sistemi di progetto devono usare per fornire una traccia di aggiornamento dettagliata per la risoluzione dei problemi. Se viene registrato un avviso o un errore, Visual Studio visualizza il report di aggiornamento.  
  
 Quando si scrive nel logger di aggiornamento, tenere presenti le linee guida seguenti:  
  
-   Visual Studio chiamerà un'operazione di scaricamento al termine dell'aggiornamento di tutti i progetti. Non eseguire la chiamata nel sistema di progetto.  
  
-   La funzione LogMessage ha i valori di ErrorLevels seguenti:  
  
    -   0 per qualsiasi informazione di cui si vuole tenere traccia.  
  
    -   1 per un avviso.  
  
    -   2 per un errore.  
  
    -   3 per il formattatore del report. Quando il progetto viene aggiornato, registrare una volta la parola "Converted" senza localizzarla.  
  
-   Se un progetto non richiede alcun ripristino o aggiornamento, Visual Studio genera il file di log solo se il sistema di progetto ha registrato un avviso o un errore durante l'esecuzione del metodo UpgradeProject\_CheckOnly o UpgradeProjectFlavor\_CheckOnly.