---
title: Identificatore di classi di archiviazione auto | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 8e73f57e-aa92-4e41-91ea-5c8ad2a2b332
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5e80f6057a26ba7655df0a04d75dcaec2c4856ed
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="auto-storage-class-specifier"></a>Identificatore di classi di archiviazione auto
L'identificatore di classi di archiviazione **auto** dichiara una variabile automatica, caratterizzata da una durata locale. Una variabile **auto** è visibile solo nel blocco in cui viene dichiarata. Le dichiarazioni delle variabili **auto** possono includere inizializzatori, come illustrato in [Inizializzazione](../c-language/initialization.md). Poiché le variabili con la classe di archiviazione **auto** non vengono inizializzate automaticamente, è necessario inizializzarle in modo esplicito quando vengono dichiarate oppure assegnare loro valori iniziali nelle istruzioni all'interno del blocco. I valori delle variabili **auto** non inizializzate non sono definiti. Una variabile locale della classe di archiviazione **auto** o **register** viene inizializzata ogni volta che viene rilevata nell'ambito, se è specificato un inizializzatore.  
  
 Una variabile interna **static** (variabile statica con ambito del blocco o locale) può essere inizializzata con l'indirizzo di un elemento esterno o **static** ma non con l'indirizzo di un altro elemento **auto**, perché l'indirizzo di un elemento **auto** non è una costante.  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../cpp/auto-keyword.md)