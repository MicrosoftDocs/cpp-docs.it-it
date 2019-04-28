---
title: Errore di compilazione progetto PRJ0050
ms.date: 11/04/2016
f1_keywords:
- PRJ0050
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
ms.openlocfilehash: ec2490bad70d2b2eb72cbb48771900f09f8c2f67
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62226491"
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050

Impossibile registrare l'output. Assicurarsi di che avere le autorizzazioni appropriate per modificare il Registro di sistema.

Il sistema di compilazione Visual C++ non è in grado di registrare l'output della compilazione (dll o .exe). È necessario essere connessi come amministratore per modificare il Registro di sistema.

Se si compila una DLL, è possibile provare a registrare la DLL manualmente utilizzando regsvr32.exe, questo deve visualizzare informazioni sui motivi per cui la compilazione non riuscita.

Se non si compila una DLL, esaminare il log di compilazione per il comando che ha provocato un errore.