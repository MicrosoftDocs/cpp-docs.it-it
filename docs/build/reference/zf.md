---
description: Altre informazioni su:/ZF (generazione PDB più veloce)
title: /Zf (Generazione più veloce di file PDB)
ms.date: 03/29/2018
f1_keywords:
- /Zf
helpviewer_keywords:
- /Zf
- -Zf
ms.openlocfilehash: 6acf84de3c286131f470808505cdf0e895feeaeb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178888"
---
# <a name="zf-faster-pdb-generation"></a>/Zf (Generazione più veloce di file PDB)

Abilitare la generazione PDB più veloce nelle compilazioni parallele riducendo al minimo le chiamate RPC a mspdbsrv.exe.

## <a name="syntax"></a>Sintassi

> **/ZF**

## <a name="remarks"></a>Commenti

L'opzione **/ZF** Abilita il supporto del compilatore per la generazione più rapida di file PDB quando si usa l'opzione [/MP (compilazione con più processi)](mp-build-with-multiple-processes.md) oppure quando il sistema di compilazione (ad esempio, [MSBuild](/visualstudio/msbuild/msbuild-reference) o [CMake](../cmake-projects-in-visual-studio.md)) può eseguire più processi del compilatore di cl.exe contemporaneamente. Questa opzione fa sì che il front-end del compilatore ritardi la generazione degli indici di tipo per ogni record di tipo nel file PDB fino alla fine della compilazione, quindi li richiede tutti in una singola chiamata RPC a mspdbsrv.exe, anziché eseguire una richiesta RPC per ogni record. Questo può migliorare notevolmente la velocità effettiva di compilazione riducendo il carico RPC nel processo di mspdbsrv.exe in un ambiente in cui più processi del compilatore cl.exe vengono eseguiti simultaneamente.

Poiché l'opzione **/ZF** si applica solo alla generazione PDB, è necessaria l'opzione [/Zi](z7-zi-zi-debug-information-format.md) o [/Zi](z7-zi-zi-debug-information-format.md) .

L'opzione **/ZF** è disponibile a partire da Visual Studio 2017 versione 15,1, dove è disattivata per impostazione predefinita. A partire da Visual Studio 2017 versione 15,7 Preview 3, questa opzione è attivata per impostazione predefinita quando è abilitata l'opzione **/Zi** o **/Zi** .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Modificare la proprietà **Opzioni aggiuntive** per includere **/ZF** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md)<br/>
[/MP (compilazione con più processi)](mp-build-with-multiple-processes.md)<br/>
