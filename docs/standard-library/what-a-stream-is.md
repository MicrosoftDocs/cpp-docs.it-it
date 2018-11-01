---
title: Definizione di flusso
ms.date: 11/04/2016
helpviewer_keywords:
- reading data [C++], iostream programming
- data [C++], reading
- streams [C++], in iostream classes
- streams [C++]
ms.assetid: a7e661e9-6cd1-4543-a9a4-c58ee9fd32f3
ms.openlocfilehash: 9b8821861baed53880a00695204a4555994dccb3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637086"
---
# <a name="what-a-stream-is"></a>Definizione di flusso

Analogamente a C, anche in C++ non sono presenti una funzionalità di input/output incorporata. Tutti i compilatori C++, tuttavia, incorporano un pacchetto di I/O sistematico orientato agli oggetti, noto come le classi iostream. Il flusso è il concetto centrale delle classi iostream. È possibile considerare un oggetto flusso come un file intelligente che funge da origine e destinazione per byte. Le caratteristiche di un flusso sono determinate dalla sua classe e dagli operatori di estrazione e di inserimento personalizzati.

Tramite i driver di dispositivo, il sistema operativo del disco gestisce la tastiera, lo schermo, la stampante e le porte di comunicazione come file estesi. Le classi iostream interagiscono con questi file estesi. Le classi incorporate supportano la lettura e la scrittura nella memoria con sintassi identica a quella per il disco I/O, il che semplifica la derivazione delle classi stream.

## <a name="in-this-section"></a>In questa sezione

[Alternative di input/output](../standard-library/input-output-alternatives.md)

## <a name="see-also"></a>Vedere anche

[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
