---
title: Progetto PRJ0034 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0034
dev_langs:
- C++
helpviewer_keywords:
- PRJ0034
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e68097d234519cdea75875d355ef798672ad4b22
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0034"></a>Errore di compilazione progetto PRJ0034
La proprietà "Dipendenze aggiuntive" per l'oggetto personalizzato a livello di progetto di compilazione contiene "macro" che restituisce "espansione".  
  
 Un'istruzione di compilazione personalizzata a un progetto è presente un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione della macro. Questo errore potrebbe indicare anche che il percorso non è corretto, che contengono caratteri o combinazioni di caratteri che non sono validi in un percorso di file.  
  
 Per correggere l'errore, risolvere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto della directory del progetto.