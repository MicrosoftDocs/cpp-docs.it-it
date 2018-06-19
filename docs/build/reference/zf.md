---
title: /Zf (generazione più velocemente PDB) | Documenti Microsoft
ms.date: 03/29/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zf
dev_langs:
- C++
helpviewer_keywords:
- /Zf
- -Zf
author: corob-msft
ms.author: corob
ms.openlocfilehash: 968ce17302fa608888c7ae2fedf695946b0119bd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379965"
---
# <a name="zf-faster-pdb-generation"></a>/Zf (generazione più velocemente PDB)

Abilita la generazione di file PDB più veloce nelle compilazioni parallele riducendo al minimo le chiamate RPC a mspdbsrv.exe.

## <a name="syntax"></a>Sintassi

> **/Zf**

## <a name="remarks"></a>Note

Il **/Zf** opzione Abilita il supporto del compilatore per la generazione dei file PDB più veloce quando si utilizza il [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) opzione, oppure quando il sistema di compilazione (ad esempio, [MSBuild ](/visualstudio/msbuild/msbuild-reference) o [CMake](../../ide/cmake-tools-for-visual-cpp.md)) possono essere eseguite più cl.exe processi del compilatore nello stesso momento. Questa opzione fa sì che il front-end del compilatore rimandare la generazione di indici di tipo per ogni record di tipo nel file PDB fino alla fine della compilazione, quindi vengono richieste tutte in una singola chiamata RPC per mspdbsrv.exe, anziché eseguire una richiesta RPC per ogni record. Sostanzialmente, ciò può migliorare la velocità effettiva compilazione grazie alla riduzione del carico RPC sul processo di mspdbsrv.exe in un ambiente in cui più processi di compilatore cl.exe eseguire contemporaneamente.

Poiché il **/Zf** opzione si applica solo alla generazione del file PDB, è necessario il [/Zi](z7-zi-zi-debug-information-format.md) o [/ZI](z7-zi-zi-debug-information-format.md) opzione.

Il **/Zf** opzione è disponibile a partire da Visual Studio 2017 versione 15.1, in cui è disattivata per impostazione predefinita. A partire da Visual Studio 2017 versione 15.7 Preview 3, questa opzione è attivata per impostazione predefinita quando il **/Zi** oppure **/ZI** opzione è abilitata.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zf** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md)<br/>
[/MP (compilazione con più processi)](mp-build-with-multiple-processes.md)<br/>
