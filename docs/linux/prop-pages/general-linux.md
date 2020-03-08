---
title: Proprietà generali (progetto C++ Linux)
description: Descrive le proprietà del progetto Linux che è possibile impostare in Visual Studio nella pagina delle proprietà generale.
ms.date: 01/14/2020
ms.assetid: 56c800a9-3df9-4196-87b2-81adb00e4767
ms.openlocfilehash: d6a69d9fd3091c885ebd708cbc4598533d2922b4
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78883980"
---
# <a name="general-properties-linux-c"></a>Proprietà generali (Linux C++)

::: moniker range="vs-2015"

Il supporto per Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Proprietà | Descrizione | Opzioni
--- | ---| ---
Directory di output | Specifica un percorso relativo della directory del file di output. Può includere variabili di ambiente.
Directory intermedia | Specifica un percorso relativo alla directory di file intermedia. Può includere variabili di ambiente.
Nome destinazione | Specifica il nome del file generato dal progetto.
Estensione di destinazione | Specifica l'estensione di file, ad esempio `.a`, generata dal progetto.
Estensioni da eliminare durante la pulitura | Specifica con caratteri jolly delimitati da punto e virgola per i file nella directory intermedia da eliminare durante la pulitura o la ricompilazione.
File di log di compilazione | Specifica il file del log di compilazione in cui scrivere quando è abilitata la funzione di log di compilazione.
Set di strumenti della piattaforma | Specifica il set di strumenti usato per compilare la configurazione corrente. Se non è impostato, viene usato il set di strumenti predefinito.
Computer di compilazione remota | Visualizza il computer o il dispositivo di destinazione da usare per la compilazione, la distribuzione e il debug remoti. È possibile aggiungere o modificare una connessione computer di destinazione tramite **strumenti** > **Opzioni** > **gestione connessione** **multipiattaforma** > . **Visual Studio 2019 versione 16,1** È possibile specificare un computer diverso per il debug nella pagina [debug](debugging-linux.md) .
Directory radice di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo.
Directory del progetto di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo per il progetto.
Directory di distribuzione remota | **Visual Studio 2019 versione 16,1** Specifica il percorso della directory nel computer remoto o nel dispositivo per distribuire il progetto.
Directory di inclusione copia remota | **Visual Studio 2019 versione 16,5**  Elenco di directory da copiare in modo ricorsivo dalla destinazione Linux. Questa proprietà influisca sulla copia dell'intestazione remota per IntelliSense, ma non sulla compilazione. Può essere usato quando **IntelliSense usa i valori predefiniti del compilatore** è impostato su false. Usare **directory di inclusione aggiuntive** nella schedaC++ C/generale per specificare directory di inclusione aggiuntive da usare sia per IntelliSense che per la compilazione.
Directory di esclusione copia remota | **Visual Studio 2019 versione 16,5** Elenco di directory da *non* copiare dalla destinazione Linux. Questa proprietà viene in genere usata per rimuovere le sottodirectory delle directory di inclusione.
IntelliSense usa le impostazioni predefinite del compilatore | **Visual Studio 2019 versione 16,5** Indica se eseguire una query sul compilatore a cui fa riferimento il progetto per l'elenco predefinito dei percorsi di inclusione. Questi percorsi vengono aggiunti automaticamente all'elenco di directory remote da copiare. Impostare questa proprietà su false solo se il compilatore non supporta i parametri simili a GCC. Entrambi i compilatori GCC e clang supportano le query per le directory di inclusione, ad esempio `g++ -x c++ -E -v -std=c++11`.
Tipo configurazione | Specifica il tipo di output generato da questa configurazione. | **Libreria dinamica (. so)**<br/>**Libreria statica (. a)**<br/>**Applicazione (. out)**<br/>**Makefile**
Uso di STL | Specifica la libreria standard C++ da usare per questa configurazione. | **Libreria C++ standard GNU condivisa**<br/>**Libreria C++ standard GNU statica (-static)**

::: moniker-end
