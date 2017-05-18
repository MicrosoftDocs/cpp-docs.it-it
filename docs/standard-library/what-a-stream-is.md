---
title: Definizione di flusso | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- reading data [C++], iostream programming
- data [C++], reading
- streams [C++], in iostream classes
- streams [C++]
ms.assetid: a7e661e9-6cd1-4543-a9a4-c58ee9fd32f3
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 75c23582cbbb42a417a7a5effdb879300c2a7732
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="what-a-stream-is"></a>Definizione di flusso
Analogamente a C, anche in C++ non sono presenti una funzionalità di input/output incorporata. Tutti i compilatori C++, tuttavia, incorporano un pacchetto di I/O sistematico orientato agli oggetti, noto come le classi iostream. Il flusso è il concetto centrale delle classi iostream. È possibile considerare un oggetto flusso come un file intelligente che funge da origine e destinazione per byte. Le caratteristiche di un flusso sono determinate dalla sua classe e dagli operatori di estrazione e di inserimento personalizzati.  
  
 Tramite i driver di dispositivo, il sistema operativo del disco gestisce la tastiera, lo schermo, la stampante e le porte di comunicazione come file estesi. Le classi iostream interagiscono con questi file estesi. Le classi incorporate supportano la lettura e la scrittura nella memoria con sintassi identica a quella per il disco I/O, il che semplifica la derivazione delle classi stream.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Alternative di input/output](../standard-library/input-output-alternatives.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione di iostream](../standard-library/iostream-programming.md)


