---
title: Compilazione di assembly side-by-side C/C++
ms.date: 11/04/2016
helpviewer_keywords:
- side-by-side applications [C++]
ms.assetid: 7fa20b16-3737-4f76-a0b5-1dacea19a1e8
ms.openlocfilehash: cf3fb532e70e047938b9a575eefdcceadceeceda
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50476310"
---
# <a name="building-cc-side-by-side-assemblies"></a>Compilazione di assembly side-by-side C/C++

Oggetto [assembly side-by-side](/windows/desktop/SbsCs/about-side-by-side-assemblies-) è una raccolta di risorse, ovvero un gruppo di DLL, classi di windows, server COM, librerie dei tipi o interfacce, disponibile per un'applicazione da usare in fase di esecuzione. Il vantaggio principale di riassemblaggio DLL negli assembly è che più versioni degli assembly sono utilizzabile dalle applicazioni nello stesso momento e che è possibile per gli assembly attualmente installato il servizio in caso di una versione di aggiornamento.

Un'applicazione Visual C++ può utilizzare una o più DLL in diverse parti dell'applicazione. In fase di esecuzione, le DLL vengono caricate nel processo principale e viene eseguito il codice richiesto. L'applicazione si basa sul sistema operativo per individuare le DLL necessarie, conoscere quali altre DLL dipendenti devono essere caricati e quindi caricarli contestualmente alla DLL richiesta. Nelle versioni di sistemi operativi Windows precedenti a Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo cerca DLL dipendente nella cartella locale dell'applicazione o un'altra cartella specificata nel percorso di sistema. In Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo può anche cercare le DLL dipendenti utilizzando un [manifesto](https://msdn.microsoft.com/library/windows/desktop/aa375365) file e cercare gli assembly side-by-side che contengono queste DLL.

Per impostazione predefinita, quando una DLL è compilata con Visual Studio, ha un [manifesto dell'applicazione](/windows/desktop/SbsCs/application-manifests) incorporato come una risorsa di tipo RT_MANIFEST con ID uguale a 2. Come per un file eseguibile, questo manifesto descrive le dipendenze di questa DLL da altri assembly. Ciò presuppone che la DLL non fa parte di un assembly side-by-side e le applicazioni che dipendono da questa DLL non prevede di usare un manifesto dell'applicazione per caricarlo, ma si basano invece sullo caricatore del sistema operativo per trovare questa DLL nel percorso di sistema.

> [!NOTE]
> È importante per una DLL che utilizza un manifesto dell'applicazione per il manifesto incorporato come risorsa con ID uguale a 2. Se la DLL viene caricata in modo dinamico in fase di esecuzione (ad esempio, usando il [LoadLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibrarya) (funzione)), il caricatore del sistema operativo carica gli assembly dipendenti specificati nel file manifesto della DLL. Un manifesto dell'applicazione esterna per le DLL non viene verificato durante un `LoadLibrary` chiamare. Se il manifesto non è incorporato, il caricatore potrebbe tentare di caricare versioni errate di assembly o non riescono a ricerca per trovare gli assembly dipendenti.

Una o più correlate le DLL possono essere convertite in un assembly side-by-side con una corrispondente [manifesto dell'assembly](/windows/desktop/SbsCs/assembly-manifests), che descrive i file che compongono l'assembly, nonché la dipendenza dell'assembly in altre side-by-side assembly.

> [!NOTE]
> Se un assembly contiene una DLL, è consigliabile incorporare il manifesto dell'assembly in questa DLL come risorsa con ID uguale a 1, e assegnare all'assembly privato lo stesso nome della DLL. Ad esempio, se il nome della DLL è MyLibrary. dll, il valore dell'attributo del nome utilizzato nel \<assemblyIdentity > elemento del manifesto potrebbe essere mylibrary. In alcuni casi, se una libreria include un'estensione diversa da. dll (ad esempio, un progetto di controlli ActiveX MFC crea una libreria di OCX) è possibile creare un manifesto dell'assembly esterno. In questo caso, il nome dell'assembly e il relativo manifesto deve essere diverso dal nome della DLL (ad esempio, MyAssembly, MyAssembly. manifest e MyLibrary). Tuttavia è comunque consigliabile rinominare tali librerie affinché presentino e incorporare il manifesto come una risorsa per ridurre i costi di manutenzione future di questo assembly. Per altre informazioni sul modo in cui il sistema operativo cerca gli assembly privati, vedere [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence).

Questa modifica potrebbe consentire la distribuzione di DLL corrispondente come un [assembly privato](/windows/desktop/Msi/private-assemblies) in una cartella locale dell'applicazione o come una [assembly condivisi](/windows/desktop/Msi/shared-assemblies) nella cache di assembly WinSxS. Alcuni passaggi devono essere seguite per ottenere un comportamento di runtime corretto di questo nuovo assembly. vengono descritti [linee guida per gli assembly Side-by-side di creazione](/windows/desktop/SbsCs/guidelines-for-creating-side-by-side-assemblies). Dopo aver creato correttamente un assembly può distribuito come assembly condiviso o privato assembly insieme a un'applicazione che dipende da esso. Quando si installa gli assembly side-by-side come assembly condiviso, è possibile seguire le indicazioni fornite in [installazione di assembly di Win32 per condivisione Side-by-Side in Windows XP](/windows/desktop/Msi/installing-win32-assemblies-for-side-by-side-sharing-on-windows-xp) oppure usare [moduliunione](https://msdn.microsoft.com/library/windows/desktop/aa369820). Quando si installa gli assembly side-by-side come assembly privato, è sufficiente copiare il manifesto corrispondente DLL, risorse e all'assembly come parte del processo di installazione nella cartella locale dell'applicazione nel computer di destinazione, assicurandosi che l'assembly può essere trovata dal caricatore in fase di esecuzione (vedere [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence)). Un altro modo consiste nell'usare [Windows Installer](/windows/desktop/Msi/windows-installer-portal) e seguire le linee guida indicate nella [installando gli assembly di Win32 per l'uso privato di un'applicazione in Windows XP](/windows/desktop/Msi/installing-win32-assemblies-for-the-private-use-of-an-application-on-windows-xp).

## <a name="see-also"></a>Vedere anche

[Esempi di distribuzione](../ide/deployment-examples.md)<br/>
[Compilazione di applicazioni isolate C/C++](../build/building-c-cpp-isolated-applications.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)