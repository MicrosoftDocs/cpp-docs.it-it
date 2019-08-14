---
title: Errore irreversibile U1045 di NMAKE
ms.date: 08/11/2019
f1_keywords:
- U1045
helpviewer_keywords:
- U1045
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
ms.openlocfilehash: bdc28bcf02aea791a346a0a74915707fef551b8b
ms.sourcegitcommit: db1ed91fa7451ade91c3fb76bc7a2b857f8a5eef
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2019
ms.locfileid: "68980536"
---
# <a name="nmake-fatal-error-u1045"></a>Errore irreversibile U1045 di NMAKE

> generazione non riuscita: *messaggio*

Un programma o un comando chiamato da NMAKE non è riuscito per il motivo del *messaggio*. Quando NMAKE chiama un altro programma, ad esempio il compilatore o il linker, la chiamata potrebbe non riuscire. In alternativa, il programma chiamato può restituire un errore. Questo messaggio viene usato per segnalare l'errore.

Per risolvere questo problema, determinare innanzitutto la causa dell'errore. È possibile usare i comandi restituiti dall'opzione NMAKE [/n](../../build/reference/running-nmake.md#nmake-options) per verificare le impostazioni dell'ambiente e per ripetere le azioni eseguite da NMAKE nella riga di comando.
