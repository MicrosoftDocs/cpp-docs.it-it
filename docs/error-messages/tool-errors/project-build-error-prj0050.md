---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0050'
title: Errore di compilazione progetto PRJ0050
ms.date: 11/04/2016
f1_keywords:
- PRJ0050
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
ms.openlocfilehash: 07a4df24f48a61e29214431840649566716bbac3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240806"
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050

Impossibile registrare l'output. Assicurarsi di disporre delle autorizzazioni appropriate per modificare il registro di sistema.

Il sistema di compilazione Visual C++ non è stato in grado di registrare l'output della compilazione (dll o exe). Per modificare il registro di sistema, è necessario effettuare l'accesso come amministratore.

Se si sta compilando un file con estensione dll, è possibile provare a registrare il file con estensione dll manualmente usando regsvr32.exe, in modo da visualizzare informazioni sul motivo per cui la compilazione non è riuscita.

Se non si compila un file con estensione dll, esaminare il log di compilazione per il comando che genera un errore.
