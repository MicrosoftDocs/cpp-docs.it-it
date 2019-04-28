---
title: Utilizzo di librerie e componenti in progetti C++
ms.date: 12/10/2018
f1_keywords:
- VC.Project.References
helpviewer_keywords:
- Add References Dialog Box (C++)
- .NET Framework (C++), Add References Dialog Box
ms.assetid: 12b8f571-0f21-40b3-9404-5318a57e9cb5
ms.openlocfilehash: dff057977e6b6ff0c36d3a888bc4d5c3aa778576
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62274789"
---
# <a name="consuming-libraries-and-components"></a>Utilizzo di librerie e componenti

Spesso, un progetto C++ deve chiamare funzioni o accedere ai dati in un file binario, ad esempio la libreria statica (file con estensione LIB), DLL, componente Windows Runtime, del componente COM o assembly .NET. In questi casi, è necessario configurare il progetto in modo che è possibile trovare tale file binario in fase di compilazione. I passaggi specifici dipendono dal tipo di progetto, il tipo del file binario, e se il file binario viene compilato nella stessa soluzione del progetto. 

## <a name="consuming-libraries-downloaded-via-vcpkg"></a>Elaborazione delle librerie scaricati tramite vcpkg

Per utilizzare una libreria che è stato scaricato tramite il **vcpkg** Gestione pacchetti, è possibile ignorare le istruzioni riportate di seguito. Vedere [vcpkg: Gestione pacchetti per C++ per Windows, Linux e MacOS](vcpkg.md#integrate-with-visual-studio-windows) per altre informazioni.

## <a name="consuming-static-libraries"></a>Utilizzo di librerie statiche

Se viene compilato il progetto di libreria statica nella stessa soluzione:

1. #<a name="include-the-header-files-for-the-static-library-using-quotation-marks-in-a-typical-solution-the-path-will-start-with-library-project-name-intellisense-will-help-you-find-it"></a>includere i file di intestazione per la libreria statica con virgolette doppie. In una tipica soluzione il percorso inizierà con `../<library project name>`. IntelliSense ti aiuterà a trovarlo.
2. Aggiungere un riferimento al progetto libreria statica. Fare clic su **riferimenti** sotto il nodo di progetto di applicazione nel **Esplora soluzioni** e scegliere **Aggiungi riferimento**. 

Se la libreria statica non fa parte della soluzione:

1. Pulsante destro del mouse sul nodo del progetto dell'applicazione in **Esplora soluzioni** e quindi scegliere **proprietà**. 
2. Nel **directory di VC + +** proprietà di pagina, aggiungere il percorso alla directory in cui si trova il file con estensione LIB in **i percorsi di libreria** e aggiungere il percorso per i file di intestazione della libreria in **directory di inclusione** .  
3. Nel **Linker > Input** proprietà di pagina, aggiungere il nome del file con estensione LIB **dipendenze aggiuntive**.

## <a name="dynamic-link-libraries"></a>Librerie a collegamento dinamico

Se la DLL viene compilata come parte della stessa soluzione dell'applicazione, seguire gli stessi passaggi come per una libreria statica.

Se la DLL non fa parte della soluzione dell'applicazione, è necessario il file DLL, le intestazioni con i prototipi per le funzioni esportate e le classi e un file con estensione LIB che fornisce informazioni sul collegamenti necessari.

1. Copiare la DLL nella cartella di output del progetto o in un'altra cartella nel percorso di ricerca di Windows standard per le DLL. Visualizzare [ordine di ricerca di libreria a collegamento dinamico](/windows/desktop/dlls/dynamic-link-library-search-order).
2. Seguire i passaggi 1-3 per librerie statiche specificare i percorsi per le intestazioni e il file con estensione LIB.

## <a name="com-objects"></a>oggetti COM

Se un'applicazione C++ nativa deve utilizzare un oggetto COM, e che l'oggetto è *registrato*, tutto è necessario eseguire è chiamare CoCreateInstance e passare il CLSID dell'oggetto. Il sistema si trova nel Registro di sistema Windows e caricarlo. C + c++ /CLI progetto CLI può utilizzare un oggetto COM nello stesso modo, oppure aggiungendo un riferimento a esso dal **aggiunta di riferimenti > COM** elenco e l'utilizzo tramite il relativo [Runtime callable wrapper](/dotnet/framework/interop/runtime-callable-wrapper). 

## <a name="net-assemblies-and-windows-runtime-components"></a>Assembly .NET e componenti Windows Runtime

Nella piattaforma UWP o C++progetti /CLI, si utilizzano gli assembly .NET o componenti Windows Runtime mediante l'aggiunta di un *riferimento* all'assembly o al componente. Sotto il **riferimenti** nodo in una piattaforma UWP o C++progetto /CLI, noterete che i riferimenti ai componenti di uso comune. Fare clic sui **riferimenti** nodo **Esplora soluzioni** per visualizzare il **gestione riferimenti** e spostarsi tra i componenti aggiuntivi noti al sistema. Scegliere il **esplorare** pulsante per passare a qualsiasi cartella in cui si trova un componente personalizzato. Poiché gli assembly .NET e componenti Windows Runtime contengono informazioni sui tipi incorporati, è possibile visualizzare i relativi metodi e classi facendo clic e scegliendo **Mostra nel Visualizzatore oggetti**. 

## <a name="reference-properties"></a>Proprietà riferimento

Ogni tipo di riferimento ha delle proprietà. È possibile visualizzare le proprietà selezionando il riferimento in Esplora soluzioni e premendo **Alt + Invio**, oppure facendo clic con il pulsante destro del mouse e scegliendo **Proprietà**. Alcune proprietà sono di sola lettura e alcune possono essere modificate. Tuttavia, in genere non è necessario modificare manualmente queste proprietà.

### <a name="activex-reference-properties"></a>Proprietà dei riferimenti ActiveX

Le proprietà dei riferimenti ActiveX sono disponibili solo per i riferimenti ai componenti COM. Queste proprietà vengono visualizzate solo quando è selezionato un componente COM nel riquadro **Riferimenti** . Non è possibile modificare le proprietà.

- **Percorso completo controllo**

   Visualizza il percorso della directory del controllo a cui si fa riferimento.

- **GUID controllo**

   Visualizza il GUID del controllo ActiveX.

- **Versione controllo**

   Visualizza la versione del controllo ActiveX a cui si fa riferimento.

- **Nome libreria dei tipi**

   Visualizza il nome della libreria dei tipi di riferimento.

- **Strumento Wrapper**

   Visualizza lo strumento usato per compilare l'assembly di interoperabilità dalla libreria COM a cui fa riferimento o dal controllo ActiveX.

### <a name="assembly-reference-properties-ccli"></a>Proprietà riferimento ad assembly (C++/CLI)

Proprietà riferimento ad assembly sono disponibili solo per i riferimenti agli assembly di .NET Framework in C++progetti /CLI. Queste proprietà vengono visualizzate solo quando viene selezionato un assembly .NET Framework nel **riferimenti** riquadro. Non è possibile modificare le proprietà.

- **Percorso relativo**

   Visualizza il percorso relativo della directory del progetto per l'assembly di riferimento.

### <a name="build-properties"></a>Proprietà di compilazione

Sono disponibili le proprietà seguenti su vari tipi di riferimenti. Esse consentono di specificare la modalità di compilazione con riferimenti.

- **Copia localmente**

   Specifica se copiare automaticamente l'assembly di riferimento nel percorso di destinazione durante una compilazione.

- **Copia assembly Satellite locale (C++/CLI)**

   Specifica se copiare automaticamente gli assembly satellite dell'assembly di riferimento nel percorso di destinazione durante una compilazione. Usato solo se **Copia localmente** è impostato su **true**.

- **Output assembly di riferimento**

   Specifica se l'assembly viene usato nel processo di compilazione. Se impostato su **true**, l'assembly verrà usato nella riga di comando del compilatore durante la compilazione.

### <a name="project-to-project-reference-properties"></a>Proprietà riferimento da progetto a progetto

Le proprietà seguenti definiscono un *riferimento da progetto a progetto* dal progetto selezionato nel **riferimenti** riquadro a un altro progetto nella stessa soluzione. Per altre informazioni, vedere [Gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

- **Collega dipendenze di libreria**

   Quando questa proprietà è impostata su **True**, il sistema del progetto collega al progetto dipendente i file con estensione LIB generati dal progetto indipendente. In genere, si specificherà l'impostazione **True**.

- **Identificatore di progetto**

   Identifica in modo univoco il progetto indipendente. Il valore della proprietà è un GUID di sistema interno che non può essere modificato.

- **Usa input dipendenze di libreria**

   Quando questa proprietà è impostata su **False**, il sistema del progetto non collegherà al progetto dipendente i file con estensione OBJ generati dal progetto indipendente. Di conseguenza, questo valore disattiva il collegamento incrementale. In genere, si specificherà l'impostazione **False** perché la compilazione dell'applicazione può richiedere lungo tempo se sono presenti numerosi progetti indipendenti.

### <a name="read-only-reference-properties-com--net"></a>Proprietà di riferimento di sola lettura (COM e .NET)

Le proprietà seguenti sono incluse nei riferimenti di assembly COM e .NET e non possono essere modificate.

- **Nome assembly**

   Visualizza il nome dell'assembly per l'assembly di riferimento.

- **Impostazioni cultura**

   Ottiene le impostazioni cultura del riferimento selezionato.

- **Descrizione**

   Ottiene la descrizione del riferimento selezionato.

- **Percorso completo**

   Visualizza il percorso della directory dell'assembly di riferimento.

- **Identità**

   Per gli assembly .NET Framework, viene visualizzato il percorso completo. Per i componenti COM, viene visualizzato il GUID.

- **Etichetta**

   Visualizza l'etichetta del riferimento.

- **Name**

   Visualizza il nome del riferimento.

- **Token di chiave pubblica**

   Visualizza il token di chiave pubblica usato per identificare l'assembly di riferimento.

- **Nome sicuro**

   Impostato su`true` se il riferimento ha un nome sicuro. Un assembly con nome sicuro ha una versione univoca.

- **Version**

   Visualizza la versione dell'assembly di riferimento.

## <a name="see-also"></a>Vedere anche

[Riferimento alla pagina di proprietà progetto C++](reference/property-pages-visual-cpp.md)<br>
[Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](working-with-project-properties.md)