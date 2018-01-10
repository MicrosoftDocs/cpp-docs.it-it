---
title: Strumenti del linker LNK1211 errore | Documenti Microsoft
ms.date: 12/05/2017
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1211
dev_langs: C++
helpviewer_keywords: LNK1211
ms.assetid: 607400eb-4180-4892-817f-eedfa628af61
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 51150fb2a57f48f04cca97e5f16fe1a28ead2c50
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1211"></a>Errore degli strumenti del linker LNK1211

> informazioni sul tipo precompilato non trovati. '*filename*' non è collegato o sovrascritto

Il *filename* file oggetto compilati con [/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando LINK o è stato sovrascritto.

Se si sta creando una libreria di debug che utilizza le intestazioni precompilate e se si specifica **/Yc** e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), Visual C++ genera un file oggetto precompilato che contiene le informazioni di debug. L'errore si verifica solo quando si memorizza il file oggetto precompilato in una raccolta, utilizzare la libreria per compilare un'immagine eseguibile e i file oggetto a cui fa riferimento non hanno riferimenti transitivi a qualsiasi delle funzioni definite dal file oggetto precompilato.

Esistono due metodi per evitare questa situazione:

- Specificare il [/Yd](../../build/reference/yd-place-debug-information-in-object-file.md) l'opzione del compilatore per aggiungere le informazioni di debug dall'intestazione precompilata per ogni modulo di oggetto. Questo metodo è meno utile poiché produce in genere i moduli di oggetti di grandi dimensioni che consente di aumentare il tempo necessario per collegare l'applicazione.

- Specificare [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) e passare il nome di qualsiasi stringa arbitraria, quando si crea un file di intestazione precompilata non contiene alcuna definizione di funzione. In questo modo il compilatore per creare un simbolo nel file oggetto precompilato e la generazione di un riferimento al simbolo in ogni file oggetto che utilizzavano il file di intestazione precompilata che viene associato al file oggetto precompilato.

Quando si esegue la compilazione di un modulo con **/Yc** e **/Yl**, il compilatore crea un simbolo simile a `__@@_PchSym_@00@...@symbol_name`, dove i puntini di sospensione (...) rappresenta una stringa di caratteri generato dal compilatore e lo archivia di modulo di oggetto. Qualsiasi file di origine che si compila con questa intestazione precompilata fa riferimento al simbolo specificato, che indica al linker di includere il modulo di oggetto e le relative informazioni di debug della libreria.
