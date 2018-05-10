---
title: Funzione system | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- system function
ms.assetid: 0786ccdc-20cd-4d96-b3d8-3230507c3066
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 51c9e9e348f1cd1fbae9612c2d2ad1988af3b009
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="system-function"></a>Funzione system
**ANSI 4.10.4.5** Contenuto e modalità di esecuzione della stringa da parte della funzione **system**  
  
 La funzione **system** esegue un comando interno del sistema operativo oppure un file con estensione exe, com (cmd in Windows NT) o bat dall'interno di un programma C anziché dalla riga di comando.  
  
 La funzione system cerca l'interprete dei comandi, in genere CMD.EXE nel sistema operativo Windows NT o COMMAND.COM in Windows. La funzione system passa quindi la stringa di argomenti all'interprete dei comandi.  
  
 Per altre informazioni, vedere [system, _wsystem](../c-runtime-library/reference/system-wsystem.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)