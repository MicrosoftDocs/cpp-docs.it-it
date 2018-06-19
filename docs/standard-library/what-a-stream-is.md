---
title: Definizione di flusso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- reading data [C++], iostream programming
- data [C++], reading
- streams [C++], in iostream classes
- streams [C++]
ms.assetid: a7e661e9-6cd1-4543-a9a4-c58ee9fd32f3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47f56a3d717c2dc9cebb3df30739954e5f6bf9e1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33853739"
---
# <a name="what-a-stream-is"></a>Definizione di flusso

Analogamente a C, anche in C++ non sono presenti una funzionalità di input/output incorporata. Tutti i compilatori C++, tuttavia, incorporano un pacchetto di I/O sistematico orientato agli oggetti, noto come le classi iostream. Il flusso è il concetto centrale delle classi iostream. È possibile considerare un oggetto flusso come un file intelligente che funge da origine e destinazione per byte. Le caratteristiche di un flusso sono determinate dalla sua classe e dagli operatori di estrazione e di inserimento personalizzati.

Tramite i driver di dispositivo, il sistema operativo del disco gestisce la tastiera, lo schermo, la stampante e le porte di comunicazione come file estesi. Le classi iostream interagiscono con questi file estesi. Le classi incorporate supportano la lettura e la scrittura nella memoria con sintassi identica a quella per il disco I/O, il che semplifica la derivazione delle classi stream.

## <a name="in-this-section"></a>In questa sezione

[Alternative di input/output](../standard-library/input-output-alternatives.md)

## <a name="see-also"></a>Vedere anche

[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
