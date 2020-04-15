---
title: Proprietà di base (progetto Linux C
description: Vengono descritte le proprietà del progetto Linux che è possibile impostare in Visual Studio nella pagina delle proprietà Generale.Describes the Linux project properties you can set in Visual Studio on the General properties page.
ms.date: 01/14/2020
ms.assetid: 56c800a9-3df9-4196-87b2-81adb00e4767
ms.openlocfilehash: 832f10ca2c95e40ff7ece23462105fa49014aa5d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "79446160"
---
# <a name="general-properties-linux-c"></a>Proprietà di base (Linux c'è)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Directory di output | Specifica un percorso relativo alla directory del file di output. Può includere variabili di ambiente. |
| Directory intermedia | Specifica un percorso relativo alla directory di file intermedia. Può includere variabili di ambiente. |
| Nome destinazione | Specifica il nome file generato dal progetto. |
| Estensione di destinazione | Specifica l'estensione del file `.a`(ad esempio, ) generata dal progetto. |
| Estensioni da eliminare durante la pulitura | Specifica dei caratteri jolly delimitata da punti e virgola per cui i file nella directory intermedia devono essere eliminati in modalità pulita o ricompilazione. |
| File del log di compilazione | Specifica il file del log di compilazione in cui scrivere quando è abilitata la funzione di log di compilazione. |
| Set di strumenti della piattaforma | Specifica il set di strumenti utilizzato per compilare la configurazione corrente. Se non è impostato, viene utilizzato il set di strumenti predefinito. |
| Computer di compilazione remota | Visualizza il computer o il dispositivo di destinazione da utilizzare per la compilazione remota, la distribuzione e il debug. È possibile aggiungere o modificare una **Tools** > connessione del computer di destinazione utilizzando**Strumenti Opzioni di** > **Gestione connessione****multipiattaforma** > .<br /> **Visual Studio 2019 versione 16.1** È possibile specificare un computer diverso per il debug nella pagina [Debug.You](debugging-linux.md) can specify a different machine for debugging on the Debugging page. |
| Directory radice di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo. |
| Directory del progetto di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo per il progetto. |
| Directory di distribuzione remota | **Visual Studio 2019 versione 16.1** Specifica il percorso della directory nel computer remoto o nel dispositivo per distribuire il progetto. |
| Directory di inclusione della copia remota | **Visual Studio 2019 versione 16.5**  Un elenco di directory da copiare in modo ricorsivo dalla destinazione Linux. Questa proprietà influisce sulla copia dell'intestazione remota per IntelliSense, ma non per la compilazione. E può essere utilizzato quando **IntelliSense usa le impostazioni predefinite del compilatore** è impostato su false. Utilizzare le directory di **inclusione aggiuntive** nella scheda Generale di C/Cè per specificare directory di inclusione aggiuntive da utilizzare sia per IntelliSense che per la compilazione. |
| Directory di esclusione della copia remota | **Visual Studio 2019 versione 16.5** Un elenco di directory *da non* copiare dalla destinazione Linux. In genere, questa proprietà viene utilizzata per rimuovere le sottodirectory delle directory di inclusione. |
| IntelliSense usa le impostazioni predefinite del compilatore | **Visual Studio 2019 versione 16.5** Se eseguire una query sul compilatore a cui fa riferimento questo progetto per il relativo elenco predefinito di percorsi di inclusione. Questi percorsi vengono aggiunti automaticamente all'elenco delle directory remote da copiare. Impostare questa proprietà su false solo se il compilatore non supporta parametri di tipo gcc. Entrambi i compilatori gcc e clang supportano `g++ -x c++ -E -v -std=c++11`le query per le directory di inclusione ( ad esempio, ). |
| Tipo configurazione | Specifica il tipo di output generato da questa configurazione. | **Libreria dinamica (.so)**<br/><br/>**Libreria statica (.a)**<br/><br/>**Applicazione (.out)**<br/><br/>**Makefile** |
| Uso di STL | Specifica la libreria standard C++ da usare per questa configurazione. | **Libreria C++ standard GNU condivisa**<br/><br/>**Libreria C++ standard GNU statica (-static)** |

::: moniker-end
