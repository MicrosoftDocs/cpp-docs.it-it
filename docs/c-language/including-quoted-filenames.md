---
title: Inclusione di nomi file tra virgolette | Microsoft Docs
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
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 70b5e68fc8a3c0c23b291220e4faf387e9aa11c2
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="including-quoted-filenames"></a>Inclusione di nomi file tra virgolette
**ANSI 3.8.2** Supporto di nomi tra virgolette per i file di origine che è possibile includere  
  
 Se si specifica un percorso completo e non ambiguo per il file di inclusione tra due set di virgolette doppie (" "), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.  
  
 Per i file di inclusione specificati come [#include](../preprocessor/hash-include-directive-c-cpp.md) "path-spec", la ricerca nelle directory inizia con le directory del file padre e quindi procede nelle directory dei file padre del padre. Pertanto, la ricerca inizia in base alla directory che contiene il file di origine attualmente in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse stato racchiuso tra parentesi angolari.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)
