---
title: Inclusione di nomi di file tra parentesi | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 6a4e5411-c35e-48b8-90ef-b37ac324ed94
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f118417a7ed2fdf8cad77775e144b81655c56916
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="including-bracketed-filenames"></a>Inclusione di nomi file tra parentesi
**ANSI 3.8.2** Metodo per trovare i file di origine che è possibile includere  
  
 Per le specifiche di file racchiuse tra parentesi angolari, il preprocessore non esegue la ricerca nelle directory dei file padre. Un file "padre" è il file che contiene la direttiva [#include](../preprocessor/hash-include-directive-c-cpp.md). Inizia invece ricercando il file nelle directory specificate dalla riga di comando del compilatore che segue /I. Se l'opzione /I non è presente o ha esito negativo, il preprocessore utilizza la variabile di ambiente INCLUDE per trovare tutti i file di inclusione tra parentesi angolari. La variabile di ambiente INCLUDE può contenere più percorsi, separati da punti e virgola (**;**). Se più directory vengono visualizzate come parte dell'opzione /I o nella variabile di ambiente INCLUDE, il preprocessore vi esegue la ricerca nell'ordine in cui vengono visualizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)