---
title: Errore di compilazione progetto PRJ0050
ms.date: 11/04/2016
f1_keywords:
- PRJ0050
helpviewer_keywords:
- PRJ0050
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
ms.openlocfilehash: 56e092b5f7c33ad9543951621b2a9d8f6992331f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80191990"
---
# <a name="project-build-error-prj0050"></a>Errore di compilazione progetto PRJ0050

Impossibile registrare l'output. Assicurarsi di disporre delle autorizzazioni appropriate per modificare il registro di sistema.

Il sistema C++ di compilazione visiva non è stato in grado di registrare l'output della compilazione (dll o exe). Per modificare il registro di sistema, è necessario effettuare l'accesso come amministratore.

Se si compila un file con estensione dll, è possibile provare a registrare il file con estensione dll manualmente con regsvr32. exe, in modo da visualizzare informazioni sul motivo per cui la compilazione non è riuscita.

Se non si compila un file con estensione dll, esaminare il log di compilazione per il comando che genera un errore.
