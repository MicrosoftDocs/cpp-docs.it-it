---
title: Progetto PRJ0032 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0032
dev_langs:
- C++
helpviewer_keywords:
- PRJ0032
ms.assetid: bc6acbea-4041-4237-8b5a-f0434705d89f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 92497027db3a2449914696f03fc86a144a48b62e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0032"></a>Errore di compilazione progetto PRJ0032
La proprietà 'Output' per il passaggio di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "espansione".  
  
 Un'istruzione di compilazione personalizzata a un progetto ha output errato probabilmente a causa di un problema di valutazione della macro. Questo errore potrebbe indicare anche che il percorso non è corretto, che contengono caratteri o combinazioni di caratteri che non sono validi in un percorso di file.  
  
 Per correggere l'errore, risolvere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto della directory del progetto.