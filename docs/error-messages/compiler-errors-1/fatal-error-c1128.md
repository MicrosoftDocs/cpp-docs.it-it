---
title: Errore irreversibile C1128
ms.date: 11/04/2016
f1_keywords:
- C1128
helpviewer_keywords:
- C1128
ms.assetid: 6f9580fd-ecef-48be-9780-dcf666704279
ms.openlocfilehash: 64671c9abe8ed1375df1e91ca7509e6a597366ee
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203638"
---
# <a name="fatal-error-c1128"></a>Errore irreversibile C1128

il numero di sezioni ha superato il limite di formato del file oggetto: compilare con/bigobj

Un file con estensione obj supera il numero di sezioni consentite, un limite di formato del file oggetto COFF.

La limitazione di questa sezione può essere il risultato dell'utilizzo di [/Gy](../../build/reference/gy-enable-function-level-linking.md) e di una build di debug; **/Gy** fa sì che le funzioni passino nelle rispettive sezioni di COMDAT. In una build di debug è presente una sezione di informazioni di debug per ogni funzione COMDAT.

C1128 può anche essere causato da un numero eccessivo di funzioni inline.

Per correggere l'errore, dividere il file di origine in più file di codice sorgente, compilare senza **/Gy**o compilare con [/bigobj (aumentare il numero di sezioni in. File obj)](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md).  Se non si esegue la compilazione con **/Gy**, sarà necessario specificare le ottimizzazioni singolarmente, poiché **/O2** e **/O1** implicano entrambi **/Gy**.

Se possibile, compilare senza informazioni di debug.

Potrebbe anche essere necessario creare creazioni di istanze specifiche di modelli in file di codice sorgente distinti, invece di creare istanze del compilatore.

Quando si esegue il porting del codice, C1128 viene probabilmente visualizzato per primo quando si usa il compilatore x64 e molto più tardi con il compilatore x86. x64 avrà almeno 4 sezioni associate a ogni funzione compilata **/Gy** o inline da modelli o da classe inline: codice, pdata e informazioni di debug e possibilmente XData.  Per x86 non sarà presente pData.
