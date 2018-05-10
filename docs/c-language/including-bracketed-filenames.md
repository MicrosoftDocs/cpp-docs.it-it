---
title: Inclusione di nomi di file tra parentesi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 6a4e5411-c35e-48b8-90ef-b37ac324ed94
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ba45c21029a428784e1c8410dcf42295aa6350f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="including-bracketed-filenames"></a>Inclusione di nomi file tra parentesi
**ANSI 3.8.2** Metodo per trovare i file di origine che è possibile includere  
  
 Per le specifiche di file racchiuse tra parentesi angolari, il preprocessore non esegue la ricerca nelle directory dei file padre. Un file "padre" è il file che contiene la direttiva [#include](../preprocessor/hash-include-directive-c-cpp.md). Inizia invece ricercando il file nelle directory specificate dalla riga di comando del compilatore che segue /I. Se l'opzione /I non è presente o ha esito negativo, il preprocessore utilizza la variabile di ambiente INCLUDE per trovare tutti i file di inclusione tra parentesi angolari. La variabile di ambiente INCLUDE può contenere più percorsi, separati da punti e virgola (**;**). Se più directory vengono visualizzate come parte dell'opzione /I o nella variabile di ambiente INCLUDE, il preprocessore vi esegue la ricerca nell'ordine in cui vengono visualizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)