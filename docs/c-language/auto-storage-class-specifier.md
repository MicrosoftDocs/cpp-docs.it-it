---
title: Identificatore di classi di archiviazione auto | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ce3ac6467ea566ebdd9d21e24843efe72457ba9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="auto-storage-class-specifier"></a>Identificatore di classi di archiviazione auto
L'identificatore di classi di archiviazione **auto** dichiara una variabile automatica, caratterizzata da una durata locale. Una variabile **auto** è visibile solo nel blocco in cui viene dichiarata. Le dichiarazioni delle variabili **auto** possono includere inizializzatori, come illustrato in [Inizializzazione](../c-language/initialization.md). Poiché le variabili con la classe di archiviazione **auto** non vengono inizializzate automaticamente, è necessario inizializzarle in modo esplicito quando vengono dichiarate oppure assegnare loro valori iniziali nelle istruzioni all'interno del blocco. I valori delle variabili **auto** non inizializzate non sono definiti. Una variabile locale della classe di archiviazione **auto** o **register** viene inizializzata ogni volta che viene rilevata nell'ambito, se è specificato un inizializzatore.  
  
 Una variabile interna **static** (variabile statica con ambito del blocco o locale) può essere inizializzata con l'indirizzo di un elemento esterno o **static** ma non con l'indirizzo di un altro elemento **auto**, perché l'indirizzo di un elemento **auto** non è una costante.  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../cpp/auto-keyword.md)