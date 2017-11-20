---
title: Errore irreversibile C1352 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C1352
dev_langs: C++
helpviewer_keywords: C1352
ms.assetid: d044e8b0-b6ef-4d57-8eb5-6254071be707
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 71f2bf8ef42896447d48c9cb3581006c2e3d7620
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fatal-error-c1352"></a>Errore irreversibile C1352
Istruzione MSIL non valida o danneggiata nella funzione 'function' del modulo 'file'  
  
 È stato rilevato che il file netmodule passato al compilatore è danneggiato.  Chiedere allo sviluppatore che ha creato il file netmodule di indagare.  
  
 Il compilatore non controlla tutti i tipi di danneggiamento nei file netmodule,  ma verifica che tutti i percorsi di controllo di una funzione contengano un'istruzione return.  
  
 Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).