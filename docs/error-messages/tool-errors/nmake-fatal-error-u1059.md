---
title: Errore irreversibile U1059 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- U1059
dev_langs:
- C++
helpviewer_keywords:
- U1059
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fb9ba98b0f82c158e4e11859e85af72efdbbc244
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1059"></a>Errore irreversibile U1059 di NMAKE 
Errore di sintassi: '}' mancante nel dipendente  
  
 Un percorso di ricerca di un dipendente è stato specificato correttamente. È presente uno spazio nel percorso o la parentesi graffa chiusa (**}**) è stato omesso.  
  
 La sintassi per una specifica della directory di un dipendente è  
  
 **{**   
 ***directory* } dipendenti**  
  
 dove `directories` specifica uno o più percorsi, ciascuno separati da un punto e virgola (**;**). Non sono consentiti spazi.  
  
 Se o parte di un percorso di ricerca è sostituito da una macro, assicurarsi che non contenga spazi presenti nell'espansione della macro.