---
title: Valutazione di token | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: tokens, evaluating
ms.assetid: 28870b62-dff6-4644-8b75-d58f340b48d2
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: be73ad565b3e240ceb21a9c7e3d185f327524d19
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="evaluation-of-tokens"></a>Valutazione di token
Quando il compilatore interpreta i token, include il maggior numero di caratteri possibile in un unico token prima di passare al token successivo. A causa di tale comportamento, il compilatore non è in grado di interpretare i token nel modo corretto se non sono separati da spazi. Si consideri la seguente espressione:  
  
```  
i+++j  
```  
  
 In questo esempio, il compilatore considera innanzitutto l'operatore più lungo possibile (`++`) a partire dai tre segni più, quindi elabora il segno più rimanente come un operatore di addizione (`+`). L'espressione viene quindi interpretata come `(i++) + (j)` e non come `(i) + (++j)`. In questo e in casi analoghi, utilizzare spazi e parentesi per evitare ambiguità e assicurare la valutazione corretta dell'espressione.  
  
 **Sezione specifica Microsoft**  
  
 Il compilatore C considera il carattere di CTRL+Z come indicatore di fine file. Il testo dopo CTRL+Z viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Token C](../c-language/c-tokens.md)