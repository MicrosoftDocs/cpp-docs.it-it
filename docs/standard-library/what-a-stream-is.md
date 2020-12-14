---
description: "Altre informazioni su: che cos'è un flusso"
title: Definizione di flusso
ms.date: 11/04/2016
helpviewer_keywords:
- reading data [C++], iostream programming
- data [C++], reading
- streams [C++], in iostream classes
- streams [C++]
ms.assetid: a7e661e9-6cd1-4543-a9a4-c58ee9fd32f3
ms.openlocfilehash: 3786fe05f25949129c1bce63bdbbd73a16209475
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187780"
---
# <a name="what-a-stream-is"></a>Definizione di flusso

Analogamente a C, anche in C++ non sono presenti una funzionalità di input/output incorporata. Tutti i compilatori C++, tuttavia, incorporano un pacchetto di I/O sistematico orientato agli oggetti, noto come le classi iostream. Il flusso è il concetto centrale delle classi iostream. È possibile considerare un oggetto flusso come un file intelligente che funge da origine e destinazione per byte. Le caratteristiche di un flusso sono determinate dalla sua classe e dagli operatori di estrazione e di inserimento personalizzati.

Tramite i driver di dispositivo, il sistema operativo del disco gestisce la tastiera, lo schermo, la stampante e le porte di comunicazione come file estesi. Le classi iostream interagiscono con questi file estesi. Le classi incorporate supportano la lettura e la scrittura nella memoria con sintassi identica a quella per il disco I/O, il che semplifica la derivazione delle classi stream.

## <a name="in-this-section"></a>Contenuto della sezione

[Alternative di input/output](../standard-library/input-output-alternatives.md)

## <a name="see-also"></a>Vedi anche

[Programmazione di iostream](../standard-library/iostream-programming.md)
