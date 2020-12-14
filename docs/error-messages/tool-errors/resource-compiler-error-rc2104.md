---
description: 'Altre informazioni su: errore del compilatore di risorse risorse RC2104'
title: Errore del compilatore di risorse RC2104
ms.date: 11/04/2016
f1_keywords:
- RC2104
helpviewer_keywords:
- RC2104
ms.assetid: 792a3bd8-cb4c-4817-b288-4ce37082b582
ms.openlocfilehash: 74f50088d15fcc86ebfc7000d8ee618c94464c63
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259981"
---
# <a name="resource-compiler-error-rc2104"></a>Errore del compilatore di risorse RC2104

Parola chiave o nome di chiave non definito: chiave

La parola chiave o il nome di chiave specificato non è stato definito.

Questo errore è spesso causato da un errore di digitazione nella definizione di risorse o nel file di intestazione incluso. Può anche essere causato da un file di intestazione mancante.

Per risolvere il problema, trovare il file di intestazione che deve contenere la parola chiave definita o il nome della chiave e verificare che sia incluso nel file di risorse e che la chiave o il nome della parola chiave sia stato digitato correttamente. Se il progetto è stato creato con un'intestazione precompilata che viene successivamente rimossa, assicurarsi che il file di risorse includa ancora eventuali intestazioni richieste.

Per verificare le parole chiave e i nomi delle chiavi definiti nel file di risorse, in Visual Studio aprire la finestra **visualizzazione risorse** : sulla barra dei menu scegliere **Visualizza**, **visualizzazione risorse**, quindi aprire il menu di scelta rapida per il file RC e scegliere **simboli risorsa** per visualizzare l'elenco dei simboli definiti. Per modificare le intestazioni incluse, aprire il menu di scelta rapida per il file RC e scegliere **Inclusioni risorsa**.

Se viene visualizzato il messaggio seguente:

```
undefined keyword or key name: MFT_STRING
```

Aprire \MCL\MFC\Include\AfxRes.h e aggiungere la direttiva di inclusione seguente:

```
#include <winresrc.h>
```
