---
title: Progetto PRJ0032 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0032
dev_langs:
- C++
helpviewer_keywords:
- PRJ0032
ms.assetid: bc6acbea-4041-4237-8b5a-f0434705d89f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d6be9a343ae9d9ce1e3d862cc0a397f1d61ccdea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33318663"
---
# <a name="project-build-error-prj0032"></a>Errore di compilazione progetto PRJ0032
La proprietà 'Output' per il passaggio di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "espansione".  
  
 Un'istruzione di compilazione personalizzata a un progetto ha output errato probabilmente a causa di un problema di valutazione della macro. Questo errore potrebbe indicare anche che il percorso non è corretto, che contengono caratteri o combinazioni di caratteri che non sono validi in un percorso di file.  
  
 Per correggere l'errore, risolvere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto della directory del progetto.