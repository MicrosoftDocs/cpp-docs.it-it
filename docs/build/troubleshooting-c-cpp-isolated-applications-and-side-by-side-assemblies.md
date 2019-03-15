---
title: Risoluzione dei problemi relativi alle applicazioni isolate C/C++ e agli assembly side-by-side
ms.date: 11/04/2016
helpviewer_keywords:
- troubleshooting side-by-side assemblies
- troubleshooting isolated applications
- troubleshooting Visual C++
ms.assetid: 3257257a-1f0b-4ede-8564-9277a7113a35
ms.openlocfilehash: d23662d6dd6d2f241c48e0c83f2fa5ed9532c3f7
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807949"
---
# <a name="troubleshooting-cc-isolated-applications-and-side-by-side-assemblies"></a>Risoluzione dei problemi relativi alle applicazioni isolate C/C++ e agli assembly side-by-side

È possibile che un'applicazione C/C++ non venga caricata se non è possibile trovare le librerie dipendenti. Questo articolo descrive alcuni motivi comuni per cui il caricamento di un'applicazione C/C++ non riesce e suggerisce i passaggi per risolvere i problemi.

Se il caricamento di un'applicazione non riesce perché il manifesto specifica una dipendenza da un assembly side-by-side e l'assembly non è installato come assembly privato nella stessa cartella dell'eseguibile né nell'assembly cache nativa nella cartella %WINDIR%\WinSxS\, può essere visualizzato uno dei seguenti messaggi di errore, a seconda della versione di Windows in cui si cerca di eseguire l'app.

- Applicazione non correttamente inizializzata (0xc0000135).

- Impossibile avviare l'applicazione specificata. La configurazione dell'applicazione non è corretta. Una nuova installazione dell'applicazione potrebbe risolvere il problema.

- Impossibile eseguire il programma specificato.

Se l'applicazione non dispone di alcun manifesto e dipende da una DLL che Windows non riesce a trovare nei normali percorsi di ricerca, può essere visualizzato un messaggio di errore simile al seguente:

- Questa applicazione non è riuscito ad avviare perché *una DLL obbligatoria* non è stato trovato. Una nuova installazione dell'applicazione potrebbe risolvere il problema.

Se l'applicazione viene distribuita in un computer che non dispone di Visual Studio e si arresta in modo anomalo con messaggi di errore simili a quelli precedenti, verificare quanto segue:

1. Seguire i passaggi descritti in [informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). Dependency Walker può indicare la maggior parte delle dipendenze per un'applicazione o DLL. Se si nota che mancano alcune DLL, installarle nel computer in cui si sta cercando di eseguire l'applicazione.

1. Il caricatore del sistema operativo usa il manifesto dell'applicazione per caricare gli assembly da cui dipende l'applicazione. Il manifesto può essere incorporato nel file binario come risorsa o installato come file separato nella cartella dell'applicazione. Per verificare se il manifesto è incorporato nel file binario, aprire il file binario in Visual Studio e cercare RT_MANIFEST nell'elenco di risorse. Se non è possibile trovare un manifesto incorporato, cercare nella cartella dell'applicazione per un file con nome simile a < nome_binario >. \<estensione >. manifest.

1. Se l'applicazione dipende da assembly side-by-side e non è presente un manifesto, è necessario assicurarsi che il linker generi un manifesto per il progetto. Selezionare l'opzione del linker **Genera manifesto** nel **proprietà progetto** finestra di dialogo per il progetto.

1. Se il manifesto è incorporato nel file binario, assicurarsi che l'ID di RT_MANIFEST sia corretto per questo tipo di file binario. Per altre informazioni sull'ID risorsa da usare, vedere [Using Side-by-Side Assemblies come risorsa (Windows)](/windows/desktop/SbsCs/using-side-by-side-assemblies-as-a-resource). Se il manifesto è in un file separato, aprirlo in un editor XML o in un editor di testo. Per altre informazioni sui manifesti e sulle regole di distribuzione, vedere [manifesti](/windows/desktop/sbscs/manifests).

   > [!NOTE]
   > Se sono presenti sia un manifesto incorporato che un file manifesto separato, il caricatore del sistema operativo usa il manifesto incorporato e ignora il file separato. Tuttavia, in Windows XP accade il contrario: viene usato il file manifesto separato e viene ignorato il manifesto incorporato.

1. È consigliabile incorporare un manifesto in ogni DLL perché i manifesti esterni vengono ignorati quando una DLL viene caricata tramite una chiamata a `LoadLibrary`. Per altre informazioni, vedere [manifesti dell'Assembly](/windows/desktop/SbsCs/assembly-manifests).

1. Verificare che tutti gli assembly enumerati nel manifesto siano installati correttamente nel computer. Ogni assembly viene specificato nel manifesto con il nome, il numero di versione e l'architettura del processore. Se l'applicazione dipende da assembly side-by-side, verificare che questi assembly siano installati correttamente nel computer in modo che il caricatore del sistema operativo possa trovarli, come descritto in [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence). Tenere presente che gli assembly a 64 bit non possono essere caricati in processi a 32 bit né essere eseguiti in sistemi operativi a 32 bit.

## <a name="example"></a>Esempio

Si supponga che un'applicazione, appl.exe, che viene compilato con Visual C++. Il manifesto dell'applicazione viene incorporato in appl.exe come risorsa binaria RT_MANIFEST, il cui ID è 1, o archiviato come file separato appl.exe.manifest. Il contenuto di questo manifesto è analogo al seguente:

```
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
  <dependency>
    <dependentAssembly>
      <assemblyIdentity type="win32" name="Fabrikam.SxS.Library" version="2.0.20121.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"></assemblyIdentity>
    </dependentAssembly>
  </dependency>
</assembly>
```

Questo manifesto indica al caricatore del sistema operativo che appl.exe dipende da un assembly denominato Fabrikam.SxS.Library, versione 2.0.20121.0, che è stato compilato per un'architettura del processore x86 a 32 bit. L'assembly side-by-side dipendente può essere installato come assembly condiviso o come assembly privato.

Il manifesto di un assembly condiviso viene installato nella cartella %WINDIR%\WinSxS\Manifests\. Identifica l'assembly ed elenca il contenuto, vale a dire le DLL che fanno parte dell'assembly:

```
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
   <noInheritable/>
   <assemblyIdentity type="win32" name="Fabrikam.SxS.Library" version="2.0.20121.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"/>
   <file name="Fabrikam.Main.dll" hash="3ca5156e8212449db6c622c3d10f37d9adb1ab12" hashalg="SHA1"/>
   <file name="Fabrikam.Helper.dll" hash="92cf8a9bb066aea821d324ca4695c69e55b2d1c2" hashalg="SHA1"/>
</assembly>
```

Inoltre è possono utilizzare gli assembly side-by-side [i file di configurazione server di pubblicazione](/windows/desktop/SbsCs/publisher-configuration-files), noto anche come file di criteri, ovvero per reindirizzare a livello globale le applicazioni e gli assembly a una versione di un assembly side-by-side invece di un'altra versione dello stesso assembly. È possibile controllare i criteri per un assembly condiviso nella cartella %WINDIR%\WinSxS\Policies\. Di seguito è riportato un esempio di file dei criteri.

```
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">

   <assemblyIdentity type="win32-policy" name="policy.2.0.Fabrikam.SxS.Library" version="2.0.20121.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"/>
   <dependency>
      <dependentAssembly>
         <assemblyIdentity type="win32" name="Fabrikam.SxS.Library" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"/>
         <bindingRedirect oldVersion="2.0.10000.0-2.0.20120.99" newVersion="2.0.20121.0"/>
      </dependentAssembly>
   </dependency>
</assembly>
```

Questo file dei criteri specifica che le applicazione o gli assembly che richiedono la versione 2.0.10000.0 di questo assembly devono usare invece la versione 2.0.20121.0, che è la versione corrente installata nel sistema. Se una versione dell'assembly citata nel manifesto dell'applicazione viene specificata nel file dei criteri, il caricatore cerca una versione di questo assembly specificata nel manifesto nella cartella %WINDIR%\WinSxS\ e, se questa versione non è installata, il caricamento non riesce. Se poi la versione dell'assembly 2.0.20121.0 non è installata, il caricamento non riesce per le applicazioni che richiedono la versione dell'assembly 2.0.10000.0.

Tuttavia, l'assembly può anche essere installato come assembly side-by-side privato nella cartella dell'applicazione installata. Se il sistema operativo non riesce a trovare l'assembly come assembly condiviso, lo cerca come assembly privato, nell'ordine seguente:

1. Controllare la cartella dell'applicazione per un file manifesto con il nome \<assemblyName >. manifest. In questo esempio, il caricatore cerca di trovare Fabrikam.SxS.Library.manifest nella cartella che contiene appl.exe. Il caricatore, se trova il manifesto, carica l'assembly dalla cartella dell'applicazione. Se l'assembly non viene trovato, il caricamento non riesce.

1. Provare ad aprire il \\< nomeassembly\>\ della cartella che contiene appl.exe, e, se \\< nomeassembly\>\ esiste, tenta di caricare un file manifesto con il nome \<assemblyName >. da questa cartella del manifesto. Se il manifesto viene trovato, il caricatore carica l'assembly dal \\< nomeassembly\>\ cartella. Se l'assembly non viene trovato, il caricamento non riesce.

Per altre informazioni sul modo in cui il caricatore Cerca gli assembly dipendenti, vedere [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence). Se il caricatore non riesce a trovare un assembly dipendente come assembly privato, il caricamento ha esito negativo e viene visualizzato il messaggio "Impossibile eseguire il programma specificato". Per risolvere questo errore, assicurarsi che gli assembly dipendenti e le DLL che ne fanno parte vengano installati nel computer come assembly privati o condivisi.

## <a name="see-also"></a>Vedere anche

[Concetti di applicazioni isolate e assembly side-by-side](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
