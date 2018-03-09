---
title: "/Zf (generazione più velocemente PDB) | Documenti Microsoft"
ms.date: 02/22/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- /Zf
dev_langs:
- C++
helpviewer_keywords:
- /Zf
- -Zf
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7012777643f993c552f79b58a02d4806c0ce4caa
ms.sourcegitcommit: c770a343def04ae77522708387c3f7c470e49969
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2018
---
# <a name="zf-faster-pdb-generation"></a>/Zf (generazione più velocemente PDB)

Abilita la generazione di file PDB più veloce nelle compilazioni parallele riducendo al minimo le chiamate RPC a mspdbsrv.exe.

## <a name="syntax"></a>Sintassi

> **/Zf**

## <a name="remarks"></a>Note

Il **/Zf** opzione Abilita il supporto del compilatore per la generazione dei file PDB più veloce quando si utilizza il [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) opzione, oppure quando il sistema di compilazione (ad esempio, [MSBuild ](/visualstudio/msbuild/msbuild-reference) o [CMake](../../ide/cmake-tools-for-visual-cpp.md)) possono essere eseguite più cl.exe processi del compilatore nello stesso momento. Questa opzione fa sì che il front-end del compilatore rimandare la generazione di indici di tipo per ogni record di tipo nel file PDB fino alla fine della compilazione, quindi vengono richieste tutte in una singola chiamata RPC per mspdbsrv.exe, anziché eseguire una richiesta RPC per ogni record. Sostanzialmente, ciò può migliorare la velocità effettiva compilazione grazie alla riduzione del carico RPC sul processo di mspdbsrv.exe in un ambiente in cui più processi di compilatore cl.exe eseguire contemporaneamente.

Poiché il **/Zf** opzione si applica solo alla generazione del file PDB, è necessario il [/Zi](z7-zi-zi-debug-information-format.md) o [/ZI](z7-zi-zi-debug-information-format.md) opzione.

Il **/Zf** opzione è disponibile a partire da Visual Studio 2017 versione 15.1 ed è disattivata per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zf** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md)  
[/MP (compilazione con più processi)](mp-build-with-multiple-processes.md)  
