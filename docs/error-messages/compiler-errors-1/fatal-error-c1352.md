---
title: Errore irreversibile C1352 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C1352
dev_langs:
- C++
helpviewer_keywords:
- C1352
ms.assetid: d044e8b0-b6ef-4d57-8eb5-6254071be707
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2f2a5c42eaa5afc609f1b8ee1c09875db8bff9c3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1352"></a>Errore irreversibile C1352
Istruzione MSIL non valida o danneggiata nella funzione 'function' del modulo 'file'  
  
 È stato rilevato che il file netmodule passato al compilatore è danneggiato.  Chiedere allo sviluppatore che ha creato il file netmodule di indagare.  
  
 Il compilatore non controlla tutti i tipi di danneggiamento nei file netmodule,  ma verifica che tutti i percorsi di controllo di una funzione contengano un'istruzione return.  
  
 Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).