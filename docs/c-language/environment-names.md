---
title: Nomi degli ambienti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 9af409a5-e724-465a-9a21-88d3586c2e92
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a1eea91a6955705c062a9c8509cbdeb8dc4598d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32384880"
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