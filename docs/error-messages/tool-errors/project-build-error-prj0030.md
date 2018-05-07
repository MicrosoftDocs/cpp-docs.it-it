---
title: Progetto PRJ0030 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0030
dev_langs:
- C++
helpviewer_keywords:
- PRJ0030
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1bf1c9137f8c4ed0d80955eef38b07ea86204a5c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0030"></a>Errore di compilazione progetto PRJ0030
Errore di espansione di macro. Valutazione della ricorsione superata i 32 livelli per $(macro).  
  
 Questo errore è causato dalla ricorsione nelle macro. Ad esempio, se si imposta la **Directory intermedia** proprietà (vedere [pagina delle proprietà Generale (progetto)](../../ide/general-property-page-project.md)) su $(IntDir), si otterrà una ricorsione.  
  
 Per correggere l'errore, non definire macro o alle proprietà in termini vengono utilizzati per definire macro.