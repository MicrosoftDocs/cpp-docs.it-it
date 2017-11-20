---
title: Inclusione di nomi file tra virgolette | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 17c40e74a31341fc3a725c5e5b3823058e403cff
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="including-quoted-filenames"></a>Inclusione di nomi file tra virgolette
**ANSI 3.8.2** Supporto di nomi tra virgolette per i file di origine che è possibile includere  
  
 Se si specifica un percorso completo e non ambiguo per il file di inclusione tra due set di virgolette doppie (" "), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.  
  
 Per i file di inclusione specificati come [#include](../preprocessor/hash-include-directive-c-cpp.md) "path-spec", la ricerca nelle directory inizia con le directory del file padre e quindi procede nelle directory dei file padre del padre. Pertanto, la ricerca inizia in base alla directory che contiene il file di origine attualmente in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse stato racchiuso tra parentesi angolari.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)