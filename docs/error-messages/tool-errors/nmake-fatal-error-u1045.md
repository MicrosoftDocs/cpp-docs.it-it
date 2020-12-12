---
description: 'Altre informazioni su: errore irreversibile U1045 di NMAKE'
title: 'Errore irreversibile U1045 di NMAKE '
ms.date: 08/11/2019
f1_keywords:
- U1045
helpviewer_keywords:
- U1045
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
ms.openlocfilehash: 722525d917b7511dfe2294adf2e796efd3078913
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322895"
---
# <a name="nmake-fatal-error-u1045"></a>Errore irreversibile U1045 di NMAKE 

> generazione non riuscita: *messaggio*

Un programma o un comando chiamato da NMAKE non è riuscito per il motivo del *messaggio*. Quando NMAKE chiama un altro programma, ad esempio il compilatore o il linker, la chiamata potrebbe non riuscire. In alternativa, il programma chiamato può restituire un errore. Questo messaggio viene usato per segnalare l'errore.

Per risolvere questo problema, determinare innanzitutto la causa dell'errore. È possibile usare i comandi restituiti dall'opzione NMAKE [/n](../../build/reference/running-nmake.md#nmake-options) per verificare le impostazioni dell'ambiente e per ripetere le azioni eseguite da NMAKE nella riga di comando.
