---
title: VCBuild a confronto con MSBuild
description: Il sistema di compilazione C++ di VIsual Studio è stato modificato da VCBuild a MSBuild in Visual Studio 2010.
ms.date: 10/25/2019
helpviewer_keywords:
- Build system changes, project file (.vcxprog)
- Build system changes, custom build rules
- Build system changes, MSBuild
- MSBuild, build system changes
- Build system changes, .vsprops
- Build system changes, $(Inherit)
- Build system changes, $(NoInherit)
ms.assetid: e564d95f-a6cc-4d97-b57e-1a71daf66f4a
ms.openlocfilehash: b1b963aca3de75cf9852c55f59a99422568ab4b4
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91505920"
---
# <a name="vcbuild-vs-msbuild-build-system-changes-in-visual-studio-2010"></a>VCBuild rispetto a MSBuild: modifiche del sistema di compilazione in Visual Studio 2010

Il sistema MSBuild per i progetti C++ è stato introdotto in Visual Studio 2010. In Visual Studio 2008 e versioni precedenti è stato usato il sistema VCBuild. Alcuni tipi di file e concetti che dipendono da VCBuild non esistono o sono rappresentati in modo diverso in MSBuild. Questo documento illustra le differenze nel sistema di compilazione corrente. Per convertire un progetto Visual Studio 2008 in MSBuild, è necessario usare Visual Studio 2010. Dopo la conversione del progetto, è consigliabile usare la versione più recente di Visual Studio per eseguire l'aggiornamento all'IDE e al set di strumenti del compilatore correnti. Per altre informazioni, ad esempio su come ottenere Visual Studio 2010, vedere [le istruzioni per Visual studio 2008](use-native-multi-targeting.md#instructions-for-visual-studio-2008).

Le sezioni seguenti riepilogano le modifiche da VCBuild a MSBuild. Se il progetto VCBuild include regole di compilazione personalizzate o macro che non sono riconosciute da MSBuild, vedere [progetti di Visual Studio-C++](../build/creating-and-managing-visual-cpp-projects.md) per informazioni su come tradurre tali istruzioni nel sistema MSBuild. La conversione iniziale da VCBuild a MSBuild è semplicemente un passaggio intermedio. Non è necessario che il file di progetto venga completamente corretto o che il programma venga compilato senza errori. Si usa solo Visual Studio 2010 per convertire il progetto in formato MSBuild in modo da ottenere il progetto funzionante nella versione più recente di Visual Studio.

## <a name="vcproj-is-now-vcxproj"></a>L'estensione vcproj è ora vcxproj

Per i file di progetto non viene più usata l'estensione vcproj. Visual Studio 2010 converte automaticamente i file di progetto creati da una versione precedente di Visual C++ nel formato MSBuild, che usa l'estensione vcxproj per i file di progetto.

## <a name="vsprops-is-now-props"></a>L'estensione vsprops è ora props

In Visual Studio 2008 e versioni precedenti, una *finestra delle proprietà del progetto* è un file basato su XML con estensione vsprops. Una finestra delle proprietà del progetto consente di specificare le opzioni per gli strumenti di compilazione come il compilatore o il linker e di creare macro definite dall'utente. In MSBuild l'estensione del nome file per una finestra delle proprietà del progetto è. props.

## <a name="custom-build-rules-and-rules-files"></a>Regole di compilazione personalizzate e file con estensione rules

In Visual Studio 2008 e versioni precedenti, un *file* di regole è un file basato su XML con estensione di file rules. Un file delle regole consente di definire le regole di compilazione personalizzate e includerle nel processo di compilazione di un progetto Visual Studio C++. Una regola di compilazione personalizzata, che può essere associata a una o più estensioni, consente di inviare i file di input a uno strumento che genera uno o più file di output.

Nel sistema MSBuild, le regole di compilazione personalizzate sono rappresentate da tre tipi di file,. XML,. props e. targets, anziché un file con estensione rules. Quando si esegue la migrazione di un file con estensione rules creato con una versione precedente di Visual C++ viene eseguita la migrazione a Visual Studio 2010, i file equivalente. XML,. props e. targets vengono creati e archiviati nel progetto insieme al file con estensione rules originale.

> [!IMPORTANT]
> In Visual Studio 2010, l'IDE non supporta la creazione di nuove regole. Per questo motivo, il modo più semplice per usare un file di regole da un progetto creato con una versione precedente di Visual C++ consiste nel migrare il progetto in Visual Studio 2010.

## <a name="inheritance-macros"></a>Macro di ereditarietà

In Visual Studio 2008 e versioni precedenti, la macro **$ (Inherit)** specifica l'ordine in cui le proprietà ereditate vengono visualizzate nella riga di comando composta dal sistema di compilazione del progetto. La macro **$(NoInherit)** fa in modo che le occorrenze di $(Inherit) vengano ignorate e non vengano ereditate proprietà che in caso contrario verrebbero ereditate. Ad esempio, per impostazione predefinita la macro $(Inherit) fa in modo che i file specificati usando l'opzione del compilatore [/I (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md) vengano aggiunti alla riga di comando.

In Visual Studio 2010, l'ereditarietà è supportata specificando il valore di una proprietà come concatenazione di uno o più valori letterali e macro di proprietà. Le macro **$(Inherit)** e **$(NoInherit)** non sono supportate.

Nell'esempio seguente viene assegnato un elenco delimitato da punto e virgola a una proprietà nella pagina delle proprietà. L'elenco è costituito dalla concatenazione del *\<value>* valore letterale e dal valore della `MyProperty` proprietà, a cui si accede tramite la notazione macro **$ (**<em>SetProperty</em>**)**.

```
Property=<value>;$(MyProperty)
```

## <a name="vcxprojuser-files"></a>file con estensione vcxproj. User

Un file utente (estensione vcxproj.user) archivia le proprietà specifiche dell'utente, ad esempio le impostazioni di debug e distribuzione. Il file *vcxproj. User* si applica a tutti i progetti per un utente specifico.

## <a name="vcxprojfilters-file"></a>file con estensione vcxproj. filters

Quando **Esplora soluzioni** viene usato per aggiungere un file a un progetto, il file dei filtri (con*estensione vcxproj. filters*) definisce la posizione nella visualizzazione albero **Esplora soluzioni** il file, in base all'estensione del nome file.

## <a name="vc-directories-settings"></a>Impostazioni directory di VC + +

Le impostazioni delle directory di Visual C++ vengono specificate nella [Pagina delle proprietà Directory di VC++](../build/reference/vcpp-directories-property-page.md). In Visual Studio 2008 e versioni precedenti le impostazioni delle directory si applicano per utente e l'elenco delle directory escluse viene specificato nel file *SYSINCL. dat* .

Le impostazioni delle directory di VC++ non possono essere modificate se si esegue [devenv /resetsettings](/visualstudio/ide/reference/resetsettings-devenv-exe) dalla riga di comando. Anche selezionando il menu **Strumenti**, facendo clic su **Importa/Esporta impostazioni** e quindi selezionando l'opzione **Reimposta tutte le impostazioni** non è possibile modificare le impostazioni.

Per eseguire la migrazione delle impostazioni delle directory di VC + + da un file con *estensione vssettings* creato da una versione precedente di Visual Studio:

1. Aprire il menu **strumenti** , fare clic su **Importa/Esporta impostazioni** .
2. Selezionare **Importa le impostazioni di ambiente selezionate**
3. Seguire le indicazioni della procedura guidata.

## <a name="see-also"></a>Vedere anche

[Usare MSBuild dalla riga di comando - C++](../build/msbuild-visual-cpp.md)
