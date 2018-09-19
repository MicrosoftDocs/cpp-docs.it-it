---
title: Errore di compilazione PRJ0050 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0050
dev_langs:
- C++
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bb3949ea0db2f1667aecf1aeeefd922b192cbf41
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46100591"
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050

Impossibile registrare l'output. Assicurarsi di che avere le autorizzazioni appropriate per modificare il Registro di sistema.

Il sistema di compilazione Visual C++ non è in grado di registrare l'output della compilazione (dll o .exe). È necessario essere connessi come amministratore per modificare il Registro di sistema.

Se si compila una DLL, è possibile provare a registrare la DLL manualmente utilizzando regsvr32.exe, questo deve visualizzare informazioni sui motivi per cui la compilazione non riuscita.

Se non si compila una DLL, esaminare il log di compilazione per il comando che ha provocato un errore.