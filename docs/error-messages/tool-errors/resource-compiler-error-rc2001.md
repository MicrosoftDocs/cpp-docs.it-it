---
title: Errore del compilatore di risorse RC2001
ms.date: 11/04/2016
f1_keywords:
- RC2001
helpviewer_keywords:
- RC2001
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
ms.openlocfilehash: f4755e04a744d94636b4b37aaf727e0d733008ef
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62346691"
---
# <a name="resource-compiler-error-rc2001"></a>Errore del compilatore di risorse RC2001

nuova riga nella costante

Costante stringa continua sulla seconda riga senza la presenza di una barra rovesciata (**\\**) o la chiusura e apertura racchiusi tra virgolette doppie (**"**).

Per interrompere una costante stringa che viene eseguita su due righe nel file di origine, eseguire una delle operazioni seguenti:

- La prima riga con il carattere di continuazione di riga, una barra rovesciata finale.

- Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa nella riga successiva con un'altra virgoletta.

Non è sufficiente terminare la prima riga con \n, la sequenza di escape per l'incorporamento di un carattere di nuova riga nella costante di stringa.