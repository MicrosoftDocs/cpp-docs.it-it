---
title: "Compilazione di assembly side-by-side C/C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni side-by-side [C++]"
ms.assetid: 7fa20b16-3737-4f76-a0b5-1dacea19a1e8
caps.latest.revision: 18
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compilazione di assembly side-by-side C/C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un [assembly side\-by\-side](_win32_side_by_side_assemblies) è una raccolta di risorse, ad esempio un gruppo di DLL, classi di finestre, server COM, librerie di tipi o interfacce, che un'applicazione può utilizzare in fase di esecuzione.  Il vantaggio principale derivante dal reinserimento in package delle DLL in assembly consiste nel fatto che le applicazioni possono utilizzare più versioni di assembly contemporaneamente e che è possibile eseguire la manutenzione di assembly correntemente installati nel caso in cui si rendesse disponibile una versione di aggiornamento.  
  
 Un'applicazione Visual C\+\+ può utilizzare una o più DLL in parti diverse dell'applicazione.  In fase di esecuzione le DLL verranno caricate nel processo principale e verrà eseguito il codice necessario.  L'applicazione si basa sul sistema operativo per localizzare le DLL necessarie, individuare quali altre DLL dipendenti devono essere caricate e in seguito caricarle insieme alla DLL necessaria.  Nelle versioni dei sistemi operativi Windows precedenti a Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo esegue la ricerca delle DLL dipendenti nella cartella locale dell'applicazione o in un'altra cartella specificata nel percorso di sistema.  In Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo può anche cercare le DLL dipendenti utilizzando un file [manifesto](http://msdn.microsoft.com/library/aa375365) e gli assembly side\-by\-side che contengono queste DLL.  
  
 Per impostazione predefinita, quando una DLL viene compilata con Visual Studio, dispone di un [manifesto dell'applicazione](http://msdn.microsoft.com/library/aa374191) incorporato come risorsa RT\_MANIFEST con ID uguale a 2.  Analogamente a un eseguibile, questo manifesto descrive le dipendenze di questa DLL da altri assembly.  Questa condizione presuppone che la DLL non faccia parte di un assembly side\-by\-side e che le applicazioni che dipendono da questa DLL non utilizzeranno un manifesto dell'applicazione per caricarla, ma si baseranno sul caricatore del sistema operativo per trovare questa DLL nel percorso di sistema.  
  
> [!NOTE]
>  Per una DLL che utilizza un manifesto dell'applicazione, è importante che il manifesto sia incorporato come risorsa con ID uguale a 2.  Se la DLL viene caricata in modo dinamico in fase di esecuzione, ad esempio utilizzando la funzione [LoadLibrary](http://msdn.microsoft.com/library/windows/desktop/ms684175)\), il caricatore del sistema operativo carica gli assembly dipendenti specificati nel manifesto della DLL.  Durante una chiamata `LoadLibrary` non viene eseguito il controllo di un manifesto dell'applicazione esterno per le DLL.  Se il manifesto non è incorporato, il caricatore potrebbe tentare di caricare versioni non corrette degli assembly oppure non essere in grado di trovare gli assembly dipendenti.  
  
 È possibile reinserire in package una o più DLL correlate in un assembly side\-by\-side con un [manifesto dell'assembly](http://msdn.microsoft.com/library/aa374219) corrispondente, che indica i file che compongono l'assembly e la dipendenza dell'assembly da altri assembly side\-by\-side.  
  
> [!NOTE]
>  Se un assembly contiene una DLL, è opportuno incorporare il manifesto dell'assembly in questa DLL come risorsa con ID uguale a 1 e assegnare all'assembly privato lo stesso nome della DLL.  Se, ad esempio, il nome della DLL è mylibrary.dll, anche il valore dell'attributo del nome utilizzato nell'elemento \<assemblyIdentity\> del manifesto potrebbe essere mylibrary.  In alcuni casi, quando una libreria presenta un'estensione diversa da dll \(in un progetto di controlli ActiveX MFC, ad esempio, viene creata una libreria con estensione ocx\), è possibile creare un manifesto dell'assembly esterno.  In questo caso, il nome dell'assembly e del relativo manifesto deve essere diverso dal nome della DLL \(ad esempio MyAssembly, MyAssembly.manifest e mylibrary.ocx\).  È tuttavia consigliabile rinominare tali librerie affinché presentino l'estensione dll e incorporare il manifesto come risorsa per ridurre i futuri costi di manutenzione dell'assembly.  Per ulteriori informazioni sulle modalità di ricerca di assembly privati da parte del sistema operativo, vedere [Assembly Searching Sequence](http://msdn.microsoft.com/library/aa374224).  
  
 Questa modifica potrebbe consentire la distribuzione di DLL corrispondenti come [assembly privati](_win32_private_assemblies) nella cartella locale di un'applicazione o come [assembly condivisi](https://msdn.microsoft.com/en-us/library/aa375996.aspx) nella WinSxS Assembly Cache.  I passaggi necessari per ottenere un corretto comportamento in fase di esecuzione di questo nuovo assembly sono illustrati in [Linee guida per la creazione di assembly side\-by\-side](http://msdn.microsoft.com/library/aa375155).  Dopo essere stato correttamente modificato, un assembly potrà essere distribuito come assembly condiviso o privato insieme a un'applicazione che dipende da esso.  Quando si installano assembly side\-by\-side come assembly condivisi, è possibile seguire le linee guida delineate in [Installazione di assembly Win32 per condivisione side\-by\-side su Windows XP](http://msdn.microsoft.com/library/aa369532) oppure utilizzare [modelli unione](http://msdn.microsoft.com/library/aa369820).  Per l'installazione di assembly side\-by\-side come assembly privati, è sufficiente copiare la DLL corrispondente, le risorse e il manifesto dell'assembly nel corso del processo di installazione nella cartella locale dell'applicazione nel computer di destinazione, assicurandosi che il caricatore sia in grado di individuare tale assembly in fase di esecuzione \(vedere [Assembly Searching Sequence](http://msdn.microsoft.com/library/aa374224)\).  Un'altra modalità è utilizzare [Windows Installer](http://msdn.microsoft.com/library/cc185688) e seguire le linee guida delineate in [Installazione di assembly Win32 per l'utilizzo privato di un'applicazione su Windows XP](http://msdn.microsoft.com/library/aa369534).  
  
## Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)   
 [Compilazione di applicazioni isolate C\/C\+\+](../build/building-c-cpp-isolated-applications.md)   
 [Compilazione di applicazioni isolate C\/C\+\+ e di assembly side\-by\-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)