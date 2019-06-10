---
title: Modifiche al sistema di compilazione in Visual Studio 2010
ms.date: 11/04/2016
f1_keywords:
- vc.msbuild.changes
helpviewer_keywords:
- Build system changes, project file (.vcxprog)
- Build system changes, custom build rules
- Build system changes, MSBuild
- MSBuild, build system changes
- Build system changes, .vsprops
- Build system changes, $(Inherit)
- Build system changes, $(NoInherit)
ms.assetid: e564d95f-a6cc-4d97-b57e-1a71daf66f4a
ms.openlocfilehash: c3e51aa7e5a4346137e94191b551b0d53452e460
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65449003"
---
# <a name="build-system-changes"></a>Modifiche al sistema di compilazione

Il sistema MSBuild è usato per compilare progetti Visual Studio C++. Tuttavia, in Visual Studio 2008 e le versioni precedenti, il sistema VCBuild è stato utilizzato. Alcuni tipi di file e i concetti che dipendono da VCBuild non esistono o sono rappresentati in modo diverso nel sistema corrente. Questo documento illustra le differenze nel sistema di compilazione corrente.

## <a name="vcproj-is-now-vcxproj"></a>L'estensione vcproj è ora vcxproj

Per i file di progetto non viene più usata l'estensione vcproj. Visual Studio converte automaticamente i file di progetto creati da una versione precedente di Visual C++ nel formato usato dal sistema corrente. Per altre informazioni su come aggiornare manualmente un progetto, vedere [/Upgrade (devenv.exe)](/visualstudio/ide/reference/upgrade-devenv-exe).

Nella versione corrente l'estensione dei file di progetto è vcxproj.

## <a name="vsprops-is-now-props"></a>L'estensione vsprops è ora props

Nelle versioni precedenti una *finestra delle proprietà del progetto* è un file XML con estensione vsprops. Una finestra delle proprietà del progetto consente di specificare le opzioni per gli strumenti di compilazione come il compilatore o il linker e di creare macro definite dall'utente.

Nella versione corrente l'estensione della finestra delle proprietà del progetto è props.

## <a name="custom-build-rules-and-rules-files"></a>Regole di compilazione personalizzate e file con estensione rules

Nelle versioni precedenti un *file delle regole* è un file XML con estensione rules. Un file delle regole consente di definire le regole di compilazione personalizzate e includerle nel processo di compilazione di un progetto Visual Studio C++. Una regola di compilazione personalizzata, che può essere associata a una o più estensioni, consente di inviare i file di input a uno strumento che genera uno o più file di output.

In questa versione le regole di compilazione personalizzate sono rappresentate da tre tipi di file con estensione xml, props e targets anziché un file con estensione rules. Quando viene eseguita la migrazione alla versione corrente di un file con estensione rules generato da una versione precedente di Visual C++, i file con estensione xml, props e targets equivalenti vengono creati e archiviati nel progetto insieme al file con estensione rules originale.

> [!IMPORTANT]
>  Nella versione corrente, l'IDE non supporta la creazione di nuove regole. Per questo motivo, il modo più semplice per utilizzare un file di regole da un progetto creato con una versione precedente di Visual C++ è di eseguire la migrazione del progetto nella versione corrente.

## <a name="inheritance-macros"></a>Macro di ereditarietà

Nelle versioni precedenti la macro **$(Inherit)** specifica l'ordine in cui vengono visualizzate le proprietà ereditate nella riga di comando che è composta dal sistema di compilazione del progetto. La macro **$(NoInherit)** fa in modo che le occorrenze di $(Inherit) vengano ignorate e non vengano ereditate proprietà che in caso contrario verrebbero ereditate. Ad esempio, per impostazione predefinita la macro $(Inherit) fa in modo che i file specificati usando l'opzione del compilatore [/I (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md) vengano aggiunti alla riga di comando.

Nella versione corrente l'ereditarietà è supportata specificando il valore di una proprietà come concatenazione di uno o più valori letterali e macro di proprietà. Le macro **$(Inherit)** e **$(NoInherit)** non sono supportate.

Nell'esempio seguente viene assegnato un elenco delimitato da punto e virgola a una proprietà nella pagina delle proprietà. L'elenco è composto dalla concatenazione del valore letterale *\<value>* e del valore della proprietà `MyProperty`, a cui si accede tramite la notazione di macro, **$(** <em>MyProperty</em> **)** .

```
Property=<value>;$(MyProperty)
```

## <a name="vcxprojuser-files"></a>File con estensione vcxproj.user

Un file utente (estensione vcxproj.user) archivia le proprietà specifiche dell'utente, ad esempio le impostazioni di debug e distribuzione. Il file con estensione vcxproj.user si applica a tutti i progetti per un determinato utente.

## <a name="vcxprojfilters-file"></a>File con estensione vcxproj.filters

Quando si usa **Esplora soluzioni** per aggiungere un file a un progetto, il file dei filtri (estensione vcxproj.filters) definisce la posizione nella visualizzazione struttura ad albero di **Esplora soluzioni** in cui viene aggiunto il file, in base alla relativa estensione.

## <a name="vc-directories-settings"></a>Impostazioni delle directory di VC++

Le impostazioni delle directory di Visual C++ vengono specificate nella [Pagina delle proprietà Directory di VC++](../ide/vcpp-directories-property-page.md). Nelle versioni precedenti di Visual Studio le impostazioni delle directory vengono applicate per ogni utente e l'elenco delle directory escluse è specificato nel file con estensione sysincl.dat.

Le impostazioni delle directory di VC++ non possono essere modificate se si esegue [devenv /resetsettings](/visualstudio/ide/reference/resetsettings-devenv-exe) dalla riga di comando. Anche selezionando il menu **Strumenti**, facendo clic su **Importa/Esporta impostazioni** e quindi selezionando l'opzione **Reimposta tutte le impostazioni** non è possibile modificare le impostazioni.

Eseguire la migrazione delle impostazioni delle directory di VC++ da un file con estensione vssettings da una versione precedente di Visual C++. Aprire il menu **Strumenti**, fare clic su **Importa/Esporta impostazioni**, selezionare **Importa le impostazioni di ambiente selezionate** e quindi seguire le istruzioni della procedura guidata. In alternativa, quando si avvia Visual Studio per la prima volta, nella finestra di dialogo **Seleziona impostazioni di ambiente predefinite** selezionare **Esegui la migrazione delle impostazioni appropriate da una versione precedente e applicale insieme alle impostazioni predefinite selezionate di seguito**.

## <a name="see-also"></a>Vedere anche

[Usare MSBuild dalla riga di comando - C++](../build/msbuild-visual-cpp.md)
