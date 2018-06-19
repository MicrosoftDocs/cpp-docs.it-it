---
title: Compilazione di assembly C/C++ Side-by-side | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- side-by-side applications [C++]
ms.assetid: 7fa20b16-3737-4f76-a0b5-1dacea19a1e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a45062af5648c7b3565d959fd1d2dce13aeca4b3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32364021"
---
# <a name="building-cc-side-by-side-assemblies"></a>Compilazione di assembly side-by-side C/C++
Oggetto [assembly side-by-side](http://msdn.microsoft.com/library/windows/desktop/ff951640) è una raccolta di risorse, ovvero un gruppo di DLL, classi windows, server COM, librerie dei tipi o interfacce, disponibile per un'applicazione può utilizzare in fase di esecuzione. Il vantaggio principale di creazione di un nuovo assembly DLL si più versioni di assembly possono essere utilizzate dalle applicazioni nello stesso momento che è possibile per gli assembly attualmente installato servizio in caso di una versione di aggiornamento.  
  
 Un'applicazione Visual C++ può utilizzare uno o più DLL in diverse parti dell'applicazione. In fase di esecuzione, le DLL vengono caricate nel processo principale e viene eseguito il codice richiesto. L'applicazione si basa sul sistema operativo per individuare le DLL necessarie, comprendere quali altre DLL dipendenti devono essere caricati e quindi caricarli insieme alla DLL necessaria. Nelle versioni di sistemi operativi Windows precedenti a Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo cerca DLL dipendenti nella cartella locale dell'applicazione o un'altra cartella specificata nel percorso di sistema. In Windows XP, Windows Server 2003 e Windows Vista, è inoltre possibile cercare il caricatore del sistema operativo per le DLL dipendenti utilizzando un [manifesto](http://msdn.microsoft.com/library/windows/desktop/aa375365) file e gli assembly side-by-side che contengono queste DLL.  
  
 Per impostazione predefinita, quando una DLL viene compilata con Visual Studio, ha un [manifesto dell'applicazione](http://msdn.microsoft.com/library/windows/desktop/aa374191) incorporato come risorsa RT_MANIFEST con ID uguale a 2. Come per un file eseguibile, il manifesto descrive le dipendenze di questa DLL da altri assembly. Ciò presuppone che la DLL non è parte di un assembly side-by-side e le applicazioni che dipendono da questa DLL non intende utilizzare un manifesto dell'applicazione per caricare, ma si basano invece sulle caricatore del sistema operativo per individuare il file DLL nel percorso di sistema.  
  
> [!NOTE]
>  È importante per una DLL che utilizza un manifesto dell'applicazione per il manifesto incorporato come risorsa con ID uguale a 2. Se la DLL viene caricata in modo dinamico in fase di esecuzione (ad esempio, usando il [LoadLibrary](http://msdn.microsoft.com/library/windows/desktop/ms684175) funzione), il caricatore del sistema operativo carica gli assembly dipendenti specificati nel manifesto della DLL. Un manifesto dell'applicazione esterna per le DLL non è stata selezionata durante un `LoadLibrary` chiamare. Se il manifesto non è incorporato, il caricatore può tentare di caricare corrette versioni degli assembly o non riuscire a ricerca per trovare gli assembly dipendenti.  
  
 Una o più correlate DLL possono essere convertite in un assembly side-by-side con un corrispondente [manifesto dell'assembly](http://msdn.microsoft.com/library/windows/desktop/aa374219), che descrive i file che compongono l'assembly, nonché la dipendenza di assembly su altri side-by-side assembly.  
  
> [!NOTE]
>  Se un assembly contiene una DLL, è consigliabile incorporare il manifesto dell'assembly DLL come risorsa con ID uguale a 1, e assegnare all'assembly privato lo stesso nome della DLL. Ad esempio, se il nome della DLL è mylibrary.dll, il valore dell'attributo del nome utilizzato nella \<assemblyIdentity > elemento del manifesto potrebbe essere mylibrary. In alcuni casi, quando una libreria presenta un'estensione diversa da. dll (ad esempio, un progetto di controlli ActiveX MFC crea una libreria ocx) è possibile creare un manifesto dell'assembly esterno. In questo caso, il nome dell'assembly e il relativo manifesto deve essere diverso dal nome della DLL (ad esempio, MyAssembly, MyAssembly. manifest e MyLibrary). Tuttavia è comunque consigliabile rinominare tali librerie presentino per incorporare il manifesto come risorsa per ridurre i costi di manutenzione future di questo assembly. Per ulteriori informazioni sulle modalità di ricerca degli assembly privati del sistema operativo, vedere [Assembly Searching Sequence](http://msdn.microsoft.com/library/windows/desktop/aa374224).  
  
 Questa modifica potrebbe consentire la distribuzione di DLL corrispondenti come un [assembly privato](http://msdn.microsoft.com/library/windows/desktop/aa370850) in una cartella locale dell'applicazione o come un [assembly condiviso](http://msdn.microsoft.com/library/windows/desktop/aa371839) nella WinSxS assembly cache. Debbano di diversi passaggi da seguire per ottenere un comportamento di runtime corretto di questo nuovo assembly. vengono descritte [linee guida per gli assembly Side-by-side di creazione](http://msdn.microsoft.com/library/windows/desktop/aa375155). Dopo che un assembly sia stato creato correttamente può distribuito come condiviso o privato assembly insieme a un'applicazione che dipende da esso. Quando si installa l'assembly side-by-side come assembly condiviso, è possibile seguire le indicazioni fornite in [l'installazione di assembly di Win32 per condivisione Side-by-Side in Windows XP](http://msdn.microsoft.com/library/windows/desktop/aa369532) o utilizzare [moduliunione](http://msdn.microsoft.com/library/windows/desktop/aa369820). Quando si installa l'assembly side-by-side come assembly privato, è sufficiente copiare corrispondente DLL e le risorse e assembly manifesto come parte del processo di installazione nella cartella locale dell'applicazione nel computer di destinazione, assicurandosi che l'assembly può essere trovare il caricatore in fase di esecuzione (vedere [Assembly Searching Sequence](http://msdn.microsoft.com/library/windows/desktop/aa374224)). È inoltre possibile utilizzare [Windows Installer](http://msdn.microsoft.com/library/windows/desktop/cc185688) e seguire le linee guida indicate [l'installazione di assembly Win32 per l'utilizzo privato di un'applicazione in Windows XP](http://msdn.microsoft.com/library/windows/desktop/aa369534).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)   
 [Compilazione di C/C++ di applicazioni isolate](../build/building-c-cpp-isolated-applications.md)   
 [Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)