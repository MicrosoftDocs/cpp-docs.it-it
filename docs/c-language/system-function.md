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
ms.openlocfilehash: edb78056e5152485677a14a934c5dcbbc464d862
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46098430"
---
# <a name="system-function"></a>Funzione system

**ANSI 4.10.4.5** Contenuto e modalità di esecuzione della stringa da parte della funzione **system**

La funzione **system** esegue un comando interno del sistema operativo oppure un file con estensione exe, com (cmd in Windows NT) o bat dall'interno di un programma C anziché dalla riga di comando.

La funzione system cerca l'interprete dei comandi, in genere CMD.EXE nel sistema operativo Windows NT o COMMAND.COM in Windows. La funzione system passa quindi la stringa di argomenti all'interprete dei comandi.

Per altre informazioni, vedere [system, _wsystem](../c-runtime-library/reference/system-wsystem.md).

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)