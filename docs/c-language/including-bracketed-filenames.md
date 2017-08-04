---
title: Inclusione di nomi di file tra parentesi | Microsoft Docs
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
ms.assetid: 6a4e5411-c35e-48b8-90ef-b37ac324ed94
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 5390e52394005b272e928be396e1e23f5edc72d5
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="including-bracketed-filenames"></a>Inclusione di nomi file tra parentesi
**ANSI 3.8.2** Metodo per trovare i file di origine che è possibile includere  
  
 Per le specifiche di file racchiuse tra parentesi angolari, il preprocessore non esegue la ricerca nelle directory dei file padre. Un file "padre" è il file che contiene la direttiva [#include](../preprocessor/hash-include-directive-c-cpp.md). Inizia invece ricercando il file nelle directory specificate dalla riga di comando del compilatore che segue /I. Se l'opzione /I non è presente o ha esito negativo, il preprocessore utilizza la variabile di ambiente INCLUDE per trovare tutti i file di inclusione tra parentesi angolari. La variabile di ambiente INCLUDE può contenere più percorsi, separati da punti e virgola (**;**). Se più directory vengono visualizzate come parte dell'opzione /I o nella variabile di ambiente INCLUDE, il preprocessore vi esegue la ricerca nell'ordine in cui vengono visualizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)
