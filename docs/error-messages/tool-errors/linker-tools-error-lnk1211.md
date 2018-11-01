---
title: Errore degli strumenti del linker LNK1211
ms.date: 12/05/2017
f1_keywords:
- LNK1211
helpviewer_keywords:
- LNK1211
ms.assetid: 607400eb-4180-4892-817f-eedfa628af61
ms.openlocfilehash: 7c918cacb87460c2aad30285b750d9b170425534
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456147"
---
# <a name="linker-tools-error-lnk1211"></a>Errore degli strumenti del linker LNK1211

> informazioni sul tipo precompilato non trovati. «*filename*' non è collegato o sovrascritto

Il *nomefile* file oggetto compilati con [/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando collegamento o è stato sovrascritto.

Se si sta creando una libreria di debug che usa intestazioni precompilate e se si specifica **/Yc** e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), Visual C++ genera un file oggetto precompilato che contiene le informazioni di debug. L'errore si verifica solo quando si memorizza il file oggetto precompilate in una raccolta, usare la libreria per creare un'immagine eseguibile e i file di oggetto cui vengono fatto riferimento non sono disponibili riferimenti transitivi a una delle funzioni definite dal file oggetto precompilato.

Esistono due metodi per risolvere questo problema:

- Specificare il [/Yd](../../build/reference/yd-place-debug-information-in-object-file.md) opzione del compilatore per aggiungere le informazioni di debug dall'intestazione precompilata per ogni modulo oggetto. Questo metodo è meno consigliato perché produce in genere i moduli di oggetti di grandi dimensioni che consentono di aumentare il tempo necessario per collegare l'applicazione.

- Specificare [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) e passare il nome di una stringa arbitraria, quando si crea un file di intestazione precompilata che non contiene alcuna definizione di funzione. Ciò indica al compilatore di creare un simbolo nel file oggetto precompilato e la generazione di un riferimento al simbolo in ogni file oggetto che utilizzato il file di intestazione precompilata che viene associato al file oggetto precompilato.

Quando si compila un modulo con **/Yc** e **/Yl**, il compilatore crea un simbolo simile a `__@@_PchSym_@00@...@symbol_name`, dove i puntini di sospensione (...) rappresenta una stringa di caratteri generato dal compilatore e lo archivia di modulo di oggetto. Qualsiasi file di origine che si esegue la compilazione con questa intestazione precompilata fa riferimento al simbolo specificato, che indica al linker di includere il modulo di oggetto e le relative informazioni di debug dalla libreria.
