---
description: 'Altre informazioni su: errore del compilatore di risorse risorse RC2001'
title: Errore del compilatore di risorse RC2001
ms.date: 11/04/2016
f1_keywords:
- RC2001
helpviewer_keywords:
- RC2001
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
ms.openlocfilehash: 101ebb260bcfd24fb74368ca66e1e9d318418367
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206344"
---
# <a name="resource-compiler-error-rc2001"></a>Errore del compilatore di risorse RC2001

nuova riga nella costante

Una costante di stringa è stata continua su una seconda riga senza una barra rovesciata ( **\\** ) o con virgolette doppie (**"**).

Per suddividere una costante di stringa che si trova su due righe nel file di origine, eseguire una delle operazioni seguenti:

- Termina la prima riga con il carattere di continuazione di riga, una barra rovesciata.

- Chiudere la stringa nella prima riga con le virgolette doppie e aprire la stringa nella riga successiva con un'altra virgoletta.

Non è sufficiente terminare la prima riga con \n, la sequenza di escape per incorporare un carattere di nuova riga in una costante di stringa.
