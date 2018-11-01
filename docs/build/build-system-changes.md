---
title: Modifiche al sistema di compilazione
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
ms.openlocfilehash: a7a98c864a1d0bf617ebf4ededea5e1a59a1af31
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50437154"
---
# <a name="build-system-changes"></a>Modifiche al sistema di compilazione

Il sistema MSBuild è utilizzato per compilare progetti Visual C++. Tuttavia, in Visual Studio 2008 e le versioni precedenti, il sistema VCBuild è stato utilizzato. Determinati tipi di file e i concetti che dipendono da VCBuild non esistono o sono rappresentati in modo diverso nel sistema corrente. Questo documento illustra le differenze nel sistema di compilazione corrente.

## <a name="vcproj-is-now-vcxproj"></a>vcproj è ora con estensione vcxproj

I file di progetto non è più utilizzano l'estensione del nome file con estensione vcproj. Visual Studio converte automaticamente i file di progetto che sono stati creati da una versione precedente di Visual C++ per il formato utilizzato dal sistema corrente. Per altre informazioni su come aggiornare manualmente un progetto, vedere [/Upgrade (devenv.exe)](/visualstudio/ide/reference/upgrade-devenv-exe).

Nella versione corrente, l'estensione per un file di progetto è con estensione vcxproj.

## <a name="vsprops-is-now-props"></a>ora file vsprops è generalmente props

Nelle versioni precedenti, un *delle proprietà di progetti* è un file basato su XML che ha un'estensione di file vsprops. Una finestra delle proprietà del progetto consente di specificare opzioni per gli strumenti di compilazione, ad esempio il compilatore o del linker e creare macro definite dall'utente.

Nella versione corrente, l'estensione per una finestra delle proprietà di progetto è generalmente props.

## <a name="custom-build-rules-and-rules-files"></a>File con estensione rules e regole di compilazione personalizzata

Nelle versioni precedenti, un *file di regole* è un file basato su XML che ha un'estensione di file con estensione rules. Un file di regole consente di definire le regole di compilazione personalizzati e includerli nel processo di compilazione di un progetto di Visual C++. Una regola di compilazione personalizzato che può essere associata a uno o più estensioni di file, consente di passare i file di input a uno strumento che consente di creare uno o più file di output.

In questa versione, le regole di compilazione personalizzato sono rappresentate da tre tipi di file. XML, con estensione props e targets, invece di un file con estensione rules. Quando un file con estensione rules creato utilizzando una versione precedente di Visual C++ viene eseguita la migrazione alla versione corrente, i file con estensione XML con estensione props e targets equivalenti vengono creati e archiviati nel progetto insieme al file con estensione rules originale.

> [!IMPORTANT]
>  Nella versione corrente, l'IDE non supporta la creazione di nuove regole. Per questo motivo, il modo più semplice per utilizzare un file di regole da un progetto creato con una versione precedente di Visual C++ è di eseguire la migrazione del progetto nella versione corrente.

## <a name="inheritance-macros"></a>Macro di ereditarietà

Nelle versioni precedenti, il **Inherit** macro specifica l'ordine in cui vengono visualizzate le proprietà ereditate nella riga di comando che è composto dal sistema di compilazione del progetto. Il **NoInherit** (macro), tutte le occorrenze di $ (Inherit) verrà ignorato e fa sì che tutte le proprietà che verrebbero altrimenti ereditate, non da essere ereditata. Ad esempio, per impostazione predefinita la macro $ (Inherit) fa sì che i file specificati utilizzando il [/I (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md) opzione del compilatore da aggiungere alla riga di comando.

Nella versione corrente, l'ereditarietà è supportata, specificando il valore di una proprietà come la concatenazione di una o più valori letterali e macro di proprietà. Il **Inherit** e **NoInherit** macro non sono supportate.

Nell'esempio seguente, un elenco delimitato da punto e virgola viene assegnato a una proprietà nella pagina delle proprietà. L'elenco è costituito da concatenazione dei parametri il  *\<valore >* letterale e il valore della `MyProperty` proprietà cui si accede tramite la notazione di macro, **$(**  <em>MyProperty</em>**)**.

```
Property=<value>;$(MyProperty)
```

## <a name="vcxprojuser-files"></a>. vcxproj file

Un file utente (. vcxproj) archivia le proprietà specifiche dell'utente per le impostazioni di esempio, il debug e distribuzione. Il file vcxproj si applica a tutti i progetti per un determinato utente.

## <a name="vcxprojfilters-file"></a>. vcxproj File

Quando **Esplora soluzioni** viene usato per aggiungere un file a un progetto, il file dei filtri (. vcxproj) definisce la posizione nel **Esplora soluzioni** visualizzazione il file viene aggiunto, l'estensione del nome file in base ad albero.

## <a name="vc-directories-settings"></a>Impostazioni delle directory di VC + +

Impostazioni delle directory di Visual C++ vengono specificate nella [VC + + Directories Property Page](../ide/vcpp-directories-property-page.md). Nelle versioni precedenti di Visual Studio, le directory impostazioni vengono applicate per ogni utente e l'elenco delle directory esclusione è specificato nel file SYSINCL.

Se si esegue, non è possibile modificare le impostazioni di directory di VC + + [/resetsettings devenv](/visualstudio/ide/reference/resetsettings-devenv-exe) nella riga di comando. È anche possibile modificare le impostazioni se si apre la **Tools** menu, fare clic su **Importa / Esporta impostazioni**e quindi selezionare il **Reimposta tutte le impostazioni** opzione.

Eseguire la migrazione delle impostazioni delle directory di VC + + da un file con estensione vssettings che viene creato da una versione precedente di Visual C++. Aprire il **degli strumenti** menu, fare clic su **Importa / Esporta impostazioni**, selezionare **Importa le impostazioni di ambiente selezionate**e quindi seguire le istruzioni della procedura guidata. O quando si avvia Visual Studio per la prima volta, nelle **scegliere le impostazioni di ambiente predefinite** finestra di dialogo **eseguire la migrazione delle impostazioni appropriate da una versione precedente e applicarle oltre alle impostazioni predefinite selezionato sotto**.

## <a name="see-also"></a>Vedere anche

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)