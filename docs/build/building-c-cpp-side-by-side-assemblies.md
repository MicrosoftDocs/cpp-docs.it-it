---
title: Compilazione di assembly side-by-side C/C++
ms.date: 11/04/2016
helpviewer_keywords:
- side-by-side applications [C++]
ms.assetid: 7fa20b16-3737-4f76-a0b5-1dacea19a1e8
ms.openlocfilehash: 6e49ba72a397efb97437a2f7e6d721c782875c48
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493331"
---
# <a name="building-cc-side-by-side-assemblies"></a>Compilazione di assembly side-by-side C/C++

Un [assembly affiancato](/windows/win32/SbsCs/about-side-by-side-assemblies-) è una raccolta di risorse, ovvero un gruppo di dll, classi Windows, server com, librerie dei tipi o interfacce, disponibile per l'utilizzo in fase di esecuzione da parte di un'applicazione. Il vantaggio principale della creazione di un pacchetto di dll negli assembly consiste nel fatto che più versioni degli assembly possono essere utilizzate contemporaneamente da applicazioni ed è possibile servire gli assembly attualmente installati in caso di una versione di aggiornamento.

Un' C++ applicazione può utilizzare una o più dll in diverse parti dell'applicazione. In fase di esecuzione, le dll vengono caricate nel processo principale e viene eseguito il codice richiesto. L'applicazione si basa sul sistema operativo per individuare le dll richieste, comprendere quali altre DLL dipendenti devono essere caricate e quindi caricarle insieme alla DLL richiesta. Nelle versioni dei sistemi operativi Windows precedenti a Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo cerca le DLL dipendenti nella cartella locale dell'applicazione o in un'altra cartella specificata nel percorso di sistema. In Windows XP, Windows Server 2003 e Windows Vista, il caricatore del sistema operativo può anche cercare le DLL dipendenti usando un file [manifesto](/windows/win32/sbscs/manifests) e cercare gli assembly affiancati che contengono queste dll.

Per impostazione predefinita, quando viene compilata una DLL con Visual Studio, un [manifesto dell'applicazione](/windows/win32/SbsCs/application-manifests) viene incorporato come risorsa RT_MANIFEST con ID uguale a 2. Così come per un eseguibile, questo manifesto descrive le dipendenze di questa DLL in altri assembly. In questo modo si presuppone che la DLL non faccia parte di un assembly affiancato e che le applicazioni che dipendono da questa DLL non usino un manifesto dell'applicazione per caricarlo, ma si basano invece sul caricatore del sistema operativo per trovare questa DLL nel percorso di sistema.

> [!NOTE]
> È importante per una DLL che usa un manifesto dell'applicazione per incorporare il manifesto come risorsa con ID uguale a 2. Se la DLL viene caricata dinamicamente in fase di esecuzione (ad esempio, usando la funzione [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw) ), il caricatore del sistema operativo carica gli assembly dipendenti specificati nel manifesto della dll. Un manifesto dell'applicazione esterno per le dll non viene controllato `LoadLibrary` durante una chiamata. Se il manifesto non è incorporato, il caricatore potrebbe tentare di caricare versioni non corrette degli assembly o di trovare gli assembly dipendenti.

Una o più DLL correlate possono essere riassemblate in un assembly affiancato con un [manifesto dell'assembly](/windows/win32/SbsCs/assembly-manifests)corrispondente, che descrive i file che formano l'assembly, nonché la dipendenza dell'assembly su altri assembly affiancati.

> [!NOTE]
> Se un assembly contiene una DLL, è consigliabile incorporare il manifesto dell'assembly in questa DLL come risorsa con ID uguale a 1 e assegnare all'assembly privato lo stesso nome della DLL. Se, ad esempio, il nome della dll è mylibrary. dll, anche il valore dell'attributo Name usato nell' \<elemento > assemblyIdentity del manifesto potrebbe essere MyLibrary. In alcuni casi, quando una libreria ha un'estensione diversa da dll (ad esempio, un progetto di controlli ActiveX MFC crea una libreria ocx), è possibile creare un manifesto dell'assembly esterno. In questo caso, il nome dell'assembly e il relativo manifesto devono essere diversi dal nome della DLL (ad esempio, MyAssembly, MyAssembly. manifest e MyLibrary. ocx). Tuttavia, è comunque consigliabile rinominare tali librerie per avere estensione. dll e incorporare il manifesto come risorsa per ridurre i costi di manutenzione futuri dell'assembly. Per ulteriori informazioni sul modo in cui il sistema operativo cerca gli assembly privati, vedere [sequenza di ricerca degli assembly](/windows/win32/SbsCs/assembly-searching-sequence).

Questa modifica può consentire la distribuzione di DLL corrispondenti come [assembly privato](/windows/win32/Msi/private-assemblies) in una cartella locale dell'applicazione o come [assembly condiviso](/windows/win32/Msi/shared-assemblies) nella assembly cache WinSxS. Per ottenere il comportamento corretto del runtime di questo nuovo assembly, è necessario seguire diversi passaggi. sono descritte in [linee guida per la creazione di assembly affiancati](/windows/win32/SbsCs/guidelines-for-creating-side-by-side-assemblies). Una volta creato correttamente, un assembly può essere distribuito come assembly condiviso o privato insieme a un'applicazione che dipende da esso. Quando si installano assembly affiancati come assembly condiviso, è possibile seguire le linee guida descritte in [installazione di assembly Win32 per la condivisione side-by-side in Windows XP](/windows/win32/Msi/installing-win32-assemblies-for-side-by-side-sharing-on-windows-xp) o utilizzare i [moduli unione](/windows/win32/msi/merge-modules). Quando si installano assembly affiancati come assembly privato, è possibile copiare solo la DLL, le risorse e il manifesto dell'assembly corrispondenti come parte del processo di installazione nella cartella locale dell'applicazione nel computer di destinazione, assicurandosi che l'assembly possa essere trovato dal caricatore in fase di esecuzione (vedere [sequenza di ricerca degli assembly](/windows/win32/SbsCs/assembly-searching-sequence)). Un altro modo consiste nell'utilizzare [Windows Installer](/windows/win32/Msi/windows-installer-portal) e seguire le linee guida descritte in [installazione di assembly Win32 per l'utilizzo privato di un'applicazione in Windows XP](/windows/win32/Msi/installing-win32-assemblies-for-the-private-use-of-an-application-on-windows-xp).

## <a name="see-also"></a>Vedere anche

[Compilazione di applicazioni isolate C/C++](building-c-cpp-isolated-applications.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
