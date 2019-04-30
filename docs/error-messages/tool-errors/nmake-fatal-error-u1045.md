---
title: 'Errore irreversibile U1045 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1045
helpviewer_keywords:
- U1045
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
ms.openlocfilehash: 0937e83303fefdf1f2aaaa5eea6f43c27159fd57
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344395"
---
# <a name="nmake-fatal-error-u1045"></a>Errore irreversibile U1045 di NMAKE 

generazione non riuscita: messaggio

Un programma o un comando chiamato da NMAKE non è riuscito per il motivo specificato. Quando NMAKE chiama un altro programma, ad esempio il compilatore o il linker, la chiamata potrebbe non riuscire o può essere restituito un errore dal programma chiamato. Questo messaggio viene usato per segnalare l'errore.

Per risolvere questo problema, determinare innanzitutto la causa dell'errore. È possibile usare i comandi riportati dal NMAKE [/N](../../build/reference/nmake-options.md) opzione per verificare le impostazioni dell'ambiente e per ripetere le azioni eseguite da NMAKE nella riga di comando.