---
title: /Zf (generazione di PDB più veloce)
ms.date: 03/29/2018
f1_keywords:
- /Zf
helpviewer_keywords:
- /Zf
- -Zf
ms.openlocfilehash: bed37a189e3eb1eb7b55dbdee1f81f360eafa721
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62315850"
---
# <a name="zf-faster-pdb-generation"></a>/Zf (generazione di PDB più veloce)

Abilita la generazione di PDB più veloce nelle compilazioni parallele, riducendo al minimo le chiamate RPC a mspdbsrv.exe.

## <a name="syntax"></a>Sintassi

> **/Zf**

## <a name="remarks"></a>Note

Il **/Zf** opzione Abilita il supporto del compilatore per la generazione più rapida dei file PDB quando si usa la [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) opzione, oppure quando il sistema di compilazione (ad esempio, [MSBuild ](/visualstudio/msbuild/msbuild-reference) oppure [CMake](../cmake-projects-in-visual-studio.md)) possono essere eseguite cl.exe più processi di compilazione nello stesso momento. Questa opzione fa sì che il front-end del compilatore ritardare la generazione degli indici di tipo per ogni record di tipo nel file PDB fino alla fine della compilazione, quindi li richiede tutto in una singola chiamata RPC per mspdbsrv.exe, invece di effettuare una richiesta RPC per ogni record. Ciò può migliorare notevolmente le velocità effettiva di compilazione, riducendo il carico RPC sul processo di mspdbsrv.exe in un ambiente in cui più processi del compilatore cl.exe eseguire simultaneamente.

Poiché il **/Zf** opzione si applica solo alla generazione di PDB, è necessario il [/Zi](z7-zi-zi-debug-information-format.md) oppure [/ZI](z7-zi-zi-debug-information-format.md) opzione.

Il **/Zf** opzione è disponibile a partire da Visual Studio 2017 versione 15.1, in cui è disattivata per impostazione predefinita. A partire da Visual Studio 2017 versione 15.7 anteprima 3, questa opzione è attivata per impostazione predefinita quando il **/Zi** oppure **/ZI** opzione è abilitata.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zf** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md)<br/>
[/MP (compilazione con più processi)](mp-build-with-multiple-processes.md)<br/>
