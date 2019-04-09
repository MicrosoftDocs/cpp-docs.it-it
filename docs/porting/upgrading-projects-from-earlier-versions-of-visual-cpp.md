---
title: Aggiornamento di progetti da versioni precedenti di Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- 32-bit code porting
- upgrading Visual C++ applications, 32-bit code
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
ms.openlocfilehash: 41cac1b23d5ab16825891ef654341016958ab826
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59034913"
---
# <a name="upgrading-projects-from-earlier-versions-of-visual-c"></a>Aggiornamento di progetti da versioni precedenti di Visual C++

Nella maggior parte dei casi, è possibile aprire un progetto creato in una versione precedente di Visual Studio. A questo scopo, tuttavia, Visual Studio aggiorna il progetto. Se il progetto aggiornato viene salvato, non potrà più essere aperto nella versione precedente.

> [!IMPORTANT]
> Se si tenta di convertire un progetto già convertito, Visual Studio chiede conferma perché la riconversione comporta l'eliminazione dei file esistenti.

Molti progetti e soluzioni aggiornati possono essere compilati correttamente senza modifiche. È tuttavia possibile che alcuni progetti richiedano modifiche alle impostazioni, al codice sorgente o a entrambi. È consigliabile usare le linee guida seguenti per risolvere innanzitutto i problemi relativi alle impostazioni, dopodiché, se il progetto continua a non venire compilato, sarà possibile procedere alla risoluzione dei problemi relativi al codice. Per altre informazioni, vedere la [panoramica sui potenziali problemi di aggiornamento](../porting/overview-of-potential-upgrade-issues-visual-cpp.md).

1. Eseguire una copia del progetto esistente e dei file di soluzione. Eseguire l'installazione side-by-side della versione corrente e della versione precedente di Visual Studio in modo da poter confrontare, se lo si desidera, le versioni dei file.

2. Nella versione corrente di Visual Studio, aprire e aggiornare la copia del progetto o della soluzione, quindi salvarla.

3. Per ogni progetto convertito, aprire il menu di scelta rapida e scegliere **Proprietà**. In **Proprietà di configurazione**selezionare **Generale** , quindi per **Set strumenti della piattaforma**selezionare la versione corrente. Ad esempio, per Visual Studio 2017 selezionare **v141**.

4. Compilare la soluzione. Se la compilazione non riesce, modificare le impostazioni e ripetere l'operazione.

Le origini dati sono contenute in un progetto di database separato in modo da poter eseguire il debug delle stored procedure e di modificarle più facilmente in tali origini. Se si aggiorna un progetto C++ che contiene origini dati, viene automaticamente creato un progetto di database separato.

Per informazioni su come aggiornare le versioni di Windows di destinazione, vedere [Modifica di WINVER e _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Aggiornare il codice a Universal CRT](upgrade-your-code-to-the-universal-crt.md)<br/>
[Modifica di WINVER e _WIN32_WINNT](modifying-winver-and-win32-winnt.md)<br/>
[Correggere le dipendenze da elementi interni delle librerie](fix-your-dependencies-on-library-internals.md)<br/>
[Problemi relativi alla migrazione dei valori a virgola mobile](floating-point-migration-issues.md)<br/>
[Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](use-native-multi-targeting.md)<br/>
[Funzionalità di Visual C++ deprecate nella versione di anteprima di Visual Studio 2019](features-deprecated-in-visual-studio.md)<br/>
[Modifiche al sistema di compilazione](build-system-changes.md)<br/>

## <a name="see-also"></a>Vedere anche

[Novità di Visual C++ in Visual Studio 2017](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md)<br/>
[Comportamento non standard](../cpp/nonstandard-behavior.md)
