---
title: Errore di compilazione progetto PRJ0050
ms.date: 11/04/2016
f1_keywords:
- PRJ0050
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
ms.openlocfilehash: ec2490bad70d2b2eb72cbb48771900f09f8c2f67
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50593427"
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050

Impossibile registrare l'output. Assicurarsi di che avere le autorizzazioni appropriate per modificare il Registro di sistema.

Il sistema di compilazione Visual C++ non è in grado di registrare l'output della compilazione (dll o .exe). È necessario essere connessi come amministratore per modificare il Registro di sistema.

Se si compila una DLL, è possibile provare a registrare la DLL manualmente utilizzando regsvr32.exe, questo deve visualizzare informazioni sui motivi per cui la compilazione non riuscita.

Se non si compila una DLL, esaminare il log di compilazione per il comando che ha provocato un errore.