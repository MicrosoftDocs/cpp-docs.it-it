---
title: Errore irreversibile U1059 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1059
dev_langs:
- C++
helpviewer_keywords:
- U1059
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6eb038befdb7c587c6fe2a734003abba585c3e2a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33320703"
---
# <a name="nmake-fatal-error-u1059"></a>Errore irreversibile U1059 di NMAKE 
Errore di sintassi: '}' mancante nel dipendente  
  
 Un percorso di ricerca di un dipendente è stato specificato correttamente. È presente uno spazio nel percorso o la parentesi graffa chiusa (**}**) è stato omesso.  
  
 La sintassi per una specifica della directory di un dipendente è  
  
 **{**   
 ***directory* } dipendenti**  
  
 dove `directories` specifica uno o più percorsi, ciascuno separati da un punto e virgola (**;**). Non sono consentiti spazi.  
  
 Se o parte di un percorso di ricerca è sostituito da una macro, assicurarsi che non contenga spazi presenti nell'espansione della macro.