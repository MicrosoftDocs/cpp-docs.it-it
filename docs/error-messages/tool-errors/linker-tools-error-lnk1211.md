---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1211'
title: Errore degli strumenti del linker LNK1211
ms.date: 12/05/2017
f1_keywords:
- LNK1211
helpviewer_keywords:
- LNK1211
ms.assetid: 607400eb-4180-4892-817f-eedfa628af61
ms.openlocfilehash: d3201055643f5874ccc319f04fb6eb2d976bf67f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341620"
---
# <a name="linker-tools-error-lnk1211"></a>Errore degli strumenti del linker LNK1211

> informazioni sul tipo precompilato non trovate; '*filename*' non collegato o sovrascritto

Il file oggetto *filename* , compilato usando [/YC](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando link o è stato sovrascritto.

Se si sta creando una libreria di debug che usa intestazioni precompilate e se si specifica **/YC** e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), Visual C++ genera un file oggetto precompilato che contiene informazioni di debug. L'errore si verifica solo quando si archivia il file oggetto precompilato in una libreria, si utilizza la libreria per compilare un'immagine eseguibile e i file oggetto a cui viene fatto riferimento non hanno riferimenti transitivi a nessuna delle funzioni definite dal file oggetto precompilato.

Esistono due metodi per ovviare a questa situazione:

- Specificare l'opzione del compilatore [/YD](../../build/reference/yd-place-debug-information-in-object-file.md) per aggiungere le informazioni di debug dall'intestazione precompilata a ogni modulo dell'oggetto. Questo metodo è meno auspicabile, perché in genere produce moduli LOB che possono aumentare il tempo necessario per collegare l'applicazione.

- Specificare [/YL](../../build/reference/yl-inject-pch-reference-for-debug-library.md) e passare il nome di una stringa arbitraria, quando si crea un file di intestazione precompilato che non contiene alcuna definizione di funzione. Ciò indica al compilatore di creare un simbolo nel file oggetto precompilato e di emettere un riferimento a tale simbolo in ogni file oggetto che ha utilizzato il file di intestazione precompilato associato al file oggetto precompilato.

Quando si compila un modulo con **/YC** e **/YL**, il compilatore crea un simbolo simile a `__@@_PchSym_@00@...@symbol_name` , dove i puntini di sospensione (...) rappresentano una stringa di caratteri generata dal compilatore e la archivia nel modulo dell'oggetto. Tutti i file di origine compilati con l'intestazione precompilata fanno riferimento al simbolo specificato, che fa in modo che il linker includa il modulo oggetto e le relative informazioni di debug dalla libreria.
