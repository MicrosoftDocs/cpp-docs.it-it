---
title: Utilizzo di librerie e componenti nei progetti C++
ms.date: 12/10/2018
f1_keywords:
- VC.Project.References
helpviewer_keywords:
- Add References Dialog Box (C++)
- .NET Framework (C++), Add References Dialog Box
ms.assetid: 12b8f571-0f21-40b3-9404-5318a57e9cb5
ms.openlocfilehash: 37c0120b7879678ad65dfbbffc17bd6d6791fdfe
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229909"
---
# <a name="consuming-libraries-and-components"></a>Utilizzo di librerie e componenti

Un progetto C++ deve spesso chiamare funzioni o accedere ai dati in un file binario, ad esempio una libreria statica (file con estensione LIB), una DLL, un componente Windows Runtime, un componente COM o un assembly .NET. In questi casi, è necessario configurare il progetto in modo che possa trovare tale file binario in fase di compilazione. I passaggi specifici dipendono dal tipo di progetto, dal tipo di file binario e dal fatto che il file binario venga compilato nella stessa soluzione del progetto.

## <a name="consuming-libraries-downloaded-via-vcpkg"></a>Utilizzo delle librerie scaricate tramite vcpkg

Per utilizzare una libreria scaricata tramite Gestione pacchetti **vcpkg** , è possibile ignorare le istruzioni riportate di seguito. Per altre informazioni [, vedere vcpkg: Gestione pacchetti C++ per Windows, Linux e MacOS](vcpkg.md#integrate-with-visual-studio-windows) .

## <a name="consuming-static-libraries"></a>Utilizzo di librerie statiche

Se il progetto di libreria statica viene compilato nella stessa soluzione:

1. #<a name="include-the-header-files-for-the-static-library-using-quotation-marks-in-a-typical-solution-the-path-will-start-with-library-project-name-intellisense-will-help-you-find-it"></a>includere i file di intestazione per la libreria statica utilizzando le virgolette. In una soluzione tipica il percorso inizierà con `../<library project name>` . IntelliSense ti aiuterà a trovarlo.
2. Aggiungere un riferimento al progetto di libreria statica. Fare clic con il pulsante destro del mouse su **riferimenti** nel nodo progetto applicazione in **Esplora soluzioni** e scegliere **Aggiungi riferimento**.

Se la libreria statica non fa parte della soluzione:

1. Fare clic con il pulsante destro del mouse sul nodo del progetto dell'applicazione in **Esplora soluzioni** , quindi scegliere **Proprietà**.
2. Nella pagina delle proprietà **directory di VC + +** aggiungere il percorso della directory in cui si trova il file con estensione lib nei **percorsi di libreria** e aggiungere il percorso dei file di intestazione della libreria nelle **directory di inclusione**.  
3. Nella pagina delle proprietà di **input del linker >** aggiungere il nome del file con estensione LIB a **dipendenze aggiuntive**.

## <a name="dynamic-link-libraries"></a>Librerie a collegamento dinamico

Se la DLL viene compilata come parte della stessa soluzione dell'applicazione, seguire la stessa procedura di una libreria statica.

Se la DLL non fa parte della soluzione dell'applicazione, sono necessari il file DLL, le intestazioni con prototipi per le funzioni e le classi esportate e un file con estensione LIB che fornisce le informazioni necessarie per il collegamento.

1. Copiare la DLL nella cartella di output del progetto o in un'altra cartella nel percorso di ricerca di Windows standard per le dll. Vedere l' [ordine di ricerca della libreria a collegamento dinamico](/windows/win32/dlls/dynamic-link-library-search-order).
2. Seguire i passaggi 1-3 per le librerie statiche per fornire i percorsi per le intestazioni e il file con estensione LIB.

## <a name="com-objects"></a>oggetti COM

Se l'applicazione C++ nativa deve utilizzare un oggetto COM e l'oggetto è *registrato*, è sufficiente chiamare CoCreateInstance e passare il CLSID dell'oggetto... Il sistema lo troverà nel registro di sistema di Windows e lo caricherà. Un progetto C++/CLI può utilizzare un oggetto COM nello stesso modo oppure aggiungendo un riferimento a esso dall' **aggiunta di riferimenti > elenco com** e utilizzandolo tramite il [Runtime Callable Wrapper](/dotnet/framework/interop/runtime-callable-wrapper).

## <a name="net-assemblies-and-windows-runtime-components"></a>Assembly .NET e componenti Windows Runtime

Nei progetti UWP o C++/CLI si utilizzano assembly .NET o Windows Runtime componenti aggiungendo un *riferimento* all'assembly o al componente. Nel nodo **riferimenti** di un progetto UWP o C++/CLI è possibile visualizzare i riferimenti ai componenti di uso comune. Fare clic con il pulsante destro del mouse sul nodo **riferimenti** in **Esplora soluzioni** per visualizzare **Gestione riferimenti** e individuare i componenti aggiuntivi noti al sistema. Fare clic sul pulsante **Sfoglia** per passare alla cartella in cui si trova un componente personalizzato. Poiché gli assembly .NET e i componenti Windows Runtime contengono informazioni sul tipo predefinite, è possibile visualizzarne i metodi e le classi facendo clic con il pulsante destro del mouse e scegliendo **Visualizza nella Visualizzatore oggetti**.

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

Le proprietà dei riferimenti agli assembly sono disponibili solo per i riferimenti agli assembly .NET Framework nei progetti C++/CLI. Queste proprietà vengono visualizzate solo quando si seleziona un .NET Framework assembly nel riquadro **riferimenti** . Non è possibile modificare le proprietà.

- **Percorso relativo**

   Visualizza il percorso relativo della directory del progetto per l'assembly di riferimento.

### <a name="build-properties"></a>Proprietà di compilazione

Sono disponibili le proprietà seguenti su vari tipi di riferimenti. Esse consentono di specificare la modalità di compilazione con riferimenti.

- **Copia localmente**

   Specifica se copiare automaticamente l'assembly di riferimento nel percorso di destinazione durante una compilazione.

- **Copiare assembly satellite locali (C++/CLI)**

   Specifica se copiare automaticamente gli assembly satellite dell'assembly di riferimento nel percorso di destinazione durante una compilazione. Utilizzato solo se **Copy Local** è **`true`** .

- **Output assembly di riferimento**

   Specifica se l'assembly viene usato nel processo di compilazione. Se **`true`** , l'assembly viene usato nella riga di comando del compilatore durante la compilazione.

### <a name="project-to-project-reference-properties"></a>Proprietà riferimento da progetto a progetto

Le proprietà seguenti definiscono un *riferimento da progetto a progetto* dal progetto selezionato nel riquadro **riferimenti** a un altro progetto nella stessa soluzione. Per ulteriori informazioni, vedere [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

- **Collega dipendenze di libreria**

   Quando questa proprietà è impostata su **True**, il sistema del progetto collega al progetto dipendente i file con estensione LIB generati dal progetto indipendente. In genere, si specificherà l'impostazione **True**.

- **Identificatore di progetto**

   Identifica in modo univoco il progetto indipendente. Il valore della proprietà è un GUID di sistema interno che non può essere modificato.

- **Usa input dipendenze di libreria**

   Quando questa proprietà è impostata su **False**, il sistema del progetto non collegherà al progetto dipendente i file con estensione OBJ generati dal progetto indipendente. Di conseguenza, questo valore disattiva il collegamento incrementale. In genere, si specificherà l'impostazione **False** perché la compilazione dell'applicazione può richiedere lungo tempo se sono presenti numerosi progetti indipendenti.

### <a name="read-only-reference-properties-com--net"></a>Proprietà di riferimento di sola lettura (COM & .NET)

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

- **Label**

   Visualizza l'etichetta del riferimento.

- **Nome**

   Visualizza il nome del riferimento.

- **Token di chiave pubblica**

   Visualizza il token di chiave pubblica usato per identificare l'assembly di riferimento.

- **Nome sicuro**

   **`true`** Se l'assembly a cui si fa riferimento ha un nome sicuro. Un assembly con nome sicuro ha una versione univoca.

- **Version**

   Visualizza la versione dell'assembly di riferimento.

## <a name="see-also"></a>Vedere anche

[Riferimento alla pagina delle proprietà del progetto C++](reference/property-pages-visual-cpp.md)<br>
[Impostare il compilatore e le proprietà di compilazione C++ in Visual Studio](working-with-project-properties.md)
