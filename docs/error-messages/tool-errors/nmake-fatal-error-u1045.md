---
title: Errore irreversibile U1045 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: U1045
dev_langs: C++
helpviewer_keywords: U1045
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cdd9fb3d0bcee20e1952cea6444f586a9117365a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1045"></a>Errore irreversibile U1045 di NMAKE 
generazione non riuscita: messaggio  
  
 Un programma o un comando chiamato da NMAKE non è riuscito per il motivo specificato. Quando NMAKE chiama un altro programma, ad esempio il compilatore o il linker, la chiamata potrebbe non riuscire o può essere restituito un errore dal programma chiamato. Questo messaggio viene usato per segnalare l'errore.  
  
 Per risolvere questo problema, determinare innanzitutto la causa dell'errore. È possibile utilizzare i comandi riportati dal NMAKE [/N](../../build/nmake-options.md) opzione per verificare le impostazioni di ambiente e per ripetere le azioni eseguite da NMAKE nella riga di comando.