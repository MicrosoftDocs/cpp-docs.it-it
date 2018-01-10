---
title: Nomi degli ambienti | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 9af409a5-e724-465a-9a21-88d3586c2e92
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: efae64f64ef6b5ed92dffafb9f83a0e32ab38513
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="environment-names"></a>Nomi degli ambienti
**ANSI 4.10.4.4** Set di nomi dell'ambiente e metodo per la modifica dell'elenco degli ambienti usati dalla funzione [getenv](../c-runtime-library/reference/getenv-wgetenv.md)  
  
 Il set di nomi dell'ambiente è illimitato.  
  
 Per modificare le variabili di ambiente dall'interno di programmi C, chiamare la funzione [_putenv](../c-runtime-library/reference/putenv-wputenv.md). Per modificare le variabili di ambiente dalla riga di comando di Windows, utilizzare il comando SET (ad esempio, SET LIB = D:\ LIBS).  
  
 Le variabili di ambiente impostate dall'interno di un programma C esistono solo finché la loro copia host della shell dei comandi del sistema operativo è in esecuzione (CMD.EXE o COMMAND.COM). Ad esempio, la riga di comando  
  
```  
system( SET LIB = D:\LIBS );  
```  
  
 esegue una copia della shell dei comandi (CMD.EXE), imposta la variabile di ambiente LIB e torna al programma C, uscendo dalla copia secondaria di CMD.EXE. Uscendo da tale copia di CMD.EXE, rimuove la variabile di ambiente temporanea LIB.  
  
 Analogamente, le modifiche apportate dalla funzione `_putenv` sono effettive solo fino al termine del programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)   
 [_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)   
 [getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)