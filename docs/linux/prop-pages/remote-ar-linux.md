---
description: "Altre informazioni su: proprietà dell'archivio remoto (C++ Linux)"
title: Proprietà di un archivio remoto (C++ Linux)
ms.date: 06/07/2019
ms.assetid: 5ee1e44c-8337-4c3a-b2f3-35e4be954f9f
f1_keywords: []
ms.openlocfilehash: 39449e900878739cb61e5df536ee5e06a307364e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169684"
---
# <a name="remote-archive-properties-c-linux"></a>Proprietà di un archivio remoto (C++ Linux)

::: moniker range="msvc-140"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=msvc-150"

| Proprietà | Descrizione |
|--|--|
| Crea un indice archivio | Crea un indice archivio (come per ranlib). Questa opzione consente di velocizzare il collegamento e riduce la dipendenza all'interno della libreria. |
| Crea archivio leggero | Crea un archivio leggero.  Un archivio leggero contiene i percorsi relativi degli oggetti invece di incorporare gli oggetti stessi.  Per passare da quello leggero a quello normale, è necessario eliminare la libreria esistente. |
| Nessun avviso durante la creazione | Non visualizza avvisi durante la creazione della libreria. |
| Tronca timestamp | Usa lo zero per timestamp e UID/GID. |
| Non visualizzare messaggio di avvio | Non visualizza il numero di versione. |
| Dettagliato | Dettagliato |
| Opzioni aggiuntive | Opzioni aggiuntive. |
| File di output | L'opzione /OUT sostituisce il nome e il percorso predefiniti del programma creato dalla libreria. |
| Archiver | Consente di specificare il programma da richiamare durante il collegamento di oggetti statici oppure il percorso dell'archiver nel sistema remoto. |
| Timeout archiver | Timeout dell'archiver remoto in millisecondi. |
| Copia output | Consente di specificare se copiare il file di output di compilazione dal sistema remoto al computer locale. |

::: moniker-end
