---
title: Progetto PRJ0034 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0034
dev_langs:
- C++
helpviewer_keywords:
- PRJ0034
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a65ca2c53ba2801f861471c66f7e1f2ec8766345
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33319078"
---
# <a name="project-build-error-prj0034"></a>Errore di compilazione progetto PRJ0034
La proprietà "Dipendenze aggiuntive" per l'oggetto personalizzato a livello di progetto di compilazione contiene "macro" che restituisce "espansione".  
  
 Un'istruzione di compilazione personalizzata a un progetto è presente un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione della macro. Questo errore potrebbe indicare anche che il percorso non è corretto, che contengono caratteri o combinazioni di caratteri che non sono validi in un percorso di file.  
  
 Per correggere l'errore, risolvere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto della directory del progetto.