---
title: Proprietà di un archivio remoto (C++ Linux)
ms.date: 06/07/2019
ms.assetid: 5ee1e44c-8337-4c3a-b2f3-35e4be954f9f
f1_keywords: []
ms.openlocfilehash: 00de4ac56a9ce390672019c7fe5a838367823100
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821273"
---
# <a name="remote-archive-properties-c-linux"></a>Proprietà di un archivio remoto (C++ Linux)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Proprietà | Description
--- | ---
Crea un indice archivio | Crea un indice archivio (come per ranlib). Questa opzione consente di velocizzare il collegamento e riduce la dipendenza all'interno della libreria.
Crea archivio leggero | Crea un archivio leggero.  Un archivio leggero contiene i percorsi relativi degli oggetti invece di incorporare gli oggetti stessi.  Per passare da quello leggero a quello normale, è necessario eliminare la libreria esistente.
Nessun avviso durante la creazione | Non visualizza avvisi durante la creazione della libreria.
Tronca timestamp | Usa lo zero per timestamp e UID/GID.
Non visualizzare messaggio di avvio | Non visualizza il numero di versione.
Dettagliato | Dettagliato
Opzioni aggiuntive | Opzioni aggiuntive.
File di output | L'opzione /OUT sostituisce il nome e il percorso predefiniti del programma creato dalla libreria.
Archiver | Consente di specificare il programma da richiamare durante il collegamento di oggetti statici oppure il percorso dell'archiver nel sistema remoto.
Timeout archiver | Timeout dell'archiver remoto in millisecondi.
Copia output | Consente di specificare se copiare il file di output di compilazione dal sistema remoto al computer locale.

::: moniker-end
