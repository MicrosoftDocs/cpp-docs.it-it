---
title: Errore irreversibile C1128
ms.date: 11/04/2016
f1_keywords:
- C1128
helpviewer_keywords:
- C1128
ms.assetid: 6f9580fd-ecef-48be-9780-dcf666704279
ms.openlocfilehash: bb1d9af10084d6b3e75325450c7f13ea1683ee2e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661220"
---
# <a name="fatal-error-c1128"></a>Errore irreversibile C1128

numero di sezioni ha superato il limite di formato file oggetto: compilare con /bigobj

Un file con estensione obj superato il numero di sezioni consentite, un limite del formato file oggetto COFF.

Limite può essere il risultato dell'uso [/Gy](../../build/reference/gy-enable-function-level-linking.md) e una build di debug. **/Gy** fa in modo che funzioni da passare nelle rispettive sezioni COMDAT. In una build di debug, è presente una sezione di informazioni di debug per ogni funzione COMDAT.

C1128 può essere causato anche quando sono presenti troppe funzioni inline.

Per correggere questo errore, suddividere il file di origine in più file di codice sorgente, compilare senza **/Gy**, o eseguire la compilazione con [/bigobj (aumenta il numero di sezioni in. File obj)](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md).  Se non si compila con **/Gy**, è necessario specificare le ottimizzazioni individualmente, poiché **/O2** e **/O1** entrambi implica **/Gy**.

Se possibile, eseguire la compilazione senza le informazioni di debug.

È necessario anche avere creazioni di istanze specifiche dei modelli nei file di codice sorgente separato, piuttosto che il compilatore generarli.

Durante il porting del codice, C1128 verrà probabilmente visualizzato per primo quando si usa x64 compilatore e molto più tardi con x86 compilatore. x64 avrà almeno 4 sezioni associate con ciascun compilato di funzione **/Gy** o inline da modelli o classi inline: codice, pdata e informazioni di debug e possibilmente xdata.  X86 non avranno pdata.