---
title: Errore del compilatore di risorse RC2001
ms.date: 11/04/2016
f1_keywords:
- RC2001
helpviewer_keywords:
- RC2001
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
ms.openlocfilehash: 35042687b798b53857becdedba57861bd4f41a05
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80191723"
---
# <a name="resource-compiler-error-rc2001"></a>Errore del compilatore di risorse RC2001

nuova riga nella costante

Una costante di stringa è stata continua in una seconda riga senza una barra rovesciata ( **\\** ) o con virgolette doppie ( **"** ).

Per suddividere una costante di stringa che si trova su due righe nel file di origine, eseguire una delle operazioni seguenti:

- Termina la prima riga con il carattere di continuazione di riga, una barra rovesciata.

- Chiudere la stringa nella prima riga con le virgolette doppie e aprire la stringa nella riga successiva con un'altra virgoletta.

Non è sufficiente terminare la prima riga con \n, la sequenza di escape per incorporare un carattere di nuova riga in una costante di stringa.
