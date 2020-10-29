---
title: 'Procedura: integrare strumenti personalizzati nelle proprietà del progetto'
description: Come integrare strumenti personalizzati nelle proprietà del progetto nei progetti Visual Studio C++.
ms.date: 10/08/2020
helpviewer_keywords:
- 'MSBuild (C++), howto: integrate custom tools'
ms.openlocfilehash: 58626101d54c5b1f9749174e5f3e8938c431d025
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922153"
---
# <a name="how-to-integrate-custom-tools-into-the-project-properties"></a>Procedura: integrare strumenti personalizzati nelle proprietà del progetto

È possibile aggiungere opzioni dello strumento personalizzato alla finestra **pagine delle proprietà** di Visual Studio creando un file XML.

Nella sezione **proprietà di configurazione** della finestra pagine delle **Proprietà** vengono visualizzati i gruppi di impostazioni noti come *regole* . Ogni regola contiene le impostazioni per uno strumento o un gruppo di funzionalità. La regola **Linker** , ad esempio, contiene le impostazioni per lo strumento linker. Le impostazioni in una regola possono essere suddivise in *categorie* .

È possibile creare un file di regole che contiene le proprietà dello strumento personalizzato in modo che le proprietà vengano caricate all'avvio di Visual Studio. Per informazioni su come modificare il file, vedere [estendibilità della piattaforma parte 2](/archive/blogs/vsproject/platform-extensibility-part-2) nel Blog del team di progetto di Visual Studio.

::: moniker range="msvc-140"

La cartella in cui inserire il file delle regole dipende dalle impostazioni locali e dalla versione di Visual Studio in uso. In un prompt dei comandi per gli sviluppatori di Visual Studio 2015 o versione precedente la cartella Rules è *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>`* . Il `<version>` valore è *`v140`* in Visual Studio 2015. `<locale>`È un LCID, ad esempio, `1033` per l'inglese. Si userà un percorso diverso per ogni edizione di Visual Studio installata e per ciascuna lingua. Ad esempio, il percorso predefinito della cartella Rules per Visual Studio 2015 Community Edition in inglese potrebbe essere *`C:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\v140\1033\`* .

::: moniker-end

::: moniker range="msvc-150"

La cartella in cui inserire il file delle regole dipende dalle impostazioni locali e dalla versione di Visual Studio in uso. In un prompt dei comandi per gli sviluppatori di Visual Studio 2017 la cartella Rules è *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\<locale>\`* . `<locale>`È un LCID, ad esempio, `1033` per l'inglese. In un prompt dei comandi per gli sviluppatori di Visual Studio 2015 o versione precedente la cartella Rules è *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>\`* , dove il `<version>` valore è *`v140`* in Visual Studio 2015. Si userà un percorso diverso per ogni edizione di Visual Studio installata e per ciascuna lingua. Ad esempio, il percorso predefinito della cartella Rules per Visual Studio 2017 Community Edition in inglese potrebbe essere *`C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033\`* .

::: moniker-end

::: moniker range=">=msvc-160"

La cartella in cui inserire il file delle regole dipende dalle impostazioni locali e dalla versione di Visual Studio in uso. In un prompt dei comandi per gli sviluppatori di Visual Studio 2019 o versioni successive la cartella Rules è *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\<locale>\`* , dove il `<version>` valore è *`v160`* in Visual Studio 2019. `<locale>`È un LCID, ad esempio, `1033` per l'inglese. In Visual Studio 2017 la cartella Rules è *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\<locale>\`* . In un prompt dei comandi per gli sviluppatori di Visual Studio 2015 o versione precedente la cartella Rules è *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>\`* . Si userà un percorso diverso per ogni edizione di Visual Studio installata e per ciascuna lingua. Ad esempio, il percorso predefinito della cartella Rules per Visual Studio 2019 Community Edition in inglese potrebbe essere *`C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VC\v160\1033\`* .

::: moniker-end

### <a name="to-add-or-change-project-properties"></a>Per aggiungere o modificare proprietà del progetto

1. Nell'editor XML, creare un file XML.

1. Salvare il file nella cartella regole predefinite. Modificare il percorso per la lingua e l'edizione di Visual Studio in uso. Ogni regola nella finestra **Pagine delle proprietà** è rappresentata da un file XML in questa cartella. Assicurarsi che il nome del file sia univoco all'interno della cartella.

1. Copiare il contenuto di un file di regole esistente, ad esempio *`rc.xml`* , chiuderlo senza salvare le modifiche, quindi incollare il contenuto nel nuovo file XML. È possibile copiare qualsiasi file di XML Schema da usare come modello. Sceglierne uno simile allo strumento.

1. Nel nuovo file XML modificare il contenuto in base alle esigenze. Assicurarsi di modificare il **nome della regola** e **Rule. DisplayName** nella parte superiore del file.

1. Salvare le modifiche e chiudere il file.

1. I file XML nella cartella Rules vengono caricati all'avvio di Visual Studio. Per testare il nuovo file, riavviare Visual Studio.

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse su un progetto, quindi scegliere **Proprietà** . Nella finestra **pagine delle proprietà** verificare che sia presente un nuovo nodo con il nome della regola.

## <a name="see-also"></a>Vedere anche

[MSBuild nella riga di comando-C++](msbuild-visual-cpp.md)
