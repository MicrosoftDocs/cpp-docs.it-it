---
title: Avviso degli strumenti del linker LNK4070
ms.date: 11/04/2016
f1_keywords:
- LNK4070
helpviewer_keywords:
- LNK4070
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
ms.openlocfilehash: e7139b21f053ea8633356c7194cd719a6a4aef35
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410265"
---
# <a name="linker-tools-warning-lnk4070"></a>Avviso degli strumenti del linker LNK4070

Direttiva /out: in. EXP differisce dal nome file di output 'filename'; direttiva ignorata

Il `filename` specificato nella [NAME](../../build/reference/name-c-cpp.md) o [libreria](../../build/reference/library.md) istruzione quando è stato creato il file EXP differisce dall'output `filename` che è stato impostato per impostazione predefinita o specificato con il [/Out](../../build/reference/out-output-file-name.md) opzione.

Verrà visualizzato questo avviso se si modifica il nome di un file di output nell'ambiente di sviluppo e in cui non è stato aggiornato il file del progetto con estensione def. Aggiornare manualmente il file con estensione def per risolvere il problema.

Un programma client che usa la DLL risulta potrebbe verificarsi problemi.