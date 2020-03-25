---
title: Errore di compilazione progetto PRJ0009
ms.date: 11/04/2016
f1_keywords:
- PRJ0009
helpviewer_keywords:
- PRJ0009
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
ms.openlocfilehash: d02325504b04a13cd15dee0bd70891bf5a63b62e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80192963"
---
# <a name="project-build-error-prj0009"></a>Errore di compilazione progetto PRJ0009

Non è stato possibile aprire il log di compilazione per la scrittura.

**Verificare che il file non sia aperto da un altro processo e che non sia protetto da scrittura.**

Dopo aver impostato la proprietà **registrazione compilazione** su **Sì** ed eseguendo una compilazione o una ricompilazione, l'oggetto visivo C++ non è stato in grado di aprire il log di compilazione in modalità esclusiva.

Controllare l'impostazione **registrazione compilazione** aprendo la finestra di dialogo **Opzioni** (dal menu **strumenti** , fare clic su comando **Opzioni** ), quindi selezionare **compilazione VC + +** nella cartella **progetti** . Il file di compilazione è denominato BuildLog. htm e viene scritto nella directory intermedia $ (IntDir).

Possibili cause dell'errore:

- Si eseguono due processi di Visual C++ e si tenta di compilare la stessa configurazione dello stesso progetto contemporaneamente.

- Il file di log di compilazione viene aperto in un processo che blocca il file.

- L'utente non dispone delle autorizzazioni necessarie per creare un file.

- L'utente corrente non dispone dell'accesso in scrittura al file BuildLog. htm.
