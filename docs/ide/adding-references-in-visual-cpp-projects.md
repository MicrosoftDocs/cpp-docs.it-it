---
title: "Aggiunta di riferimenti nei progetti Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.References"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".NET Framework (C++), finestra di dialogo Aggiungi riferimenti"
  - "Aggiungi riferimenti (finestra di dialogo) (C++)"
ms.assetid: 12b8f571-0f21-40b3-9404-5318a57e9cb5
caps.latest.revision: 32
caps.handback.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di riferimenti nei progetti Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È molto comune per i programmi chiamare nelle API in altri file binari, ad esempio DLL, i componenti Windows Runtime, gli SDK di estensione, i componenti COM e gli assembly .NET. Il modo in cui il programma rileva questi altri file binari dipende dal tipo di progetto e dal tipo del file binario.  
  
 In un progetto C\+\+ nativo, se si usa una DLL nativa o un componente COM che non viene generato da un altro progetto nella soluzione, si usa LoadLibrary o CoCreateInstance per specificare il percorso del file binario o, in caso contrario, lasciare che il sistema lo trovi cercando in posizioni specifiche ben definite.  
  
 In altri tipi di progetti, ad esempio progetti UWP o progetti C\+\+\/CLI, oppure quando il file binario viene generato da un altro progetto nella soluzione, si aggiunge un *riferimento* all'assembly, componente o progetto.   Un riferimento è essenzialmente un set di dati che consente al programma di trovare e comunicare con il file binario.       Quando si aggiunge un riferimento, Visual Studio gestisce i dettagli di basso livello. Per impostare i riferimenti da un progetto C\+\+ ad assembly [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] \(solo C\+\+\/CLI\), componenti COM, altri progetti inclusi nella soluzione, tra cui i progetti condivisi o connessi, fare clic con il pulsante destro del mouse sul nodo **Riferimenti** in **Esplora soluzioni** per visualizzare **Gestione riferimenti**. Ciò che viene visualizzato in Gestione riferimenti varia a seconda del tipo di progetto.  
  
 In un progetto C\+\+ nativo \(ATL\) il concetto di *riferimenti* si applica solo agli altri progetti nella soluzione, inclusi progetti condivisi, in modo che non venga visualizzato altro in **Gestione riferimenti**:  
  
 ![Gestione riferimenti di Visual C&#43;&#43; &#40;progetti ATL&#41;](../Image/Visual%20C++%20Reference%20Manager%20\(ATL%20Projects\).png "Visual C\+\+ Reference Manager \(ATL Projects\)")  
  
 In un progetto C\+\+\/CLI o di Piattaforma UWP \(Universal Windows Platform\), il concetto di riferimenti si applica a più tipi di file binari oltre ad altri progetti nella soluzione.  Questi sono tutti esposti in **Gestione riferimenti**:  
  
 ![Gestione riferimenti di Visual C&#43;&#43; per progetti C&#43;&#43;&#47;CLI](../Image/Visual%20C++%20Reference%20Manager%20for%20C++/CLI%20projects.png "Visual C\+\+ Reference Manager for C\+\+\/CLI projects")  
  
## Proprietà riferimento  
 Ogni tipo di riferimento ha delle proprietà. È possibile visualizzare le proprietà selezionando il riferimento in Esplora soluzioni e premendo **Alt \+ Invio**, oppure facendo clic con il pulsante destro del mouse e scegliendo **Proprietà**. Alcune proprietà sono di sola lettura e alcune possono essere modificate. Tuttavia, in genere non è necessario modificare manualmente queste proprietà.  
  
### Proprietà dei riferimenti ActiveX  
 Le proprietà dei riferimenti ActiveX sono disponibili solo per i riferimenti ai componenti COM. Queste proprietà vengono visualizzate solo quando è selezionato un componente COM nel riquadro **Riferimenti**. Non è possibile modificare le proprietà.  
  
 **Percorso completo controllo**  
 Visualizza il percorso della directory del controllo a cui si fa riferimento.  
  
 **GUID controllo**  
 Visualizza il GUID del controllo ActiveX.  
  
 **Versione controllo**  
 Visualizza la versione del controllo ActiveX a cui si fa riferimento.  
  
 **Nome libreria dei tipi**  
 Visualizza il nome della libreria dei tipi di riferimento.  
  
 **Strumento Wrapper**  
 Visualizza lo strumento usato per compilare l'assembly di interoperabilità dalla libreria COM a cui fa riferimento o dal controllo ActiveX.  
  
### Proprietà riferimento ad assembly  
 Le proprietà dei riferimenti degli assembly sono disponibili solo per i riferimenti agli assembly [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] in progetti C\+\+\/CLI. Queste proprietà vengono visualizzate solo quando è selezionato un assembly [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] nel riquadro **Riferimenti**. Non è possibile modificare le proprietà.  
  
 **Percorso relativo**  
 Visualizza il percorso relativo della directory del progetto per l'assembly di riferimento.  
  
### Proprietà di compilazione  
 Sono disponibili le proprietà seguenti su vari tipi di riferimenti. Esse consentono di specificare la modalità di compilazione con riferimenti.  
  
 **Copia localmente**  
 Specifica se copiare automaticamente l'assembly di riferimento nel percorso di destinazione durante una compilazione.  
  
 **Copia assembly satellite locale**  
 Specifica se copiare automaticamente gli assembly satellite dell'assembly di riferimento nel percorso di destinazione durante una compilazione. Usato solo se **Copia localmente** è impostato su `true`.  
  
 **Output assembly di riferimento**  
 Specifica se l'assembly viene usato nel processo di compilazione. Se impostato su `true`, l'assembly verrà usato nella riga di comando del compilatore durante la compilazione.  
  
### Proprietà riferimento da progetto a progetto  
 Le proprietà seguenti definiscono un *riferimento da progetto a progetto* dal progetto selezionato nel riquadro **Riferimenti** a un altro progetto nella stessa soluzione. Per altre informazioni, vedere [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md).  
  
 **Collega dipendenze di libreria**  
 Quando questa proprietà è impostata su **True**, il sistema del progetto collega al progetto dipendente i file con estensione LIB generati dal progetto indipendente. In genere, si specificherà l'impostazione **True**.  
  
 **Identificatore di progetto**  
 Identifica in modo univoco il progetto indipendente. Il valore della proprietà è un GUID di sistema interno che non può essere modificato.  
  
 **Usa input dipendenze di libreria**  
 Quando questa proprietà è impostata su **False**, il sistema del progetto non collegherà al progetto dipendente i file con estensione OBJ generati dal progetto indipendente. Di conseguenza, questo valore disattiva il collegamento incrementale. In genere, si specificherà l'impostazione **False** perché la compilazione dell'applicazione può richiedere lungo tempo se sono presenti numerosi progetti indipendenti.  
  
### Proprietà riferimento  
 Le proprietà seguenti sono incluse nei riferimenti di assembly COM e .NET e non possono essere modificate.  
  
 **Nome assembly**  
 Visualizza il nome dell'assembly per l'assembly di riferimento.  
  
 **Impostazioni cultura**  
 Ottiene le impostazioni cultura del riferimento selezionato.  
  
 **Descrizione**  
 Ottiene la descrizione del riferimento selezionato.  
  
 **Percorso completo**  
 Visualizza il percorso della directory dell'assembly di riferimento.  
  
 **Identità**  
 Per gli assembly [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)], viene visualizzato il percorso completo. Per i componenti COM, viene visualizzato il GUID.  
  
 **Etichetta**  
 Visualizza l'etichetta del riferimento.  
  
 **Nome**  
 Visualizza il nome del riferimento.  
  
 **Token di chiave pubblica**  
 Visualizza il token di chiave pubblica usato per identificare l'assembly di riferimento.  
  
 **Nome sicuro**  
 Impostato su `true` se il riferimento ha un nome sicuro. Un assembly con nome sicuro ha una versione univoca.  
  
 **Versione**  
 Visualizza la versione dell'assembly di riferimento.  
  
## Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)   
 [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md)