---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0009'
title: Errore di compilazione progetto PRJ0009
ms.date: 11/04/2016
f1_keywords:
- PRJ0009
helpviewer_keywords:
- PRJ0009
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
ms.openlocfilehash: 28a7a9ce1a4fa5f1b5b95ba208739b7172f0ac6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343886"
---
# <a name="project-build-error-prj0009"></a>Errore di compilazione progetto PRJ0009

Non è stato possibile aprire il log di compilazione per la scrittura.

**Verificare che il file non sia aperto da un altro processo e che non sia protetto da scrittura.**

Dopo aver impostato la proprietà **registrazione compilazione** su **Sì** ed eseguendo una compilazione o una ricompilazione, Visual C++ non è stato in grado di aprire il log di compilazione in modalità esclusiva.

Controllare l'impostazione **registrazione compilazione** aprendo la finestra di dialogo **Opzioni** (dal menu **strumenti** , fare clic su comando **Opzioni** ), quindi selezionare **compilazione VC + +** nella cartella **progetti** . Il file di compilazione viene chiamato BuildLog.htm e viene scritto nella directory intermedia $ (IntDir).

Possibili cause dell'errore:

- Si eseguono due processi di Visual C++ e si tenta di compilare la stessa configurazione dello stesso progetto contemporaneamente.

- Il file di log di compilazione viene aperto in un processo che blocca il file.

- L'utente non dispone delle autorizzazioni necessarie per creare un file.

- L'utente corrente non dispone dell'accesso in scrittura al file BuildLog.htm.
